
from . cimport Com

cdef extern from "<iocInit.h>" nogil:
    int iocInit()
    int iocBuild()
    int iocBuildIsolated()
    int iocRun()
    int iocPause()
    int iocShutdown()

cdef extern from "<dbUnitTest.h>" nogil:
    void testdbPrepare()
    void testdbReadDatabase(const char* file, const char* path, const char* substitutions)
    void testIocInitOk()
    void testIocShutdownOk()
    void testdbCleanup()

cdef extern from "<dbStaticLib.h>" nogil:
    struct DBBASE:
        pass
    struct dbRecordNode:
        void* precord
        char* recordname
    struct dbFldDes:
        char* name
        int field_type # dbfType
        short special
        short size
        unsigned short offset
    struct DBENTRY "dbEntry":
        dbRecordNode* precnode
        dbFldDes     *pflddes

    DBBASE* pdbbase

    void dbInitEntry(DBBASE *pdbbase, DBENTRY *pdbentry)
    void dbFinishEntry(DBENTRY *pdbentry)
    long dbFindRecord(DBENTRY *pdbentry, const char *pname)
    long dbFindField(DBENTRY *pdbentry, const char *pfieldName)
    long dbEntryToAddr(const DBENTRY *pdbentry, dbAddr *paddr)

cdef extern from "<dbAccess.h>" nogil:
    int dbLoadDatabase(const char *filename, const char *path, const char *substitutions)
    int dbLoadRecords (const char* filename,                   const char* substitutions)

    long dbNameToAddr(const char *pname, dbAddr *paddr)

    long dbGetField(dbAddr *paddr, short dbrType, void *pbuffer, long *options, long *nRequest,void *pfl)
    long dbGet     (dbAddr *paddr, short dbrType, void *pbuffer, long *options, long *nRequest,void *pfl)
    long dbPutField(dbAddr *,short dbrType,const void *pbuffer,long nRequest)
    long dbPut     (dbAddr *,short dbrType,const void *pbuffer,long nRequest)
    long dbBufferSize(short dbrType,long options,long nRequest)
    long dbValueSize(short dbrType)

    long dbProcess(dbCommon *precord)

    void dbInitEntryFromRecord(dbCommon* prec, DBENTRY* pdbentry)

cdef extern from "<dbLoadTemplate.h>" nogil:
    int dbLoadTemplate(const char *sub_file, const char *cmd_collect)

cdef extern from "<dbCommon.h>" nogil:
    struct dbCommon:
        const char* const  name
        Com.epicsTimeStamp time
        Com.epicsUInt8     pact
        void*              dpvt
        # ... and sooo many more

cdef extern from "<dbLock.h>" nogil:
    void dbScanLock(dbCommon *prec)
    void dbScanUnlock(dbCommon *prec)

cdef extern from "<dbAddr.h>" nogil:
    struct dbAddr:
        dbCommon* precord
        void* pfield
        dbFldDes *pfldDes
        long    no_elements
        short   field_type
        short   field_size
        short   special
        short   dbr_field_type

cdef extern from "<dbChannel.h>" nogil:
    struct dbChannel:
        const char *name
        dbAddr addr
        long  final_no_elements
        short final_field_size
        short final_type
        # otherwise opaque

    const char* dbChannelName(dbChannel*)
    dbCommon* dbChannelRecord(dbChannel*)
    dbFldDes* dbChannelFldDes(dbChannel*)
    long dbChannelElements(dbChannel*)
    short dbChannelFieldType(dbChannel*)
    short dbChannelExportType(dbChannel*)
    short dbChannelExportCAType(dbChannel*)
    short dbChannelFieldSize(dbChannel*)
    long dbChannelFinalElements(dbChannel*)
    short dbChannelFinalFieldType(dbChannel*)
    short dbChannelFinalCAType(dbChannel*)
    short dbChannelFinalFieldSize(dbChannel*)
    short dbChannelSpecial(dbChannel*)
    void* dbChannelField(dbChannel*)

cdef extern from "<registryFunction.h>" nogil:
    ctypedef void (*REGISTRYFUNCTION)()
    int registryFunctionAdd(const char *name, REGISTRYFUNCTION func)

cdef extern from "<registryCommon.h>" nogil:
    #void registerRecordTypes(DBBASE *pbase, int nRecordTypes, const char * const *recordTypeNames, const recordTypeLocation *rtl)
    void registerDevices(DBBASE *pbase, int nDevices, const char * const *deviceSupportNames, const dset * const *devsl)
    #void registerDrivers(DBBASE *pbase, int nDrivers, const char * const *driverSupportNames, struct drvet * const *drvsl)
    #void registerJLinks(DBBASE *pbase, int nDrivers, jlif * const *jlifsl);


cdef extern from "<recGbl.h>" nogil:
    int recGblSetSevr(void *precord, Com.epicsEnum16 new_stat, Com.epicsEnum16 new_sevr)
    void recGblGetTimeStamp(void *precord)

cdef extern from "<dbScan.h>" nogil:
    ctypedef void* EVENTPVT
    EVENTPVT eventNameToHandle(const char* event)
    void postEvent(EVENTPVT epvt)

    struct ioscan_head:
        pass
    ctypedef ioscan_head* IOSCANPVT
    void scanIoInit(IOSCANPVT *ppios)
    unsigned int scanIoRequest(IOSCANPVT pios)
    unsigned int scanIoImmediate(IOSCANPVT pios, int prio)
    ctypedef void (*io_scan_complete)(void *usr, IOSCANPVT, int prio)
    void scanIoSetComplete(IOSCANPVT, io_scan_complete, void *usr)

cdef extern from "<dbFldTypes.h>" nogil:
    enum: DBF_STRING
    enum: DBF_CHAR
    enum: DBF_UCHAR
    enum: DBF_SHORT
    enum: DBF_USHORT
    enum: DBF_LONG
    enum: DBF_ULONG
    enum: DBF_INT64
    enum: DBF_UINT64
    enum: DBF_FLOAT
    enum: DBF_DOUBLE
    enum: DBF_ENUM
    enum: DBF_MENU
    enum: DBF_DEVICE
    enum: DBF_INLINK
    enum: DBF_OUTLINK
    enum: DBF_FWDLINK
    enum: DBF_NOACCESS

cdef extern from "<link.h>" nogil:
    struct instio:
        char *string

    union value:
        # ignore
        instio instio

    struct link:
        dbCommon *precord
        short type
        short flags
        # lset *lset
        char *text
        value value

    ctypedef link DBLINK

cdef extern from "<devSup.h>" nogil:
    enum: CONSTANT
    enum: INST_IO

    struct dset:
        pass # may be a typedef of 'typed_dset'
    struct typed_dset:
        long number
        long (*report)(int lvl)
        long (*init)(int after)
        long (*init_record)(dbCommon *prec)
        long (*get_ioint_info)(int detach, dbCommon *prec, IOSCANPVT* pscan)

    struct dsxt:
        long (*add_record)(dbCommon *precord)
        long (*del_record)(dbCommon *precord)

    ctypedef long (*DEVSUPFUN)()

    link* dbGetDevLink(dbCommon* prec)
    void devExtend(dsxt *pdsxt)

cdef extern from "<dbNotify.h>" nogil:
    enum notifyRequestType:
        processRequest
        putProcessRequest
        processGetRequest
        putProcessGetRequest
    enum _notifyPutType:
        putDisabledType
        putFieldType
        putType
    ctypedef _notifyPutType notifyPutType
    enum _notifyGetType:
        getFieldType
        getType
    ctypedef _notifyGetType notifyGetType
    struct processNotify:
        notifyRequestType requestType
        dbChannel *chan
        int              (*putCallback)(processNotify *,notifyPutType type)
        void             (*getCallback)(processNotify *,notifyGetType type)
        void             (*doneCallback)(processNotify *)
        void             *usrPvt

    void dbProcessNotify(processNotify *pprocessNotify)
    void dbNotifyCancel(processNotify *pprocessNotify)
