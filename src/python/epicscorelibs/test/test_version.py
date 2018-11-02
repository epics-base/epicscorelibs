
from __future__ import print_function

import os
import ctypes

from .. import version

def test_version():
    print('Version:', version.version)
    print('Base Version:', version.base_version)
    print('ABI Requires:', version.abi_requires())
