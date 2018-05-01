"""Version information for the epicscorelibs package.

Version numbers are encoded as:

BASEVERSION.99.ABI.SRC

"""
from pkg_resources import get_distribution, parse_version

_me = get_distribution('epicscorelibs')

version = _me.version # as a string

version_info = parse_version(version)

def abi_requires():
    """Return a version requirement string which identifies
    a range of version which will be ABI compatible with this one.
    For use by modules with non-python dependencies on our libraries.

    eg. "epicscorelibs >=7.0.1.99.1.1a5, <7.0.1.99.2"
    """
    parts = version_info.base_version.split('.')
    assert parts[-3]=='99', version
    abi = int(parts[-2])

    return 'epicscorelibs >=%s, <%s.%d'%(version, '.'.join(parts[:-2]), abi+1)

