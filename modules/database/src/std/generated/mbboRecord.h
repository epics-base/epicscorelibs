/** @file mbboRecord.h
 * @brief Declarations for the @ref mbboRecord "mbbo" record type.
 *
 * This header was generated from mbboRecord.dbd
 */

#ifndef INC_mbboRecord_H
#define INC_mbboRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
/* Declare Device Support Entry Table */
struct mbboRecord;
typedef struct mbbodset {
    dset common; /*init_record returns: (0, 2) => (success, success no convert)*/
    long (*write_mbbo)(struct mbboRecord *prec); /*returns: (0, 2) => (success, success no convert)*/
} mbbodset;
#define HAS_mbbodset

#include "callback.h"

/** @brief Declaration of mbbo record type. */
typedef struct mbboRecord {
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
    epicsEnum16         val;        /**< @brief Desired Value */
    DBLINK              dol;        /**< @brief Desired Output Loc */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    epicsUInt16         nobt;       /**< @brief Number of Bits */
    DBLINK              out;        /**< @brief Output Specification */
    epicsUInt32         zrvl;       /**< @brief Zero Value */
    epicsUInt32         onvl;       /**< @brief One Value */
    epicsUInt32         twvl;       /**< @brief Two Value */
    epicsUInt32         thvl;       /**< @brief Three Value */
    epicsUInt32         frvl;       /**< @brief Four Value */
    epicsUInt32         fvvl;       /**< @brief Five Value */
    epicsUInt32         sxvl;       /**< @brief Six Value */
    epicsUInt32         svvl;       /**< @brief Seven Value */
    epicsUInt32         eivl;       /**< @brief Eight Value */
    epicsUInt32         nivl;       /**< @brief Nine Value */
    epicsUInt32         tevl;       /**< @brief Ten Value */
    epicsUInt32         elvl;       /**< @brief Eleven Value */
    epicsUInt32         tvvl;       /**< @brief Twelve Value */
    epicsUInt32         ttvl;       /**< @brief Thirteen Value */
    epicsUInt32         ftvl;       /**< @brief Fourteen Value */
    epicsUInt32         ffvl;       /**< @brief Fifteen Value */
    char                zrst[26];   /**< @brief Zero String */
    char                onst[26];   /**< @brief One String */
    char                twst[26];   /**< @brief Two String */
    char                thst[26];   /**< @brief Three String */
    char                frst[26];   /**< @brief Four String */
    char                fvst[26];   /**< @brief Five String */
    char                sxst[26];   /**< @brief Six String */
    char                svst[26];   /**< @brief Seven String */
    char                eist[26];   /**< @brief Eight String */
    char                nist[26];   /**< @brief Nine String */
    char                test[26];   /**< @brief Ten String */
    char                elst[26];   /**< @brief Eleven String */
    char                tvst[26];   /**< @brief Twelve String */
    char                ttst[26];   /**< @brief Thirteen String */
    char                ftst[26];   /**< @brief Fourteen String */
    char                ffst[26];   /**< @brief Fifteen String */
    epicsEnum16         zrsv;       /**< @brief State Zero Severity */
    epicsEnum16         onsv;       /**< @brief State One Severity */
    epicsEnum16         twsv;       /**< @brief State Two Severity */
    epicsEnum16         thsv;       /**< @brief State Three Severity */
    epicsEnum16         frsv;       /**< @brief State Four Severity */
    epicsEnum16         fvsv;       /**< @brief State Five Severity */
    epicsEnum16         sxsv;       /**< @brief State Six Severity */
    epicsEnum16         svsv;       /**< @brief State Seven Severity */
    epicsEnum16         eisv;       /**< @brief State Eight Severity */
    epicsEnum16         nisv;       /**< @brief State Nine Severity */
    epicsEnum16         tesv;       /**< @brief State Ten Severity */
    epicsEnum16         elsv;       /**< @brief State Eleven Severity */
    epicsEnum16         tvsv;       /**< @brief State Twelve Severity */
    epicsEnum16         ttsv;       /**< @brief State Thirteen Sevr */
    epicsEnum16         ftsv;       /**< @brief State Fourteen Sevr */
    epicsEnum16         ffsv;       /**< @brief State Fifteen Sevr */
    epicsEnum16         unsv;       /**< @brief Unknown State Sevr */
    epicsEnum16         cosv;       /**< @brief Change of State Sevr */
    epicsUInt32         rval;       /**< @brief Raw Value */
    epicsUInt32         oraw;       /**< @brief Prev Raw Value */
    epicsUInt32         rbv;        /**< @brief Readback Value */
    epicsUInt32         orbv;       /**< @brief Prev Readback Value */
    epicsUInt32         mask;       /**< @brief Hardware Mask */
    epicsUInt16         mlst;       /**< @brief Last Value Monitored */
    epicsUInt16         lalm;       /**< @brief Last Value Alarmed */
    epicsInt16          sdef;       /**< @brief States Defined */
    epicsUInt16         shft;       /**< @brief Shift */
    DBLINK              siol;       /**< @brief Simulation Output Link */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID outpt action */
    epicsUInt16         ivov;       /**< @brief INVALID output value */
} mbboRecord;

typedef enum {
	mbboRecordNAME = 0,
	mbboRecordDESC = 1,
	mbboRecordASG = 2,
	mbboRecordSCAN = 3,
	mbboRecordPINI = 4,
	mbboRecordPHAS = 5,
	mbboRecordEVNT = 6,
	mbboRecordTSE = 7,
	mbboRecordTSEL = 8,
	mbboRecordDTYP = 9,
	mbboRecordDISV = 10,
	mbboRecordDISA = 11,
	mbboRecordSDIS = 12,
	mbboRecordMLOK = 13,
	mbboRecordMLIS = 14,
	mbboRecordBKLNK = 15,
	mbboRecordDISP = 16,
	mbboRecordPROC = 17,
	mbboRecordSTAT = 18,
	mbboRecordSEVR = 19,
	mbboRecordAMSG = 20,
	mbboRecordNSTA = 21,
	mbboRecordNSEV = 22,
	mbboRecordNAMSG = 23,
	mbboRecordACKS = 24,
	mbboRecordACKT = 25,
	mbboRecordDISS = 26,
	mbboRecordLCNT = 27,
	mbboRecordPACT = 28,
	mbboRecordPUTF = 29,
	mbboRecordRPRO = 30,
	mbboRecordASP = 31,
	mbboRecordPPN = 32,
	mbboRecordPPNR = 33,
	mbboRecordSPVT = 34,
	mbboRecordRSET = 35,
	mbboRecordDSET = 36,
	mbboRecordDPVT = 37,
	mbboRecordRDES = 38,
	mbboRecordLSET = 39,
	mbboRecordPRIO = 40,
	mbboRecordTPRO = 41,
	mbboRecordBKPT = 42,
	mbboRecordUDF = 43,
	mbboRecordUDFS = 44,
	mbboRecordTIME = 45,
	mbboRecordUTAG = 46,
	mbboRecordFLNK = 47,
	mbboRecordVAL = 48,
	mbboRecordDOL = 49,
	mbboRecordOMSL = 50,
	mbboRecordNOBT = 51,
	mbboRecordOUT = 52,
	mbboRecordZRVL = 53,
	mbboRecordONVL = 54,
	mbboRecordTWVL = 55,
	mbboRecordTHVL = 56,
	mbboRecordFRVL = 57,
	mbboRecordFVVL = 58,
	mbboRecordSXVL = 59,
	mbboRecordSVVL = 60,
	mbboRecordEIVL = 61,
	mbboRecordNIVL = 62,
	mbboRecordTEVL = 63,
	mbboRecordELVL = 64,
	mbboRecordTVVL = 65,
	mbboRecordTTVL = 66,
	mbboRecordFTVL = 67,
	mbboRecordFFVL = 68,
	mbboRecordZRST = 69,
	mbboRecordONST = 70,
	mbboRecordTWST = 71,
	mbboRecordTHST = 72,
	mbboRecordFRST = 73,
	mbboRecordFVST = 74,
	mbboRecordSXST = 75,
	mbboRecordSVST = 76,
	mbboRecordEIST = 77,
	mbboRecordNIST = 78,
	mbboRecordTEST = 79,
	mbboRecordELST = 80,
	mbboRecordTVST = 81,
	mbboRecordTTST = 82,
	mbboRecordFTST = 83,
	mbboRecordFFST = 84,
	mbboRecordZRSV = 85,
	mbboRecordONSV = 86,
	mbboRecordTWSV = 87,
	mbboRecordTHSV = 88,
	mbboRecordFRSV = 89,
	mbboRecordFVSV = 90,
	mbboRecordSXSV = 91,
	mbboRecordSVSV = 92,
	mbboRecordEISV = 93,
	mbboRecordNISV = 94,
	mbboRecordTESV = 95,
	mbboRecordELSV = 96,
	mbboRecordTVSV = 97,
	mbboRecordTTSV = 98,
	mbboRecordFTSV = 99,
	mbboRecordFFSV = 100,
	mbboRecordUNSV = 101,
	mbboRecordCOSV = 102,
	mbboRecordRVAL = 103,
	mbboRecordORAW = 104,
	mbboRecordRBV = 105,
	mbboRecordORBV = 106,
	mbboRecordMASK = 107,
	mbboRecordMLST = 108,
	mbboRecordLALM = 109,
	mbboRecordSDEF = 110,
	mbboRecordSHFT = 111,
	mbboRecordSIOL = 112,
	mbboRecordSIML = 113,
	mbboRecordSIMM = 114,
	mbboRecordSIMS = 115,
	mbboRecordOLDSIMM = 116,
	mbboRecordSSCN = 117,
	mbboRecordSDLY = 118,
	mbboRecordSIMPVT = 119,
	mbboRecordIVOA = 120,
	mbboRecordIVOV = 121
} mbboFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int mbboRecordSizeOffset(dbRecordType *prt)
{
    mbboRecord *prec = 0;

    if (prt->no_fields != 122) {
        cantProceed("IOC build or installation error:\n"
            "    The mbboRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 122.\n",
            prt->no_fields);
    }
    prt->papFldDes[mbboRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[mbboRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[mbboRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[mbboRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[mbboRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[mbboRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[mbboRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[mbboRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[mbboRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[mbboRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[mbboRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[mbboRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[mbboRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[mbboRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[mbboRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[mbboRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[mbboRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[mbboRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[mbboRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[mbboRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[mbboRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[mbboRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[mbboRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[mbboRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[mbboRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[mbboRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[mbboRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[mbboRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[mbboRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[mbboRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[mbboRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[mbboRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[mbboRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[mbboRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[mbboRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[mbboRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[mbboRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[mbboRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[mbboRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[mbboRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[mbboRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[mbboRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[mbboRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[mbboRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[mbboRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[mbboRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[mbboRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[mbboRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[mbboRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[mbboRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[mbboRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[mbboRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[mbboRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[mbboRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[mbboRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[mbboRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[mbboRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[mbboRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[mbboRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[mbboRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[mbboRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[mbboRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[mbboRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[mbboRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[mbboRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[mbboRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[mbboRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[mbboRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[mbboRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[mbboRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[mbboRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[mbboRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[mbboRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[mbboRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[mbboRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[mbboRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[mbboRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[mbboRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[mbboRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[mbboRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[mbboRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[mbboRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[mbboRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[mbboRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[mbboRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[mbboRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[mbboRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[mbboRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[mbboRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[mbboRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[mbboRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[mbboRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[mbboRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[mbboRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[mbboRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[mbboRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[mbboRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[mbboRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[mbboRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[mbboRecordDOL]->offset = (unsigned short)((char *)&prec->dol - (char *)prec);
    prt->papFldDes[mbboRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[mbboRecordOMSL]->offset = (unsigned short)((char *)&prec->omsl - (char *)prec);
    prt->papFldDes[mbboRecordNOBT]->size = sizeof(prec->nobt);
    prt->papFldDes[mbboRecordNOBT]->offset = (unsigned short)((char *)&prec->nobt - (char *)prec);
    prt->papFldDes[mbboRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[mbboRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[mbboRecordZRVL]->size = sizeof(prec->zrvl);
    prt->papFldDes[mbboRecordZRVL]->offset = (unsigned short)((char *)&prec->zrvl - (char *)prec);
    prt->papFldDes[mbboRecordONVL]->size = sizeof(prec->onvl);
    prt->papFldDes[mbboRecordONVL]->offset = (unsigned short)((char *)&prec->onvl - (char *)prec);
    prt->papFldDes[mbboRecordTWVL]->size = sizeof(prec->twvl);
    prt->papFldDes[mbboRecordTWVL]->offset = (unsigned short)((char *)&prec->twvl - (char *)prec);
    prt->papFldDes[mbboRecordTHVL]->size = sizeof(prec->thvl);
    prt->papFldDes[mbboRecordTHVL]->offset = (unsigned short)((char *)&prec->thvl - (char *)prec);
    prt->papFldDes[mbboRecordFRVL]->size = sizeof(prec->frvl);
    prt->papFldDes[mbboRecordFRVL]->offset = (unsigned short)((char *)&prec->frvl - (char *)prec);
    prt->papFldDes[mbboRecordFVVL]->size = sizeof(prec->fvvl);
    prt->papFldDes[mbboRecordFVVL]->offset = (unsigned short)((char *)&prec->fvvl - (char *)prec);
    prt->papFldDes[mbboRecordSXVL]->size = sizeof(prec->sxvl);
    prt->papFldDes[mbboRecordSXVL]->offset = (unsigned short)((char *)&prec->sxvl - (char *)prec);
    prt->papFldDes[mbboRecordSVVL]->size = sizeof(prec->svvl);
    prt->papFldDes[mbboRecordSVVL]->offset = (unsigned short)((char *)&prec->svvl - (char *)prec);
    prt->papFldDes[mbboRecordEIVL]->size = sizeof(prec->eivl);
    prt->papFldDes[mbboRecordEIVL]->offset = (unsigned short)((char *)&prec->eivl - (char *)prec);
    prt->papFldDes[mbboRecordNIVL]->size = sizeof(prec->nivl);
    prt->papFldDes[mbboRecordNIVL]->offset = (unsigned short)((char *)&prec->nivl - (char *)prec);
    prt->papFldDes[mbboRecordTEVL]->size = sizeof(prec->tevl);
    prt->papFldDes[mbboRecordTEVL]->offset = (unsigned short)((char *)&prec->tevl - (char *)prec);
    prt->papFldDes[mbboRecordELVL]->size = sizeof(prec->elvl);
    prt->papFldDes[mbboRecordELVL]->offset = (unsigned short)((char *)&prec->elvl - (char *)prec);
    prt->papFldDes[mbboRecordTVVL]->size = sizeof(prec->tvvl);
    prt->papFldDes[mbboRecordTVVL]->offset = (unsigned short)((char *)&prec->tvvl - (char *)prec);
    prt->papFldDes[mbboRecordTTVL]->size = sizeof(prec->ttvl);
    prt->papFldDes[mbboRecordTTVL]->offset = (unsigned short)((char *)&prec->ttvl - (char *)prec);
    prt->papFldDes[mbboRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[mbboRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[mbboRecordFFVL]->size = sizeof(prec->ffvl);
    prt->papFldDes[mbboRecordFFVL]->offset = (unsigned short)((char *)&prec->ffvl - (char *)prec);
    prt->papFldDes[mbboRecordZRST]->size = sizeof(prec->zrst);
    prt->papFldDes[mbboRecordZRST]->offset = (unsigned short)((char *)&prec->zrst - (char *)prec);
    prt->papFldDes[mbboRecordONST]->size = sizeof(prec->onst);
    prt->papFldDes[mbboRecordONST]->offset = (unsigned short)((char *)&prec->onst - (char *)prec);
    prt->papFldDes[mbboRecordTWST]->size = sizeof(prec->twst);
    prt->papFldDes[mbboRecordTWST]->offset = (unsigned short)((char *)&prec->twst - (char *)prec);
    prt->papFldDes[mbboRecordTHST]->size = sizeof(prec->thst);
    prt->papFldDes[mbboRecordTHST]->offset = (unsigned short)((char *)&prec->thst - (char *)prec);
    prt->papFldDes[mbboRecordFRST]->size = sizeof(prec->frst);
    prt->papFldDes[mbboRecordFRST]->offset = (unsigned short)((char *)&prec->frst - (char *)prec);
    prt->papFldDes[mbboRecordFVST]->size = sizeof(prec->fvst);
    prt->papFldDes[mbboRecordFVST]->offset = (unsigned short)((char *)&prec->fvst - (char *)prec);
    prt->papFldDes[mbboRecordSXST]->size = sizeof(prec->sxst);
    prt->papFldDes[mbboRecordSXST]->offset = (unsigned short)((char *)&prec->sxst - (char *)prec);
    prt->papFldDes[mbboRecordSVST]->size = sizeof(prec->svst);
    prt->papFldDes[mbboRecordSVST]->offset = (unsigned short)((char *)&prec->svst - (char *)prec);
    prt->papFldDes[mbboRecordEIST]->size = sizeof(prec->eist);
    prt->papFldDes[mbboRecordEIST]->offset = (unsigned short)((char *)&prec->eist - (char *)prec);
    prt->papFldDes[mbboRecordNIST]->size = sizeof(prec->nist);
    prt->papFldDes[mbboRecordNIST]->offset = (unsigned short)((char *)&prec->nist - (char *)prec);
    prt->papFldDes[mbboRecordTEST]->size = sizeof(prec->test);
    prt->papFldDes[mbboRecordTEST]->offset = (unsigned short)((char *)&prec->test - (char *)prec);
    prt->papFldDes[mbboRecordELST]->size = sizeof(prec->elst);
    prt->papFldDes[mbboRecordELST]->offset = (unsigned short)((char *)&prec->elst - (char *)prec);
    prt->papFldDes[mbboRecordTVST]->size = sizeof(prec->tvst);
    prt->papFldDes[mbboRecordTVST]->offset = (unsigned short)((char *)&prec->tvst - (char *)prec);
    prt->papFldDes[mbboRecordTTST]->size = sizeof(prec->ttst);
    prt->papFldDes[mbboRecordTTST]->offset = (unsigned short)((char *)&prec->ttst - (char *)prec);
    prt->papFldDes[mbboRecordFTST]->size = sizeof(prec->ftst);
    prt->papFldDes[mbboRecordFTST]->offset = (unsigned short)((char *)&prec->ftst - (char *)prec);
    prt->papFldDes[mbboRecordFFST]->size = sizeof(prec->ffst);
    prt->papFldDes[mbboRecordFFST]->offset = (unsigned short)((char *)&prec->ffst - (char *)prec);
    prt->papFldDes[mbboRecordZRSV]->size = sizeof(prec->zrsv);
    prt->papFldDes[mbboRecordZRSV]->offset = (unsigned short)((char *)&prec->zrsv - (char *)prec);
    prt->papFldDes[mbboRecordONSV]->size = sizeof(prec->onsv);
    prt->papFldDes[mbboRecordONSV]->offset = (unsigned short)((char *)&prec->onsv - (char *)prec);
    prt->papFldDes[mbboRecordTWSV]->size = sizeof(prec->twsv);
    prt->papFldDes[mbboRecordTWSV]->offset = (unsigned short)((char *)&prec->twsv - (char *)prec);
    prt->papFldDes[mbboRecordTHSV]->size = sizeof(prec->thsv);
    prt->papFldDes[mbboRecordTHSV]->offset = (unsigned short)((char *)&prec->thsv - (char *)prec);
    prt->papFldDes[mbboRecordFRSV]->size = sizeof(prec->frsv);
    prt->papFldDes[mbboRecordFRSV]->offset = (unsigned short)((char *)&prec->frsv - (char *)prec);
    prt->papFldDes[mbboRecordFVSV]->size = sizeof(prec->fvsv);
    prt->papFldDes[mbboRecordFVSV]->offset = (unsigned short)((char *)&prec->fvsv - (char *)prec);
    prt->papFldDes[mbboRecordSXSV]->size = sizeof(prec->sxsv);
    prt->papFldDes[mbboRecordSXSV]->offset = (unsigned short)((char *)&prec->sxsv - (char *)prec);
    prt->papFldDes[mbboRecordSVSV]->size = sizeof(prec->svsv);
    prt->papFldDes[mbboRecordSVSV]->offset = (unsigned short)((char *)&prec->svsv - (char *)prec);
    prt->papFldDes[mbboRecordEISV]->size = sizeof(prec->eisv);
    prt->papFldDes[mbboRecordEISV]->offset = (unsigned short)((char *)&prec->eisv - (char *)prec);
    prt->papFldDes[mbboRecordNISV]->size = sizeof(prec->nisv);
    prt->papFldDes[mbboRecordNISV]->offset = (unsigned short)((char *)&prec->nisv - (char *)prec);
    prt->papFldDes[mbboRecordTESV]->size = sizeof(prec->tesv);
    prt->papFldDes[mbboRecordTESV]->offset = (unsigned short)((char *)&prec->tesv - (char *)prec);
    prt->papFldDes[mbboRecordELSV]->size = sizeof(prec->elsv);
    prt->papFldDes[mbboRecordELSV]->offset = (unsigned short)((char *)&prec->elsv - (char *)prec);
    prt->papFldDes[mbboRecordTVSV]->size = sizeof(prec->tvsv);
    prt->papFldDes[mbboRecordTVSV]->offset = (unsigned short)((char *)&prec->tvsv - (char *)prec);
    prt->papFldDes[mbboRecordTTSV]->size = sizeof(prec->ttsv);
    prt->papFldDes[mbboRecordTTSV]->offset = (unsigned short)((char *)&prec->ttsv - (char *)prec);
    prt->papFldDes[mbboRecordFTSV]->size = sizeof(prec->ftsv);
    prt->papFldDes[mbboRecordFTSV]->offset = (unsigned short)((char *)&prec->ftsv - (char *)prec);
    prt->papFldDes[mbboRecordFFSV]->size = sizeof(prec->ffsv);
    prt->papFldDes[mbboRecordFFSV]->offset = (unsigned short)((char *)&prec->ffsv - (char *)prec);
    prt->papFldDes[mbboRecordUNSV]->size = sizeof(prec->unsv);
    prt->papFldDes[mbboRecordUNSV]->offset = (unsigned short)((char *)&prec->unsv - (char *)prec);
    prt->papFldDes[mbboRecordCOSV]->size = sizeof(prec->cosv);
    prt->papFldDes[mbboRecordCOSV]->offset = (unsigned short)((char *)&prec->cosv - (char *)prec);
    prt->papFldDes[mbboRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[mbboRecordRVAL]->offset = (unsigned short)((char *)&prec->rval - (char *)prec);
    prt->papFldDes[mbboRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[mbboRecordORAW]->offset = (unsigned short)((char *)&prec->oraw - (char *)prec);
    prt->papFldDes[mbboRecordRBV]->size = sizeof(prec->rbv);
    prt->papFldDes[mbboRecordRBV]->offset = (unsigned short)((char *)&prec->rbv - (char *)prec);
    prt->papFldDes[mbboRecordORBV]->size = sizeof(prec->orbv);
    prt->papFldDes[mbboRecordORBV]->offset = (unsigned short)((char *)&prec->orbv - (char *)prec);
    prt->papFldDes[mbboRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[mbboRecordMASK]->offset = (unsigned short)((char *)&prec->mask - (char *)prec);
    prt->papFldDes[mbboRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[mbboRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[mbboRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[mbboRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[mbboRecordSDEF]->size = sizeof(prec->sdef);
    prt->papFldDes[mbboRecordSDEF]->offset = (unsigned short)((char *)&prec->sdef - (char *)prec);
    prt->papFldDes[mbboRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[mbboRecordSHFT]->offset = (unsigned short)((char *)&prec->shft - (char *)prec);
    prt->papFldDes[mbboRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[mbboRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[mbboRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[mbboRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[mbboRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[mbboRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[mbboRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[mbboRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[mbboRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[mbboRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[mbboRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[mbboRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[mbboRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[mbboRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[mbboRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[mbboRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[mbboRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[mbboRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[mbboRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[mbboRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(mbboRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_mbboRecord_H */
