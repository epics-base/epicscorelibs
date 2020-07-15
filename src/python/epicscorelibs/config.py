"""Host configuration information using EPICS names and build flags.

Patterned after distutils.sysconfig
"""

from copy import deepcopy
import platform
import sysconfig
import distutils.sysconfig

__all__ = (
    'get_config_var',
    'get_config_vars',
)

def _makeconf():
    conf = {}

    # cf. Lib/platform.py in cpython source tree

    # map from python system name to epics OS_CLASS
    osname = conf['OS_CLASS'] = {
        'Linux': 'Linux',
        'Windows': 'WIN32',
        'Darwin': 'Darwin',
    }[platform.system()]

    # select epics CMPLR_CLASS
    CC = sysconfig.get_config_var('CC') or distutils.sysconfig.get_config_var('CC')
    if CC is None and osname=='WIN32':
        cmplrname = conf['CMPLR_CLASS'] = 'msvc'
    elif CC is None:
        raise RuntimeError("Unable to determine compiler")
    elif CC.find('gcc')!=-1:
        cmplrname = conf['CMPLR_CLASS'] = 'gcc'
    elif CC.find('clang')!=-1:
        cmplrname = conf['CMPLR_CLASS'] = 'clang'
    elif CC is None or CC.find('cl')!=-1:
        cmplrname = conf['CMPLR_CLASS'] = 'msvc'
    else:
        raise RuntimeError("Unable to identify compiler %s"%CC)

    machine = platform.machine().lower() # host CPU, may not reflect target bit width on windows
    bits = {
        '32bit':32,
        '64bit':64,
    }[platform.architecture()[0]]

    conf['POSIX'] = osname!='WIN32'

    # pick a host arch
    HA = None
    if osname=='Linux':
        if machine=='x86_64':
            HA = 'linux-x86_64'
        elif machine=='ppc':
            HA = 'linux-ppc'
        elif machine.startswith('arm') or machine=="aarch64":
            HA = 'linux-arm'
        elif machine.endswith('86'):
            HA = 'linux-x86'
        else:
            raise RuntimeError("Unsupported Linkage: " + machine)

    elif osname=='Darwin':
        if machine=='ppc':
            HA = 'darwin-ppc'
        else:
            HA = 'darwin-x86'

    elif osname=='WIN32':
        if bits==32 and cmplrname=='gcc':
            HA = 'win32-x86-mingw'
        elif bits==32 and cmplrname=='msvc':
            HA = 'win32-x86'
        elif bits==64 and cmplrname=='gcc':
            HA = 'windows-x64-mingw'
        elif bits==64 and cmplrname=='msvc':
            HA = 'windows-x64'

    if HA is None:
        raise RuntimeError("Unable to determine host arch")

    conf['EPICS_HOST_ARCH'] = conf['T_A'] = HA
    return conf

_config = _makeconf()

def _makebuild():
    build = {
        'CPPFLAGS':[],
        'CFLAGS':[],
        'CXXFLAGS':[],
        'LDFLAGS':[],
        'LDADD':[],
    }

    OS_CLASS = _config['OS_CLASS']

    if OS_CLASS=='Linux':
        build['CPPFLAGS'] += [('_GNU_SOURCE', None), ('_DEFAULT_SOURCE', None), ('linux', None)]
        # uncomment to force the linker to fail if any symbols are undefined.
        # helps to detect missing sources
        #build['LDFLAGS'] += ['-Wl,--no-undefined', '-Wl,--no-allow-shlib-undefined']
        build['LDADD'] += ['m', 'rt', 'dl']

        if not sysconfig.get_config_var('Py_DEBUG'):
            # don't include debug information in non-debug builds
            build['CFLAGS'] += ['-g0']
            build['CXXFLAGS'] += ['-g0']

    if OS_CLASS=='Darwin':
        build['CPPFLAGS'] += [('darwin', None)]
        build['CXXFLAGS'] += ['-mmacosx-version-min=10.7','-std=c++11', '-stdlib=libc++']
        build['LDFLAGS'] += ['-mmacosx-version-min=10.7','-std=c++11', '-stdlib=libc++']

    if OS_CLASS!='WIN32':
        build['CPPFLAGS'] += [('UNIX', None)]

    if OS_CLASS=='WIN32':
        build['CPPFLAGS'] += [('EPICS_BUILD_DLL', None), ('EPICS_CALL_DLL', None), ('NOMINMAX', None)]
        build['CXXFLAGS'] += ['-EHsc']
        build['LDADD'] += ['netapi32', 'ws2_32', 'advapi32', 'user32']

    return build

_config.update(_makebuild())

def get_config_var(key):
    return deepcopy(_config.get(key))

def get_config_vars():
    return deepcopy(_config)
