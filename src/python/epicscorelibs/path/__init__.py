
import os

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
    os.environ['PATH'] = '%s%s%s%s'%(os.environ.get('PATH', ''), os.pathsep, lib_path, os.pathsep)

def get_lib(name):
    """Fetch library path by name.

    :param str name: A library name.  eg. 'Com' or 'ca'.
    :returns: The full absolute path to this library.
    """
    return os.path.join(lib_path, '%s%s%s'%(_prefix, name, _suffix))

libraries = ('Com', 'ca', 'pvData', 'pvAccess', 'pvAccessCA')
