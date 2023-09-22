/** @file histogramRecord.h
 * @brief Declarations for the @ref histogramRecord "histogram" record type.
 *
 * This header was generated from histogramRecord.dbd
 */

#ifndef INC_histogramRecord_H
#define INC_histogramRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct histogramRecord;
typedef struct histogramdset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*read_histogram)(struct histogramRecord *prec); /*(0,2)=> success and add_count, don't add_count); if add_count then sgnl added to array*/
    long (*special_linconv)(struct histogramRecord *prec, int after);
} histogramdset;
#define HAS_histogramdset

#include "callback.h"

#ifndef histogramCMD_NUM_CHOICES
/** @brief Enumerated type from menu histogramCMD */
typedef enum {
    histogramCMD_Read               /**< @brief State string "Read" */,
    histogramCMD_Clear              /**< @brief State string "Clear" */,
    histogramCMD_Start              /**< @brief State string "Start" */,
    histogramCMD_Stop               /**< @brief State string "Stop" */
} histogramCMD;
/** @brief Number of states defined for menu histogramCMD */
#define histogramCMD_NUM_CHOICES 4
#endif

/** @brief Declaration of histogram record type. */
typedef struct histogramRecord {
    char                name[61];   /**< @brief Record Name */
    char                desc[41];   /**< @brief Descriptor */
    char                asg[29];    /**< @brief Access Security Group */
    epicsEnum16         scan;       /**< @brief Scan Mechanism */
    epicsEnum16         pini;       /**< @brief Process at iocInit */
    epicsInt16          phas;       /**< @brief Scan Phase */
    char                evnt[40];   /**< @brief Event Name */
    epicsInt16          tse;        /**< @brief Time Stamp Event */
    DBLINK              tsel;       /**< @brief Time Stamp Link */
    epicsEnum16         dtyp;       /**< @brief Device Type */
    epicsInt16          disv;       /**< @brief Disable Value */
    epicsInt16          disa;       /**< @brief Disable */
    DBLINK              sdis;       /**< @brief Scanning Disable */
    epicsMutexId        mlok;       /**< @brief Monitor lock */
    ELLLIST             mlis;       /**< @brief Monitor List */
    ELLLIST             bklnk;      /**< @brief Backwards link tracking */
    epicsUInt8          disp;       /**< @brief Disable putField */
    epicsUInt8          proc;       /**< @brief Force Processing */
    epicsEnum16         stat;       /**< @brief Alarm Status */
    epicsEnum16         sevr;       /**< @brief Alarm Severity */
    char                amsg[40];   /**< @brief Alarm Message */
    epicsEnum16         nsta;       /**< @brief New Alarm Status */
    epicsEnum16         nsev;       /**< @brief New Alarm Severity */
    char                namsg[40];  /**< @brief New Alarm Message */
    epicsEnum16         acks;       /**< @brief Alarm Ack Severity */
    epicsEnum16         ackt;       /**< @brief Alarm Ack Transient */
    epicsEnum16         diss;       /**< @brief Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /**< @brief Lock Count */
    epicsUInt8          pact;       /**< @brief Record active */
    epicsUInt8          putf;       /**< @brief dbPutField process */
    epicsUInt8          rpro;       /**< @brief Reprocess  */
    struct asgMember    *asp;       /**< @brief Access Security Pvt */
    struct processNotify *ppn;      /**< @brief pprocessNotify */
    struct processNotifyRecord *ppnr; /**< @brief pprocessNotifyRecord */
    struct scan_element *spvt;      /**< @brief Scan Private */
    struct typed_rset   *rset;      /**< @brief Address of RSET */
    unambiguous_dset    *dset;      /**< @brief DSET address */
    void                *dpvt;      /**< @brief Device Private */
    struct dbRecordType *rdes;      /**< @brief Address of dbRecordType */
    struct lockRecord   *lset;      /**< @brief Lock Set */
    epicsEnum16         prio;       /**< @brief Scheduling Priority */
    epicsUInt8          tpro;       /**< @brief Trace Processing */
    epicsUInt8          bkpt;       /**< @brief Break Point */
    epicsUInt8          udf;        /**< @brief Undefined */
    epicsEnum16         udfs;       /**< @brief Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /**< @brief Time */
    epicsUInt64         utag;       /**< @brief Time Tag */
    DBLINK              flnk;       /**< @brief Forward Process Link */
    void *	val;                     /**< @brief Value */
    epicsUInt16         nelm;       /**< @brief Num of Array Elements */
    epicsInt16          csta;       /**< @brief Collection Status */
    epicsEnum16         cmd;        /**< @brief Collection Control */
    epicsFloat64        ulim;       /**< @brief Upper Signal Limit */
    epicsFloat64        llim;       /**< @brief Lower Signal Limit  */
    epicsFloat64        wdth;       /**< @brief Element Width */
    epicsFloat64        sgnl;       /**< @brief Signal Value */
    epicsInt16          prec;       /**< @brief Display Precision */
    DBLINK              svl;        /**< @brief Signal Value Location */
    epicsUInt32 *bptr;              /**< @brief Buffer Pointer */
    void *  wdog;                   /**< @brief Watchdog callback */
    epicsInt16          mdel;       /**< @brief Monitor Count Deadband */
    epicsInt16          mcnt;       /**< @brief Counts Since Monitor */
    epicsFloat64        sdel;       /**< @brief Monitor Seconds Dband */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    epicsFloat64        sval;       /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsUInt32         hopr;       /**< @brief High Operating Range */
    epicsUInt32         lopr;       /**< @brief Low Operating Range */
} histogramRecord;

typedef enum {
	histogramRecordNAME = 0,
	histogramRecordDESC = 1,
	histogramRecordASG = 2,
	histogramRecordSCAN = 3,
	histogramRecordPINI = 4,
	histogramRecordPHAS = 5,
	histogramRecordEVNT = 6,
	histogramRecordTSE = 7,
	histogramRecordTSEL = 8,
	histogramRecordDTYP = 9,
	histogramRecordDISV = 10,
	histogramRecordDISA = 11,
	histogramRecordSDIS = 12,
	histogramRecordMLOK = 13,
	histogramRecordMLIS = 14,
	histogramRecordBKLNK = 15,
	histogramRecordDISP = 16,
	histogramRecordPROC = 17,
	histogramRecordSTAT = 18,
	histogramRecordSEVR = 19,
	histogramRecordAMSG = 20,
	histogramRecordNSTA = 21,
	histogramRecordNSEV = 22,
	histogramRecordNAMSG = 23,
	histogramRecordACKS = 24,
	histogramRecordACKT = 25,
	histogramRecordDISS = 26,
	histogramRecordLCNT = 27,
	histogramRecordPACT = 28,
	histogramRecordPUTF = 29,
	histogramRecordRPRO = 30,
	histogramRecordASP = 31,
	histogramRecordPPN = 32,
	histogramRecordPPNR = 33,
	histogramRecordSPVT = 34,
	histogramRecordRSET = 35,
	histogramRecordDSET = 36,
	histogramRecordDPVT = 37,
	histogramRecordRDES = 38,
	histogramRecordLSET = 39,
	histogramRecordPRIO = 40,
	histogramRecordTPRO = 41,
	histogramRecordBKPT = 42,
	histogramRecordUDF = 43,
	histogramRecordUDFS = 44,
	histogramRecordTIME = 45,
	histogramRecordUTAG = 46,
	histogramRecordFLNK = 47,
	histogramRecordVAL = 48,
	histogramRecordNELM = 49,
	histogramRecordCSTA = 50,
	histogramRecordCMD = 51,
	histogramRecordULIM = 52,
	histogramRecordLLIM = 53,
	histogramRecordWDTH = 54,
	histogramRecordSGNL = 55,
	histogramRecordPREC = 56,
	histogramRecordSVL = 57,
	histogramRecordBPTR = 58,
	histogramRecordWDOG = 59,
	histogramRecordMDEL = 60,
	histogramRecordMCNT = 61,
	histogramRecordSDEL = 62,
	histogramRecordSIOL = 63,
	histogramRecordSVAL = 64,
	histogramRecordSIML = 65,
	histogramRecordSIMM = 66,
	histogramRecordSIMS = 67,
	histogramRecordOLDSIMM = 68,
	histogramRecordSSCN = 69,
	histogramRecordSDLY = 70,
	histogramRecordSIMPVT = 71,
	histogramRecordHOPR = 72,
	histogramRecordLOPR = 73
} histogramFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int histogramRecordSizeOffset(dbRecordType *prt)
{
    histogramRecord *prec = 0;

    if (prt->no_fields != 74) {
        cantProceed("IOC build or installation error:\n"
            "    The histogramRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 74.\n",
            prt->no_fields);
    }
    prt->papFldDes[histogramRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[histogramRecordNAME]->offset = (unsigned short)offsetof(histogramRecord, name);
    prt->papFldDes[histogramRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[histogramRecordDESC]->offset = (unsigned short)offsetof(histogramRecord, desc);
    prt->papFldDes[histogramRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[histogramRecordASG]->offset = (unsigned short)offsetof(histogramRecord, asg);
    prt->papFldDes[histogramRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[histogramRecordSCAN]->offset = (unsigned short)offsetof(histogramRecord, scan);
    prt->papFldDes[histogramRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[histogramRecordPINI]->offset = (unsigned short)offsetof(histogramRecord, pini);
    prt->papFldDes[histogramRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[histogramRecordPHAS]->offset = (unsigned short)offsetof(histogramRecord, phas);
    prt->papFldDes[histogramRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[histogramRecordEVNT]->offset = (unsigned short)offsetof(histogramRecord, evnt);
    prt->papFldDes[histogramRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[histogramRecordTSE]->offset = (unsigned short)offsetof(histogramRecord, tse);
    prt->papFldDes[histogramRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[histogramRecordTSEL]->offset = (unsigned short)offsetof(histogramRecord, tsel);
    prt->papFldDes[histogramRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[histogramRecordDTYP]->offset = (unsigned short)offsetof(histogramRecord, dtyp);
    prt->papFldDes[histogramRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[histogramRecordDISV]->offset = (unsigned short)offsetof(histogramRecord, disv);
    prt->papFldDes[histogramRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[histogramRecordDISA]->offset = (unsigned short)offsetof(histogramRecord, disa);
    prt->papFldDes[histogramRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[histogramRecordSDIS]->offset = (unsigned short)offsetof(histogramRecord, sdis);
    prt->papFldDes[histogramRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[histogramRecordMLOK]->offset = (unsigned short)offsetof(histogramRecord, mlok);
    prt->papFldDes[histogramRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[histogramRecordMLIS]->offset = (unsigned short)offsetof(histogramRecord, mlis);
    prt->papFldDes[histogramRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[histogramRecordBKLNK]->offset = (unsigned short)offsetof(histogramRecord, bklnk);
    prt->papFldDes[histogramRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[histogramRecordDISP]->offset = (unsigned short)offsetof(histogramRecord, disp);
    prt->papFldDes[histogramRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[histogramRecordPROC]->offset = (unsigned short)offsetof(histogramRecord, proc);
    prt->papFldDes[histogramRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[histogramRecordSTAT]->offset = (unsigned short)offsetof(histogramRecord, stat);
    prt->papFldDes[histogramRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[histogramRecordSEVR]->offset = (unsigned short)offsetof(histogramRecord, sevr);
    prt->papFldDes[histogramRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[histogramRecordAMSG]->offset = (unsigned short)offsetof(histogramRecord, amsg);
    prt->papFldDes[histogramRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[histogramRecordNSTA]->offset = (unsigned short)offsetof(histogramRecord, nsta);
    prt->papFldDes[histogramRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[histogramRecordNSEV]->offset = (unsigned short)offsetof(histogramRecord, nsev);
    prt->papFldDes[histogramRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[histogramRecordNAMSG]->offset = (unsigned short)offsetof(histogramRecord, namsg);
    prt->papFldDes[histogramRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[histogramRecordACKS]->offset = (unsigned short)offsetof(histogramRecord, acks);
    prt->papFldDes[histogramRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[histogramRecordACKT]->offset = (unsigned short)offsetof(histogramRecord, ackt);
    prt->papFldDes[histogramRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[histogramRecordDISS]->offset = (unsigned short)offsetof(histogramRecord, diss);
    prt->papFldDes[histogramRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[histogramRecordLCNT]->offset = (unsigned short)offsetof(histogramRecord, lcnt);
    prt->papFldDes[histogramRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[histogramRecordPACT]->offset = (unsigned short)offsetof(histogramRecord, pact);
    prt->papFldDes[histogramRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[histogramRecordPUTF]->offset = (unsigned short)offsetof(histogramRecord, putf);
    prt->papFldDes[histogramRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[histogramRecordRPRO]->offset = (unsigned short)offsetof(histogramRecord, rpro);
    prt->papFldDes[histogramRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[histogramRecordASP]->offset = (unsigned short)offsetof(histogramRecord, asp);
    prt->papFldDes[histogramRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[histogramRecordPPN]->offset = (unsigned short)offsetof(histogramRecord, ppn);
    prt->papFldDes[histogramRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[histogramRecordPPNR]->offset = (unsigned short)offsetof(histogramRecord, ppnr);
    prt->papFldDes[histogramRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[histogramRecordSPVT]->offset = (unsigned short)offsetof(histogramRecord, spvt);
    prt->papFldDes[histogramRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[histogramRecordRSET]->offset = (unsigned short)offsetof(histogramRecord, rset);
    prt->papFldDes[histogramRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[histogramRecordDSET]->offset = (unsigned short)offsetof(histogramRecord, dset);
    prt->papFldDes[histogramRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[histogramRecordDPVT]->offset = (unsigned short)offsetof(histogramRecord, dpvt);
    prt->papFldDes[histogramRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[histogramRecordRDES]->offset = (unsigned short)offsetof(histogramRecord, rdes);
    prt->papFldDes[histogramRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[histogramRecordLSET]->offset = (unsigned short)offsetof(histogramRecord, lset);
    prt->papFldDes[histogramRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[histogramRecordPRIO]->offset = (unsigned short)offsetof(histogramRecord, prio);
    prt->papFldDes[histogramRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[histogramRecordTPRO]->offset = (unsigned short)offsetof(histogramRecord, tpro);
    prt->papFldDes[histogramRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[histogramRecordBKPT]->offset = (unsigned short)offsetof(histogramRecord, bkpt);
    prt->papFldDes[histogramRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[histogramRecordUDF]->offset = (unsigned short)offsetof(histogramRecord, udf);
    prt->papFldDes[histogramRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[histogramRecordUDFS]->offset = (unsigned short)offsetof(histogramRecord, udfs);
    prt->papFldDes[histogramRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[histogramRecordTIME]->offset = (unsigned short)offsetof(histogramRecord, time);
    prt->papFldDes[histogramRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[histogramRecordUTAG]->offset = (unsigned short)offsetof(histogramRecord, utag);
    prt->papFldDes[histogramRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[histogramRecordFLNK]->offset = (unsigned short)offsetof(histogramRecord, flnk);
    prt->papFldDes[histogramRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[histogramRecordVAL]->offset = (unsigned short)offsetof(histogramRecord, val);
    prt->papFldDes[histogramRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[histogramRecordNELM]->offset = (unsigned short)offsetof(histogramRecord, nelm);
    prt->papFldDes[histogramRecordCSTA]->size = sizeof(prec->csta);
    prt->papFldDes[histogramRecordCSTA]->offset = (unsigned short)offsetof(histogramRecord, csta);
    prt->papFldDes[histogramRecordCMD]->size = sizeof(prec->cmd);
    prt->papFldDes[histogramRecordCMD]->offset = (unsigned short)offsetof(histogramRecord, cmd);
    prt->papFldDes[histogramRecordULIM]->size = sizeof(prec->ulim);
    prt->papFldDes[histogramRecordULIM]->offset = (unsigned short)offsetof(histogramRecord, ulim);
    prt->papFldDes[histogramRecordLLIM]->size = sizeof(prec->llim);
    prt->papFldDes[histogramRecordLLIM]->offset = (unsigned short)offsetof(histogramRecord, llim);
    prt->papFldDes[histogramRecordWDTH]->size = sizeof(prec->wdth);
    prt->papFldDes[histogramRecordWDTH]->offset = (unsigned short)offsetof(histogramRecord, wdth);
    prt->papFldDes[histogramRecordSGNL]->size = sizeof(prec->sgnl);
    prt->papFldDes[histogramRecordSGNL]->offset = (unsigned short)offsetof(histogramRecord, sgnl);
    prt->papFldDes[histogramRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[histogramRecordPREC]->offset = (unsigned short)offsetof(histogramRecord, prec);
    prt->papFldDes[histogramRecordSVL]->size = sizeof(prec->svl);
    prt->papFldDes[histogramRecordSVL]->offset = (unsigned short)offsetof(histogramRecord, svl);
    prt->papFldDes[histogramRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[histogramRecordBPTR]->offset = (unsigned short)offsetof(histogramRecord, bptr);
    prt->papFldDes[histogramRecordWDOG]->size = sizeof(prec->wdog);
    prt->papFldDes[histogramRecordWDOG]->offset = (unsigned short)offsetof(histogramRecord, wdog);
    prt->papFldDes[histogramRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[histogramRecordMDEL]->offset = (unsigned short)offsetof(histogramRecord, mdel);
    prt->papFldDes[histogramRecordMCNT]->size = sizeof(prec->mcnt);
    prt->papFldDes[histogramRecordMCNT]->offset = (unsigned short)offsetof(histogramRecord, mcnt);
    prt->papFldDes[histogramRecordSDEL]->size = sizeof(prec->sdel);
    prt->papFldDes[histogramRecordSDEL]->offset = (unsigned short)offsetof(histogramRecord, sdel);
    prt->papFldDes[histogramRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[histogramRecordSIOL]->offset = (unsigned short)offsetof(histogramRecord, siol);
    prt->papFldDes[histogramRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[histogramRecordSVAL]->offset = (unsigned short)offsetof(histogramRecord, sval);
    prt->papFldDes[histogramRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[histogramRecordSIML]->offset = (unsigned short)offsetof(histogramRecord, siml);
    prt->papFldDes[histogramRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[histogramRecordSIMM]->offset = (unsigned short)offsetof(histogramRecord, simm);
    prt->papFldDes[histogramRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[histogramRecordSIMS]->offset = (unsigned short)offsetof(histogramRecord, sims);
    prt->papFldDes[histogramRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[histogramRecordOLDSIMM]->offset = (unsigned short)offsetof(histogramRecord, oldsimm);
    prt->papFldDes[histogramRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[histogramRecordSSCN]->offset = (unsigned short)offsetof(histogramRecord, sscn);
    prt->papFldDes[histogramRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[histogramRecordSDLY]->offset = (unsigned short)offsetof(histogramRecord, sdly);
    prt->papFldDes[histogramRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[histogramRecordSIMPVT]->offset = (unsigned short)offsetof(histogramRecord, simpvt);
    prt->papFldDes[histogramRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[histogramRecordHOPR]->offset = (unsigned short)offsetof(histogramRecord, hopr);
    prt->papFldDes[histogramRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[histogramRecordLOPR]->offset = (unsigned short)offsetof(histogramRecord, lopr);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(histogramRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_histogramRecord_H */
