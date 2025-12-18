epicscorelibs
=============

Not an end user library.

This repository contains the source used to build

https://pypi.org/project/epicscorelibs/

```sh
pip install epicscorelibs
```

If you plan to use this for local compilation then
it is will be necessary to skip the pre-built
wheel binaries.

```sh
pip install --no-binary epicscorelibs epicscorelibs
```

Please report issues first to https://github.com/mdavidsaver/epicscorelibs/issues
before code.launchpad.net or EPICS mailing lists.

CI builds

https://github.com/mdavidsaver/epicscorelibs/actions

Python API
----------

See [src/python/epicscorelibs](src/python/epicscorelibs).

Finding paths to included headers and libraries.

```python
from epicscorelibs.path import include_path, lib_path, get_lib
print(include_path) # use with eg. -I
print(lib_path)     # use with eg. -L
print(get_lib('ca'))# full path of named library
# lib names are: 'Com', 'ca', 'dbCore', 'dbRecStd', 'pvData', 'pvAccess', 'pvAccessCA'
```

### Using with pyepics and/or cothread.

It is advisable to avoid loading more than one version
of any of the epics library into a single process.
To facilitate this several helpers are provided
for common libca wrappers.

[DLS cothread](http://controls.diamond.ac.uk/downloads/python/cothread/2-14/docs/html/training/cothread.html)

```sh
pip install epicscorelibs cothread
```

```python
try:
    import epicscorelibs.path.cothread
except ImportError:
    pass
from cothread.catools import caget    
```

[pyepics](http://cars9.uchicago.edu/software/python/pyepics3/)

```python
try:
    import epicscorelibs.path.pyepics
except ImportError:
    pass
import epics
```

### Building against epicscorelibs

```python
from epicscorelibs.config import get_config_var, get_config_vars
```

`get_config_vars()` and `get_config_var(name)` function
like the similarly named `sysconfig.get_config_vars`
and `sysconfig.get_config_var(name)`.

Valid keys include `EPICS_HOST_ARCH`, `CFLAGS`, etc.

```python
from epicscorelibs.version import version, base_version, abi_requires
```
