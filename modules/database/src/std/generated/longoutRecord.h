/** @file longoutRecord.h
 * @brief Declarations for the @ref longoutRecord "longout" record type.
 *
 * This header was generated from longoutRecord.dbd
 */

#ifndef INC_longoutRecord_H
#define INC_longoutRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct longoutRecord;
typedef struct longoutdset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*write_longout)(struct longoutRecord *prec); /*(-1,0)=>(failure,success*/
} longoutdset;
#define HAS_longoutdset

#include "callback.h"

/** @brief Declaration of longout record type. */
typedef struct longoutRecord {
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
    epicsInt32          val;        /**< @brief Desired Output */
    DBLINK              out;        /**< @brief Output Specification */
    DBLINK              dol;        /**< @brief Desired Output Loc */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    char                egu[16];    /**< @brief Engineering Units */
    epicsInt32          drvh;       /**< @brief Drive High Limit */
    epicsInt32          drvl;       /**< @brief Drive Low Limit */
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
    epicsInt32          adel;       /**< @brief Archive Deadband */
    epicsInt32          mdel;       /**< @brief Monitor Deadband */
    epicsInt32          lalm;       /**< @brief Last Value Alarmed */
    epicsInt32          alst;       /**< @brief Last Value Archived */
    epicsInt32          mlst;       /**< @brief Last Val Monitored */
    DBLINK              siol;       /**< @brief Sim Output Specifctn */
    DBLINK              siml;       /**< @brief Sim Mode Location */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Sim mode Alarm Svrty */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID output action */
    epicsInt32          ivov;       /**< @brief INVALID output value */
} longoutRecord;

typedef enum {
	longoutRecordNAME = 0,
	longoutRecordDESC = 1,
	longoutRecordASG = 2,
	longoutRecordSCAN = 3,
	longoutRecordPINI = 4,
	longoutRecordPHAS = 5,
	longoutRecordEVNT = 6,
	longoutRecordTSE = 7,
	longoutRecordTSEL = 8,
	longoutRecordDTYP = 9,
	longoutRecordDISV = 10,
	longoutRecordDISA = 11,
	longoutRecordSDIS = 12,
	longoutRecordMLOK = 13,
	longoutRecordMLIS = 14,
	longoutRecordBKLNK = 15,
	longoutRecordDISP = 16,
	longoutRecordPROC = 17,
	longoutRecordSTAT = 18,
	longoutRecordSEVR = 19,
	longoutRecordAMSG = 20,
	longoutRecordNSTA = 21,
	longoutRecordNSEV = 22,
	longoutRecordNAMSG = 23,
	longoutRecordACKS = 24,
	longoutRecordACKT = 25,
	longoutRecordDISS = 26,
	longoutRecordLCNT = 27,
	longoutRecordPACT = 28,
	longoutRecordPUTF = 29,
	longoutRecordRPRO = 30,
	longoutRecordASP = 31,
	longoutRecordPPN = 32,
	longoutRecordPPNR = 33,
	longoutRecordSPVT = 34,
	longoutRecordRSET = 35,
	longoutRecordDSET = 36,
	longoutRecordDPVT = 37,
	longoutRecordRDES = 38,
	longoutRecordLSET = 39,
	longoutRecordPRIO = 40,
	longoutRecordTPRO = 41,
	longoutRecordBKPT = 42,
	longoutRecordUDF = 43,
	longoutRecordUDFS = 44,
	longoutRecordTIME = 45,
	longoutRecordUTAG = 46,
	longoutRecordFLNK = 47,
	longoutRecordVAL = 48,
	longoutRecordOUT = 49,
	longoutRecordDOL = 50,
	longoutRecordOMSL = 51,
	longoutRecordEGU = 52,
	longoutRecordDRVH = 53,
	longoutRecordDRVL = 54,
	longoutRecordHOPR = 55,
	longoutRecordLOPR = 56,
	longoutRecordHIHI = 57,
	longoutRecordLOLO = 58,
	longoutRecordHIGH = 59,
	longoutRecordLOW = 60,
	longoutRecordHHSV = 61,
	longoutRecordLLSV = 62,
	longoutRecordHSV = 63,
	longoutRecordLSV = 64,
	longoutRecordHYST = 65,
	longoutRecordADEL = 66,
	longoutRecordMDEL = 67,
	longoutRecordLALM = 68,
	longoutRecordALST = 69,
	longoutRecordMLST = 70,
	longoutRecordSIOL = 71,
	longoutRecordSIML = 72,
	longoutRecordSIMM = 73,
	longoutRecordSIMS = 74,
	longoutRecordOLDSIMM = 75,
	longoutRecordSSCN = 76,
	longoutRecordSDLY = 77,
	longoutRecordSIMPVT = 78,
	longoutRecordIVOA = 79,
	longoutRecordIVOV = 80
} longoutFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int longoutRecordSizeOffset(dbRecordType *prt)
{
    longoutRecord *prec = 0;

    if (prt->no_fields != 81) {
        cantProceed("IOC build or installation error:\n"
            "    The longoutRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 81.\n",
            prt->no_fields);
    }
    prt->papFldDes[longoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[longoutRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[longoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[longoutRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[longoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[longoutRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[longoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[longoutRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[longoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[longoutRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[longoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[longoutRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[longoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[longoutRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[longoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[longoutRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[longoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[longoutRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[longoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[longoutRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[longoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[longoutRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[longoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[longoutRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[longoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[longoutRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[longoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[longoutRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[longoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[longoutRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[longoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[longoutRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[longoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[longoutRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[longoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[longoutRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[longoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[longoutRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[longoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[longoutRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[longoutRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[longoutRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[longoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[longoutRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[longoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[longoutRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[longoutRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[longoutRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[longoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[longoutRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[longoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[longoutRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[longoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[longoutRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[longoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[longoutRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[longoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[longoutRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[longoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[longoutRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[longoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[longoutRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[longoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[longoutRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[longoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[longoutRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[longoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[longoutRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[longoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[longoutRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[longoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[longoutRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[longoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[longoutRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[longoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[longoutRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[longoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[longoutRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[longoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[longoutRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[longoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[longoutRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[longoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[longoutRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[longoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[longoutRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[longoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[longoutRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[longoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[longoutRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[longoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[longoutRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[longoutRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[longoutRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[longoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[longoutRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[longoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[longoutRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[longoutRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[longoutRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[longoutRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[longoutRecordDOL]->offset = (unsigned short)((char *)&prec->dol - (char *)prec);
    prt->papFldDes[longoutRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[longoutRecordOMSL]->offset = (unsigned short)((char *)&prec->omsl - (char *)prec);
    prt->papFldDes[longoutRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[longoutRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[longoutRecordDRVH]->size = sizeof(prec->drvh);
    prt->papFldDes[longoutRecordDRVH]->offset = (unsigned short)((char *)&prec->drvh - (char *)prec);
    prt->papFldDes[longoutRecordDRVL]->size = sizeof(prec->drvl);
    prt->papFldDes[longoutRecordDRVL]->offset = (unsigned short)((char *)&prec->drvl - (char *)prec);
    prt->papFldDes[longoutRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[longoutRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[longoutRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[longoutRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[longoutRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[longoutRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[longoutRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[longoutRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[longoutRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[longoutRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[longoutRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[longoutRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[longoutRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[longoutRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[longoutRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[longoutRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[longoutRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[longoutRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[longoutRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[longoutRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[longoutRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[longoutRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[longoutRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[longoutRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[longoutRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[longoutRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[longoutRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[longoutRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[longoutRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[longoutRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[longoutRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[longoutRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[longoutRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[longoutRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[longoutRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[longoutRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[longoutRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[longoutRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[longoutRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[longoutRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[longoutRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[longoutRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[longoutRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[longoutRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[longoutRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[longoutRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[longoutRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[longoutRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[longoutRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[longoutRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[longoutRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[longoutRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(longoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_longoutRecord_H */
