
from __future__ import print_function

import os
import ctypes

from .. import path

def test_loading():
    print("PATH", os.environ.get('PATH'))
    print("LD_LIBRARY_PATH", os.environ.get('LD_LIBRARY_PATH'))
    print("DYLD_LIBRARY_PATH", os.environ.get('DYLD_LIBRARY_PATH'))
    print(path.get_lib('ca'))

    ca = ctypes.CDLL(path.get_lib('ca'), mode=ctypes.RTLD_GLOBAL)

    if path.OS_CLASS=='WIN32':
        # Base libs contain functions using a mixture of cdecl and stdcall calling conventions
        # make WinDLL w/o actually loading again
        ca_s = ctypes.WinDLL(ca._name, handle=ca._handle)
        # functions from dependent DLLs aren't accessible through this handle
        Com = ctypes.CDLL(path.get_lib('Com'), mode=ctypes.RTLD_GLOBAL)
        Com_s = ctypes.WinDLL(Com._name, handle=Com._handle)
    else:
        Com = Com_s = ca_s = ca

    assert ca._handle==ca_s._handle, (ca._handle, ca_s._handle)

    # from libCom
    epicsThreadGetCPUs = Com.epicsThreadGetCPUs
    epicsThreadGetNameSelf = Com_s.epicsThreadGetNameSelf
    epicsThreadGetNameSelf.restype = ctypes.c_char_p
    # from libca
    ca_version = ca_s.ca_version
    ca_version.restype = ctypes.c_char_p

    print("epicsThreadGetCPUs()", epicsThreadGetCPUs())
    print("epicsThreadGetNameSelf()", epicsThreadGetNameSelf())
    print("ca_version()", ca_version())

    # test if re-loading is actually re-loading

    Com2 = ctypes.CDLL(path.get_lib('Com'), mode=ctypes.RTLD_GLOBAL)

    addrA = ctypes.c_char_p.in_dll(Com, 'EPICS_CA_ADDR_LIST')
    addrB = ctypes.c_char_p.in_dll(Com2, 'EPICS_CA_ADDR_LIST')
    print(addrA, addrB)

    assert ctypes.addressof(addrA)==ctypes.addressof(addrB), (addrA, addrB)


def test_ca_loading():
    from epicscorelibs.ca import cadef, dbr
    assert cadef
    assert dbr

def test_qsrv_loading():
    from setuptools_dso.runtime import find_dso
    fname = find_dso('...lib.qsrv')
    lib = ctypes.CDLL(fname, ctypes.RTLD_GLOBAL)
    qsrvVersion = lib.qsrvVersion
    qsrvVersion.restype = ctypes.c_uint

    qver = qsrvVersion()
    assert qver>=0, qver
