/** @file aiRecord.h
 * @brief Declarations for the @ref aiRecord "ai" record type.
 *
 * This header was generated from aiRecord.dbd
 */

#ifndef INC_aiRecord_H
#define INC_aiRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct aiRecord;
typedef struct aidset {
    dset common;
    long (*read_ai)(struct aiRecord *prec);
    long (*special_linconv)(struct aiRecord *prec, int after);
} aidset;
#define HAS_aidset

#include "callback.h"

/** @brief Declaration of ai record type. */
typedef struct aiRecord {
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
    epicsFloat64        val;        /**< @brief Current EGU Value */
    DBLINK              inp;        /**< @brief Input Specification */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsEnum16         linr;       /**< @brief Linearization */
    epicsFloat64        eguf;       /**< @brief Engineer Units Full */
    epicsFloat64        egul;       /**< @brief Engineer Units Low */
    char                egu[16];    /**< @brief Engineering Units */
    epicsFloat64        hopr;       /**< @brief High Operating Range */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsFloat64        aoff;       /**< @brief Adjustment Offset */
    epicsFloat64        aslo;       /**< @brief Adjustment Slope */
    epicsFloat64        smoo;       /**< @brief Smoothing */
    epicsFloat64        hihi;       /**< @brief Hihi Alarm Limit */
    epicsFloat64        lolo;       /**< @brief Lolo Alarm Limit */
    epicsFloat64        high;       /**< @brief High Alarm Limit */
    epicsFloat64        low;        /**< @brief Low Alarm Limit */
    epicsEnum16         hhsv;       /**< @brief Hihi Severity */
    epicsEnum16         llsv;       /**< @brief Lolo Severity */
    epicsEnum16         hsv;        /**< @brief High Severity */
    epicsEnum16         lsv;        /**< @brief Low Severity */
    epicsFloat64        hyst;       /**< @brief Alarm Deadband */
    epicsFloat64        aftc;       /**< @brief Alarm Filter Time Constant */
    epicsFloat64        adel;       /**< @brief Archive Deadband */
    epicsFloat64        mdel;       /**< @brief Monitor Deadband */
    epicsFloat64        lalm;       /**< @brief Last Value Alarmed */
    epicsFloat64        afvl;       /**< @brief Alarm Filter Value */
    epicsFloat64        alst;       /**< @brief Last Value Archived */
    epicsFloat64        mlst;       /**< @brief Last Val Monitored */
    epicsFloat64        eslo;       /**< @brief Raw to EGU Slope */
    epicsFloat64        eoff;       /**< @brief Raw to EGU Offset */
    epicsUInt32         roff;       /**< @brief Raw Offset */
    void *   pbrk;                  /**< @brief Ptrto brkTable */
    epicsInt16          init;       /**< @brief Initialized? */
    epicsInt16          lbrk;       /**< @brief LastBreak Point */
    epicsInt32          rval;       /**< @brief Current Raw Value */
    epicsInt32          oraw;       /**< @brief Previous Raw Value */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    epicsFloat64        sval;       /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} aiRecord;

typedef enum {
	aiRecordNAME = 0,
	aiRecordDESC = 1,
	aiRecordASG = 2,
	aiRecordSCAN = 3,
	aiRecordPINI = 4,
	aiRecordPHAS = 5,
	aiRecordEVNT = 6,
	aiRecordTSE = 7,
	aiRecordTSEL = 8,
	aiRecordDTYP = 9,
	aiRecordDISV = 10,
	aiRecordDISA = 11,
	aiRecordSDIS = 12,
	aiRecordMLOK = 13,
	aiRecordMLIS = 14,
	aiRecordBKLNK = 15,
	aiRecordDISP = 16,
	aiRecordPROC = 17,
	aiRecordSTAT = 18,
	aiRecordSEVR = 19,
	aiRecordAMSG = 20,
	aiRecordNSTA = 21,
	aiRecordNSEV = 22,
	aiRecordNAMSG = 23,
	aiRecordACKS = 24,
	aiRecordACKT = 25,
	aiRecordDISS = 26,
	aiRecordLCNT = 27,
	aiRecordPACT = 28,
	aiRecordPUTF = 29,
	aiRecordRPRO = 30,
	aiRecordASP = 31,
	aiRecordPPN = 32,
	aiRecordPPNR = 33,
	aiRecordSPVT = 34,
	aiRecordRSET = 35,
	aiRecordDSET = 36,
	aiRecordDPVT = 37,
	aiRecordRDES = 38,
	aiRecordLSET = 39,
	aiRecordPRIO = 40,
	aiRecordTPRO = 41,
	aiRecordBKPT = 42,
	aiRecordUDF = 43,
	aiRecordUDFS = 44,
	aiRecordTIME = 45,
	aiRecordUTAG = 46,
	aiRecordFLNK = 47,
	aiRecordVAL = 48,
	aiRecordINP = 49,
	aiRecordPREC = 50,
	aiRecordLINR = 51,
	aiRecordEGUF = 52,
	aiRecordEGUL = 53,
	aiRecordEGU = 54,
	aiRecordHOPR = 55,
	aiRecordLOPR = 56,
	aiRecordAOFF = 57,
	aiRecordASLO = 58,
	aiRecordSMOO = 59,
	aiRecordHIHI = 60,
	aiRecordLOLO = 61,
	aiRecordHIGH = 62,
	aiRecordLOW = 63,
	aiRecordHHSV = 64,
	aiRecordLLSV = 65,
	aiRecordHSV = 66,
	aiRecordLSV = 67,
	aiRecordHYST = 68,
	aiRecordAFTC = 69,
	aiRecordADEL = 70,
	aiRecordMDEL = 71,
	aiRecordLALM = 72,
	aiRecordAFVL = 73,
	aiRecordALST = 74,
	aiRecordMLST = 75,
	aiRecordESLO = 76,
	aiRecordEOFF = 77,
	aiRecordROFF = 78,
	aiRecordPBRK = 79,
	aiRecordINIT = 80,
	aiRecordLBRK = 81,
	aiRecordRVAL = 82,
	aiRecordORAW = 83,
	aiRecordSIOL = 84,
	aiRecordSVAL = 85,
	aiRecordSIML = 86,
	aiRecordSIMM = 87,
	aiRecordSIMS = 88,
	aiRecordOLDSIMM = 89,
	aiRecordSSCN = 90,
	aiRecordSDLY = 91,
	aiRecordSIMPVT = 92
} aiFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int aiRecordSizeOffset(dbRecordType *prt)
{
    aiRecord *prec = 0;

    if (prt->no_fields != 93) {
        cantProceed("IOC build or installation error:\n"
            "    The aiRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 93.\n",
            prt->no_fields);
    }
    prt->papFldDes[aiRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aiRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[aiRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aiRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[aiRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aiRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[aiRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aiRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[aiRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aiRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[aiRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aiRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[aiRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aiRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[aiRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aiRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[aiRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aiRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[aiRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aiRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[aiRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aiRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[aiRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aiRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[aiRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aiRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[aiRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aiRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[aiRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aiRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[aiRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aiRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[aiRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aiRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[aiRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aiRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[aiRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aiRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[aiRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aiRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[aiRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[aiRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[aiRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aiRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[aiRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aiRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[aiRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[aiRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[aiRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aiRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[aiRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aiRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[aiRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aiRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[aiRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aiRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[aiRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aiRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[aiRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aiRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[aiRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aiRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[aiRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aiRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[aiRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aiRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[aiRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aiRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[aiRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aiRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[aiRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aiRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[aiRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aiRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[aiRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aiRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[aiRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aiRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[aiRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aiRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[aiRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aiRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[aiRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aiRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[aiRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aiRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[aiRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aiRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[aiRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aiRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[aiRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aiRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[aiRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[aiRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[aiRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aiRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[aiRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aiRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[aiRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[aiRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[aiRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aiRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[aiRecordLINR]->size = sizeof(prec->linr);
    prt->papFldDes[aiRecordLINR]->offset = (unsigned short)((char *)&prec->linr - (char *)prec);
    prt->papFldDes[aiRecordEGUF]->size = sizeof(prec->eguf);
    prt->papFldDes[aiRecordEGUF]->offset = (unsigned short)((char *)&prec->eguf - (char *)prec);
    prt->papFldDes[aiRecordEGUL]->size = sizeof(prec->egul);
    prt->papFldDes[aiRecordEGUL]->offset = (unsigned short)((char *)&prec->egul - (char *)prec);
    prt->papFldDes[aiRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[aiRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[aiRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[aiRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[aiRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[aiRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[aiRecordAOFF]->size = sizeof(prec->aoff);
    prt->papFldDes[aiRecordAOFF]->offset = (unsigned short)((char *)&prec->aoff - (char *)prec);
    prt->papFldDes[aiRecordASLO]->size = sizeof(prec->aslo);
    prt->papFldDes[aiRecordASLO]->offset = (unsigned short)((char *)&prec->aslo - (char *)prec);
    prt->papFldDes[aiRecordSMOO]->size = sizeof(prec->smoo);
    prt->papFldDes[aiRecordSMOO]->offset = (unsigned short)((char *)&prec->smoo - (char *)prec);
    prt->papFldDes[aiRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[aiRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[aiRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[aiRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[aiRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[aiRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[aiRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[aiRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[aiRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[aiRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[aiRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[aiRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[aiRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[aiRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[aiRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[aiRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[aiRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[aiRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[aiRecordAFTC]->size = sizeof(prec->aftc);
    prt->papFldDes[aiRecordAFTC]->offset = (unsigned short)((char *)&prec->aftc - (char *)prec);
    prt->papFldDes[aiRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[aiRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[aiRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[aiRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[aiRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[aiRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[aiRecordAFVL]->size = sizeof(prec->afvl);
    prt->papFldDes[aiRecordAFVL]->offset = (unsigned short)((char *)&prec->afvl - (char *)prec);
    prt->papFldDes[aiRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[aiRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[aiRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[aiRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[aiRecordESLO]->size = sizeof(prec->eslo);
    prt->papFldDes[aiRecordESLO]->offset = (unsigned short)((char *)&prec->eslo - (char *)prec);
    prt->papFldDes[aiRecordEOFF]->size = sizeof(prec->eoff);
    prt->papFldDes[aiRecordEOFF]->offset = (unsigned short)((char *)&prec->eoff - (char *)prec);
    prt->papFldDes[aiRecordROFF]->size = sizeof(prec->roff);
    prt->papFldDes[aiRecordROFF]->offset = (unsigned short)((char *)&prec->roff - (char *)prec);
    prt->papFldDes[aiRecordPBRK]->size = sizeof(prec->pbrk);
    prt->papFldDes[aiRecordPBRK]->offset = (unsigned short)((char *)&prec->pbrk - (char *)prec);
    prt->papFldDes[aiRecordINIT]->size = sizeof(prec->init);
    prt->papFldDes[aiRecordINIT]->offset = (unsigned short)((char *)&prec->init - (char *)prec);
    prt->papFldDes[aiRecordLBRK]->size = sizeof(prec->lbrk);
    prt->papFldDes[aiRecordLBRK]->offset = (unsigned short)((char *)&prec->lbrk - (char *)prec);
    prt->papFldDes[aiRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[aiRecordRVAL]->offset = (unsigned short)((char *)&prec->rval - (char *)prec);
    prt->papFldDes[aiRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[aiRecordORAW]->offset = (unsigned short)((char *)&prec->oraw - (char *)prec);
    prt->papFldDes[aiRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[aiRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[aiRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[aiRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[aiRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[aiRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[aiRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[aiRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[aiRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[aiRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[aiRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[aiRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[aiRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[aiRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[aiRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[aiRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[aiRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[aiRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aiRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aiRecord_H */
