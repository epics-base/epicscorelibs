import subprocess
import os
import sys
import ctypes
import tempfile
import random
import string

try:
    from queue import Queue
except ImportError:
    from Queue import Queue

from epicscorelibs.ca import cadef, dbr


class Channel:
    def __init__(self, name):
        self.name = name
        self.chid = ctypes.c_void_p()

    @property
    def _as_parameter_(self):
        # Setting this allows a channel object to autoconvert into the chid
        # when passed to ca_ functions.
        return self.chid.value


def test_running_ioc():
    if os.environ.get("PYTAG", "") == "win_amd64" \
            and sys.version_info[:2] == (3, 4):
        # This particular combination is broken. All the callbacks seem to
        # return junk. Not sure why
        return

    # Get something reasonably unique for the PV prefix
    pv = ''.join(random.choice(string.ascii_uppercase) for _ in range(12))
    dbfile = tempfile.NamedTemporaryFile(delete=False)
    dbfile.write(("""
record(stringin, "%s") {
    field("VAL", "blah")
}
""" % pv).encode())
    dbfile.close()
    proc = subprocess.Popen(
        [sys.executable, '-m', 'epicscorelibs.ioc', '-d', dbfile.name],
        stdin=subprocess.PIPE,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
    )

    def assert_startswith(expected):
        l = proc.stdout.readline().decode()
        assert l.startswith(expected), l

    try:
        # Wait for IOC to be up
        assert_startswith("Starting iocInit")
        assert_startswith("iocRun: All initialization complete")

        # Effectively do a caget with these parameters
        datatype = dbr.DBR_STRING
        format = dbr.FORMAT_RAW
        count = 0
        results = Queue()

        # Polling mode, different from what cothread/aioca does
        cadef.ca_context_create(0)

        # Create a channel to our record
        @cadef.connection_handler
        def on_connect(args):
            print("on_connect got op %s" % args.op)
            results.put(args.op)

        channel = Channel(pv)
        cadef.ca_create_channel(
            pv, on_connect, None, 0, ctypes.byref(channel.chid))
        # Check that it connected in 5s
        cadef.ca_pend_event(5.0)
        assert results.get(timeout=1.0) == cadef.CA_OP_CONN_UP
        dbrcode, dbr_to_value = dbr.type_to_dbr(channel, datatype, format)

        # Get the value
        @cadef.event_handler
        def event_handler(args):
            print("event_handler got dbr %s" % args.raw_dbr)
            results.put(dbr_to_value(args.raw_dbr, args.type, args.count))

        cadef.ca_array_get_callback(dbrcode, count, channel, event_handler, None)

        # Check that we get result in 1s
        cadef.ca_pend_event(1.0)
        assert results.get(timeout=1.0) == "blah"

    finally:
        proc.terminate()
