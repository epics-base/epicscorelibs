
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

cdef extern from "<epicsTimes.h>":
    enum: POSIX_TIME_AT_EPICS_EPOCH

    cdef struct epicsTimeStamp:
        epicsUInt32    secPastEpoch   # seconds since 0000 Jan 1, 1990
        epicsUInt32    nsec

    int epicsTimeGetCurrent ( epicsTimeStamp * pDest )

cdef extern from "<iocsh.h>":
    int iocsh(const char *pathname)
    int iocshCmd(const char *cmd)
    int iocshLoad(const char *pathname, const char* macros)
    int iocshRun(const char *cmd, const char* macros)
