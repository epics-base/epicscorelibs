
import os

from setuptools_dso.runtime import dylink_prepare_dso, find_dso

__all__ = (
    'include_path',
    'lib_path',
    'get_lib',
)

base_path = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
include_path = os.path.join(base_path, 'include')
lib_path = os.path.join(base_path, 'lib')

dylink_prepare_dso('..lib.ca')

def get_lib(name):
    """Fetch library path by name.

    :param str name: A library name.  eg. 'Com' or 'ca'.
    :returns: The full absolute path to this library.
    """
    return find_dso('..lib.'+name)

libraries = ('Com', 'ca', 'pvData', 'pvAccess', 'pvAccessCA', 'dbCore', 'dbRecStd', 'pvAccessIOC', 'qsrv')
