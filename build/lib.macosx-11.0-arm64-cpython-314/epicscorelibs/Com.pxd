
cdef extern from "<epicsTypes.h>":
    enum: MAX_STRING_SIZE

    ctypedef char            epicsOldString[MAX_STRING_SIZE]

    ctypedef char            epicsInt8
    ctypedef unsigned char   epicsUInt8
    ctypedef short           epicsInt16
    ctypedef unsigned short  epicsUInt16
    ctypedef int             epicsInt32
    ctypedef unsigned int    epicsUInt32
    ctypedef long long       epicsInt64
    ctypedef unsigned long long epicsUInt64

    ctypedef epicsUInt16     epicsEnum16
    ctypedef float           epicsFloat32
    ctypedef double          epicsFloat64
    ctypedef epicsInt32      epicsStatus

cdef extern from "<epicsTime.h>" nogil:
    enum: POSIX_TIME_AT_EPICS_EPOCH

    cdef struct epicsTimeStamp:
        epicsUInt32    secPastEpoch   # seconds since 0000 Jan 1, 1990
        epicsUInt32    nsec

    int epicsTimeGetCurrent ( epicsTimeStamp * pDest )

cdef extern from "<errSymTbl.h>" nogil:
    const char* errSymMsg(long status)
    void errSymLookup(long status, char *pBuf, size_t bufLength)

cdef extern from "<errlog.h>" nogil:
    int eltc(int yesno)
    int errlogPrintf(const char *pformat, ...)
    int errlogPrintfNoConsole(const char *pformat, ...)

cdef extern from "<iocsh.h>" nogil:
    int iocsh(const char *pathname)
    int iocshCmd(const char *cmd)
    int iocshLoad(const char *pathname, const char* macros)
    int iocshRun(const char *cmd, const char* macros)

cdef extern from "<iocshRegisterCommon.h>" nogil:
    void iocshRegisterCommon()

cdef extern from "<epicsFindSymbol.h>" nogil:
    void* epicsLoadLibrary(const char *name);
    const char* epicsLoadError()
    void* epicsFindSymbol(const char *name)

cdef extern from "<epicsExit.h>" nogil:
    ctypedef void (*epicsExitFunc)(void *arg)

    void epicsExit(int status)
    void epicsExitLater(int status)
    void epicsExitCallAtExits()
    int epicsAtExit(epicsExitFunc func, void *arg)
    int epicsAtExit3(epicsExitFunc func, void *arg, const char* name)

    void epicsExitCallAtThreadExits()
    int epicsAtThreadExit(epicsExitFunc func, void *arg)

cdef extern from "<initHooks.h>" nogil:
    ctypedef int initHookState

    ctypedef void (*initHookFunction)(initHookState state)
    int initHookRegister(initHookFunction func)
    const char *initHookName(int state)

cdef extern from "<alarm.h>" nogil:
    enum: NO_ALARM
    enum: MINOR_ALARM
    enum: MAJOR_ALARM
    enum: INVALID_ALARM
    enum: ALARM_NSEV

    enum: READ_ALARM
    enum: WRITE_ALARM
    enum: HIHI_ALARM
    enum: HIGH_ALARM
    enum: LOLO_ALARM
    enum: LOW_ALARM
    enum: STATE_ALARM
    enum: COS_ALARM
    enum: COMM_ALARM
    enum: TIMEOUT_ALARM
    enum: HW_LIMIT_ALARM
    enum: CALC_ALARM
    enum: SCAN_ALARM
    enum: LINK_ALARM
    enum: SOFT_ALARM
    enum: BAD_SUB_ALARM
    enum: UDF_ALARM
    enum: DISABLE_ALARM
    enum: SIMM_ALARM
    enum: READ_ACCESS_ALARM
    enum: WRITE_ACCESS_ALARM
    enum: ALARM_NSTATUS

    extern const char *epicsAlarmSeverityStrings [ALARM_NSEV]
    extern const char *epicsAlarmConditionStrings [ALARM_NSTATUS]

cdef extern from "<epicsMutex.h>" nogil:
    struct epicsMutexParm:
        pass
    ctypedef epicsMutexParm* epicsMutexId
    enum epicsMutexLockStatus_t:
        epicsMutexLockOK
        epicsMutexLockTimeout
        epicsMutexLockError
    ctypedef epicsMutexLockStatus_t epicsMutexLockStatus

    epicsMutexId epicsMutexCreate()
    void epicsMutexDestroy(epicsMutexId)
    void epicsMutexUnlock(epicsMutexId)
    epicsMutexLockStatus epicsMutexLock(epicsMutexId)
    epicsMutexLockStatus epicsMutexTryLock(epicsMutexId)
