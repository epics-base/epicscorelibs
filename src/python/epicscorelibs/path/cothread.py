"""I automatically configure for use with cothread.catools

eg. attempt to use libca from this packages if available.

    try:
        import epicscorelibs.path.cothread
    except ImportError:
        pass
    from cothread.catools import caget
    ...
"""

import os, sys, warnings

from . import get_lib

def check_cothread_order():
    if "cothread" not in sys.modules:
        return
    cothread = sys.modules.get("cothread")

    # Slice to first two elements to avoid attempting to parse certain types
    # of auto-generated version numbers that are generated from setuptools_scm
    # inside of cothread. e.g. trying to install directly from Github yields a
    # version like "2.20.1.dev1+g82e2778.d20241105".
    ver = tuple(int(c) for c in cothread.__version__.split(".")[:2])

    # >= 2.16 will attempt to import this module
    if ver < (2, 16):
        warnings.warn("epicscorelibs.path.cothread must be imported before cothread.catools to have effect")


check_cothread_order()
del check_cothread_order

# don't override if already set
if 'CATOOLS_LIBCA_PATH' not in os.environ:
    os.environ['CATOOLS_LIBCA_PATH'] = get_lib('ca')
