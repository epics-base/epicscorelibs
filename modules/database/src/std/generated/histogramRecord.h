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
    prt->papFldDes[histogramRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[histogramRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[histogramRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[histogramRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[histogramRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[histogramRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[histogramRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[histogramRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[histogramRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[histogramRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[histogramRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[histogramRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[histogramRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[histogramRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[histogramRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[histogramRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[histogramRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[histogramRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[histogramRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[histogramRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[histogramRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[histogramRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[histogramRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[histogramRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[histogramRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[histogramRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[histogramRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[histogramRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[histogramRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[histogramRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[histogramRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[histogramRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[histogramRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[histogramRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[histogramRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[histogramRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[histogramRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[histogramRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[histogramRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[histogramRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[histogramRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[histogramRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[histogramRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[histogramRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[histogramRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[histogramRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[histogramRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[histogramRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[histogramRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[histogramRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[histogramRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[histogramRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[histogramRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[histogramRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[histogramRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[histogramRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[histogramRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[histogramRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[histogramRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[histogramRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[histogramRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[histogramRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[histogramRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[histogramRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[histogramRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[histogramRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[histogramRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[histogramRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[histogramRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[histogramRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[histogramRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[histogramRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[histogramRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[histogramRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[histogramRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[histogramRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[histogramRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[histogramRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[histogramRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[histogramRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[histogramRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[histogramRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[histogramRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[histogramRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[histogramRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[histogramRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[histogramRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[histogramRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[histogramRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[histogramRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[histogramRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[histogramRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[histogramRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[histogramRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[histogramRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[histogramRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[histogramRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[histogramRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[histogramRecordNELM]->offset = (unsigned short)((char *)&prec->nelm - (char *)prec);
    prt->papFldDes[histogramRecordCSTA]->size = sizeof(prec->csta);
    prt->papFldDes[histogramRecordCSTA]->offset = (unsigned short)((char *)&prec->csta - (char *)prec);
    prt->papFldDes[histogramRecordCMD]->size = sizeof(prec->cmd);
    prt->papFldDes[histogramRecordCMD]->offset = (unsigned short)((char *)&prec->cmd - (char *)prec);
    prt->papFldDes[histogramRecordULIM]->size = sizeof(prec->ulim);
    prt->papFldDes[histogramRecordULIM]->offset = (unsigned short)((char *)&prec->ulim - (char *)prec);
    prt->papFldDes[histogramRecordLLIM]->size = sizeof(prec->llim);
    prt->papFldDes[histogramRecordLLIM]->offset = (unsigned short)((char *)&prec->llim - (char *)prec);
    prt->papFldDes[histogramRecordWDTH]->size = sizeof(prec->wdth);
    prt->papFldDes[histogramRecordWDTH]->offset = (unsigned short)((char *)&prec->wdth - (char *)prec);
    prt->papFldDes[histogramRecordSGNL]->size = sizeof(prec->sgnl);
    prt->papFldDes[histogramRecordSGNL]->offset = (unsigned short)((char *)&prec->sgnl - (char *)prec);
    prt->papFldDes[histogramRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[histogramRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[histogramRecordSVL]->size = sizeof(prec->svl);
    prt->papFldDes[histogramRecordSVL]->offset = (unsigned short)((char *)&prec->svl - (char *)prec);
    prt->papFldDes[histogramRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[histogramRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->papFldDes[histogramRecordWDOG]->size = sizeof(prec->wdog);
    prt->papFldDes[histogramRecordWDOG]->offset = (unsigned short)((char *)&prec->wdog - (char *)prec);
    prt->papFldDes[histogramRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[histogramRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[histogramRecordMCNT]->size = sizeof(prec->mcnt);
    prt->papFldDes[histogramRecordMCNT]->offset = (unsigned short)((char *)&prec->mcnt - (char *)prec);
    prt->papFldDes[histogramRecordSDEL]->size = sizeof(prec->sdel);
    prt->papFldDes[histogramRecordSDEL]->offset = (unsigned short)((char *)&prec->sdel - (char *)prec);
    prt->papFldDes[histogramRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[histogramRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[histogramRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[histogramRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[histogramRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[histogramRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[histogramRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[histogramRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[histogramRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[histogramRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[histogramRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[histogramRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[histogramRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[histogramRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[histogramRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[histogramRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[histogramRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[histogramRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[histogramRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[histogramRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[histogramRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[histogramRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(histogramRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_histogramRecord_H */
