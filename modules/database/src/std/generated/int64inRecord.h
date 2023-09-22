/** @file int64inRecord.h
 * @brief Declarations for the @ref int64inRecord "int64in" record type.
 *
 * This header was generated from int64inRecord.dbd
 */

#ifndef INC_int64inRecord_H
#define INC_int64inRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct int64inRecord;
typedef struct int64indset {
    dset common;
    long (*read_int64in)(struct int64inRecord *prec);
} int64indset;
#define HAS_int64indset

#include "callback.h"

/** @brief Declaration of int64in record type. */
typedef struct int64inRecord {
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
    epicsInt64          val;        /**< @brief Current value */
    DBLINK              inp;        /**< @brief Input Specification */
    char                egu[16];    /**< @brief Units name */
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
    epicsFloat64        aftc;       /**< @brief Alarm Filter Time Constant */
    epicsFloat64        afvl;       /**< @brief Alarm Filter Value */
    epicsInt64          adel;       /**< @brief Archive Deadband */
    epicsInt64          mdel;       /**< @brief Monitor Deadband */
    epicsInt64          lalm;       /**< @brief Last Value Alarmed */
    epicsInt64          alst;       /**< @brief Last Value Archived */
    epicsInt64          mlst;       /**< @brief Last Val Monitored */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    epicsInt64          sval;       /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} int64inRecord;

typedef enum {
	int64inRecordNAME = 0,
	int64inRecordDESC = 1,
	int64inRecordASG = 2,
	int64inRecordSCAN = 3,
	int64inRecordPINI = 4,
	int64inRecordPHAS = 5,
	int64inRecordEVNT = 6,
	int64inRecordTSE = 7,
	int64inRecordTSEL = 8,
	int64inRecordDTYP = 9,
	int64inRecordDISV = 10,
	int64inRecordDISA = 11,
	int64inRecordSDIS = 12,
	int64inRecordMLOK = 13,
	int64inRecordMLIS = 14,
	int64inRecordBKLNK = 15,
	int64inRecordDISP = 16,
	int64inRecordPROC = 17,
	int64inRecordSTAT = 18,
	int64inRecordSEVR = 19,
	int64inRecordAMSG = 20,
	int64inRecordNSTA = 21,
	int64inRecordNSEV = 22,
	int64inRecordNAMSG = 23,
	int64inRecordACKS = 24,
	int64inRecordACKT = 25,
	int64inRecordDISS = 26,
	int64inRecordLCNT = 27,
	int64inRecordPACT = 28,
	int64inRecordPUTF = 29,
	int64inRecordRPRO = 30,
	int64inRecordASP = 31,
	int64inRecordPPN = 32,
	int64inRecordPPNR = 33,
	int64inRecordSPVT = 34,
	int64inRecordRSET = 35,
	int64inRecordDSET = 36,
	int64inRecordDPVT = 37,
	int64inRecordRDES = 38,
	int64inRecordLSET = 39,
	int64inRecordPRIO = 40,
	int64inRecordTPRO = 41,
	int64inRecordBKPT = 42,
	int64inRecordUDF = 43,
	int64inRecordUDFS = 44,
	int64inRecordTIME = 45,
	int64inRecordUTAG = 46,
	int64inRecordFLNK = 47,
	int64inRecordVAL = 48,
	int64inRecordINP = 49,
	int64inRecordEGU = 50,
	int64inRecordHOPR = 51,
	int64inRecordLOPR = 52,
	int64inRecordHIHI = 53,
	int64inRecordLOLO = 54,
	int64inRecordHIGH = 55,
	int64inRecordLOW = 56,
	int64inRecordHHSV = 57,
	int64inRecordLLSV = 58,
	int64inRecordHSV = 59,
	int64inRecordLSV = 60,
	int64inRecordHYST = 61,
	int64inRecordAFTC = 62,
	int64inRecordAFVL = 63,
	int64inRecordADEL = 64,
	int64inRecordMDEL = 65,
	int64inRecordLALM = 66,
	int64inRecordALST = 67,
	int64inRecordMLST = 68,
	int64inRecordSIOL = 69,
	int64inRecordSVAL = 70,
	int64inRecordSIML = 71,
	int64inRecordSIMM = 72,
	int64inRecordSIMS = 73,
	int64inRecordOLDSIMM = 74,
	int64inRecordSSCN = 75,
	int64inRecordSDLY = 76,
	int64inRecordSIMPVT = 77
} int64inFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int int64inRecordSizeOffset(dbRecordType *prt)
{
    int64inRecord *prec = 0;

    if (prt->no_fields != 78) {
        cantProceed("IOC build or installation error:\n"
            "    The int64inRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 78.\n",
            prt->no_fields);
    }
    prt->papFldDes[int64inRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[int64inRecordNAME]->offset = (unsigned short)offsetof(int64inRecord, name);
    prt->papFldDes[int64inRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[int64inRecordDESC]->offset = (unsigned short)offsetof(int64inRecord, desc);
    prt->papFldDes[int64inRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[int64inRecordASG]->offset = (unsigned short)offsetof(int64inRecord, asg);
    prt->papFldDes[int64inRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[int64inRecordSCAN]->offset = (unsigned short)offsetof(int64inRecord, scan);
    prt->papFldDes[int64inRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[int64inRecordPINI]->offset = (unsigned short)offsetof(int64inRecord, pini);
    prt->papFldDes[int64inRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[int64inRecordPHAS]->offset = (unsigned short)offsetof(int64inRecord, phas);
    prt->papFldDes[int64inRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[int64inRecordEVNT]->offset = (unsigned short)offsetof(int64inRecord, evnt);
    prt->papFldDes[int64inRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[int64inRecordTSE]->offset = (unsigned short)offsetof(int64inRecord, tse);
    prt->papFldDes[int64inRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[int64inRecordTSEL]->offset = (unsigned short)offsetof(int64inRecord, tsel);
    prt->papFldDes[int64inRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[int64inRecordDTYP]->offset = (unsigned short)offsetof(int64inRecord, dtyp);
    prt->papFldDes[int64inRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[int64inRecordDISV]->offset = (unsigned short)offsetof(int64inRecord, disv);
    prt->papFldDes[int64inRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[int64inRecordDISA]->offset = (unsigned short)offsetof(int64inRecord, disa);
    prt->papFldDes[int64inRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[int64inRecordSDIS]->offset = (unsigned short)offsetof(int64inRecord, sdis);
    prt->papFldDes[int64inRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[int64inRecordMLOK]->offset = (unsigned short)offsetof(int64inRecord, mlok);
    prt->papFldDes[int64inRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[int64inRecordMLIS]->offset = (unsigned short)offsetof(int64inRecord, mlis);
    prt->papFldDes[int64inRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[int64inRecordBKLNK]->offset = (unsigned short)offsetof(int64inRecord, bklnk);
    prt->papFldDes[int64inRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[int64inRecordDISP]->offset = (unsigned short)offsetof(int64inRecord, disp);
    prt->papFldDes[int64inRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[int64inRecordPROC]->offset = (unsigned short)offsetof(int64inRecord, proc);
    prt->papFldDes[int64inRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[int64inRecordSTAT]->offset = (unsigned short)offsetof(int64inRecord, stat);
    prt->papFldDes[int64inRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[int64inRecordSEVR]->offset = (unsigned short)offsetof(int64inRecord, sevr);
    prt->papFldDes[int64inRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[int64inRecordAMSG]->offset = (unsigned short)offsetof(int64inRecord, amsg);
    prt->papFldDes[int64inRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[int64inRecordNSTA]->offset = (unsigned short)offsetof(int64inRecord, nsta);
    prt->papFldDes[int64inRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[int64inRecordNSEV]->offset = (unsigned short)offsetof(int64inRecord, nsev);
    prt->papFldDes[int64inRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[int64inRecordNAMSG]->offset = (unsigned short)offsetof(int64inRecord, namsg);
    prt->papFldDes[int64inRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[int64inRecordACKS]->offset = (unsigned short)offsetof(int64inRecord, acks);
    prt->papFldDes[int64inRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[int64inRecordACKT]->offset = (unsigned short)offsetof(int64inRecord, ackt);
    prt->papFldDes[int64inRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[int64inRecordDISS]->offset = (unsigned short)offsetof(int64inRecord, diss);
    prt->papFldDes[int64inRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[int64inRecordLCNT]->offset = (unsigned short)offsetof(int64inRecord, lcnt);
    prt->papFldDes[int64inRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[int64inRecordPACT]->offset = (unsigned short)offsetof(int64inRecord, pact);
    prt->papFldDes[int64inRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[int64inRecordPUTF]->offset = (unsigned short)offsetof(int64inRecord, putf);
    prt->papFldDes[int64inRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[int64inRecordRPRO]->offset = (unsigned short)offsetof(int64inRecord, rpro);
    prt->papFldDes[int64inRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[int64inRecordASP]->offset = (unsigned short)offsetof(int64inRecord, asp);
    prt->papFldDes[int64inRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[int64inRecordPPN]->offset = (unsigned short)offsetof(int64inRecord, ppn);
    prt->papFldDes[int64inRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[int64inRecordPPNR]->offset = (unsigned short)offsetof(int64inRecord, ppnr);
    prt->papFldDes[int64inRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[int64inRecordSPVT]->offset = (unsigned short)offsetof(int64inRecord, spvt);
    prt->papFldDes[int64inRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[int64inRecordRSET]->offset = (unsigned short)offsetof(int64inRecord, rset);
    prt->papFldDes[int64inRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[int64inRecordDSET]->offset = (unsigned short)offsetof(int64inRecord, dset);
    prt->papFldDes[int64inRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[int64inRecordDPVT]->offset = (unsigned short)offsetof(int64inRecord, dpvt);
    prt->papFldDes[int64inRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[int64inRecordRDES]->offset = (unsigned short)offsetof(int64inRecord, rdes);
    prt->papFldDes[int64inRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[int64inRecordLSET]->offset = (unsigned short)offsetof(int64inRecord, lset);
    prt->papFldDes[int64inRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[int64inRecordPRIO]->offset = (unsigned short)offsetof(int64inRecord, prio);
    prt->papFldDes[int64inRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[int64inRecordTPRO]->offset = (unsigned short)offsetof(int64inRecord, tpro);
    prt->papFldDes[int64inRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[int64inRecordBKPT]->offset = (unsigned short)offsetof(int64inRecord, bkpt);
    prt->papFldDes[int64inRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[int64inRecordUDF]->offset = (unsigned short)offsetof(int64inRecord, udf);
    prt->papFldDes[int64inRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[int64inRecordUDFS]->offset = (unsigned short)offsetof(int64inRecord, udfs);
    prt->papFldDes[int64inRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[int64inRecordTIME]->offset = (unsigned short)offsetof(int64inRecord, time);
    prt->papFldDes[int64inRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[int64inRecordUTAG]->offset = (unsigned short)offsetof(int64inRecord, utag);
    prt->papFldDes[int64inRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[int64inRecordFLNK]->offset = (unsigned short)offsetof(int64inRecord, flnk);
    prt->papFldDes[int64inRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[int64inRecordVAL]->offset = (unsigned short)offsetof(int64inRecord, val);
    prt->papFldDes[int64inRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[int64inRecordINP]->offset = (unsigned short)offsetof(int64inRecord, inp);
    prt->papFldDes[int64inRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[int64inRecordEGU]->offset = (unsigned short)offsetof(int64inRecord, egu);
    prt->papFldDes[int64inRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[int64inRecordHOPR]->offset = (unsigned short)offsetof(int64inRecord, hopr);
    prt->papFldDes[int64inRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[int64inRecordLOPR]->offset = (unsigned short)offsetof(int64inRecord, lopr);
    prt->papFldDes[int64inRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[int64inRecordHIHI]->offset = (unsigned short)offsetof(int64inRecord, hihi);
    prt->papFldDes[int64inRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[int64inRecordLOLO]->offset = (unsigned short)offsetof(int64inRecord, lolo);
    prt->papFldDes[int64inRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[int64inRecordHIGH]->offset = (unsigned short)offsetof(int64inRecord, high);
    prt->papFldDes[int64inRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[int64inRecordLOW]->offset = (unsigned short)offsetof(int64inRecord, low);
    prt->papFldDes[int64inRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[int64inRecordHHSV]->offset = (unsigned short)offsetof(int64inRecord, hhsv);
    prt->papFldDes[int64inRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[int64inRecordLLSV]->offset = (unsigned short)offsetof(int64inRecord, llsv);
    prt->papFldDes[int64inRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[int64inRecordHSV]->offset = (unsigned short)offsetof(int64inRecord, hsv);
    prt->papFldDes[int64inRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[int64inRecordLSV]->offset = (unsigned short)offsetof(int64inRecord, lsv);
    prt->papFldDes[int64inRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[int64inRecordHYST]->offset = (unsigned short)offsetof(int64inRecord, hyst);
    prt->papFldDes[int64inRecordAFTC]->size = sizeof(prec->aftc);
    prt->papFldDes[int64inRecordAFTC]->offset = (unsigned short)offsetof(int64inRecord, aftc);
    prt->papFldDes[int64inRecordAFVL]->size = sizeof(prec->afvl);
    prt->papFldDes[int64inRecordAFVL]->offset = (unsigned short)offsetof(int64inRecord, afvl);
    prt->papFldDes[int64inRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[int64inRecordADEL]->offset = (unsigned short)offsetof(int64inRecord, adel);
    prt->papFldDes[int64inRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[int64inRecordMDEL]->offset = (unsigned short)offsetof(int64inRecord, mdel);
    prt->papFldDes[int64inRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[int64inRecordLALM]->offset = (unsigned short)offsetof(int64inRecord, lalm);
    prt->papFldDes[int64inRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[int64inRecordALST]->offset = (unsigned short)offsetof(int64inRecord, alst);
    prt->papFldDes[int64inRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[int64inRecordMLST]->offset = (unsigned short)offsetof(int64inRecord, mlst);
    prt->papFldDes[int64inRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[int64inRecordSIOL]->offset = (unsigned short)offsetof(int64inRecord, siol);
    prt->papFldDes[int64inRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[int64inRecordSVAL]->offset = (unsigned short)offsetof(int64inRecord, sval);
    prt->papFldDes[int64inRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[int64inRecordSIML]->offset = (unsigned short)offsetof(int64inRecord, siml);
    prt->papFldDes[int64inRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[int64inRecordSIMM]->offset = (unsigned short)offsetof(int64inRecord, simm);
    prt->papFldDes[int64inRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[int64inRecordSIMS]->offset = (unsigned short)offsetof(int64inRecord, sims);
    prt->papFldDes[int64inRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[int64inRecordOLDSIMM]->offset = (unsigned short)offsetof(int64inRecord, oldsimm);
    prt->papFldDes[int64inRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[int64inRecordSSCN]->offset = (unsigned short)offsetof(int64inRecord, sscn);
    prt->papFldDes[int64inRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[int64inRecordSDLY]->offset = (unsigned short)offsetof(int64inRecord, sdly);
    prt->papFldDes[int64inRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[int64inRecordSIMPVT]->offset = (unsigned short)offsetof(int64inRecord, simpvt);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(int64inRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_int64inRecord_H */
