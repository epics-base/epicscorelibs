/** @file calcoutRecord.h
 * @brief Declarations for the @ref calcoutRecord "calcout" record type.
 *
 * This header was generated from calcoutRecord.dbd
 */

#ifndef INC_calcoutRecord_H
#define INC_calcoutRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
/* Declare Device Support Entry Table */
struct calcoutRecord;
typedef struct calcoutdset {
    dset common;
    long (*write)(struct calcoutRecord *prec);
} calcoutdset;
#define HAS_calcoutdset

#include "dbScan.h"
#include "postfix.h"

#ifndef calcoutDOPT_NUM_CHOICES
/** @brief Enumerated type from menu calcoutDOPT */
typedef enum {
    calcoutDOPT_Use_VAL             /**< @brief State string "Use CALC" */,
    calcoutDOPT_Use_OVAL            /**< @brief State string "Use OCAL" */
} calcoutDOPT;
/** @brief Number of states defined for menu calcoutDOPT */
#define calcoutDOPT_NUM_CHOICES 2
#endif

#ifndef calcoutOOPT_NUM_CHOICES
/** @brief Enumerated type from menu calcoutOOPT */
typedef enum {
    calcoutOOPT_Every_Time          /**< @brief State string "Every Time" */,
    calcoutOOPT_On_Change           /**< @brief State string "On Change" */,
    calcoutOOPT_When_Zero           /**< @brief State string "When Zero" */,
    calcoutOOPT_When_Non_zero       /**< @brief State string "When Non-zero" */,
    calcoutOOPT_Transition_To_Zero  /**< @brief State string "Transition To Zero" */,
    calcoutOOPT_Transition_To_Non_zero /**< @brief State string "Transition To Non-zero" */
} calcoutOOPT;
/** @brief Number of states defined for menu calcoutOOPT */
#define calcoutOOPT_NUM_CHOICES 6
#endif

#ifndef calcoutINAV_NUM_CHOICES
/** @brief Enumerated type from menu calcoutINAV */
typedef enum {
    calcoutINAV_EXT_NC              /**< @brief State string "Ext PV NC" */,
    calcoutINAV_EXT                 /**< @brief State string "Ext PV OK" */,
    calcoutINAV_LOC                 /**< @brief State string "Local PV" */,
    calcoutINAV_CON                 /**< @brief State string "Constant" */
} calcoutINAV;
/** @brief Number of states defined for menu calcoutINAV */
#define calcoutINAV_NUM_CHOICES 4
#endif

/** @brief Declaration of calcout record type. */
typedef struct calcoutRecord {
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
    struct rpvtStruct *rpvt;        /**< @brief Record Private */
    epicsFloat64        val;        /**< @brief Result */
    epicsFloat64        pval;       /**< @brief Previous Value */
    char                calc[80];   /**< @brief Calculation */
    epicsInt32          clcv;       /**< @brief CALC Valid */
    DBLINK              inpa;       /**< @brief Input A */
    DBLINK              inpb;       /**< @brief Input B */
    DBLINK              inpc;       /**< @brief Input C */
    DBLINK              inpd;       /**< @brief Input D */
    DBLINK              inpe;       /**< @brief Input E */
    DBLINK              inpf;       /**< @brief Input F */
    DBLINK              inpg;       /**< @brief Input G */
    DBLINK              inph;       /**< @brief Input H */
    DBLINK              inpi;       /**< @brief Input I */
    DBLINK              inpj;       /**< @brief Input J */
    DBLINK              inpk;       /**< @brief Input K */
    DBLINK              inpl;       /**< @brief Input L */
    DBLINK              out;        /**< @brief Output Specification */
    epicsEnum16         inav;       /**< @brief INPA PV Status */
    epicsEnum16         inbv;       /**< @brief INPB PV Status */
    epicsEnum16         incv;       /**< @brief INPC PV Status */
    epicsEnum16         indv;       /**< @brief INPD PV Status */
    epicsEnum16         inev;       /**< @brief INPE PV Status */
    epicsEnum16         infv;       /**< @brief INPF PV Status */
    epicsEnum16         ingv;       /**< @brief INPG PV Status */
    epicsEnum16         inhv;       /**< @brief INPH PV Status */
    epicsEnum16         iniv;       /**< @brief INPI PV Status */
    epicsEnum16         injv;       /**< @brief INPJ PV Status */
    epicsEnum16         inkv;       /**< @brief INPK PV Status */
    epicsEnum16         inlv;       /**< @brief INPL PV Status */
    epicsEnum16         outv;       /**< @brief OUT PV Status */
    epicsEnum16         oopt;       /**< @brief Output Execute Opt */
    epicsFloat64        odly;       /**< @brief Output Execute Delay */
    epicsUInt16         dlya;       /**< @brief Output Delay Active */
    epicsEnum16         dopt;       /**< @brief Output Data Opt */
    char                ocal[80];   /**< @brief Output Calculation */
    epicsInt32          oclv;       /**< @brief OCAL Valid */
    char                oevt[40];   /**< @brief Event To Issue */
    EVENTPVT epvt;                  /**< @brief Event private */
    epicsEnum16         ivoa;       /**< @brief INVALID output action */
    epicsFloat64        ivov;       /**< @brief INVALID output value */
    char                egu[16];    /**< @brief Engineering Units */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsFloat64        hopr;       /**< @brief High Operating Rng */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsFloat64        hihi;       /**< @brief Hihi Alarm Limit */
    epicsFloat64        lolo;       /**< @brief Lolo Alarm Limit */
    epicsFloat64        high;       /**< @brief High Alarm Limit */
    epicsFloat64        low;        /**< @brief Low Alarm Limit */
    epicsEnum16         hhsv;       /**< @brief Hihi Severity */
    epicsEnum16         llsv;       /**< @brief Lolo Severity */
    epicsEnum16         hsv;        /**< @brief High Severity */
    epicsEnum16         lsv;        /**< @brief Low Severity */
    epicsFloat64        hyst;       /**< @brief Alarm Deadband */
    epicsFloat64        adel;       /**< @brief Archive Deadband */
    epicsFloat64        mdel;       /**< @brief Monitor Deadband */
    epicsFloat64        a;          /**< @brief Value of Input A */
    epicsFloat64        b;          /**< @brief Value of Input B */
    epicsFloat64        c;          /**< @brief Value of Input C */
    epicsFloat64        d;          /**< @brief Value of Input D */
    epicsFloat64        e;          /**< @brief Value of Input E */
    epicsFloat64        f;          /**< @brief Value of Input F */
    epicsFloat64        g;          /**< @brief Value of Input G */
    epicsFloat64        h;          /**< @brief Value of Input H */
    epicsFloat64        i;          /**< @brief Value of Input I */
    epicsFloat64        j;          /**< @brief Value of Input J */
    epicsFloat64        k;          /**< @brief Value of Input K */
    epicsFloat64        l;          /**< @brief Value of Input L */
    epicsFloat64        oval;       /**< @brief Output Value */
    epicsFloat64        la;         /**< @brief Prev Value of A */
    epicsFloat64        lb;         /**< @brief Prev Value of B */
    epicsFloat64        lc;         /**< @brief Prev Value of C */
    epicsFloat64        ld;         /**< @brief Prev Value of D */
    epicsFloat64        le;         /**< @brief Prev Value of E */
    epicsFloat64        lf;         /**< @brief Prev Value of F */
    epicsFloat64        lg;         /**< @brief Prev Value of G */
    epicsFloat64        lh;         /**< @brief Prev Value of H */
    epicsFloat64        li;         /**< @brief Prev Value of I */
    epicsFloat64        lj;         /**< @brief Prev Value of J */
    epicsFloat64        lk;         /**< @brief Prev Value of K */
    epicsFloat64        ll;         /**< @brief Prev Value of L */
    epicsFloat64        povl;       /**< @brief Prev Value of OVAL */
    epicsFloat64        lalm;       /**< @brief Last Value Alarmed */
    epicsFloat64        alst;       /**< @brief Last Value Archived */
    epicsFloat64        mlst;       /**< @brief Last Val Monitored */
    char	rpcl[INFIX_TO_POSTFIX_SIZE(80)]; /**< @brief Reverse Polish Calc */
    char	orpc[INFIX_TO_POSTFIX_SIZE(80)]; /**< @brief Reverse Polish OCalc */
} calcoutRecord;

typedef enum {
	calcoutRecordNAME = 0,
	calcoutRecordDESC = 1,
	calcoutRecordASG = 2,
	calcoutRecordSCAN = 3,
	calcoutRecordPINI = 4,
	calcoutRecordPHAS = 5,
	calcoutRecordEVNT = 6,
	calcoutRecordTSE = 7,
	calcoutRecordTSEL = 8,
	calcoutRecordDTYP = 9,
	calcoutRecordDISV = 10,
	calcoutRecordDISA = 11,
	calcoutRecordSDIS = 12,
	calcoutRecordMLOK = 13,
	calcoutRecordMLIS = 14,
	calcoutRecordBKLNK = 15,
	calcoutRecordDISP = 16,
	calcoutRecordPROC = 17,
	calcoutRecordSTAT = 18,
	calcoutRecordSEVR = 19,
	calcoutRecordAMSG = 20,
	calcoutRecordNSTA = 21,
	calcoutRecordNSEV = 22,
	calcoutRecordNAMSG = 23,
	calcoutRecordACKS = 24,
	calcoutRecordACKT = 25,
	calcoutRecordDISS = 26,
	calcoutRecordLCNT = 27,
	calcoutRecordPACT = 28,
	calcoutRecordPUTF = 29,
	calcoutRecordRPRO = 30,
	calcoutRecordASP = 31,
	calcoutRecordPPN = 32,
	calcoutRecordPPNR = 33,
	calcoutRecordSPVT = 34,
	calcoutRecordRSET = 35,
	calcoutRecordDSET = 36,
	calcoutRecordDPVT = 37,
	calcoutRecordRDES = 38,
	calcoutRecordLSET = 39,
	calcoutRecordPRIO = 40,
	calcoutRecordTPRO = 41,
	calcoutRecordBKPT = 42,
	calcoutRecordUDF = 43,
	calcoutRecordUDFS = 44,
	calcoutRecordTIME = 45,
	calcoutRecordUTAG = 46,
	calcoutRecordFLNK = 47,
	calcoutRecordRPVT = 48,
	calcoutRecordVAL = 49,
	calcoutRecordPVAL = 50,
	calcoutRecordCALC = 51,
	calcoutRecordCLCV = 52,
	calcoutRecordINPA = 53,
	calcoutRecordINPB = 54,
	calcoutRecordINPC = 55,
	calcoutRecordINPD = 56,
	calcoutRecordINPE = 57,
	calcoutRecordINPF = 58,
	calcoutRecordINPG = 59,
	calcoutRecordINPH = 60,
	calcoutRecordINPI = 61,
	calcoutRecordINPJ = 62,
	calcoutRecordINPK = 63,
	calcoutRecordINPL = 64,
	calcoutRecordOUT = 65,
	calcoutRecordINAV = 66,
	calcoutRecordINBV = 67,
	calcoutRecordINCV = 68,
	calcoutRecordINDV = 69,
	calcoutRecordINEV = 70,
	calcoutRecordINFV = 71,
	calcoutRecordINGV = 72,
	calcoutRecordINHV = 73,
	calcoutRecordINIV = 74,
	calcoutRecordINJV = 75,
	calcoutRecordINKV = 76,
	calcoutRecordINLV = 77,
	calcoutRecordOUTV = 78,
	calcoutRecordOOPT = 79,
	calcoutRecordODLY = 80,
	calcoutRecordDLYA = 81,
	calcoutRecordDOPT = 82,
	calcoutRecordOCAL = 83,
	calcoutRecordOCLV = 84,
	calcoutRecordOEVT = 85,
	calcoutRecordEPVT = 86,
	calcoutRecordIVOA = 87,
	calcoutRecordIVOV = 88,
	calcoutRecordEGU = 89,
	calcoutRecordPREC = 90,
	calcoutRecordHOPR = 91,
	calcoutRecordLOPR = 92,
	calcoutRecordHIHI = 93,
	calcoutRecordLOLO = 94,
	calcoutRecordHIGH = 95,
	calcoutRecordLOW = 96,
	calcoutRecordHHSV = 97,
	calcoutRecordLLSV = 98,
	calcoutRecordHSV = 99,
	calcoutRecordLSV = 100,
	calcoutRecordHYST = 101,
	calcoutRecordADEL = 102,
	calcoutRecordMDEL = 103,
	calcoutRecordA = 104,
	calcoutRecordB = 105,
	calcoutRecordC = 106,
	calcoutRecordD = 107,
	calcoutRecordE = 108,
	calcoutRecordF = 109,
	calcoutRecordG = 110,
	calcoutRecordH = 111,
	calcoutRecordI = 112,
	calcoutRecordJ = 113,
	calcoutRecordK = 114,
	calcoutRecordL = 115,
	calcoutRecordOVAL = 116,
	calcoutRecordLA = 117,
	calcoutRecordLB = 118,
	calcoutRecordLC = 119,
	calcoutRecordLD = 120,
	calcoutRecordLE = 121,
	calcoutRecordLF = 122,
	calcoutRecordLG = 123,
	calcoutRecordLH = 124,
	calcoutRecordLI = 125,
	calcoutRecordLJ = 126,
	calcoutRecordLK = 127,
	calcoutRecordLL = 128,
	calcoutRecordPOVL = 129,
	calcoutRecordLALM = 130,
	calcoutRecordALST = 131,
	calcoutRecordMLST = 132,
	calcoutRecordRPCL = 133,
	calcoutRecordORPC = 134
} calcoutFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int calcoutRecordSizeOffset(dbRecordType *prt)
{
    calcoutRecord *prec = 0;

    if (prt->no_fields != 135) {
        cantProceed("IOC build or installation error:\n"
            "    The calcoutRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 135.\n",
            prt->no_fields);
    }
    prt->papFldDes[calcoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[calcoutRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[calcoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[calcoutRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[calcoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[calcoutRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[calcoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[calcoutRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[calcoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[calcoutRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[calcoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[calcoutRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[calcoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[calcoutRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[calcoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[calcoutRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[calcoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[calcoutRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[calcoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[calcoutRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[calcoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[calcoutRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[calcoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[calcoutRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[calcoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[calcoutRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[calcoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[calcoutRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[calcoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[calcoutRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[calcoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[calcoutRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[calcoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[calcoutRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[calcoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[calcoutRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[calcoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[calcoutRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[calcoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[calcoutRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[calcoutRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[calcoutRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[calcoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[calcoutRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[calcoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[calcoutRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[calcoutRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[calcoutRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[calcoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[calcoutRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[calcoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[calcoutRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[calcoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[calcoutRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[calcoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[calcoutRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[calcoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[calcoutRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[calcoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[calcoutRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[calcoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[calcoutRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[calcoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[calcoutRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[calcoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[calcoutRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[calcoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[calcoutRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[calcoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[calcoutRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[calcoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[calcoutRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[calcoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[calcoutRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[calcoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[calcoutRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[calcoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[calcoutRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[calcoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[calcoutRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[calcoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[calcoutRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[calcoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[calcoutRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[calcoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[calcoutRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[calcoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[calcoutRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[calcoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[calcoutRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[calcoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[calcoutRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[calcoutRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[calcoutRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[calcoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[calcoutRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[calcoutRecordRPVT]->size = sizeof(prec->rpvt);
    prt->papFldDes[calcoutRecordRPVT]->offset = (unsigned short)((char *)&prec->rpvt - (char *)prec);
    prt->papFldDes[calcoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[calcoutRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[calcoutRecordPVAL]->size = sizeof(prec->pval);
    prt->papFldDes[calcoutRecordPVAL]->offset = (unsigned short)((char *)&prec->pval - (char *)prec);
    prt->papFldDes[calcoutRecordCALC]->size = sizeof(prec->calc);
    prt->papFldDes[calcoutRecordCALC]->offset = (unsigned short)((char *)&prec->calc - (char *)prec);
    prt->papFldDes[calcoutRecordCLCV]->size = sizeof(prec->clcv);
    prt->papFldDes[calcoutRecordCLCV]->offset = (unsigned short)((char *)&prec->clcv - (char *)prec);
    prt->papFldDes[calcoutRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[calcoutRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[calcoutRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[calcoutRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[calcoutRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[calcoutRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[calcoutRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[calcoutRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[calcoutRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[calcoutRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[calcoutRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[calcoutRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[calcoutRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[calcoutRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[calcoutRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[calcoutRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[calcoutRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[calcoutRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[calcoutRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[calcoutRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[calcoutRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[calcoutRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[calcoutRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[calcoutRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[calcoutRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[calcoutRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[calcoutRecordINAV]->size = sizeof(prec->inav);
    prt->papFldDes[calcoutRecordINAV]->offset = (unsigned short)((char *)&prec->inav - (char *)prec);
    prt->papFldDes[calcoutRecordINBV]->size = sizeof(prec->inbv);
    prt->papFldDes[calcoutRecordINBV]->offset = (unsigned short)((char *)&prec->inbv - (char *)prec);
    prt->papFldDes[calcoutRecordINCV]->size = sizeof(prec->incv);
    prt->papFldDes[calcoutRecordINCV]->offset = (unsigned short)((char *)&prec->incv - (char *)prec);
    prt->papFldDes[calcoutRecordINDV]->size = sizeof(prec->indv);
    prt->papFldDes[calcoutRecordINDV]->offset = (unsigned short)((char *)&prec->indv - (char *)prec);
    prt->papFldDes[calcoutRecordINEV]->size = sizeof(prec->inev);
    prt->papFldDes[calcoutRecordINEV]->offset = (unsigned short)((char *)&prec->inev - (char *)prec);
    prt->papFldDes[calcoutRecordINFV]->size = sizeof(prec->infv);
    prt->papFldDes[calcoutRecordINFV]->offset = (unsigned short)((char *)&prec->infv - (char *)prec);
    prt->papFldDes[calcoutRecordINGV]->size = sizeof(prec->ingv);
    prt->papFldDes[calcoutRecordINGV]->offset = (unsigned short)((char *)&prec->ingv - (char *)prec);
    prt->papFldDes[calcoutRecordINHV]->size = sizeof(prec->inhv);
    prt->papFldDes[calcoutRecordINHV]->offset = (unsigned short)((char *)&prec->inhv - (char *)prec);
    prt->papFldDes[calcoutRecordINIV]->size = sizeof(prec->iniv);
    prt->papFldDes[calcoutRecordINIV]->offset = (unsigned short)((char *)&prec->iniv - (char *)prec);
    prt->papFldDes[calcoutRecordINJV]->size = sizeof(prec->injv);
    prt->papFldDes[calcoutRecordINJV]->offset = (unsigned short)((char *)&prec->injv - (char *)prec);
    prt->papFldDes[calcoutRecordINKV]->size = sizeof(prec->inkv);
    prt->papFldDes[calcoutRecordINKV]->offset = (unsigned short)((char *)&prec->inkv - (char *)prec);
    prt->papFldDes[calcoutRecordINLV]->size = sizeof(prec->inlv);
    prt->papFldDes[calcoutRecordINLV]->offset = (unsigned short)((char *)&prec->inlv - (char *)prec);
    prt->papFldDes[calcoutRecordOUTV]->size = sizeof(prec->outv);
    prt->papFldDes[calcoutRecordOUTV]->offset = (unsigned short)((char *)&prec->outv - (char *)prec);
    prt->papFldDes[calcoutRecordOOPT]->size = sizeof(prec->oopt);
    prt->papFldDes[calcoutRecordOOPT]->offset = (unsigned short)((char *)&prec->oopt - (char *)prec);
    prt->papFldDes[calcoutRecordODLY]->size = sizeof(prec->odly);
    prt->papFldDes[calcoutRecordODLY]->offset = (unsigned short)((char *)&prec->odly - (char *)prec);
    prt->papFldDes[calcoutRecordDLYA]->size = sizeof(prec->dlya);
    prt->papFldDes[calcoutRecordDLYA]->offset = (unsigned short)((char *)&prec->dlya - (char *)prec);
    prt->papFldDes[calcoutRecordDOPT]->size = sizeof(prec->dopt);
    prt->papFldDes[calcoutRecordDOPT]->offset = (unsigned short)((char *)&prec->dopt - (char *)prec);
    prt->papFldDes[calcoutRecordOCAL]->size = sizeof(prec->ocal);
    prt->papFldDes[calcoutRecordOCAL]->offset = (unsigned short)((char *)&prec->ocal - (char *)prec);
    prt->papFldDes[calcoutRecordOCLV]->size = sizeof(prec->oclv);
    prt->papFldDes[calcoutRecordOCLV]->offset = (unsigned short)((char *)&prec->oclv - (char *)prec);
    prt->papFldDes[calcoutRecordOEVT]->size = sizeof(prec->oevt);
    prt->papFldDes[calcoutRecordOEVT]->offset = (unsigned short)((char *)&prec->oevt - (char *)prec);
    prt->papFldDes[calcoutRecordEPVT]->size = sizeof(prec->epvt);
    prt->papFldDes[calcoutRecordEPVT]->offset = (unsigned short)((char *)&prec->epvt - (char *)prec);
    prt->papFldDes[calcoutRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[calcoutRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[calcoutRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[calcoutRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->papFldDes[calcoutRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[calcoutRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[calcoutRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[calcoutRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[calcoutRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[calcoutRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[calcoutRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[calcoutRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[calcoutRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[calcoutRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[calcoutRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[calcoutRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[calcoutRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[calcoutRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[calcoutRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[calcoutRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[calcoutRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[calcoutRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[calcoutRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[calcoutRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[calcoutRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[calcoutRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[calcoutRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[calcoutRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[calcoutRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[calcoutRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[calcoutRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[calcoutRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[calcoutRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[calcoutRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[calcoutRecordA]->size = sizeof(prec->a);
    prt->papFldDes[calcoutRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[calcoutRecordB]->size = sizeof(prec->b);
    prt->papFldDes[calcoutRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[calcoutRecordC]->size = sizeof(prec->c);
    prt->papFldDes[calcoutRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[calcoutRecordD]->size = sizeof(prec->d);
    prt->papFldDes[calcoutRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[calcoutRecordE]->size = sizeof(prec->e);
    prt->papFldDes[calcoutRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[calcoutRecordF]->size = sizeof(prec->f);
    prt->papFldDes[calcoutRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[calcoutRecordG]->size = sizeof(prec->g);
    prt->papFldDes[calcoutRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[calcoutRecordH]->size = sizeof(prec->h);
    prt->papFldDes[calcoutRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[calcoutRecordI]->size = sizeof(prec->i);
    prt->papFldDes[calcoutRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[calcoutRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[calcoutRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[calcoutRecordK]->size = sizeof(prec->k);
    prt->papFldDes[calcoutRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[calcoutRecordL]->size = sizeof(prec->l);
    prt->papFldDes[calcoutRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[calcoutRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[calcoutRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[calcoutRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[calcoutRecordLA]->offset = (unsigned short)((char *)&prec->la - (char *)prec);
    prt->papFldDes[calcoutRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[calcoutRecordLB]->offset = (unsigned short)((char *)&prec->lb - (char *)prec);
    prt->papFldDes[calcoutRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[calcoutRecordLC]->offset = (unsigned short)((char *)&prec->lc - (char *)prec);
    prt->papFldDes[calcoutRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[calcoutRecordLD]->offset = (unsigned short)((char *)&prec->ld - (char *)prec);
    prt->papFldDes[calcoutRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[calcoutRecordLE]->offset = (unsigned short)((char *)&prec->le - (char *)prec);
    prt->papFldDes[calcoutRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[calcoutRecordLF]->offset = (unsigned short)((char *)&prec->lf - (char *)prec);
    prt->papFldDes[calcoutRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[calcoutRecordLG]->offset = (unsigned short)((char *)&prec->lg - (char *)prec);
    prt->papFldDes[calcoutRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[calcoutRecordLH]->offset = (unsigned short)((char *)&prec->lh - (char *)prec);
    prt->papFldDes[calcoutRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[calcoutRecordLI]->offset = (unsigned short)((char *)&prec->li - (char *)prec);
    prt->papFldDes[calcoutRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[calcoutRecordLJ]->offset = (unsigned short)((char *)&prec->lj - (char *)prec);
    prt->papFldDes[calcoutRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[calcoutRecordLK]->offset = (unsigned short)((char *)&prec->lk - (char *)prec);
    prt->papFldDes[calcoutRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[calcoutRecordLL]->offset = (unsigned short)((char *)&prec->ll - (char *)prec);
    prt->papFldDes[calcoutRecordPOVL]->size = sizeof(prec->povl);
    prt->papFldDes[calcoutRecordPOVL]->offset = (unsigned short)((char *)&prec->povl - (char *)prec);
    prt->papFldDes[calcoutRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[calcoutRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[calcoutRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[calcoutRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[calcoutRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[calcoutRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[calcoutRecordRPCL]->size = sizeof(prec->rpcl);
    prt->papFldDes[calcoutRecordRPCL]->offset = (unsigned short)((char *)&prec->rpcl - (char *)prec);
    prt->papFldDes[calcoutRecordORPC]->size = sizeof(prec->orpc);
    prt->papFldDes[calcoutRecordORPC]->offset = (unsigned short)((char *)&prec->orpc - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(calcoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_calcoutRecord_H */
