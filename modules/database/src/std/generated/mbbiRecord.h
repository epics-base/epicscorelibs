/** @file mbbiRecord.h
 * @brief Declarations for the @ref mbbiRecord "mbbi" record type.
 *
 * This header was generated from mbbiRecord.dbd
 */

#ifndef INC_mbbiRecord_H
#define INC_mbbiRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
/* Declare Device Support Entry Table */
struct mbbiRecord;
typedef struct mbbidset {
    dset common; /* init_record returns: (-1,0) => (failure, success)*/
    long (*read_mbbi)(struct mbbiRecord *prec); /* (0, 2) => (success, success no convert)*/
} mbbidset;
#define HAS_mbbidset

#include "callback.h"

/** @brief Declaration of mbbi record type. */
typedef struct mbbiRecord {
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
    epicsEnum16         val;        /**< @brief Current Value */
    epicsUInt16         nobt;       /**< @brief Number of Bits */
    DBLINK              inp;        /**< @brief Input Specification */
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
    epicsEnum16         ffsv;       /**< @brief State Fifteen Severity */
    epicsFloat64        aftc;       /**< @brief Alarm Filter Time Constant */
    epicsFloat64        afvl;       /**< @brief Alarm Filter Value */
    epicsEnum16         unsv;       /**< @brief Unknown State Severity */
    epicsEnum16         cosv;       /**< @brief Change of State Svr */
    epicsUInt32         rval;       /**< @brief Raw Value */
    epicsUInt32         oraw;       /**< @brief Prev Raw Value */
    epicsUInt32         mask;       /**< @brief Hardware Mask */
    epicsUInt16         mlst;       /**< @brief Last Value Monitored */
    epicsUInt16         lalm;       /**< @brief Last Value Alarmed */
    epicsInt16          sdef;       /**< @brief States Defined */
    epicsUInt16         shft;       /**< @brief Shift */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    epicsUInt32         sval;       /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} mbbiRecord;

typedef enum {
	mbbiRecordNAME = 0,
	mbbiRecordDESC = 1,
	mbbiRecordASG = 2,
	mbbiRecordSCAN = 3,
	mbbiRecordPINI = 4,
	mbbiRecordPHAS = 5,
	mbbiRecordEVNT = 6,
	mbbiRecordTSE = 7,
	mbbiRecordTSEL = 8,
	mbbiRecordDTYP = 9,
	mbbiRecordDISV = 10,
	mbbiRecordDISA = 11,
	mbbiRecordSDIS = 12,
	mbbiRecordMLOK = 13,
	mbbiRecordMLIS = 14,
	mbbiRecordBKLNK = 15,
	mbbiRecordDISP = 16,
	mbbiRecordPROC = 17,
	mbbiRecordSTAT = 18,
	mbbiRecordSEVR = 19,
	mbbiRecordAMSG = 20,
	mbbiRecordNSTA = 21,
	mbbiRecordNSEV = 22,
	mbbiRecordNAMSG = 23,
	mbbiRecordACKS = 24,
	mbbiRecordACKT = 25,
	mbbiRecordDISS = 26,
	mbbiRecordLCNT = 27,
	mbbiRecordPACT = 28,
	mbbiRecordPUTF = 29,
	mbbiRecordRPRO = 30,
	mbbiRecordASP = 31,
	mbbiRecordPPN = 32,
	mbbiRecordPPNR = 33,
	mbbiRecordSPVT = 34,
	mbbiRecordRSET = 35,
	mbbiRecordDSET = 36,
	mbbiRecordDPVT = 37,
	mbbiRecordRDES = 38,
	mbbiRecordLSET = 39,
	mbbiRecordPRIO = 40,
	mbbiRecordTPRO = 41,
	mbbiRecordBKPT = 42,
	mbbiRecordUDF = 43,
	mbbiRecordUDFS = 44,
	mbbiRecordTIME = 45,
	mbbiRecordUTAG = 46,
	mbbiRecordFLNK = 47,
	mbbiRecordVAL = 48,
	mbbiRecordNOBT = 49,
	mbbiRecordINP = 50,
	mbbiRecordZRVL = 51,
	mbbiRecordONVL = 52,
	mbbiRecordTWVL = 53,
	mbbiRecordTHVL = 54,
	mbbiRecordFRVL = 55,
	mbbiRecordFVVL = 56,
	mbbiRecordSXVL = 57,
	mbbiRecordSVVL = 58,
	mbbiRecordEIVL = 59,
	mbbiRecordNIVL = 60,
	mbbiRecordTEVL = 61,
	mbbiRecordELVL = 62,
	mbbiRecordTVVL = 63,
	mbbiRecordTTVL = 64,
	mbbiRecordFTVL = 65,
	mbbiRecordFFVL = 66,
	mbbiRecordZRST = 67,
	mbbiRecordONST = 68,
	mbbiRecordTWST = 69,
	mbbiRecordTHST = 70,
	mbbiRecordFRST = 71,
	mbbiRecordFVST = 72,
	mbbiRecordSXST = 73,
	mbbiRecordSVST = 74,
	mbbiRecordEIST = 75,
	mbbiRecordNIST = 76,
	mbbiRecordTEST = 77,
	mbbiRecordELST = 78,
	mbbiRecordTVST = 79,
	mbbiRecordTTST = 80,
	mbbiRecordFTST = 81,
	mbbiRecordFFST = 82,
	mbbiRecordZRSV = 83,
	mbbiRecordONSV = 84,
	mbbiRecordTWSV = 85,
	mbbiRecordTHSV = 86,
	mbbiRecordFRSV = 87,
	mbbiRecordFVSV = 88,
	mbbiRecordSXSV = 89,
	mbbiRecordSVSV = 90,
	mbbiRecordEISV = 91,
	mbbiRecordNISV = 92,
	mbbiRecordTESV = 93,
	mbbiRecordELSV = 94,
	mbbiRecordTVSV = 95,
	mbbiRecordTTSV = 96,
	mbbiRecordFTSV = 97,
	mbbiRecordFFSV = 98,
	mbbiRecordAFTC = 99,
	mbbiRecordAFVL = 100,
	mbbiRecordUNSV = 101,
	mbbiRecordCOSV = 102,
	mbbiRecordRVAL = 103,
	mbbiRecordORAW = 104,
	mbbiRecordMASK = 105,
	mbbiRecordMLST = 106,
	mbbiRecordLALM = 107,
	mbbiRecordSDEF = 108,
	mbbiRecordSHFT = 109,
	mbbiRecordSIOL = 110,
	mbbiRecordSVAL = 111,
	mbbiRecordSIML = 112,
	mbbiRecordSIMM = 113,
	mbbiRecordSIMS = 114,
	mbbiRecordOLDSIMM = 115,
	mbbiRecordSSCN = 116,
	mbbiRecordSDLY = 117,
	mbbiRecordSIMPVT = 118
} mbbiFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int mbbiRecordSizeOffset(dbRecordType *prt)
{
    mbbiRecord *prec = 0;

    if (prt->no_fields != 119) {
        cantProceed("IOC build or installation error:\n"
            "    The mbbiRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 119.\n",
            prt->no_fields);
    }
    prt->papFldDes[mbbiRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[mbbiRecordNAME]->offset = (unsigned short)offsetof(mbbiRecord, name);
    prt->papFldDes[mbbiRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[mbbiRecordDESC]->offset = (unsigned short)offsetof(mbbiRecord, desc);
    prt->papFldDes[mbbiRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[mbbiRecordASG]->offset = (unsigned short)offsetof(mbbiRecord, asg);
    prt->papFldDes[mbbiRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[mbbiRecordSCAN]->offset = (unsigned short)offsetof(mbbiRecord, scan);
    prt->papFldDes[mbbiRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[mbbiRecordPINI]->offset = (unsigned short)offsetof(mbbiRecord, pini);
    prt->papFldDes[mbbiRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[mbbiRecordPHAS]->offset = (unsigned short)offsetof(mbbiRecord, phas);
    prt->papFldDes[mbbiRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[mbbiRecordEVNT]->offset = (unsigned short)offsetof(mbbiRecord, evnt);
    prt->papFldDes[mbbiRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[mbbiRecordTSE]->offset = (unsigned short)offsetof(mbbiRecord, tse);
    prt->papFldDes[mbbiRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[mbbiRecordTSEL]->offset = (unsigned short)offsetof(mbbiRecord, tsel);
    prt->papFldDes[mbbiRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[mbbiRecordDTYP]->offset = (unsigned short)offsetof(mbbiRecord, dtyp);
    prt->papFldDes[mbbiRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[mbbiRecordDISV]->offset = (unsigned short)offsetof(mbbiRecord, disv);
    prt->papFldDes[mbbiRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[mbbiRecordDISA]->offset = (unsigned short)offsetof(mbbiRecord, disa);
    prt->papFldDes[mbbiRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[mbbiRecordSDIS]->offset = (unsigned short)offsetof(mbbiRecord, sdis);
    prt->papFldDes[mbbiRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[mbbiRecordMLOK]->offset = (unsigned short)offsetof(mbbiRecord, mlok);
    prt->papFldDes[mbbiRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[mbbiRecordMLIS]->offset = (unsigned short)offsetof(mbbiRecord, mlis);
    prt->papFldDes[mbbiRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[mbbiRecordBKLNK]->offset = (unsigned short)offsetof(mbbiRecord, bklnk);
    prt->papFldDes[mbbiRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[mbbiRecordDISP]->offset = (unsigned short)offsetof(mbbiRecord, disp);
    prt->papFldDes[mbbiRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[mbbiRecordPROC]->offset = (unsigned short)offsetof(mbbiRecord, proc);
    prt->papFldDes[mbbiRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[mbbiRecordSTAT]->offset = (unsigned short)offsetof(mbbiRecord, stat);
    prt->papFldDes[mbbiRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[mbbiRecordSEVR]->offset = (unsigned short)offsetof(mbbiRecord, sevr);
    prt->papFldDes[mbbiRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[mbbiRecordAMSG]->offset = (unsigned short)offsetof(mbbiRecord, amsg);
    prt->papFldDes[mbbiRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[mbbiRecordNSTA]->offset = (unsigned short)offsetof(mbbiRecord, nsta);
    prt->papFldDes[mbbiRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[mbbiRecordNSEV]->offset = (unsigned short)offsetof(mbbiRecord, nsev);
    prt->papFldDes[mbbiRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[mbbiRecordNAMSG]->offset = (unsigned short)offsetof(mbbiRecord, namsg);
    prt->papFldDes[mbbiRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[mbbiRecordACKS]->offset = (unsigned short)offsetof(mbbiRecord, acks);
    prt->papFldDes[mbbiRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[mbbiRecordACKT]->offset = (unsigned short)offsetof(mbbiRecord, ackt);
    prt->papFldDes[mbbiRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[mbbiRecordDISS]->offset = (unsigned short)offsetof(mbbiRecord, diss);
    prt->papFldDes[mbbiRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[mbbiRecordLCNT]->offset = (unsigned short)offsetof(mbbiRecord, lcnt);
    prt->papFldDes[mbbiRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[mbbiRecordPACT]->offset = (unsigned short)offsetof(mbbiRecord, pact);
    prt->papFldDes[mbbiRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[mbbiRecordPUTF]->offset = (unsigned short)offsetof(mbbiRecord, putf);
    prt->papFldDes[mbbiRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[mbbiRecordRPRO]->offset = (unsigned short)offsetof(mbbiRecord, rpro);
    prt->papFldDes[mbbiRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[mbbiRecordASP]->offset = (unsigned short)offsetof(mbbiRecord, asp);
    prt->papFldDes[mbbiRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[mbbiRecordPPN]->offset = (unsigned short)offsetof(mbbiRecord, ppn);
    prt->papFldDes[mbbiRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[mbbiRecordPPNR]->offset = (unsigned short)offsetof(mbbiRecord, ppnr);
    prt->papFldDes[mbbiRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[mbbiRecordSPVT]->offset = (unsigned short)offsetof(mbbiRecord, spvt);
    prt->papFldDes[mbbiRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[mbbiRecordRSET]->offset = (unsigned short)offsetof(mbbiRecord, rset);
    prt->papFldDes[mbbiRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[mbbiRecordDSET]->offset = (unsigned short)offsetof(mbbiRecord, dset);
    prt->papFldDes[mbbiRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[mbbiRecordDPVT]->offset = (unsigned short)offsetof(mbbiRecord, dpvt);
    prt->papFldDes[mbbiRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[mbbiRecordRDES]->offset = (unsigned short)offsetof(mbbiRecord, rdes);
    prt->papFldDes[mbbiRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[mbbiRecordLSET]->offset = (unsigned short)offsetof(mbbiRecord, lset);
    prt->papFldDes[mbbiRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[mbbiRecordPRIO]->offset = (unsigned short)offsetof(mbbiRecord, prio);
    prt->papFldDes[mbbiRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[mbbiRecordTPRO]->offset = (unsigned short)offsetof(mbbiRecord, tpro);
    prt->papFldDes[mbbiRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[mbbiRecordBKPT]->offset = (unsigned short)offsetof(mbbiRecord, bkpt);
    prt->papFldDes[mbbiRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[mbbiRecordUDF]->offset = (unsigned short)offsetof(mbbiRecord, udf);
    prt->papFldDes[mbbiRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[mbbiRecordUDFS]->offset = (unsigned short)offsetof(mbbiRecord, udfs);
    prt->papFldDes[mbbiRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[mbbiRecordTIME]->offset = (unsigned short)offsetof(mbbiRecord, time);
    prt->papFldDes[mbbiRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[mbbiRecordUTAG]->offset = (unsigned short)offsetof(mbbiRecord, utag);
    prt->papFldDes[mbbiRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[mbbiRecordFLNK]->offset = (unsigned short)offsetof(mbbiRecord, flnk);
    prt->papFldDes[mbbiRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[mbbiRecordVAL]->offset = (unsigned short)offsetof(mbbiRecord, val);
    prt->papFldDes[mbbiRecordNOBT]->size = sizeof(prec->nobt);
    prt->papFldDes[mbbiRecordNOBT]->offset = (unsigned short)offsetof(mbbiRecord, nobt);
    prt->papFldDes[mbbiRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[mbbiRecordINP]->offset = (unsigned short)offsetof(mbbiRecord, inp);
    prt->papFldDes[mbbiRecordZRVL]->size = sizeof(prec->zrvl);
    prt->papFldDes[mbbiRecordZRVL]->offset = (unsigned short)offsetof(mbbiRecord, zrvl);
    prt->papFldDes[mbbiRecordONVL]->size = sizeof(prec->onvl);
    prt->papFldDes[mbbiRecordONVL]->offset = (unsigned short)offsetof(mbbiRecord, onvl);
    prt->papFldDes[mbbiRecordTWVL]->size = sizeof(prec->twvl);
    prt->papFldDes[mbbiRecordTWVL]->offset = (unsigned short)offsetof(mbbiRecord, twvl);
    prt->papFldDes[mbbiRecordTHVL]->size = sizeof(prec->thvl);
    prt->papFldDes[mbbiRecordTHVL]->offset = (unsigned short)offsetof(mbbiRecord, thvl);
    prt->papFldDes[mbbiRecordFRVL]->size = sizeof(prec->frvl);
    prt->papFldDes[mbbiRecordFRVL]->offset = (unsigned short)offsetof(mbbiRecord, frvl);
    prt->papFldDes[mbbiRecordFVVL]->size = sizeof(prec->fvvl);
    prt->papFldDes[mbbiRecordFVVL]->offset = (unsigned short)offsetof(mbbiRecord, fvvl);
    prt->papFldDes[mbbiRecordSXVL]->size = sizeof(prec->sxvl);
    prt->papFldDes[mbbiRecordSXVL]->offset = (unsigned short)offsetof(mbbiRecord, sxvl);
    prt->papFldDes[mbbiRecordSVVL]->size = sizeof(prec->svvl);
    prt->papFldDes[mbbiRecordSVVL]->offset = (unsigned short)offsetof(mbbiRecord, svvl);
    prt->papFldDes[mbbiRecordEIVL]->size = sizeof(prec->eivl);
    prt->papFldDes[mbbiRecordEIVL]->offset = (unsigned short)offsetof(mbbiRecord, eivl);
    prt->papFldDes[mbbiRecordNIVL]->size = sizeof(prec->nivl);
    prt->papFldDes[mbbiRecordNIVL]->offset = (unsigned short)offsetof(mbbiRecord, nivl);
    prt->papFldDes[mbbiRecordTEVL]->size = sizeof(prec->tevl);
    prt->papFldDes[mbbiRecordTEVL]->offset = (unsigned short)offsetof(mbbiRecord, tevl);
    prt->papFldDes[mbbiRecordELVL]->size = sizeof(prec->elvl);
    prt->papFldDes[mbbiRecordELVL]->offset = (unsigned short)offsetof(mbbiRecord, elvl);
    prt->papFldDes[mbbiRecordTVVL]->size = sizeof(prec->tvvl);
    prt->papFldDes[mbbiRecordTVVL]->offset = (unsigned short)offsetof(mbbiRecord, tvvl);
    prt->papFldDes[mbbiRecordTTVL]->size = sizeof(prec->ttvl);
    prt->papFldDes[mbbiRecordTTVL]->offset = (unsigned short)offsetof(mbbiRecord, ttvl);
    prt->papFldDes[mbbiRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[mbbiRecordFTVL]->offset = (unsigned short)offsetof(mbbiRecord, ftvl);
    prt->papFldDes[mbbiRecordFFVL]->size = sizeof(prec->ffvl);
    prt->papFldDes[mbbiRecordFFVL]->offset = (unsigned short)offsetof(mbbiRecord, ffvl);
    prt->papFldDes[mbbiRecordZRST]->size = sizeof(prec->zrst);
    prt->papFldDes[mbbiRecordZRST]->offset = (unsigned short)offsetof(mbbiRecord, zrst);
    prt->papFldDes[mbbiRecordONST]->size = sizeof(prec->onst);
    prt->papFldDes[mbbiRecordONST]->offset = (unsigned short)offsetof(mbbiRecord, onst);
    prt->papFldDes[mbbiRecordTWST]->size = sizeof(prec->twst);
    prt->papFldDes[mbbiRecordTWST]->offset = (unsigned short)offsetof(mbbiRecord, twst);
    prt->papFldDes[mbbiRecordTHST]->size = sizeof(prec->thst);
    prt->papFldDes[mbbiRecordTHST]->offset = (unsigned short)offsetof(mbbiRecord, thst);
    prt->papFldDes[mbbiRecordFRST]->size = sizeof(prec->frst);
    prt->papFldDes[mbbiRecordFRST]->offset = (unsigned short)offsetof(mbbiRecord, frst);
    prt->papFldDes[mbbiRecordFVST]->size = sizeof(prec->fvst);
    prt->papFldDes[mbbiRecordFVST]->offset = (unsigned short)offsetof(mbbiRecord, fvst);
    prt->papFldDes[mbbiRecordSXST]->size = sizeof(prec->sxst);
    prt->papFldDes[mbbiRecordSXST]->offset = (unsigned short)offsetof(mbbiRecord, sxst);
    prt->papFldDes[mbbiRecordSVST]->size = sizeof(prec->svst);
    prt->papFldDes[mbbiRecordSVST]->offset = (unsigned short)offsetof(mbbiRecord, svst);
    prt->papFldDes[mbbiRecordEIST]->size = sizeof(prec->eist);
    prt->papFldDes[mbbiRecordEIST]->offset = (unsigned short)offsetof(mbbiRecord, eist);
    prt->papFldDes[mbbiRecordNIST]->size = sizeof(prec->nist);
    prt->papFldDes[mbbiRecordNIST]->offset = (unsigned short)offsetof(mbbiRecord, nist);
    prt->papFldDes[mbbiRecordTEST]->size = sizeof(prec->test);
    prt->papFldDes[mbbiRecordTEST]->offset = (unsigned short)offsetof(mbbiRecord, test);
    prt->papFldDes[mbbiRecordELST]->size = sizeof(prec->elst);
    prt->papFldDes[mbbiRecordELST]->offset = (unsigned short)offsetof(mbbiRecord, elst);
    prt->papFldDes[mbbiRecordTVST]->size = sizeof(prec->tvst);
    prt->papFldDes[mbbiRecordTVST]->offset = (unsigned short)offsetof(mbbiRecord, tvst);
    prt->papFldDes[mbbiRecordTTST]->size = sizeof(prec->ttst);
    prt->papFldDes[mbbiRecordTTST]->offset = (unsigned short)offsetof(mbbiRecord, ttst);
    prt->papFldDes[mbbiRecordFTST]->size = sizeof(prec->ftst);
    prt->papFldDes[mbbiRecordFTST]->offset = (unsigned short)offsetof(mbbiRecord, ftst);
    prt->papFldDes[mbbiRecordFFST]->size = sizeof(prec->ffst);
    prt->papFldDes[mbbiRecordFFST]->offset = (unsigned short)offsetof(mbbiRecord, ffst);
    prt->papFldDes[mbbiRecordZRSV]->size = sizeof(prec->zrsv);
    prt->papFldDes[mbbiRecordZRSV]->offset = (unsigned short)offsetof(mbbiRecord, zrsv);
    prt->papFldDes[mbbiRecordONSV]->size = sizeof(prec->onsv);
    prt->papFldDes[mbbiRecordONSV]->offset = (unsigned short)offsetof(mbbiRecord, onsv);
    prt->papFldDes[mbbiRecordTWSV]->size = sizeof(prec->twsv);
    prt->papFldDes[mbbiRecordTWSV]->offset = (unsigned short)offsetof(mbbiRecord, twsv);
    prt->papFldDes[mbbiRecordTHSV]->size = sizeof(prec->thsv);
    prt->papFldDes[mbbiRecordTHSV]->offset = (unsigned short)offsetof(mbbiRecord, thsv);
    prt->papFldDes[mbbiRecordFRSV]->size = sizeof(prec->frsv);
    prt->papFldDes[mbbiRecordFRSV]->offset = (unsigned short)offsetof(mbbiRecord, frsv);
    prt->papFldDes[mbbiRecordFVSV]->size = sizeof(prec->fvsv);
    prt->papFldDes[mbbiRecordFVSV]->offset = (unsigned short)offsetof(mbbiRecord, fvsv);
    prt->papFldDes[mbbiRecordSXSV]->size = sizeof(prec->sxsv);
    prt->papFldDes[mbbiRecordSXSV]->offset = (unsigned short)offsetof(mbbiRecord, sxsv);
    prt->papFldDes[mbbiRecordSVSV]->size = sizeof(prec->svsv);
    prt->papFldDes[mbbiRecordSVSV]->offset = (unsigned short)offsetof(mbbiRecord, svsv);
    prt->papFldDes[mbbiRecordEISV]->size = sizeof(prec->eisv);
    prt->papFldDes[mbbiRecordEISV]->offset = (unsigned short)offsetof(mbbiRecord, eisv);
    prt->papFldDes[mbbiRecordNISV]->size = sizeof(prec->nisv);
    prt->papFldDes[mbbiRecordNISV]->offset = (unsigned short)offsetof(mbbiRecord, nisv);
    prt->papFldDes[mbbiRecordTESV]->size = sizeof(prec->tesv);
    prt->papFldDes[mbbiRecordTESV]->offset = (unsigned short)offsetof(mbbiRecord, tesv);
    prt->papFldDes[mbbiRecordELSV]->size = sizeof(prec->elsv);
    prt->papFldDes[mbbiRecordELSV]->offset = (unsigned short)offsetof(mbbiRecord, elsv);
    prt->papFldDes[mbbiRecordTVSV]->size = sizeof(prec->tvsv);
    prt->papFldDes[mbbiRecordTVSV]->offset = (unsigned short)offsetof(mbbiRecord, tvsv);
    prt->papFldDes[mbbiRecordTTSV]->size = sizeof(prec->ttsv);
    prt->papFldDes[mbbiRecordTTSV]->offset = (unsigned short)offsetof(mbbiRecord, ttsv);
    prt->papFldDes[mbbiRecordFTSV]->size = sizeof(prec->ftsv);
    prt->papFldDes[mbbiRecordFTSV]->offset = (unsigned short)offsetof(mbbiRecord, ftsv);
    prt->papFldDes[mbbiRecordFFSV]->size = sizeof(prec->ffsv);
    prt->papFldDes[mbbiRecordFFSV]->offset = (unsigned short)offsetof(mbbiRecord, ffsv);
    prt->papFldDes[mbbiRecordAFTC]->size = sizeof(prec->aftc);
    prt->papFldDes[mbbiRecordAFTC]->offset = (unsigned short)offsetof(mbbiRecord, aftc);
    prt->papFldDes[mbbiRecordAFVL]->size = sizeof(prec->afvl);
    prt->papFldDes[mbbiRecordAFVL]->offset = (unsigned short)offsetof(mbbiRecord, afvl);
    prt->papFldDes[mbbiRecordUNSV]->size = sizeof(prec->unsv);
    prt->papFldDes[mbbiRecordUNSV]->offset = (unsigned short)offsetof(mbbiRecord, unsv);
    prt->papFldDes[mbbiRecordCOSV]->size = sizeof(prec->cosv);
    prt->papFldDes[mbbiRecordCOSV]->offset = (unsigned short)offsetof(mbbiRecord, cosv);
    prt->papFldDes[mbbiRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[mbbiRecordRVAL]->offset = (unsigned short)offsetof(mbbiRecord, rval);
    prt->papFldDes[mbbiRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[mbbiRecordORAW]->offset = (unsigned short)offsetof(mbbiRecord, oraw);
    prt->papFldDes[mbbiRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[mbbiRecordMASK]->offset = (unsigned short)offsetof(mbbiRecord, mask);
    prt->papFldDes[mbbiRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[mbbiRecordMLST]->offset = (unsigned short)offsetof(mbbiRecord, mlst);
    prt->papFldDes[mbbiRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[mbbiRecordLALM]->offset = (unsigned short)offsetof(mbbiRecord, lalm);
    prt->papFldDes[mbbiRecordSDEF]->size = sizeof(prec->sdef);
    prt->papFldDes[mbbiRecordSDEF]->offset = (unsigned short)offsetof(mbbiRecord, sdef);
    prt->papFldDes[mbbiRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[mbbiRecordSHFT]->offset = (unsigned short)offsetof(mbbiRecord, shft);
    prt->papFldDes[mbbiRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[mbbiRecordSIOL]->offset = (unsigned short)offsetof(mbbiRecord, siol);
    prt->papFldDes[mbbiRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[mbbiRecordSVAL]->offset = (unsigned short)offsetof(mbbiRecord, sval);
    prt->papFldDes[mbbiRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[mbbiRecordSIML]->offset = (unsigned short)offsetof(mbbiRecord, siml);
    prt->papFldDes[mbbiRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[mbbiRecordSIMM]->offset = (unsigned short)offsetof(mbbiRecord, simm);
    prt->papFldDes[mbbiRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[mbbiRecordSIMS]->offset = (unsigned short)offsetof(mbbiRecord, sims);
    prt->papFldDes[mbbiRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[mbbiRecordOLDSIMM]->offset = (unsigned short)offsetof(mbbiRecord, oldsimm);
    prt->papFldDes[mbbiRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[mbbiRecordSSCN]->offset = (unsigned short)offsetof(mbbiRecord, sscn);
    prt->papFldDes[mbbiRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[mbbiRecordSDLY]->offset = (unsigned short)offsetof(mbbiRecord, sdly);
    prt->papFldDes[mbbiRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[mbbiRecordSIMPVT]->offset = (unsigned short)offsetof(mbbiRecord, simpvt);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(mbbiRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_mbbiRecord_H */
