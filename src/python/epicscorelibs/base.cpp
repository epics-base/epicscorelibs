
#include <Python.h>

static struct PyMethodDef base_methods[] = {
    {NULL}
};

#if PY_MAJOR_VERSION >= 3
static struct PyModuleDef baseymodule = {
  PyModuleDef_HEAD_INIT,
    "epicscorelibs._base",
    NULL,
    -1,
    base_methods,
};
#endif

#if PY_MAJOR_VERSION >= 3
#  define PyMOD(NAME) PyObject* PyInit_##NAME (void)
#else
#  define PyMOD(NAME) void init##NAME (void)
#endif

extern "C"
PyMOD(_base)
{
#if PY_MAJOR_VERSION >= 3
        PyObject *mod = PyModule_Create(&baseymodule);
#else
        PyObject *mod = Py_InitModule("epicscorelibs._base", base_methods);
#endif
        if(mod) {
        }
#if PY_MAJOR_VERSION >= 3
    return mod;
#else
    (void)mod;
#endif
}
