#!/usr/bin/env python
"""Windows .bat files suck, and I don't want to learn powershell just for this.
So hey, why not just script in python...
"""

from __future__ import print_function

import sys, os, platform
import re
import shutil
import subprocess as SP
from glob import glob

# https://www.python.org/dev/peps/pep-0513/
# https://www.python.org/dev/peps/pep-0425/
# eg.
#  TAG-ABI-PLATFORM
#
#  cp27-cp27m-manylinux1_i686
#  cp27-cp27m-manylinux1_x86_64
#  cp35-none-win32
#  cp34-none-win_amd64
#  cp35-cp35m-macosx_10_6_intel.macosx_10_9_intel.macosx_10_9_x86_64.macosx_10_10_intel.macosx_10_10_x86_64

def is_pre():
    with open('setup.py', 'r') as F:
        ver = re.match(r".*package_version\s*=\s*'([^']*)'.*", F.read(), flags=re.DOTALL).group(1)

    return ver.find('a')!=-1

def call_py(args, **kws):
    print('EXEC', sys.executable, args, kws)
    sys.stdout.flush()
    SP.check_call([sys.executable]+args, **kws)
    print('EXEC DONE', sys.executable, args, kws)

def docker(args):
    print("Available pythons")
    for py in glob("/opt/python/*/bin/python"):
        print("  ", py, py==sys.executable)
    print("Switch to /io")
    os.chdir('/io')


def prepare(args):
    call_py(['-m', 'pip', 'install', '-U', 'pip'])
    call_py(['-m', 'pip', 'install', '-U', 'wheel', 'setuptools', 'nose', 'twine'])
    # our pre-release builds may use pre-release deps
    if is_pre():
        call_py(['-m', 'pip', 'install', '-U', '--pre', 'setuptools-dso'])
    else:
        call_py(['-m', 'pip', 'install', '-U', 'setuptools-dso'])

def build(args):
    tag = args.pop(0)
    print('ABI tag', tag)
    assert len(tag.split('-'))==3, tag
    
    call_py(['setup.py', 'clean', '-a']) # serves to verify that ./setup.py exists before we delete anything

    shutil.rmtree('dist', ignore_errors=True)
    shutil.rmtree('build', ignore_errors=True)

    source_format = "gztar"  # https://python.readthedocs.io/en/stable/distutils/sourcedist.html
    if platform.system() == 'Windows':
        source_format = "zip"
    format_arg = '--formats={}'.format(source_format)

    call_py(['setup.py', 'sdist', format_arg])
    call_py(['setup.py', '-v', 'bdist_wheel'])

    results = glob('dist/*.whl')
    print('RESULT', results)

    if len(results)!=1:
        print('Too many wheels?!?')
        sys.exit(1)

    call_py(['-m', 'pip', 'install', results[0]])
    call_py(['-m', 'nose', 'epicscorelibs'])
    call_py(['-m', 'change_tag', '--rm', '--tag', tag, results[0]])

def upload(args):
    if 'APPVEYOR_PULL_REQUEST_NUMBER' in os.environ or 'TWINE_USERNAME' not in os.environ:
        print("APPVEYOR is PR, skip upload attempt")
        return

    files = []
    files.extend(glob('dist/*.whl'))
    files.extend(glob('dist/*.tar.*'))
    files.extend(glob('dist/*.zip'))

    call_py(['-m', 'twine', 'upload', '--skip-existing']+files)

actions = {
    'docker': docker,
    'prepare': prepare,
    'build': build,
    'upload': upload,
}

if __name__=='__main__':
    print(sys.version)
    args = sys.argv[1:]
    while len(args)>0:
        name = args.pop(0)
        print('IN', name, 'with', args)
        actions[name](args)
