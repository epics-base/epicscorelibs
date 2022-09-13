#!/usr/bin/env python

from __future__ import print_function

import os, sys, platform, re
from glob import glob
from collections import defaultdict

from setuptools import Command, Distribution
from setuptools.command import install
from distutils.command import build

from setuptools_dso import Extension, setup, DSO, build_dso

from distutils import log


mydir = os.path.abspath(os.path.dirname(__file__))

# I will use some of what I'm about to install
sys.path.insert(0, os.path.join(mydir, 'src', 'python'))

from epicscorelibs.config import get_config_var


# our choice of version suffix is constrained by PEP 440
# so we always append .99.ABI.SRC to most recent upstream version
# the following line is matched from cibuild.py
package_version = '7.0.7.99.0.0a1'

assert package_version.split('.')[-3]=='99', package_version

abi_version = '.'.join(package_version.split('.')[:-1]) # strip off the last component

OS_CLASS = get_config_var('OS_CLASS')

# Extract error symbol definitoins from C headers
# eg.
# | #define M_asLib                   (501 << 16)  /* Access Security */
# | #define S_asLib_asNotActive       (M_asLib|10) /*access security is not active*/
#            <macro>                  <value>        <desc>
err_def = re.compile(r'''
    ^\s* \# \s* define \s+ (?P<macro>[SM]_[A-Za-z0-9_]+)
        \s+ \( (?P<value>[^)]*) \)
        \s* /\* (?P<desc>.*) \*/ \s*$
''', re.X)

def readmake(defs, *parts):
    """Read "makefile" containing only definitions (VAR = value)
    """
    with open(os.path.join(mydir, *parts), 'r') as F:
        for line in F:
            line = line.strip()
            if line[:1] in ('', '#'):
                continue

            key, sep, value = line.partition('=')
            if sep!='=':
                continue
            defs[key.strip()] = value.strip()

class GenVersionError(Command):
    """Generate epicsVersion.h, config parameter, and error symbol tables
    """
    user_options = [
        ('build-temp=', 't',
         "directory for temporary files (build by-products)"),
    ]

    def initialize_options(self):
        self.build_temp = None

    def finalize_options(self):
        self.set_undefined_options('build',
                                   ('build_temp', 'build_temp'),
                                  )

    def run(self):
        log.info("In GetVersionError")
        self.mkpath(self.build_temp)
        defs = {}
        readmake(defs, 'configure', 'CONFIG_BASE_VERSION')
        defs['EPICS_SITE_VERSION'] = 'pipi'

        outfile = os.path.join(self.build_temp, 'epicsVersion.h')
        if self.dry_run:
            log.info("Would write %s", outfile)
        else:
            log.info("Writing %s", outfile)
            with open(outfile, 'w') as F:
                F.write("""
#ifndef INC_epicsVersion_H
#define INC_epicsVersion_H

#define EPICS_VERSION        %(EPICS_VERSION)s
#define EPICS_REVISION       %(EPICS_REVISION)s
#define EPICS_MODIFICATION   %(EPICS_MODIFICATION)s
#define EPICS_PATCH_LEVEL    %(EPICS_PATCH_LEVEL)s
#define EPICS_DEV_SNAPSHOT   "%(EPICS_DEV_SNAPSHOT)s"
#define EPICS_SITE_VERSION   "%(EPICS_SITE_VERSION)s"

#define EPICS_VERSION_SHORT "%(EPICS_VERSION)s.%(EPICS_REVISION)s.%(EPICS_MODIFICATION)s.%(EPICS_PATCH_LEVEL)s"
#define EPICS_VERSION_FULL "%(EPICS_VERSION)s.%(EPICS_REVISION)s.%(EPICS_MODIFICATION)s.%(EPICS_PATCH_LEVEL)s%(EPICS_DEV_SNAPSHOT)s"
#define EPICS_VERSION_STRING "EPICS %(EPICS_VERSION)s.%(EPICS_REVISION)s.%(EPICS_MODIFICATION)s.%(EPICS_PATCH_LEVEL)s%(EPICS_DEV_SNAPSHOT)s"
#define epicsReleaseVersion  "EPICS %(EPICS_VERSION)s.%(EPICS_REVISION)s.%(EPICS_MODIFICATION)s.%(EPICS_PATCH_LEVEL)s%(EPICS_DEV_SNAPSHOT)s"

#ifndef VERSION_INT
#  define VERSION_INT(V,R,M,P) ( ((V)<<24) | ((R)<<16) | ((M)<<8) | (P))
#endif
#define EPICS_VERSION_INT VERSION_INT(EPICS_VERSION, EPICS_REVISION, EPICS_MODIFICATION, EPICS_PATCH_LEVEL)

#endif /* INC_epicsVersion_H */
"""%defs)

        defs = {}
        defs['EPICS_BUILD_TARGET_ARCH'] = get_config_var('EPICS_HOST_ARCH')
        readmake(defs, 'configure', 'CONFIG_ENV')
        readmake(defs, 'configure', 'CONFIG_SITE_ENV')

        outfile = os.path.join(self.build_temp, 'generated.c')
        if self.dry_run:
            log.info("Would write %s", outfile)
        else:
            log.info("Writing %s", outfile)
            with open(outfile, 'w') as F:
                F.write("""
#include <stddef.h>
#include "envDefs.h"
""")

                for N, V in defs.items():
                    F.write('const ENV_PARAM %s = {"%s", "%s"};\n'%(N,N,V.strip('"')))

                F.write('const ENV_PARAM* env_param_list[] = {\n')
                for N, V in defs.items():
                    F.write('    &%s,\n'%N)
                F.write('    NULL\n};\n')

                F.write("""
#include "errMdef.h"
#include "errSymTbl.h"
#include "dbDefs.h"
""")

                defM, defS = [], []
                for errfile in self.distribution.x_errtable or []:
                    with open(os.path.normcase(errfile), 'r') as I:
                        for line in I:
                            M = err_def.match(line)
                            if M is None:
                                continue
                            D = M.groupdict()
                            # TODO: escape 'desc'?
                            if D['macro'][0]=='M':
                                defM.append(D)
                            elif D['macro'][0]=='S':
                                defS.append(D)

                if len(defM)==0 or len(defS)==0:
                    log.warn("Warning: generated error string table is empty!")
                    # MSVC doesn't like zero length C arrays
                    # so give it something
                    defS.append({'macro':'S_generic', 'value':'1', 'desc':'placeholder'})

                for D in defM:
                    F.write("#ifndef %(macro)s\n#  define %(macro)s (%(value)s) /*%(desc)s*/\n#endif\n"%D)

                for D in defS:
                    F.write("#define %(macro)s (%(value)s) /*%(desc)s*/\n"%D)

                F.write("""
static ERRSYMBOL symbols[] = {
""")

                for D in defS:
                    F.write("    { (long)%(macro)s, \"%(desc)s\" },\n"%D)

                F.write("""
}; /* TODO */
static ERRSYMTAB symTbl = {NELEMENTS(symbols), symbols};
ERRSYMTAB_ID errSymTbl = &symTbl;
""")

        outfile = os.path.join(self.build_temp, 'epicsVCS.h')
        if self.dry_run:
            log.info("Would write %s", outfile)
        else:
            log.info("Writing %s", outfile)
            with open(outfile, 'w') as F:
                F.write("""
#ifndef EPICS_VCS_VERSION
  #define EPICS_VCS_VERSION "%(ver)s"
#endif
#ifndef EPICS_VCS_VERSION_DATE
  #define EPICS_VCS_VERSION_DATE "%(ver)s"
#endif
"""%{"ver":package_version})
        

Distribution.x_errtable = None

class Expand(Command):
    user_options = [
        ('build-temp=', 't',
         "directory for temporary files (build by-products)"),
    ]

    def initialize_options(self):
        self.build_temp = None

    def finalize_options(self):
        self.set_undefined_options('build',
                                   ('build_temp', 'build_temp'),
                                  )

    def run(self):
        log.info("In Expand")
        for template, outname, files in self.distribution.x_expand or []:
            template = os.path.normcase(template)

            outname = os.path.join(self.build_temp, os.path.normcase(outname))
            log.info("expand %s -> %s", template, outname)

            with open(template, 'r') as F:
                tmpl = F.read()

            defs = {}
            for fname in files:
                readmake(defs, fname)

            def repl(M):
                return defs[M.group(1)]

            out = re.sub(r'@([^@]*)@', repl, tmpl)

            if not self.dry_run:
                self.mkpath(os.path.dirname(outname))
                with open(outname, 'w') as F:
                    F.write(out)

Distribution.x_expand = None

class MakeAPIH(Command):
    user_options = [
        ('build-lib=', 't',
         "directory for temporary files (build by-products)"),
    ]

    def initialize_options(self):
        self.build_lib = None

    def finalize_options(self):
        self.set_undefined_options('build',
                                   ('build_lib', 'build_lib'),
                                  )

    def run(self):
        for stem, outname in self.distribution.x_api_h or []:
            outname = os.path.join(self.build_lib, 'epicscorelibs', 'include', os.path.basename(outname))
            log.info('make %s -> %s', stem, outname)
            out = '''
#ifndef %(guard)s
#define %(guard)s

#if defined(_WIN32) || defined(__CYGWIN__)

#  if !defined(epicsStdCall)
#    define epicsStdCall __stdcall
#  endif

#  if defined(BUILDING_%(stem)s_API) && defined(EPICS_BUILD_DLL)
/* Building library as dll */
#    define %(STEM)s_API __declspec(dllexport)
#  elif !defined(BUILDING_%(stem)s_API) && defined(EPICS_CALL_DLL)
/* Calling library in dll form */
#    define %(STEM)s_API __declspec(dllimport)
#  endif

#elif __GNUC__ >= 4
#  define %(STEM)s_API __attribute__ ((visibility("default")))
#endif

#if !defined(%(STEM)s_API)
#  define %(STEM)s_API
#endif

#if !defined(epicsStdCall)
#  define epicsStdCall
#endif

#endif /* %(guard)s */
'''%{'stem':stem, 'STEM':stem.upper(), 'guard':'INC_'+stem+'API_H'}

            if not self.dry_run:
                self.mkpath(os.path.dirname(outname))
                with open(outname, 'w') as F:
                    F.write(out)

Distribution.x_api_h = None

class InstallHeaders(Command):
    user_options = [
        ('build-lib=', 't',
         "directory for temporary files (build by-products)"),
        ('build-temp=', 't',
         "directory for temporary files (build by-products)"),
    ]
    def initialize_options(self):
        self.build_lib = None
        self.build_temp = None

    def finalize_options(self):
        self.set_undefined_options('build',
                                   ('build_lib', 'build_lib'),
                                   ('build_temp', 'build_temp'),
                                  )
    def run(self):
        log.info("In InstallHeaders")
        for pkg, files in (self.distribution.x_headers or {}).items():
            print("Install headers for", pkg)
            pkgdir = os.path.join(*[self.build_lib]+pkg.split('.'))
            self.mkpath(pkgdir)

            for fname in files:
                if isinstance(fname, str):
                    fout = fname
                else:
                    fout, fname = fname
                if not os.path.isfile(fname):
                    fname = os.path.join(self.build_temp, fname)

                self.copy_file(fname,
                               os.path.join(pkgdir, os.path.basename(fout)))

Distribution.x_headers = None

build_dso.sub_commands.extend([
    ('build_expand', lambda self:True),
    ('build_apih', lambda self:True),
    ('build_generated', lambda self:True),
    ('install_epics_headers', lambda self:True),
])

def readlists(name, prefix):
    prefix = os.path.normcase(prefix)
    groups = ['all', get_config_var('OS_CLASS')]

    ret = []

    for part in ('source', 'include', 'header'):
        R = []

        for grp in groups:
            fname = os.path.join(mydir, 'setup.py.d', '.'.join([name, grp, part]))
            if os.path.isfile(fname):
                with open(fname, 'r') as F:
                    for line in F:
                        line = line.strip()
                        if line[:1] in ('', '#'):
                            continue
                        R.append(os.path.normcase(line))

        R = [os.path.join(prefix, F) for F in R]
        ret.append(R)

    return tuple(ret)

modules = []
headers = ['epicsVersion.h']

local_defs = [('USE_TYPED_RSET', None)]

def build_module(name, srcdir, defs=[], deps=[], srcs=[], soversion=None):
    #print("Include EPICS module %s in %s"%(name, srcdir))
    src, inc, hdr = readlists(name, srcdir)
    if len(src)==0:
        raise RuntimeError("module %s has no source"%name)
    defs = get_config_var('CPPFLAGS') + local_defs + defs

    MOD = DSO(
        name='epicscorelibs.lib.'+name,
        sources = srcs+src,
        include_dirs = [os.path.join('epicscorelibs', 'include')] + inc + ['.'],
        define_macros = defs,
        dsos = ['epicscorelibs.lib.'+D for D in deps],
        libraries = get_config_var('LDADD'),
        extra_link_args = get_config_var('LDFLAGS'),
        lang_compile_args = {
            'c':get_config_var('CFLAGS'),
            'c++':get_config_var('CXXFLAGS'),
        },
        soversion=soversion or abi_version,
    )

    modules.append(MOD)
    headers.extend(hdr)

build_module('Com', 'modules/libcom/src',
             defs=[('BUILDING_libCom_API', None), ('EPICS_COMMANDLINE_LIBRARY', 'EPICS_COMMANDLINE_LIBRARY_EPICS')],
             srcs=['generated.c'],
)
build_module('ca', 'modules/ca/src',
             defs=[('BUILDING_libCa_API', None)],
             deps=['Com'],
)
build_module('dbCore', 'modules/database/src/ioc',
             defs=[('BUILDING_dbCore_API', None)],
             deps=['ca','Com'],
)
build_module('dbRecStd', 'modules/database/src/std',
             defs=[('BUILDING_dbRecStd_API', None)],
             deps=['dbCore', 'ca','Com'],
)
build_module('pvData', 'modules/pvData',
             deps=['ca', 'Com'],
)
build_module('pvAccess', 'modules/pvAccess',
             deps=['pvData', 'Com'],
)
build_module('pvAccessCA', 'modules/pvAccess',
             deps=['pvAccess', 'pvData', 'ca', 'Com'],
)
build_module('pvAccessIOC', 'modules/pvAccess',
             deps=['pvAccess', 'pvData', 'dbRecStd', 'dbCore', 'ca', 'Com'],
)
build_module('qsrv', 'modules/pva2pva',
             defs=[('QSRV_API_BUILDING',None)],
             deps=['pvAccess', 'pvData', 'dbRecStd', 'dbCore', 'ca', 'Com'],
)

assert len(headers)>0

_header_dirs = set(['pv', 'pva', 'valgrind'])

def proc_headers(headers):
    """Take list of headers sort by installed sub-directory

    {'epicscorelibs.include.PATH': ['path/of/header.h', ...], ...}
    """
    groups = defaultdict(list)
    for header in headers:
        hdir, hname = os.path.split(header)
        hmod = ['epicscorelibs', 'include']
        hdir, candidate = os.path.split(hdir)
        if candidate in _header_dirs:
            hmod.append(candidate)
        groups['.'.join(hmod)].append(header)

    return groups

headers = proc_headers(headers)

headers['epicscorelibs.dbd'] = [] \
    + glob('modules/database/src/ioc/*/*.dbd') \
    + glob('modules/database/src/std/*/*.dbd') \
    + glob('modules/database/src/ioc/generated/*.dbd') \
    + glob('modules/database/src/std/generated/*.dbd') \
    + glob('modules/pvAccess/src/ioc/*.dbd') \
    + [('qsrv.dbd', 'modules/pva2pva/pdbApp/qsrv-new.dbd')]

# a dummy extension so that bdist_wheel will recognise this package
# as containing binaries.
ext = Extension(
    name='epicscorelibs._base',
    sources = ['src/python/epicscorelibs/base.cpp'],
    define_macros = get_config_var('CPPFLAGS'),
    extra_compile_args = get_config_var('CXXFLAGS'),
    extra_link_args = get_config_var('LDFLAGS'),
)

setup(
    name='epicscorelibs',
    version=package_version,
    description="The EPICS Core libraries for use by python modules",
    long_description="""The EPICS (Experimental Physics and Industrial Control System) core libraries
for use by python modules.  Either dynamically with ctypes or statically by compiled extension.
""",
    url='https://github.com/mdavidsaver/epicscorelibs',
    author='Michael Davidsaver',
    author_email='mdavidsaver@gmail.com',
    license='EPICS',
    classifiers = [
        'Development Status :: 5 - Production/Stable',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'License :: Freely Distributable',
        'Intended Audience :: Science/Research',
        'Topic :: Scientific/Engineering',
        'Topic :: Software Development :: Libraries',
        'Topic :: System :: Distributed Computing',
        'Operating System :: POSIX :: Linux',
        'Operating System :: MacOS',
        'Operating System :: Microsoft :: Windows',
    ],
    keywords='epics scada',
    project_urls = {
        'Source': 'https://github.com/mdavidsaver/epicscorelibs',
        'Tracker': 'https://github.com/mdavidsaver/epicscorelibs/issues',
        'Upstream': 'https://epics.anl.gov/',
    },
    python_requires='>=2.7',
    install_requires=[
        'setuptools', # needed at runtime for 'pkg_resources'
        'setuptools_dso>=2.0a1', # 'setuptools_dso.runtime' used in 'epicscorelibs.path'
        'numpy', # needed for epicscorelibs.ca.dbr
    ],

    packages=[
        'epicscorelibs',
        'epicscorelibs.lib',
        'epicscorelibs.path',
        'epicscorelibs.test',
        'epicscorelibs.ca',
    ],
    package_dir={'':os.path.join('src','python')},
    package_data={
        '':['*.pxd'],
        'dbd':[
            'modules/database/src/ioc/*/*.dbd',
            'modules/database/src/std/*/*.dbd',
            'modules/database/src/ioc/generated/*.dbd',
            'modules/database/src/std/generated/*.dbd',
        ],
    },
    ext_modules = [ext],
    x_dsos = modules,
    x_headers = headers,
    x_api_h = [
        ('libCom', 'modules/libcom/src/libComAPI.h'),
        ('libCa', 'modules/ca/src/client/libCaAPI.h'),
        ('dbCore', 'modules/database/src/ioc/dbCoreAPI.h'),
        ('dbRecStd', 'modules/database/src/std/dbRecStdAPI.h'),
    ],
    x_expand = [
        ('modules/libcom/src/libComVersion.h@', 'modules/libcom/src/libComVersion.h',
         ['configure/CONFIG_LIBCOM_VERSION']),
        ('modules/database/src/ioc/databaseVersion.h@', 'modules/database/src/ioc/databaseVersion.h',
         ['configure/CONFIG_DATABASE_VERSION']),
        ('modules/pvData/src/pv/pvdVersionNum.h@', 'modules/pvData/src/pv/pvdVersionNum.h',
         ['modules/pvData/configure/CONFIG_PVDATA_VERSION']),
        ('modules/pvAccess/src/pva/pvaVersionNum.h@', 'modules/pvAccess/src/pva/pv/pvaVersionNum.h',
         ['modules/pvAccess/configure/CONFIG_PVACCESS_VERSION']),
        ('modules/pva2pva/pdbApp/pv/qsrvVersionNum.h@', 'modules/pva2pva/pdbApp/pv/qsrvVersionNum.h',
         ['modules/pva2pva/configure/CONFIG_QSRV_VERSION']),
    ],
    x_errtable = [
        "modules/libcom/src/osi/devLib.h",
        "modules/libcom/src/osi/epicsTime.h",
        #"modules/libcom/src/as/asLib.h",
        "modules/libcom/src/misc/epicsStdlib.h",
        "modules/libcom/src/pool/epicsThreadPool.h",
        "modules/libcom/src/error/errMdef.h",
    ],
    cmdclass = {
        'build_generated': GenVersionError,
        'build_expand': Expand,
        'build_apih': MakeAPIH,
        'install_epics_headers':InstallHeaders,
    },
    zip_safe = False,
)
