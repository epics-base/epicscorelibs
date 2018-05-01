
from __future__ import print_function

import os
import ctypes

from .. import path

def test_loading():
    print("PATH", os.environ.get('PATH'))
    print("LD_LIBRARY_PATH", os.environ.get('LD_LIBRARY_PATH'))
    print("DYLD_LIBRARY_PATH", os.environ.get('DYLD_LIBRARY_PATH'))

    # plain CA will be popular
    print("Load", path.get_lib('ca'), os.path.exists(path.get_lib('ca')))
    ca = ctypes.cdll.LoadLibrary(path.get_lib('ca'))

    # pvAccessCA depends on all other libs
    print("Load", path.get_lib('pvAccessCA'), os.path.exists(path.get_lib('pvAccessCA')))
    pvaca = ctypes.cdll.LoadLibrary(path.get_lib('pvAccessCA'))
