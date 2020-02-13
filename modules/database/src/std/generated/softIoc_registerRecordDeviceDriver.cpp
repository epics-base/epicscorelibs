/* THIS IS A GENERATED FILE. DO NOT EDIT! */
/* Generated from ../O.Common/softIoc.dbd */

#include <string.h>
#ifndef USE_TYPED_RSET
#  define USE_TYPED_RSET
#endif
#include "compilerDependencies.h"
#include "epicsStdlib.h"
#include "iocsh.h"
#include "iocshRegisterCommon.h"
#include "registryCommon.h"
#include "recSup.h"

extern "C" {

epicsShareExtern typed_rset *pvar_rset_aSubRSET, *pvar_rset_aaiRSET,
    *pvar_rset_aaoRSET, *pvar_rset_aiRSET, *pvar_rset_aoRSET,
    *pvar_rset_biRSET, *pvar_rset_boRSET, *pvar_rset_calcRSET,
    *pvar_rset_calcoutRSET, *pvar_rset_compressRSET,
    *pvar_rset_dfanoutRSET, *pvar_rset_eventRSET, *pvar_rset_fanoutRSET,
    *pvar_rset_histogramRSET, *pvar_rset_int64inRSET,
    *pvar_rset_int64outRSET, *pvar_rset_longinRSET,
    *pvar_rset_longoutRSET, *pvar_rset_lsiRSET, *pvar_rset_lsoRSET,
    *pvar_rset_mbbiRSET, *pvar_rset_mbbiDirectRSET, *pvar_rset_mbboRSET,
    *pvar_rset_mbboDirectRSET, *pvar_rset_permissiveRSET,
    *pvar_rset_printfRSET, *pvar_rset_selRSET, *pvar_rset_seqRSET,
    *pvar_rset_stateRSET, *pvar_rset_stringinRSET,
    *pvar_rset_stringoutRSET, *pvar_rset_subRSET, *pvar_rset_subArrayRSET,
    *pvar_rset_waveformRSET;

typedef int (*rso_func)(dbRecordType *pdbRecordType);
epicsShareExtern rso_func pvar_func_aSubRecordSizeOffset,
    pvar_func_aaiRecordSizeOffset, pvar_func_aaoRecordSizeOffset,
    pvar_func_aiRecordSizeOffset, pvar_func_aoRecordSizeOffset,
    pvar_func_biRecordSizeOffset, pvar_func_boRecordSizeOffset,
    pvar_func_calcRecordSizeOffset, pvar_func_calcoutRecordSizeOffset,
    pvar_func_compressRecordSizeOffset, pvar_func_dfanoutRecordSizeOffset,
    pvar_func_eventRecordSizeOffset, pvar_func_fanoutRecordSizeOffset,
    pvar_func_histogramRecordSizeOffset,
    pvar_func_int64inRecordSizeOffset, pvar_func_int64outRecordSizeOffset,
    pvar_func_longinRecordSizeOffset, pvar_func_longoutRecordSizeOffset,
    pvar_func_lsiRecordSizeOffset, pvar_func_lsoRecordSizeOffset,
    pvar_func_mbbiRecordSizeOffset, pvar_func_mbbiDirectRecordSizeOffset,
    pvar_func_mbboRecordSizeOffset, pvar_func_mbboDirectRecordSizeOffset,
    pvar_func_permissiveRecordSizeOffset,
    pvar_func_printfRecordSizeOffset, pvar_func_selRecordSizeOffset,
    pvar_func_seqRecordSizeOffset, pvar_func_stateRecordSizeOffset,
    pvar_func_stringinRecordSizeOffset,
    pvar_func_stringoutRecordSizeOffset, pvar_func_subRecordSizeOffset,
    pvar_func_subArrayRecordSizeOffset, pvar_func_waveformRecordSizeOffset;

static const char * const recordTypeNames[] = {
    "aSub", "aai", "aao", "ai", "ao", "bi", "bo", "calc", "calcout",
    "compress", "dfanout", "event", "fanout", "histogram", "int64in",
    "int64out", "longin", "longout", "lsi", "lso", "mbbi", "mbbiDirect",
    "mbbo", "mbboDirect", "permissive", "printf", "sel", "seq", "state",
    "stringin", "stringout", "sub", "subArray", "waveform"
};

static const recordTypeLocation rtl[] = {
    {(struct typed_rset *)pvar_rset_aSubRSET, pvar_func_aSubRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aaiRSET, pvar_func_aaiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aaoRSET, pvar_func_aaoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aiRSET, pvar_func_aiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_aoRSET, pvar_func_aoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_biRSET, pvar_func_biRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_boRSET, pvar_func_boRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_calcRSET, pvar_func_calcRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_calcoutRSET, pvar_func_calcoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_compressRSET, pvar_func_compressRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_dfanoutRSET, pvar_func_dfanoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_eventRSET, pvar_func_eventRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_fanoutRSET, pvar_func_fanoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_histogramRSET, pvar_func_histogramRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_int64inRSET, pvar_func_int64inRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_int64outRSET, pvar_func_int64outRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_longinRSET, pvar_func_longinRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_longoutRSET, pvar_func_longoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_lsiRSET, pvar_func_lsiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_lsoRSET, pvar_func_lsoRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbbiRSET, pvar_func_mbbiRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbbiDirectRSET, pvar_func_mbbiDirectRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbboRSET, pvar_func_mbboRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_mbboDirectRSET, pvar_func_mbboDirectRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_permissiveRSET, pvar_func_permissiveRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_printfRSET, pvar_func_printfRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_selRSET, pvar_func_selRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_seqRSET, pvar_func_seqRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stateRSET, pvar_func_stateRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stringinRSET, pvar_func_stringinRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_stringoutRSET, pvar_func_stringoutRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_subRSET, pvar_func_subRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_subArrayRSET, pvar_func_subArrayRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_waveformRSET, pvar_func_waveformRecordSizeOffset}
};

epicsShareExtern dset *pvar_dset_devAaiSoft, *pvar_dset_devAaoSoft,
    *pvar_dset_devAiSoft, *pvar_dset_devAiSoftRaw,
    *pvar_dset_devAiSoftCallback, *pvar_dset_devTimestampAI,
    *pvar_dset_devAiGeneralTime, *pvar_dset_devAoSoft,
    *pvar_dset_devAoSoftRaw, *pvar_dset_devAoSoftCallback,
    *pvar_dset_devBiSoft, *pvar_dset_devBiSoftRaw,
    *pvar_dset_devBiSoftCallback, *pvar_dset_devBiDbState,
    *pvar_dset_devBoSoft, *pvar_dset_devBoSoftRaw,
    *pvar_dset_devBoSoftCallback, *pvar_dset_devBoGeneralTime,
    *pvar_dset_devBoDbState, *pvar_dset_devCalcoutSoft,
    *pvar_dset_devCalcoutSoftCallback, *pvar_dset_devEventSoft,
    *pvar_dset_devHistogramSoft, *pvar_dset_devI64inSoft,
    *pvar_dset_devI64inSoftCallback, *pvar_dset_devI64outSoft,
    *pvar_dset_devI64outSoftCallback, *pvar_dset_devLiSoft,
    *pvar_dset_devLiSoftCallback, *pvar_dset_devLiGeneralTime,
    *pvar_dset_devLoSoft, *pvar_dset_devLoSoftCallback,
    *pvar_dset_devLsiSoft, *pvar_dset_devLsiEnviron,
    *pvar_dset_devLsoSoft, *pvar_dset_devLsoSoftCallback,
    *pvar_dset_devLsoStdio, *pvar_dset_devMbbiSoft,
    *pvar_dset_devMbbiSoftRaw, *pvar_dset_devMbbiSoftCallback,
    *pvar_dset_devMbbiDirectSoft, *pvar_dset_devMbbiDirectSoftRaw,
    *pvar_dset_devMbbiDirectSoftCallback, *pvar_dset_devMbboSoft,
    *pvar_dset_devMbboSoftRaw, *pvar_dset_devMbboSoftCallback,
    *pvar_dset_devMbboDirectSoft, *pvar_dset_devMbboDirectSoftRaw,
    *pvar_dset_devMbboDirectSoftCallback, *pvar_dset_devPrintfSoft,
    *pvar_dset_devPrintfSoftCallback, *pvar_dset_devPrintfStdio,
    *pvar_dset_devSiSoft, *pvar_dset_devSiSoftCallback,
    *pvar_dset_devTimestampSI, *pvar_dset_devSiGeneralTime,
    *pvar_dset_devSiEnviron, *pvar_dset_devSoSoft,
    *pvar_dset_devSoSoftCallback, *pvar_dset_devSoStdio,
    *pvar_dset_devSASoft, *pvar_dset_devWfSoft;

static const char * const deviceSupportNames[] = {
    "devAaiSoft", "devAaoSoft", "devAiSoft", "devAiSoftRaw",
    "devAiSoftCallback", "devTimestampAI", "devAiGeneralTime",
    "devAoSoft", "devAoSoftRaw", "devAoSoftCallback", "devBiSoft",
    "devBiSoftRaw", "devBiSoftCallback", "devBiDbState", "devBoSoft",
    "devBoSoftRaw", "devBoSoftCallback", "devBoGeneralTime",
    "devBoDbState", "devCalcoutSoft", "devCalcoutSoftCallback",
    "devEventSoft", "devHistogramSoft", "devI64inSoft",
    "devI64inSoftCallback", "devI64outSoft", "devI64outSoftCallback",
    "devLiSoft", "devLiSoftCallback", "devLiGeneralTime", "devLoSoft",
    "devLoSoftCallback", "devLsiSoft", "devLsiEnviron", "devLsoSoft",
    "devLsoSoftCallback", "devLsoStdio", "devMbbiSoft", "devMbbiSoftRaw",
    "devMbbiSoftCallback", "devMbbiDirectSoft", "devMbbiDirectSoftRaw",
    "devMbbiDirectSoftCallback", "devMbboSoft", "devMbboSoftRaw",
    "devMbboSoftCallback", "devMbboDirectSoft", "devMbboDirectSoftRaw",
    "devMbboDirectSoftCallback", "devPrintfSoft", "devPrintfSoftCallback",
    "devPrintfStdio", "devSiSoft", "devSiSoftCallback", "devTimestampSI",
    "devSiGeneralTime", "devSiEnviron", "devSoSoft", "devSoSoftCallback",
    "devSoStdio", "devSASoft", "devWfSoft"
};

static const dset * const devsl[] = {
    pvar_dset_devAaiSoft, pvar_dset_devAaoSoft, pvar_dset_devAiSoft,
    pvar_dset_devAiSoftRaw, pvar_dset_devAiSoftCallback,
    pvar_dset_devTimestampAI, pvar_dset_devAiGeneralTime,
    pvar_dset_devAoSoft, pvar_dset_devAoSoftRaw,
    pvar_dset_devAoSoftCallback, pvar_dset_devBiSoft,
    pvar_dset_devBiSoftRaw, pvar_dset_devBiSoftCallback,
    pvar_dset_devBiDbState, pvar_dset_devBoSoft, pvar_dset_devBoSoftRaw,
    pvar_dset_devBoSoftCallback, pvar_dset_devBoGeneralTime,
    pvar_dset_devBoDbState, pvar_dset_devCalcoutSoft,
    pvar_dset_devCalcoutSoftCallback, pvar_dset_devEventSoft,
    pvar_dset_devHistogramSoft, pvar_dset_devI64inSoft,
    pvar_dset_devI64inSoftCallback, pvar_dset_devI64outSoft,
    pvar_dset_devI64outSoftCallback, pvar_dset_devLiSoft,
    pvar_dset_devLiSoftCallback, pvar_dset_devLiGeneralTime,
    pvar_dset_devLoSoft, pvar_dset_devLoSoftCallback,
    pvar_dset_devLsiSoft, pvar_dset_devLsiEnviron, pvar_dset_devLsoSoft,
    pvar_dset_devLsoSoftCallback, pvar_dset_devLsoStdio,
    pvar_dset_devMbbiSoft, pvar_dset_devMbbiSoftRaw,
    pvar_dset_devMbbiSoftCallback, pvar_dset_devMbbiDirectSoft,
    pvar_dset_devMbbiDirectSoftRaw, pvar_dset_devMbbiDirectSoftCallback,
    pvar_dset_devMbboSoft, pvar_dset_devMbboSoftRaw,
    pvar_dset_devMbboSoftCallback, pvar_dset_devMbboDirectSoft,
    pvar_dset_devMbboDirectSoftRaw, pvar_dset_devMbboDirectSoftCallback,
    pvar_dset_devPrintfSoft, pvar_dset_devPrintfSoftCallback,
    pvar_dset_devPrintfStdio, pvar_dset_devSiSoft,
    pvar_dset_devSiSoftCallback, pvar_dset_devTimestampSI,
    pvar_dset_devSiGeneralTime, pvar_dset_devSiEnviron,
    pvar_dset_devSoSoft, pvar_dset_devSoSoftCallback,
    pvar_dset_devSoStdio, pvar_dset_devSASoft, pvar_dset_devWfSoft
};

epicsShareExtern jlif *pvar_jlif_lnkCalcIf, *pvar_jlif_lnkConstIf,
    *pvar_jlif_lnkDebugIf, *pvar_jlif_lnkStateIf, *pvar_jlif_lnkTraceIf;

static struct jlif *jlifsl[] = {
    pvar_jlif_lnkCalcIf,
    pvar_jlif_lnkConstIf,
    pvar_jlif_lnkDebugIf,
    pvar_jlif_lnkStateIf,
    pvar_jlif_lnkTraceIf};

typedef void (*reg_func)(void);
epicsShareExtern reg_func pvar_func_arrInitialize, pvar_func_asSub,
    pvar_func_dbndInitialize, pvar_func_decInitialize,
    pvar_func_dlloadRegistar, pvar_func_iocshSystemCommand,
    pvar_func_rsrvRegistrar, pvar_func_syncInitialize,
    pvar_func_tsInitialize;

epicsShareExtern int * const pvar_int_CASDEBUG;
epicsShareExtern int * const pvar_int_asCaDebug;
epicsShareExtern int * const pvar_int_atExitDebug;
epicsShareExtern double * const pvar_double_boHIGHlimit;
epicsShareExtern int * const pvar_int_boHIGHprecision;
epicsShareExtern double * const pvar_double_calcoutODLYlimit;
epicsShareExtern int * const pvar_int_calcoutODLYprecision;
epicsShareExtern int * const pvar_int_callbackParallelThreadsDefault;
epicsShareExtern int * const pvar_int_dbAccessDebugPUTF;
epicsShareExtern int * const pvar_int_dbBptNotMonotonic;
epicsShareExtern int * const pvar_int_dbConvertStrict;
epicsShareExtern int * const pvar_int_dbJLinkDebug;
epicsShareExtern int * const pvar_int_dbQuietMacroWarnings;
epicsShareExtern int * const pvar_int_dbRecordsAbcSorted;
epicsShareExtern int * const pvar_int_dbRecordsOnceOnly;
epicsShareExtern int * const pvar_int_dbTemplateMaxVars;
epicsShareExtern int * const pvar_int_dbThreadRealtimeLock;
epicsShareExtern int * const pvar_int_histogramSDELprecision;
epicsShareExtern int * const pvar_int_lnkDebug_debug;
epicsShareExtern int * const pvar_int_logClientDebug;
epicsShareExtern double * const pvar_double_seqDLYlimit;
epicsShareExtern int * const pvar_int_seqDLYprecision;

static struct iocshVarDef vardefs[] = {
    {"CASDEBUG", iocshArgInt, pvar_int_CASDEBUG},
    {"asCaDebug", iocshArgInt, pvar_int_asCaDebug},
    {"atExitDebug", iocshArgInt, pvar_int_atExitDebug},
    {"boHIGHlimit", iocshArgDouble, pvar_double_boHIGHlimit},
    {"boHIGHprecision", iocshArgInt, pvar_int_boHIGHprecision},
    {"calcoutODLYlimit", iocshArgDouble, pvar_double_calcoutODLYlimit},
    {"calcoutODLYprecision", iocshArgInt, pvar_int_calcoutODLYprecision},
    {"callbackParallelThreadsDefault", iocshArgInt, pvar_int_callbackParallelThreadsDefault},
    {"dbAccessDebugPUTF", iocshArgInt, pvar_int_dbAccessDebugPUTF},
    {"dbBptNotMonotonic", iocshArgInt, pvar_int_dbBptNotMonotonic},
    {"dbConvertStrict", iocshArgInt, pvar_int_dbConvertStrict},
    {"dbJLinkDebug", iocshArgInt, pvar_int_dbJLinkDebug},
    {"dbQuietMacroWarnings", iocshArgInt, pvar_int_dbQuietMacroWarnings},
    {"dbRecordsAbcSorted", iocshArgInt, pvar_int_dbRecordsAbcSorted},
    {"dbRecordsOnceOnly", iocshArgInt, pvar_int_dbRecordsOnceOnly},
    {"dbTemplateMaxVars", iocshArgInt, pvar_int_dbTemplateMaxVars},
    {"dbThreadRealtimeLock", iocshArgInt, pvar_int_dbThreadRealtimeLock},
    {"histogramSDELprecision", iocshArgInt, pvar_int_histogramSDELprecision},
    {"lnkDebug_debug", iocshArgInt, pvar_int_lnkDebug_debug},
    {"logClientDebug", iocshArgInt, pvar_int_logClientDebug},
    {"seqDLYlimit", iocshArgDouble, pvar_double_seqDLYlimit},
    {"seqDLYprecision", iocshArgInt, pvar_int_seqDLYprecision},
    {NULL, iocshArgInt, NULL}
};

#define epicsExportSharedSymbols
#include "shareLib.h"

epicsShareFunc
int softIoc_registerRecordDeviceDriver(DBBASE *pbase)
{
    static int executed = 0;
    const char *bldTop = "/home/mdavidsaver/work/epics/scratch/base";
    const char *envTop = getenv("TOP");

    if (envTop && strcmp(envTop, bldTop)) {
        printf("Warning: IOC is booting with TOP = \"%s\"\n"
               "          but was built with TOP = \"%s\"\n",
               envTop, bldTop);
    }

    if (!pbase) {
        printf("pdbbase is NULL; you must load a DBD file first.\n");
        return -1;
    }

    if (executed) {
        printf("Warning: Registration already done.\n");
    }
    executed = 1;

    registerRecordTypes(pbase, NELEMENTS(rtl), recordTypeNames, rtl);
    registerDevices(pbase, NELEMENTS(devsl), deviceSupportNames, devsl);
    registerJLinks(pbase, NELEMENTS(jlifsl), jlifsl);
    pvar_func_arrInitialize();
    pvar_func_asSub();
    pvar_func_dbndInitialize();
    pvar_func_decInitialize();
    pvar_func_dlloadRegistar();
    pvar_func_iocshSystemCommand();
    pvar_func_rsrvRegistrar();
    pvar_func_syncInitialize();
    pvar_func_tsInitialize();
    iocshRegisterVariable(vardefs);
    return 0;
}

/* softIoc_registerRecordDeviceDriver */
static const iocshArg rrddArg0 = {"pdbbase", iocshArgPdbbase};
static const iocshArg *rrddArgs[] = {&rrddArg0};
static const iocshFuncDef rrddFuncDef =
    {"softIoc_registerRecordDeviceDriver", 1, rrddArgs};
static void rrddCallFunc(const iocshArgBuf *)
{
    iocshSetError(softIoc_registerRecordDeviceDriver(*iocshPpdbbase));
}

} // extern "C"

/*
 * Register commands on application startup
 */
static int Registration() {
    iocshRegisterCommon();
    iocshRegister(&rrddFuncDef, rrddCallFunc);
    return 0;
}

static int done EPICS_UNUSED = Registration();
