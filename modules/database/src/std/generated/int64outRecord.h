/** @file int64outRecord.h
 * @brief Declarations for the @ref int64outRecord "int64out" record type.
 *
 * This header was generated from int64outRecord.dbd
 */

#ifndef INC_int64outRecord_H
#define INC_int64outRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct int64outRecord;
typedef struct int64outdset {
    dset common;
    long (*write_int64out)(struct int64outRecord *prec);
} int64outdset;
#define HAS_int64outdset

#include "callback.h"

/** @brief Declaration of int64out record type. */
typedef struct int64outRecord {
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
    epicsInt64          val;        /**< @brief Desired Output */
    DBLINK              out;        /**< @brief Output Specification */
    DBLINK              dol;        /**< @brief Desired Output Link */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    char                egu[16];    /**< @brief Units name */
    epicsInt64          drvh;       /**< @brief Drive High Limit */
    epicsInt64          drvl;       /**< @brief Drive Low Limit */
    epicsInt64          hopr;       /**< @brief High Operating Range */
    epicsInt64          lopr;       /**< @brief Low Operating Range */
    epicsInt64          hihi;       /**< @brief Hihi Alarm Limit */
    epicsInt64          lolo;       /**< @brief Lolo Alarm Limit */
    epicsInt64          high;       /**< @brief High Alarm Limit */
    epicsInt64          low;        /**< @brief Low Alarm Limit */
    epicsEnum16         hhsv;       /**< @brief Hihi Severity */
    epicsEnum16         llsv;       /**< @brief Lolo Severity */
    epicsEnum16         hsv;        /**< @brief High Severity */
    epicsEnum16         lsv;        /**< @brief Low Severity */
    epicsInt64          hyst;       /**< @brief Alarm Deadband */
    epicsInt64          adel;       /**< @brief Archive Deadband */
    epicsInt64          mdel;       /**< @brief Monitor Deadband */
    epicsInt64          lalm;       /**< @brief Last Value Alarmed */
    epicsInt64          alst;       /**< @brief Last Value Archived */
    epicsInt64          mlst;       /**< @brief Last Val Monitored */
    DBLINK              siol;       /**< @brief Simulation Output Link */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID output action */
    epicsInt64          ivov;       /**< @brief INVALID output value */
} int64outRecord;

typedef enum {
	int64outRecordNAME = 0,
	int64outRecordDESC = 1,
	int64outRecordASG = 2,
	int64outRecordSCAN = 3,
	int64outRecordPINI = 4,
	int64outRecordPHAS = 5,
	int64outRecordEVNT = 6,
	int64outRecordTSE = 7,
	int64outRecordTSEL = 8,
	int64outRecordDTYP = 9,
	int64outRecordDISV = 10,
	int64outRecordDISA = 11,
	int64outRecordSDIS = 12,
	int64outRecordMLOK = 13,
	int64outRecordMLIS = 14,
	int64outRecordBKLNK = 15,
	int64outRecordDISP = 16,
	int64outRecordPROC = 17,
	int64outRecordSTAT = 18,
	int64outRecordSEVR = 19,
	int64outRecordAMSG = 20,
	int64outRecordNSTA = 21,
	int64outRecordNSEV = 22,
	int64outRecordNAMSG = 23,
	int64outRecordACKS = 24,
	int64outRecordACKT = 25,
	int64outRecordDISS = 26,
	int64outRecordLCNT = 27,
	int64outRecordPACT = 28,
	int64outRecordPUTF = 29,
	int64outRecordRPRO = 30,
	int64outRecordASP = 31,
	int64outRecordPPN = 32,
	int64outRecordPPNR = 33,
	int64outRecordSPVT = 34,
	int64outRecordRSET = 35,
	int64outRecordDSET = 36,
	int64outRecordDPVT = 37,
	int64outRecordRDES = 38,
	int64outRecordLSET = 39,
	int64outRecordPRIO = 40,
	int64outRecordTPRO = 41,
	int64outRecordBKPT = 42,
	int64outRecordUDF = 43,
	int64outRecordUDFS = 44,
	int64outRecordTIME = 45,
	int64outRecordUTAG = 46,
	int64outRecordFLNK = 47,
	int64outRecordVAL = 48,
	int64outRecordOUT = 49,
	int64outRecordDOL = 50,
	int64outRecordOMSL = 51,
	int64outRecordEGU = 52,
	int64outRecordDRVH = 53,
	int64outRecordDRVL = 54,
	int64outRecordHOPR = 55,
	int64outRecordLOPR = 56,
	int64outRecordHIHI = 57,
	int64outRecordLOLO = 58,
	int64outRecordHIGH = 59,
	int64outRecordLOW = 60,
	int64outRecordHHSV = 61,
	int64outRecordLLSV = 62,
	int64outRecordHSV = 63,
	int64outRecordLSV = 64,
	int64outRecordHYST = 65,
	int64outRecordADEL = 66,
	int64outRecordMDEL = 67,
	int64outRecordLALM = 68,
	int64outRecordALST = 69,
	int64outRecordMLST = 70,
	int64outRecordSIOL = 71,
	int64outRecordSIML = 72,
	int64outRecordSIMM = 73,
	int64outRecordSIMS = 74,
	int64outRecordOLDSIMM = 75,
	int64outRecordSSCN = 76,
	int64outRecordSDLY = 77,
	int64outRecordSIMPVT = 78,
	int64outRecordIVOA = 79,
	int64outRecordIVOV = 80
} int64outFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int int64outRecordSizeOffset(dbRecordType *prt)
{
    int64outRecord *prec = 0;

    if (prt->no_fields != 81) {
        cantProceed("IOC build or installation error:\n"
            "    The int64outRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 81.\n",
            prt->no_fields);
    }
    prt->papFldDes[int64outRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[int64outRecordNAME]->offset = (unsigned short)offsetof(int64outRecord, name);
    prt->papFldDes[int64outRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[int64outRecordDESC]->offset = (unsigned short)offsetof(int64outRecord, desc);
    prt->papFldDes[int64outRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[int64outRecordASG]->offset = (unsigned short)offsetof(int64outRecord, asg);
    prt->papFldDes[int64outRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[int64outRecordSCAN]->offset = (unsigned short)offsetof(int64outRecord, scan);
    prt->papFldDes[int64outRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[int64outRecordPINI]->offset = (unsigned short)offsetof(int64outRecord, pini);
    prt->papFldDes[int64outRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[int64outRecordPHAS]->offset = (unsigned short)offsetof(int64outRecord, phas);
    prt->papFldDes[int64outRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[int64outRecordEVNT]->offset = (unsigned short)offsetof(int64outRecord, evnt);
    prt->papFldDes[int64outRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[int64outRecordTSE]->offset = (unsigned short)offsetof(int64outRecord, tse);
    prt->papFldDes[int64outRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[int64outRecordTSEL]->offset = (unsigned short)offsetof(int64outRecord, tsel);
    prt->papFldDes[int64outRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[int64outRecordDTYP]->offset = (unsigned short)offsetof(int64outRecord, dtyp);
    prt->papFldDes[int64outRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[int64outRecordDISV]->offset = (unsigned short)offsetof(int64outRecord, disv);
    prt->papFldDes[int64outRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[int64outRecordDISA]->offset = (unsigned short)offsetof(int64outRecord, disa);
    prt->papFldDes[int64outRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[int64outRecordSDIS]->offset = (unsigned short)offsetof(int64outRecord, sdis);
    prt->papFldDes[int64outRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[int64outRecordMLOK]->offset = (unsigned short)offsetof(int64outRecord, mlok);
    prt->papFldDes[int64outRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[int64outRecordMLIS]->offset = (unsigned short)offsetof(int64outRecord, mlis);
    prt->papFldDes[int64outRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[int64outRecordBKLNK]->offset = (unsigned short)offsetof(int64outRecord, bklnk);
    prt->papFldDes[int64outRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[int64outRecordDISP]->offset = (unsigned short)offsetof(int64outRecord, disp);
    prt->papFldDes[int64outRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[int64outRecordPROC]->offset = (unsigned short)offsetof(int64outRecord, proc);
    prt->papFldDes[int64outRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[int64outRecordSTAT]->offset = (unsigned short)offsetof(int64outRecord, stat);
    prt->papFldDes[int64outRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[int64outRecordSEVR]->offset = (unsigned short)offsetof(int64outRecord, sevr);
    prt->papFldDes[int64outRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[int64outRecordAMSG]->offset = (unsigned short)offsetof(int64outRecord, amsg);
    prt->papFldDes[int64outRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[int64outRecordNSTA]->offset = (unsigned short)offsetof(int64outRecord, nsta);
    prt->papFldDes[int64outRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[int64outRecordNSEV]->offset = (unsigned short)offsetof(int64outRecord, nsev);
    prt->papFldDes[int64outRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[int64outRecordNAMSG]->offset = (unsigned short)offsetof(int64outRecord, namsg);
    prt->papFldDes[int64outRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[int64outRecordACKS]->offset = (unsigned short)offsetof(int64outRecord, acks);
    prt->papFldDes[int64outRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[int64outRecordACKT]->offset = (unsigned short)offsetof(int64outRecord, ackt);
    prt->papFldDes[int64outRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[int64outRecordDISS]->offset = (unsigned short)offsetof(int64outRecord, diss);
    prt->papFldDes[int64outRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[int64outRecordLCNT]->offset = (unsigned short)offsetof(int64outRecord, lcnt);
    prt->papFldDes[int64outRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[int64outRecordPACT]->offset = (unsigned short)offsetof(int64outRecord, pact);
    prt->papFldDes[int64outRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[int64outRecordPUTF]->offset = (unsigned short)offsetof(int64outRecord, putf);
    prt->papFldDes[int64outRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[int64outRecordRPRO]->offset = (unsigned short)offsetof(int64outRecord, rpro);
    prt->papFldDes[int64outRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[int64outRecordASP]->offset = (unsigned short)offsetof(int64outRecord, asp);
    prt->papFldDes[int64outRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[int64outRecordPPN]->offset = (unsigned short)offsetof(int64outRecord, ppn);
    prt->papFldDes[int64outRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[int64outRecordPPNR]->offset = (unsigned short)offsetof(int64outRecord, ppnr);
    prt->papFldDes[int64outRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[int64outRecordSPVT]->offset = (unsigned short)offsetof(int64outRecord, spvt);
    prt->papFldDes[int64outRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[int64outRecordRSET]->offset = (unsigned short)offsetof(int64outRecord, rset);
    prt->papFldDes[int64outRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[int64outRecordDSET]->offset = (unsigned short)offsetof(int64outRecord, dset);
    prt->papFldDes[int64outRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[int64outRecordDPVT]->offset = (unsigned short)offsetof(int64outRecord, dpvt);
    prt->papFldDes[int64outRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[int64outRecordRDES]->offset = (unsigned short)offsetof(int64outRecord, rdes);
    prt->papFldDes[int64outRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[int64outRecordLSET]->offset = (unsigned short)offsetof(int64outRecord, lset);
    prt->papFldDes[int64outRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[int64outRecordPRIO]->offset = (unsigned short)offsetof(int64outRecord, prio);
    prt->papFldDes[int64outRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[int64outRecordTPRO]->offset = (unsigned short)offsetof(int64outRecord, tpro);
    prt->papFldDes[int64outRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[int64outRecordBKPT]->offset = (unsigned short)offsetof(int64outRecord, bkpt);
    prt->papFldDes[int64outRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[int64outRecordUDF]->offset = (unsigned short)offsetof(int64outRecord, udf);
    prt->papFldDes[int64outRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[int64outRecordUDFS]->offset = (unsigned short)offsetof(int64outRecord, udfs);
    prt->papFldDes[int64outRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[int64outRecordTIME]->offset = (unsigned short)offsetof(int64outRecord, time);
    prt->papFldDes[int64outRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[int64outRecordUTAG]->offset = (unsigned short)offsetof(int64outRecord, utag);
    prt->papFldDes[int64outRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[int64outRecordFLNK]->offset = (unsigned short)offsetof(int64outRecord, flnk);
    prt->papFldDes[int64outRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[int64outRecordVAL]->offset = (unsigned short)offsetof(int64outRecord, val);
    prt->papFldDes[int64outRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[int64outRecordOUT]->offset = (unsigned short)offsetof(int64outRecord, out);
    prt->papFldDes[int64outRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[int64outRecordDOL]->offset = (unsigned short)offsetof(int64outRecord, dol);
    prt->papFldDes[int64outRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[int64outRecordOMSL]->offset = (unsigned short)offsetof(int64outRecord, omsl);
    prt->papFldDes[int64outRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[int64outRecordEGU]->offset = (unsigned short)offsetof(int64outRecord, egu);
    prt->papFldDes[int64outRecordDRVH]->size = sizeof(prec->drvh);
    prt->papFldDes[int64outRecordDRVH]->offset = (unsigned short)offsetof(int64outRecord, drvh);
    prt->papFldDes[int64outRecordDRVL]->size = sizeof(prec->drvl);
    prt->papFldDes[int64outRecordDRVL]->offset = (unsigned short)offsetof(int64outRecord, drvl);
    prt->papFldDes[int64outRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[int64outRecordHOPR]->offset = (unsigned short)offsetof(int64outRecord, hopr);
    prt->papFldDes[int64outRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[int64outRecordLOPR]->offset = (unsigned short)offsetof(int64outRecord, lopr);
    prt->papFldDes[int64outRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[int64outRecordHIHI]->offset = (unsigned short)offsetof(int64outRecord, hihi);
    prt->papFldDes[int64outRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[int64outRecordLOLO]->offset = (unsigned short)offsetof(int64outRecord, lolo);
    prt->papFldDes[int64outRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[int64outRecordHIGH]->offset = (unsigned short)offsetof(int64outRecord, high);
    prt->papFldDes[int64outRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[int64outRecordLOW]->offset = (unsigned short)offsetof(int64outRecord, low);
    prt->papFldDes[int64outRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[int64outRecordHHSV]->offset = (unsigned short)offsetof(int64outRecord, hhsv);
    prt->papFldDes[int64outRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[int64outRecordLLSV]->offset = (unsigned short)offsetof(int64outRecord, llsv);
    prt->papFldDes[int64outRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[int64outRecordHSV]->offset = (unsigned short)offsetof(int64outRecord, hsv);
    prt->papFldDes[int64outRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[int64outRecordLSV]->offset = (unsigned short)offsetof(int64outRecord, lsv);
    prt->papFldDes[int64outRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[int64outRecordHYST]->offset = (unsigned short)offsetof(int64outRecord, hyst);
    prt->papFldDes[int64outRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[int64outRecordADEL]->offset = (unsigned short)offsetof(int64outRecord, adel);
    prt->papFldDes[int64outRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[int64outRecordMDEL]->offset = (unsigned short)offsetof(int64outRecord, mdel);
    prt->papFldDes[int64outRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[int64outRecordLALM]->offset = (unsigned short)offsetof(int64outRecord, lalm);
    prt->papFldDes[int64outRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[int64outRecordALST]->offset = (unsigned short)offsetof(int64outRecord, alst);
    prt->papFldDes[int64outRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[int64outRecordMLST]->offset = (unsigned short)offsetof(int64outRecord, mlst);
    prt->papFldDes[int64outRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[int64outRecordSIOL]->offset = (unsigned short)offsetof(int64outRecord, siol);
    prt->papFldDes[int64outRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[int64outRecordSIML]->offset = (unsigned short)offsetof(int64outRecord, siml);
    prt->papFldDes[int64outRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[int64outRecordSIMM]->offset = (unsigned short)offsetof(int64outRecord, simm);
    prt->papFldDes[int64outRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[int64outRecordSIMS]->offset = (unsigned short)offsetof(int64outRecord, sims);
    prt->papFldDes[int64outRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[int64outRecordOLDSIMM]->offset = (unsigned short)offsetof(int64outRecord, oldsimm);
    prt->papFldDes[int64outRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[int64outRecordSSCN]->offset = (unsigned short)offsetof(int64outRecord, sscn);
    prt->papFldDes[int64outRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[int64outRecordSDLY]->offset = (unsigned short)offsetof(int64outRecord, sdly);
    prt->papFldDes[int64outRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[int64outRecordSIMPVT]->offset = (unsigned short)offsetof(int64outRecord, simpvt);
    prt->papFldDes[int64outRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[int64outRecordIVOA]->offset = (unsigned short)offsetof(int64outRecord, ivoa);
    prt->papFldDes[int64outRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[int64outRecordIVOV]->offset = (unsigned short)offsetof(int64outRecord, ivov);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(int64outRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_int64outRecord_H */
