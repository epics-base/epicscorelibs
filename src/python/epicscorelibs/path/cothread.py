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

if "cothread" in sys.modules:
    # Ensure we don't `import cothread` ourselves as that can have side-effects
    cothread = sys.modules["cothread"]
    if hasattr(cothread, "_version"):
        # This attribute only exists in cothread 2.19+.
        # It is always safe to use alongside epicscorelibs
        pass
    else:
        # Some cothread versions only include major and minor, no build version
        version_components = cothread.__version__.split(".")
        major = int(version_components[0])
        minor = int(version_components[1])
        if major >= 2 and minor >=16:
            # Cothread 2.16 was the first to fallback to epicscorelibs' get_lib functionality
            pass
        else:
            warnings.warn("epicscorelibs.path.cothread must be imported before cothread.catools to have effect")

# don't override if already set
if 'CATOOLS_LIBCA_PATH' not in os.environ:
    os.environ['CATOOLS_LIBCA_PATH'] = get_lib('ca')
