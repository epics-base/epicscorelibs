/** @file waveformRecord.h
 * @brief Declarations for the @ref waveformRecord "waveform" record type.
 *
 * This header was generated from waveformRecord.dbd
 */

#ifndef INC_waveformRecord_H
#define INC_waveformRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct waveformRecord;
typedef struct wfdset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*read_wf)(struct waveformRecord *prec); /*returns: (-1,0)=>(failure,success)*/
} wfdset;
#define HAS_wfdset

#include "callback.h"

#ifndef waveformPOST_NUM_CHOICES
/** @brief Enumerated type from menu waveformPOST */
typedef enum {
    waveformPOST_Always             /**< @brief State string "Always" */,
    waveformPOST_OnChange           /**< @brief State string "On Change" */
} waveformPOST;
/** @brief Number of states defined for menu waveformPOST */
#define waveformPOST_NUM_CHOICES 2
#endif

/** @brief Declaration of waveform record type. */
typedef struct waveformRecord {
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
    void *		val;                    /**< @brief Value */
    epicsInt16          rarm;       /**< @brief Rearm the waveform */
    epicsInt16          prec;       /**< @brief Display Precision */
    DBLINK              inp;        /**< @brief Input Specification */
    char                egu[16];    /**< @brief Engineering Units */
    epicsFloat64        hopr;       /**< @brief High Operating Range */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsUInt32         nelm;       /**< @brief Number of Elements */
    epicsEnum16         ftvl;       /**< @brief Field Type of Value */
    epicsInt16          busy;       /**< @brief Busy Indicator */
    epicsUInt32         nord;       /**< @brief Number elements read */
    void *		bptr;                   /**< @brief Buffer Pointer */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         mpst;       /**< @brief Post Value Monitors */
    epicsEnum16         apst;       /**< @brief Post Archive Monitors */
    epicsUInt32         hash;       /**< @brief Hash of OnChange data. */
} waveformRecord;

typedef enum {
	waveformRecordNAME = 0,
	waveformRecordDESC = 1,
	waveformRecordASG = 2,
	waveformRecordSCAN = 3,
	waveformRecordPINI = 4,
	waveformRecordPHAS = 5,
	waveformRecordEVNT = 6,
	waveformRecordTSE = 7,
	waveformRecordTSEL = 8,
	waveformRecordDTYP = 9,
	waveformRecordDISV = 10,
	waveformRecordDISA = 11,
	waveformRecordSDIS = 12,
	waveformRecordMLOK = 13,
	waveformRecordMLIS = 14,
	waveformRecordBKLNK = 15,
	waveformRecordDISP = 16,
	waveformRecordPROC = 17,
	waveformRecordSTAT = 18,
	waveformRecordSEVR = 19,
	waveformRecordAMSG = 20,
	waveformRecordNSTA = 21,
	waveformRecordNSEV = 22,
	waveformRecordNAMSG = 23,
	waveformRecordACKS = 24,
	waveformRecordACKT = 25,
	waveformRecordDISS = 26,
	waveformRecordLCNT = 27,
	waveformRecordPACT = 28,
	waveformRecordPUTF = 29,
	waveformRecordRPRO = 30,
	waveformRecordASP = 31,
	waveformRecordPPN = 32,
	waveformRecordPPNR = 33,
	waveformRecordSPVT = 34,
	waveformRecordRSET = 35,
	waveformRecordDSET = 36,
	waveformRecordDPVT = 37,
	waveformRecordRDES = 38,
	waveformRecordLSET = 39,
	waveformRecordPRIO = 40,
	waveformRecordTPRO = 41,
	waveformRecordBKPT = 42,
	waveformRecordUDF = 43,
	waveformRecordUDFS = 44,
	waveformRecordTIME = 45,
	waveformRecordUTAG = 46,
	waveformRecordFLNK = 47,
	waveformRecordVAL = 48,
	waveformRecordRARM = 49,
	waveformRecordPREC = 50,
	waveformRecordINP = 51,
	waveformRecordEGU = 52,
	waveformRecordHOPR = 53,
	waveformRecordLOPR = 54,
	waveformRecordNELM = 55,
	waveformRecordFTVL = 56,
	waveformRecordBUSY = 57,
	waveformRecordNORD = 58,
	waveformRecordBPTR = 59,
	waveformRecordSIOL = 60,
	waveformRecordSIML = 61,
	waveformRecordSIMM = 62,
	waveformRecordSIMS = 63,
	waveformRecordOLDSIMM = 64,
	waveformRecordSSCN = 65,
	waveformRecordSDLY = 66,
	waveformRecordSIMPVT = 67,
	waveformRecordMPST = 68,
	waveformRecordAPST = 69,
	waveformRecordHASH = 70
} waveformFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int waveformRecordSizeOffset(dbRecordType *prt)
{
    waveformRecord *prec = 0;

    if (prt->no_fields != 71) {
        cantProceed("IOC build or installation error:\n"
            "    The waveformRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 71.\n",
            prt->no_fields);
    }
    prt->papFldDes[waveformRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[waveformRecordNAME]->offset = (unsigned short)offsetof(waveformRecord, name);
    prt->papFldDes[waveformRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[waveformRecordDESC]->offset = (unsigned short)offsetof(waveformRecord, desc);
    prt->papFldDes[waveformRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[waveformRecordASG]->offset = (unsigned short)offsetof(waveformRecord, asg);
    prt->papFldDes[waveformRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[waveformRecordSCAN]->offset = (unsigned short)offsetof(waveformRecord, scan);
    prt->papFldDes[waveformRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[waveformRecordPINI]->offset = (unsigned short)offsetof(waveformRecord, pini);
    prt->papFldDes[waveformRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[waveformRecordPHAS]->offset = (unsigned short)offsetof(waveformRecord, phas);
    prt->papFldDes[waveformRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[waveformRecordEVNT]->offset = (unsigned short)offsetof(waveformRecord, evnt);
    prt->papFldDes[waveformRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[waveformRecordTSE]->offset = (unsigned short)offsetof(waveformRecord, tse);
    prt->papFldDes[waveformRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[waveformRecordTSEL]->offset = (unsigned short)offsetof(waveformRecord, tsel);
    prt->papFldDes[waveformRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[waveformRecordDTYP]->offset = (unsigned short)offsetof(waveformRecord, dtyp);
    prt->papFldDes[waveformRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[waveformRecordDISV]->offset = (unsigned short)offsetof(waveformRecord, disv);
    prt->papFldDes[waveformRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[waveformRecordDISA]->offset = (unsigned short)offsetof(waveformRecord, disa);
    prt->papFldDes[waveformRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[waveformRecordSDIS]->offset = (unsigned short)offsetof(waveformRecord, sdis);
    prt->papFldDes[waveformRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[waveformRecordMLOK]->offset = (unsigned short)offsetof(waveformRecord, mlok);
    prt->papFldDes[waveformRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[waveformRecordMLIS]->offset = (unsigned short)offsetof(waveformRecord, mlis);
    prt->papFldDes[waveformRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[waveformRecordBKLNK]->offset = (unsigned short)offsetof(waveformRecord, bklnk);
    prt->papFldDes[waveformRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[waveformRecordDISP]->offset = (unsigned short)offsetof(waveformRecord, disp);
    prt->papFldDes[waveformRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[waveformRecordPROC]->offset = (unsigned short)offsetof(waveformRecord, proc);
    prt->papFldDes[waveformRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[waveformRecordSTAT]->offset = (unsigned short)offsetof(waveformRecord, stat);
    prt->papFldDes[waveformRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[waveformRecordSEVR]->offset = (unsigned short)offsetof(waveformRecord, sevr);
    prt->papFldDes[waveformRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[waveformRecordAMSG]->offset = (unsigned short)offsetof(waveformRecord, amsg);
    prt->papFldDes[waveformRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[waveformRecordNSTA]->offset = (unsigned short)offsetof(waveformRecord, nsta);
    prt->papFldDes[waveformRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[waveformRecordNSEV]->offset = (unsigned short)offsetof(waveformRecord, nsev);
    prt->papFldDes[waveformRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[waveformRecordNAMSG]->offset = (unsigned short)offsetof(waveformRecord, namsg);
    prt->papFldDes[waveformRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[waveformRecordACKS]->offset = (unsigned short)offsetof(waveformRecord, acks);
    prt->papFldDes[waveformRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[waveformRecordACKT]->offset = (unsigned short)offsetof(waveformRecord, ackt);
    prt->papFldDes[waveformRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[waveformRecordDISS]->offset = (unsigned short)offsetof(waveformRecord, diss);
    prt->papFldDes[waveformRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[waveformRecordLCNT]->offset = (unsigned short)offsetof(waveformRecord, lcnt);
    prt->papFldDes[waveformRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[waveformRecordPACT]->offset = (unsigned short)offsetof(waveformRecord, pact);
    prt->papFldDes[waveformRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[waveformRecordPUTF]->offset = (unsigned short)offsetof(waveformRecord, putf);
    prt->papFldDes[waveformRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[waveformRecordRPRO]->offset = (unsigned short)offsetof(waveformRecord, rpro);
    prt->papFldDes[waveformRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[waveformRecordASP]->offset = (unsigned short)offsetof(waveformRecord, asp);
    prt->papFldDes[waveformRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[waveformRecordPPN]->offset = (unsigned short)offsetof(waveformRecord, ppn);
    prt->papFldDes[waveformRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[waveformRecordPPNR]->offset = (unsigned short)offsetof(waveformRecord, ppnr);
    prt->papFldDes[waveformRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[waveformRecordSPVT]->offset = (unsigned short)offsetof(waveformRecord, spvt);
    prt->papFldDes[waveformRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[waveformRecordRSET]->offset = (unsigned short)offsetof(waveformRecord, rset);
    prt->papFldDes[waveformRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[waveformRecordDSET]->offset = (unsigned short)offsetof(waveformRecord, dset);
    prt->papFldDes[waveformRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[waveformRecordDPVT]->offset = (unsigned short)offsetof(waveformRecord, dpvt);
    prt->papFldDes[waveformRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[waveformRecordRDES]->offset = (unsigned short)offsetof(waveformRecord, rdes);
    prt->papFldDes[waveformRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[waveformRecordLSET]->offset = (unsigned short)offsetof(waveformRecord, lset);
    prt->papFldDes[waveformRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[waveformRecordPRIO]->offset = (unsigned short)offsetof(waveformRecord, prio);
    prt->papFldDes[waveformRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[waveformRecordTPRO]->offset = (unsigned short)offsetof(waveformRecord, tpro);
    prt->papFldDes[waveformRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[waveformRecordBKPT]->offset = (unsigned short)offsetof(waveformRecord, bkpt);
    prt->papFldDes[waveformRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[waveformRecordUDF]->offset = (unsigned short)offsetof(waveformRecord, udf);
    prt->papFldDes[waveformRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[waveformRecordUDFS]->offset = (unsigned short)offsetof(waveformRecord, udfs);
    prt->papFldDes[waveformRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[waveformRecordTIME]->offset = (unsigned short)offsetof(waveformRecord, time);
    prt->papFldDes[waveformRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[waveformRecordUTAG]->offset = (unsigned short)offsetof(waveformRecord, utag);
    prt->papFldDes[waveformRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[waveformRecordFLNK]->offset = (unsigned short)offsetof(waveformRecord, flnk);
    prt->papFldDes[waveformRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[waveformRecordVAL]->offset = (unsigned short)offsetof(waveformRecord, val);
    prt->papFldDes[waveformRecordRARM]->size = sizeof(prec->rarm);
    prt->papFldDes[waveformRecordRARM]->offset = (unsigned short)offsetof(waveformRecord, rarm);
    prt->papFldDes[waveformRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[waveformRecordPREC]->offset = (unsigned short)offsetof(waveformRecord, prec);
    prt->papFldDes[waveformRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[waveformRecordINP]->offset = (unsigned short)offsetof(waveformRecord, inp);
    prt->papFldDes[waveformRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[waveformRecordEGU]->offset = (unsigned short)offsetof(waveformRecord, egu);
    prt->papFldDes[waveformRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[waveformRecordHOPR]->offset = (unsigned short)offsetof(waveformRecord, hopr);
    prt->papFldDes[waveformRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[waveformRecordLOPR]->offset = (unsigned short)offsetof(waveformRecord, lopr);
    prt->papFldDes[waveformRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[waveformRecordNELM]->offset = (unsigned short)offsetof(waveformRecord, nelm);
    prt->papFldDes[waveformRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[waveformRecordFTVL]->offset = (unsigned short)offsetof(waveformRecord, ftvl);
    prt->papFldDes[waveformRecordBUSY]->size = sizeof(prec->busy);
    prt->papFldDes[waveformRecordBUSY]->offset = (unsigned short)offsetof(waveformRecord, busy);
    prt->papFldDes[waveformRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[waveformRecordNORD]->offset = (unsigned short)offsetof(waveformRecord, nord);
    prt->papFldDes[waveformRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[waveformRecordBPTR]->offset = (unsigned short)offsetof(waveformRecord, bptr);
    prt->papFldDes[waveformRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[waveformRecordSIOL]->offset = (unsigned short)offsetof(waveformRecord, siol);
    prt->papFldDes[waveformRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[waveformRecordSIML]->offset = (unsigned short)offsetof(waveformRecord, siml);
    prt->papFldDes[waveformRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[waveformRecordSIMM]->offset = (unsigned short)offsetof(waveformRecord, simm);
    prt->papFldDes[waveformRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[waveformRecordSIMS]->offset = (unsigned short)offsetof(waveformRecord, sims);
    prt->papFldDes[waveformRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[waveformRecordOLDSIMM]->offset = (unsigned short)offsetof(waveformRecord, oldsimm);
    prt->papFldDes[waveformRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[waveformRecordSSCN]->offset = (unsigned short)offsetof(waveformRecord, sscn);
    prt->papFldDes[waveformRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[waveformRecordSDLY]->offset = (unsigned short)offsetof(waveformRecord, sdly);
    prt->papFldDes[waveformRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[waveformRecordSIMPVT]->offset = (unsigned short)offsetof(waveformRecord, simpvt);
    prt->papFldDes[waveformRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[waveformRecordMPST]->offset = (unsigned short)offsetof(waveformRecord, mpst);
    prt->papFldDes[waveformRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[waveformRecordAPST]->offset = (unsigned short)offsetof(waveformRecord, apst);
    prt->papFldDes[waveformRecordHASH]->size = sizeof(prec->hash);
    prt->papFldDes[waveformRecordHASH]->offset = (unsigned short)offsetof(waveformRecord, hash);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(waveformRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_waveformRecord_H */
