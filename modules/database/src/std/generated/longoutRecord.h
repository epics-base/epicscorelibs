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

#ifndef longoutOOPT_NUM_CHOICES
/** @brief Enumerated type from menu longoutOOPT */
typedef enum {
    longoutOOPT_Every_Time          /**< @brief State string "Every Time" */,
    longoutOOPT_On_Change           /**< @brief State string "On Change" */,
    longoutOOPT_When_Zero           /**< @brief State string "When Zero" */,
    longoutOOPT_When_Non_zero       /**< @brief State string "When Non-zero" */,
    longoutOOPT_Transition_To_Zero  /**< @brief State string "Transition To Zero" */,
    longoutOOPT_Transition_To_Non_zero /**< @brief State string "Transition To Non-zero" */
} longoutOOPT;
/** @brief Number of states defined for menu longoutOOPT */
#define longoutOOPT_NUM_CHOICES 6
#endif

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
    DBLINK              dol;        /**< @brief Desired Output Link */
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
    epicsCallback       *simpvt;    /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID output action */
    epicsInt32          ivov;       /**< @brief INVALID output value */
    epicsInt32          pval;       /**< @brief Previous Value */
    epicsEnum16         outpvt;     /**< @brief Output Write Control Private */
    epicsEnum16         ooch;       /**< @brief Output Exec. On Change (Opt) */
    epicsEnum16         oopt;       /**< @brief Output Execute Opt */
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
	longoutRecordIVOV = 80,
	longoutRecordPVAL = 81,
	longoutRecordOUTPVT = 82,
	longoutRecordOOCH = 83,
	longoutRecordOOPT = 84
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

    if (prt->no_fields != 85) {
        cantProceed("IOC build or installation error:\n"
            "    The longoutRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 85.\n",
            prt->no_fields);
    }
    prt->papFldDes[longoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[longoutRecordNAME]->offset = (unsigned short)offsetof(longoutRecord, name);
    prt->papFldDes[longoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[longoutRecordDESC]->offset = (unsigned short)offsetof(longoutRecord, desc);
    prt->papFldDes[longoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[longoutRecordASG]->offset = (unsigned short)offsetof(longoutRecord, asg);
    prt->papFldDes[longoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[longoutRecordSCAN]->offset = (unsigned short)offsetof(longoutRecord, scan);
    prt->papFldDes[longoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[longoutRecordPINI]->offset = (unsigned short)offsetof(longoutRecord, pini);
    prt->papFldDes[longoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[longoutRecordPHAS]->offset = (unsigned short)offsetof(longoutRecord, phas);
    prt->papFldDes[longoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[longoutRecordEVNT]->offset = (unsigned short)offsetof(longoutRecord, evnt);
    prt->papFldDes[longoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[longoutRecordTSE]->offset = (unsigned short)offsetof(longoutRecord, tse);
    prt->papFldDes[longoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[longoutRecordTSEL]->offset = (unsigned short)offsetof(longoutRecord, tsel);
    prt->papFldDes[longoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[longoutRecordDTYP]->offset = (unsigned short)offsetof(longoutRecord, dtyp);
    prt->papFldDes[longoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[longoutRecordDISV]->offset = (unsigned short)offsetof(longoutRecord, disv);
    prt->papFldDes[longoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[longoutRecordDISA]->offset = (unsigned short)offsetof(longoutRecord, disa);
    prt->papFldDes[longoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[longoutRecordSDIS]->offset = (unsigned short)offsetof(longoutRecord, sdis);
    prt->papFldDes[longoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[longoutRecordMLOK]->offset = (unsigned short)offsetof(longoutRecord, mlok);
    prt->papFldDes[longoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[longoutRecordMLIS]->offset = (unsigned short)offsetof(longoutRecord, mlis);
    prt->papFldDes[longoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[longoutRecordBKLNK]->offset = (unsigned short)offsetof(longoutRecord, bklnk);
    prt->papFldDes[longoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[longoutRecordDISP]->offset = (unsigned short)offsetof(longoutRecord, disp);
    prt->papFldDes[longoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[longoutRecordPROC]->offset = (unsigned short)offsetof(longoutRecord, proc);
    prt->papFldDes[longoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[longoutRecordSTAT]->offset = (unsigned short)offsetof(longoutRecord, stat);
    prt->papFldDes[longoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[longoutRecordSEVR]->offset = (unsigned short)offsetof(longoutRecord, sevr);
    prt->papFldDes[longoutRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[longoutRecordAMSG]->offset = (unsigned short)offsetof(longoutRecord, amsg);
    prt->papFldDes[longoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[longoutRecordNSTA]->offset = (unsigned short)offsetof(longoutRecord, nsta);
    prt->papFldDes[longoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[longoutRecordNSEV]->offset = (unsigned short)offsetof(longoutRecord, nsev);
    prt->papFldDes[longoutRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[longoutRecordNAMSG]->offset = (unsigned short)offsetof(longoutRecord, namsg);
    prt->papFldDes[longoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[longoutRecordACKS]->offset = (unsigned short)offsetof(longoutRecord, acks);
    prt->papFldDes[longoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[longoutRecordACKT]->offset = (unsigned short)offsetof(longoutRecord, ackt);
    prt->papFldDes[longoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[longoutRecordDISS]->offset = (unsigned short)offsetof(longoutRecord, diss);
    prt->papFldDes[longoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[longoutRecordLCNT]->offset = (unsigned short)offsetof(longoutRecord, lcnt);
    prt->papFldDes[longoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[longoutRecordPACT]->offset = (unsigned short)offsetof(longoutRecord, pact);
    prt->papFldDes[longoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[longoutRecordPUTF]->offset = (unsigned short)offsetof(longoutRecord, putf);
    prt->papFldDes[longoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[longoutRecordRPRO]->offset = (unsigned short)offsetof(longoutRecord, rpro);
    prt->papFldDes[longoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[longoutRecordASP]->offset = (unsigned short)offsetof(longoutRecord, asp);
    prt->papFldDes[longoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[longoutRecordPPN]->offset = (unsigned short)offsetof(longoutRecord, ppn);
    prt->papFldDes[longoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[longoutRecordPPNR]->offset = (unsigned short)offsetof(longoutRecord, ppnr);
    prt->papFldDes[longoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[longoutRecordSPVT]->offset = (unsigned short)offsetof(longoutRecord, spvt);
    prt->papFldDes[longoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[longoutRecordRSET]->offset = (unsigned short)offsetof(longoutRecord, rset);
    prt->papFldDes[longoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[longoutRecordDSET]->offset = (unsigned short)offsetof(longoutRecord, dset);
    prt->papFldDes[longoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[longoutRecordDPVT]->offset = (unsigned short)offsetof(longoutRecord, dpvt);
    prt->papFldDes[longoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[longoutRecordRDES]->offset = (unsigned short)offsetof(longoutRecord, rdes);
    prt->papFldDes[longoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[longoutRecordLSET]->offset = (unsigned short)offsetof(longoutRecord, lset);
    prt->papFldDes[longoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[longoutRecordPRIO]->offset = (unsigned short)offsetof(longoutRecord, prio);
    prt->papFldDes[longoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[longoutRecordTPRO]->offset = (unsigned short)offsetof(longoutRecord, tpro);
    prt->papFldDes[longoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[longoutRecordBKPT]->offset = (unsigned short)offsetof(longoutRecord, bkpt);
    prt->papFldDes[longoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[longoutRecordUDF]->offset = (unsigned short)offsetof(longoutRecord, udf);
    prt->papFldDes[longoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[longoutRecordUDFS]->offset = (unsigned short)offsetof(longoutRecord, udfs);
    prt->papFldDes[longoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[longoutRecordTIME]->offset = (unsigned short)offsetof(longoutRecord, time);
    prt->papFldDes[longoutRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[longoutRecordUTAG]->offset = (unsigned short)offsetof(longoutRecord, utag);
    prt->papFldDes[longoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[longoutRecordFLNK]->offset = (unsigned short)offsetof(longoutRecord, flnk);
    prt->papFldDes[longoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[longoutRecordVAL]->offset = (unsigned short)offsetof(longoutRecord, val);
    prt->papFldDes[longoutRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[longoutRecordOUT]->offset = (unsigned short)offsetof(longoutRecord, out);
    prt->papFldDes[longoutRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[longoutRecordDOL]->offset = (unsigned short)offsetof(longoutRecord, dol);
    prt->papFldDes[longoutRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[longoutRecordOMSL]->offset = (unsigned short)offsetof(longoutRecord, omsl);
    prt->papFldDes[longoutRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[longoutRecordEGU]->offset = (unsigned short)offsetof(longoutRecord, egu);
    prt->papFldDes[longoutRecordDRVH]->size = sizeof(prec->drvh);
    prt->papFldDes[longoutRecordDRVH]->offset = (unsigned short)offsetof(longoutRecord, drvh);
    prt->papFldDes[longoutRecordDRVL]->size = sizeof(prec->drvl);
    prt->papFldDes[longoutRecordDRVL]->offset = (unsigned short)offsetof(longoutRecord, drvl);
    prt->papFldDes[longoutRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[longoutRecordHOPR]->offset = (unsigned short)offsetof(longoutRecord, hopr);
    prt->papFldDes[longoutRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[longoutRecordLOPR]->offset = (unsigned short)offsetof(longoutRecord, lopr);
    prt->papFldDes[longoutRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[longoutRecordHIHI]->offset = (unsigned short)offsetof(longoutRecord, hihi);
    prt->papFldDes[longoutRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[longoutRecordLOLO]->offset = (unsigned short)offsetof(longoutRecord, lolo);
    prt->papFldDes[longoutRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[longoutRecordHIGH]->offset = (unsigned short)offsetof(longoutRecord, high);
    prt->papFldDes[longoutRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[longoutRecordLOW]->offset = (unsigned short)offsetof(longoutRecord, low);
    prt->papFldDes[longoutRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[longoutRecordHHSV]->offset = (unsigned short)offsetof(longoutRecord, hhsv);
    prt->papFldDes[longoutRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[longoutRecordLLSV]->offset = (unsigned short)offsetof(longoutRecord, llsv);
    prt->papFldDes[longoutRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[longoutRecordHSV]->offset = (unsigned short)offsetof(longoutRecord, hsv);
    prt->papFldDes[longoutRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[longoutRecordLSV]->offset = (unsigned short)offsetof(longoutRecord, lsv);
    prt->papFldDes[longoutRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[longoutRecordHYST]->offset = (unsigned short)offsetof(longoutRecord, hyst);
    prt->papFldDes[longoutRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[longoutRecordADEL]->offset = (unsigned short)offsetof(longoutRecord, adel);
    prt->papFldDes[longoutRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[longoutRecordMDEL]->offset = (unsigned short)offsetof(longoutRecord, mdel);
    prt->papFldDes[longoutRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[longoutRecordLALM]->offset = (unsigned short)offsetof(longoutRecord, lalm);
    prt->papFldDes[longoutRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[longoutRecordALST]->offset = (unsigned short)offsetof(longoutRecord, alst);
    prt->papFldDes[longoutRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[longoutRecordMLST]->offset = (unsigned short)offsetof(longoutRecord, mlst);
    prt->papFldDes[longoutRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[longoutRecordSIOL]->offset = (unsigned short)offsetof(longoutRecord, siol);
    prt->papFldDes[longoutRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[longoutRecordSIML]->offset = (unsigned short)offsetof(longoutRecord, siml);
    prt->papFldDes[longoutRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[longoutRecordSIMM]->offset = (unsigned short)offsetof(longoutRecord, simm);
    prt->papFldDes[longoutRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[longoutRecordSIMS]->offset = (unsigned short)offsetof(longoutRecord, sims);
    prt->papFldDes[longoutRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[longoutRecordOLDSIMM]->offset = (unsigned short)offsetof(longoutRecord, oldsimm);
    prt->papFldDes[longoutRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[longoutRecordSSCN]->offset = (unsigned short)offsetof(longoutRecord, sscn);
    prt->papFldDes[longoutRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[longoutRecordSDLY]->offset = (unsigned short)offsetof(longoutRecord, sdly);
    prt->papFldDes[longoutRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[longoutRecordSIMPVT]->offset = (unsigned short)offsetof(longoutRecord, simpvt);
    prt->papFldDes[longoutRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[longoutRecordIVOA]->offset = (unsigned short)offsetof(longoutRecord, ivoa);
    prt->papFldDes[longoutRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[longoutRecordIVOV]->offset = (unsigned short)offsetof(longoutRecord, ivov);
    prt->papFldDes[longoutRecordPVAL]->size = sizeof(prec->pval);
    prt->papFldDes[longoutRecordPVAL]->offset = (unsigned short)offsetof(longoutRecord, pval);
    prt->papFldDes[longoutRecordOUTPVT]->size = sizeof(prec->outpvt);
    prt->papFldDes[longoutRecordOUTPVT]->offset = (unsigned short)offsetof(longoutRecord, outpvt);
    prt->papFldDes[longoutRecordOOCH]->size = sizeof(prec->ooch);
    prt->papFldDes[longoutRecordOOCH]->offset = (unsigned short)offsetof(longoutRecord, ooch);
    prt->papFldDes[longoutRecordOOPT]->size = sizeof(prec->oopt);
    prt->papFldDes[longoutRecordOOPT]->offset = (unsigned short)offsetof(longoutRecord, oopt);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(longoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_longoutRecord_H */
