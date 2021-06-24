/** @file longinRecord.h
 * @brief Declarations for the @ref longinRecord "longin" record type.
 *
 * This header was generated from longinRecord.dbd
 */

#ifndef INC_longinRecord_H
#define INC_longinRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct longinRecord;
typedef struct longindset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*read_longin)(struct longinRecord *prec); /*returns: (-1,0)=>(failure,success)*/
} longindset;
#define HAS_longindset

#include "callback.h"

/** @brief Declaration of longin record type. */
typedef struct longinRecord {
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
    epicsInt32          val;        /**< @brief Current value */
    DBLINK              inp;        /**< @brief Input Specification */
    char                egu[16];    /**< @brief Engineering Units */
    epicsInt32          hopr;       /**< @brief High Operating Range */
    epicsInt32          lopr;       /**< @brief Low Operating Range */
    epicsInt32          hihi;       /**< @brief Hihi Alarm Limit */
    epicsInt32          lolo;       /**< @brief Lolo Alarm Limit */
    epicsInt32          high;       /**< @brief High Alarm Limit */
    epicsInt32          low;        /**< @brief Low Alarm Limit */
    epicsEnum16         hhsv;       /**< @brief Hihi Severity */
    epicsEnum16         llsv;       /**< @brief Lolo Severity */
    epicsEnum16         hsv;        /**< @brief High Severity */
    epicsEnum16         lsv;        /**< @brief Low Severity */
    epicsInt32          hyst;       /**< @brief Alarm Deadband */
    epicsFloat64        aftc;       /**< @brief Alarm Filter Time Constant */
    epicsFloat64        afvl;       /**< @brief Alarm Filter Value */
    epicsInt32          adel;       /**< @brief Archive Deadband */
    epicsInt32          mdel;       /**< @brief Monitor Deadband */
    epicsInt32          lalm;       /**< @brief Last Value Alarmed */
    epicsInt32          alst;       /**< @brief Last Value Archived */
    epicsInt32          mlst;       /**< @brief Last Val Monitored */
    DBLINK              siol;       /**< @brief Sim Input Specifctn */
    epicsInt32          sval;       /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Sim Mode Location */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Sim mode Alarm Svrty */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} longinRecord;

typedef enum {
	longinRecordNAME = 0,
	longinRecordDESC = 1,
	longinRecordASG = 2,
	longinRecordSCAN = 3,
	longinRecordPINI = 4,
	longinRecordPHAS = 5,
	longinRecordEVNT = 6,
	longinRecordTSE = 7,
	longinRecordTSEL = 8,
	longinRecordDTYP = 9,
	longinRecordDISV = 10,
	longinRecordDISA = 11,
	longinRecordSDIS = 12,
	longinRecordMLOK = 13,
	longinRecordMLIS = 14,
	longinRecordBKLNK = 15,
	longinRecordDISP = 16,
	longinRecordPROC = 17,
	longinRecordSTAT = 18,
	longinRecordSEVR = 19,
	longinRecordAMSG = 20,
	longinRecordNSTA = 21,
	longinRecordNSEV = 22,
	longinRecordNAMSG = 23,
	longinRecordACKS = 24,
	longinRecordACKT = 25,
	longinRecordDISS = 26,
	longinRecordLCNT = 27,
	longinRecordPACT = 28,
	longinRecordPUTF = 29,
	longinRecordRPRO = 30,
	longinRecordASP = 31,
	longinRecordPPN = 32,
	longinRecordPPNR = 33,
	longinRecordSPVT = 34,
	longinRecordRSET = 35,
	longinRecordDSET = 36,
	longinRecordDPVT = 37,
	longinRecordRDES = 38,
	longinRecordLSET = 39,
	longinRecordPRIO = 40,
	longinRecordTPRO = 41,
	longinRecordBKPT = 42,
	longinRecordUDF = 43,
	longinRecordUDFS = 44,
	longinRecordTIME = 45,
	longinRecordUTAG = 46,
	longinRecordFLNK = 47,
	longinRecordVAL = 48,
	longinRecordINP = 49,
	longinRecordEGU = 50,
	longinRecordHOPR = 51,
	longinRecordLOPR = 52,
	longinRecordHIHI = 53,
	longinRecordLOLO = 54,
	longinRecordHIGH = 55,
	longinRecordLOW = 56,
	longinRecordHHSV = 57,
	longinRecordLLSV = 58,
	longinRecordHSV = 59,
	longinRecordLSV = 60,
	longinRecordHYST = 61,
	longinRecordAFTC = 62,
	longinRecordAFVL = 63,
	longinRecordADEL = 64,
	longinRecordMDEL = 65,
	longinRecordLALM = 66,
	longinRecordALST = 67,
	longinRecordMLST = 68,
	longinRecordSIOL = 69,
	longinRecordSVAL = 70,
	longinRecordSIML = 71,
	longinRecordSIMM = 72,
	longinRecordSIMS = 73,
	longinRecordOLDSIMM = 74,
	longinRecordSSCN = 75,
	longinRecordSDLY = 76,
	longinRecordSIMPVT = 77
} longinFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int longinRecordSizeOffset(dbRecordType *prt)
{
    longinRecord *prec = 0;

    if (prt->no_fields != 78) {
        cantProceed("IOC build or installation error:\n"
            "    The longinRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 78.\n",
            prt->no_fields);
    }
    prt->papFldDes[longinRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[longinRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[longinRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[longinRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[longinRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[longinRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[longinRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[longinRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[longinRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[longinRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[longinRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[longinRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[longinRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[longinRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[longinRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[longinRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[longinRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[longinRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[longinRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[longinRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[longinRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[longinRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[longinRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[longinRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[longinRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[longinRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[longinRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[longinRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[longinRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[longinRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[longinRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[longinRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[longinRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[longinRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[longinRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[longinRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[longinRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[longinRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[longinRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[longinRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[longinRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[longinRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[longinRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[longinRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[longinRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[longinRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[longinRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[longinRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[longinRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[longinRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[longinRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[longinRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[longinRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[longinRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[longinRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[longinRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[longinRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[longinRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[longinRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[longinRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[longinRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[longinRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[longinRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[longinRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[longinRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[longinRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[longinRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[longinRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[longinRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[longinRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[longinRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[longinRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[longinRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[longinRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[longinRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[longinRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[longinRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[longinRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[longinRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[longinRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[longinRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[longinRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[longinRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[longinRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[longinRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[longinRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[longinRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[longinRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[longinRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[longinRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[longinRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[longinRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[longinRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[longinRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[longinRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[longinRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[longinRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[longinRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[longinRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[longinRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[longinRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[longinRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[longinRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[longinRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[longinRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[longinRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[longinRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[longinRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[longinRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[longinRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[longinRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[longinRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[longinRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[longinRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[longinRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[longinRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[longinRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[longinRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[longinRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[longinRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[longinRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[longinRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[longinRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[longinRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[longinRecordAFTC]->size = sizeof(prec->aftc);
    prt->papFldDes[longinRecordAFTC]->offset = (unsigned short)((char *)&prec->aftc - (char *)prec);
    prt->papFldDes[longinRecordAFVL]->size = sizeof(prec->afvl);
    prt->papFldDes[longinRecordAFVL]->offset = (unsigned short)((char *)&prec->afvl - (char *)prec);
    prt->papFldDes[longinRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[longinRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[longinRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[longinRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[longinRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[longinRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[longinRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[longinRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[longinRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[longinRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[longinRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[longinRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[longinRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[longinRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[longinRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[longinRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[longinRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[longinRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[longinRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[longinRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[longinRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[longinRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[longinRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[longinRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[longinRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[longinRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[longinRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[longinRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(longinRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_longinRecord_H */
