
import os
from glob import glob

from ..config import get_config_var

__all__ = (
    'include_path',
    'lib_path',
    'get_lib',
)

base_path = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))


# parts of library file names
OS_CLASS = get_config_var("OS_CLASS")
if OS_CLASS=='WIN32':
    _prefix, _suffix = '', '.dll'
elif OS_CLASS=='Darwin':
    _prefix, _suffix = 'lib', '.dylib'
else:
    _prefix, _suffix = 'lib', '.so'

include_path = os.path.join(base_path, 'include')
lib_path = os.path.join(base_path, 'lib')

# hackyness to allow deps between libraries to be found
# on targets where this can't be encoded into the library binaries.
if OS_CLASS=='WIN32':
    # windows has nothing like -rpath let alone the $ORIGIN trick
    # so we must add our /lib directory, which contains the .dlls, to %PATH%
    os.environ['PATH'] = '%s%s%s%s'%(lib_path, os.pathsep, os.environ.get('PATH', ''), os.pathsep)
    try:
        # Fix for Python 3.8 under Windows. See: https://docs.python.org/3.8/whatsnew/3.8.html#bpo-36085-whatsnew
        os.add_dll_directory(lib_path)
    except Exception:
        pass

def get_lib(name):
    """Fetch library path by name.

    :param str name: A library name.  eg. 'Com' or 'ca'.
    :returns: The full absolute path to this library.
    """
    # For ELF and MACH-O targets we are including two full copies
    # of all libraries (can't store symlinks in zip files).
    # To help maintain the sanity of those using ctypes, we always return
    # the fully qualified name, which will be the one loaded implicitly
    # by other libraries.

    base = os.path.join(lib_path, '%s%s%s'%(_prefix, name, _suffix))
    if OS_CLASS=='WIN32':
        # eg. /path/to/Com.dll
        return os.path.join(lib_path, '%s%s%s'%(_prefix, name, _suffix))
    elif OS_CLASS=='Darwin':
        # eg. /path/to/libCom.X.dylib
        return glob(os.path.join(lib_path, '%s%s.*%s'%(_prefix, name, _suffix)))[0]
    else:
        # eg. /path/to/libCom.so.X
        return glob(os.path.join(lib_path, '%s%s%s.*'%(_prefix, name, _suffix)))[0]


libraries = ('Com', 'ca', 'pvData', 'pvAccess', 'pvAccessCA', 'dbCore', 'dbRecStd')
