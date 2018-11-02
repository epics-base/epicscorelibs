"""I automatically configure for use with pyepics

eg. attempt to use libca from this packages if available.

    try:
        import epicscorelibs.path.pyepics
    except ImportError:
        pass
    import epics
    ...
"""

import os, sys, warnings

from . import get_lib

if 'epics.ca' in sys.modules:
    warnings.warn("epicscorelibs.path.pyepics must be imported before epics.ca to have effect")

# don't override if already set
if 'PYEPICS_LIBCA' not in os.environ:
    os.environ['PYEPICS_LIBCA'] = get_lib('ca')
