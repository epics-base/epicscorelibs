
cdef extern from "<iocInit.h>":
    int iocInit()
    int iocBuild()
    int iocBuildIsolated()
    int iocRun()
    int iocPause()
    int iocShutdown()

cdef extern from "<dbAccessDefs.h>":
    int dbLoadDatabase(const char *filename, const char *path, const char *substitutions)
    int dbLoadRecords (const char* filename,                   const char* substitutions)

cdef extern from "<dbLoadTemplate.h>":
    int dbLoadTemplate(const char *sub_file, const char *cmd_collect)
