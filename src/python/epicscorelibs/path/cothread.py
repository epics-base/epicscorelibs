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

if 'cothread.load_ca' in sys.modules or 'cothread.catools' in sys.modules:
    warnings.warn("epicscorelibs.path.cothread must be imported before cothread.catools to have effect")

# don't override if already set
if 'CATOOLS_LIBCA_PATH' not in os.environ:
    os.environ['CATOOLS_LIBCA_PATH'] = get_lib('ca')
