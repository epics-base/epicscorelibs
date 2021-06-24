/** @file seqRecord.h
 * @brief Declarations for the @ref seqRecord "seq" record type.
 *
 * This header was generated from seqRecord.dbd
 */

#ifndef INC_seqRecord_H
#define INC_seqRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef seqSELM_NUM_CHOICES
/** @brief Enumerated type from menu seqSELM */
typedef enum {
    seqSELM_All                     /**< @brief State string "All" */,
    seqSELM_Specified               /**< @brief State string "Specified" */,
    seqSELM_Mask                    /**< @brief State string "Mask" */
} seqSELM;
/** @brief Number of states defined for menu seqSELM */
#define seqSELM_NUM_CHOICES 3
#endif

/** @brief Declaration of seq record type. */
typedef struct seqRecord {
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
    epicsInt32          val;        /**< @brief Used to trigger */
    epicsEnum16         selm;       /**< @brief Select Mechanism */
    epicsUInt16         seln;       /**< @brief Link Selection */
    DBLINK              sell;       /**< @brief Link Selection Loc */
    epicsInt16          offs;       /**< @brief Offset for Specified */
    epicsInt16          shft;       /**< @brief Shift for Mask mode */
    epicsUInt16         oldn;       /**< @brief Old Selection */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsFloat64        dly0;       /**< @brief Delay 0 */
    DBLINK              dol0;       /**< @brief Input link 0 */
    epicsFloat64        do0;        /**< @brief Value 0 */
    DBLINK              lnk0;       /**< @brief Output Link 0 */
    epicsFloat64        dly1;       /**< @brief Delay 1 */
    DBLINK              dol1;       /**< @brief Input link1 */
    epicsFloat64        do1;        /**< @brief Value 1 */
    DBLINK              lnk1;       /**< @brief Output Link 1 */
    epicsFloat64        dly2;       /**< @brief Delay 2 */
    DBLINK              dol2;       /**< @brief Input link 2 */
    epicsFloat64        do2;        /**< @brief Value 2 */
    DBLINK              lnk2;       /**< @brief Output Link 2 */
    epicsFloat64        dly3;       /**< @brief Delay 3 */
    DBLINK              dol3;       /**< @brief Input link 3 */
    epicsFloat64        do3;        /**< @brief Value 3 */
    DBLINK              lnk3;       /**< @brief Output Link 3 */
    epicsFloat64        dly4;       /**< @brief Delay 4 */
    DBLINK              dol4;       /**< @brief Input link 4 */
    epicsFloat64        do4;        /**< @brief Value 4 */
    DBLINK              lnk4;       /**< @brief Output Link 4 */
    epicsFloat64        dly5;       /**< @brief Delay 5 */
    DBLINK              dol5;       /**< @brief Input link 5 */
    epicsFloat64        do5;        /**< @brief Value 5 */
    DBLINK              lnk5;       /**< @brief Output Link 5 */
    epicsFloat64        dly6;       /**< @brief Delay 6 */
    DBLINK              dol6;       /**< @brief Input link 6 */
    epicsFloat64        do6;        /**< @brief Value 6 */
    DBLINK              lnk6;       /**< @brief Output Link 6 */
    epicsFloat64        dly7;       /**< @brief Delay 7 */
    DBLINK              dol7;       /**< @brief Input link 7 */
    epicsFloat64        do7;        /**< @brief Value 7 */
    DBLINK              lnk7;       /**< @brief Output Link 7 */
    epicsFloat64        dly8;       /**< @brief Delay 8 */
    DBLINK              dol8;       /**< @brief Input link 8 */
    epicsFloat64        do8;        /**< @brief Value 8 */
    DBLINK              lnk8;       /**< @brief Output Link 8 */
    epicsFloat64        dly9;       /**< @brief Delay 9 */
    DBLINK              dol9;       /**< @brief Input link 9 */
    epicsFloat64        do9;        /**< @brief Value 9 */
    DBLINK              lnk9;       /**< @brief Output Link 9 */
    epicsFloat64        dlya;       /**< @brief Delay 10 */
    DBLINK              dola;       /**< @brief Input link 10 */
    epicsFloat64        doa;        /**< @brief Value 10 */
    DBLINK              lnka;       /**< @brief Output Link 10 */
    epicsFloat64        dlyb;       /**< @brief Delay 11 */
    DBLINK              dolb;       /**< @brief Input link 11 */
    epicsFloat64        dob;        /**< @brief Value 11 */
    DBLINK              lnkb;       /**< @brief Output Link 11 */
    epicsFloat64        dlyc;       /**< @brief Delay 12 */
    DBLINK              dolc;       /**< @brief Input link 12 */
    epicsFloat64        doc;        /**< @brief Value 12 */
    DBLINK              lnkc;       /**< @brief Output Link 12 */
    epicsFloat64        dlyd;       /**< @brief Delay 13 */
    DBLINK              dold;       /**< @brief Input link 13 */
    epicsFloat64        dod;        /**< @brief Value 13 */
    DBLINK              lnkd;       /**< @brief Output Link 13 */
    epicsFloat64        dlye;       /**< @brief Delay 14 */
    DBLINK              dole;       /**< @brief Input link 14 */
    epicsFloat64        doe;        /**< @brief Value 14 */
    DBLINK              lnke;       /**< @brief Output Link 14 */
    epicsFloat64        dlyf;       /**< @brief Delay 15 */
    DBLINK              dolf;       /**< @brief Input link 15 */
    epicsFloat64        dof;        /**< @brief Value 15 */
    DBLINK              lnkf;       /**< @brief Output Link 15 */
} seqRecord;

typedef enum {
	seqRecordNAME = 0,
	seqRecordDESC = 1,
	seqRecordASG = 2,
	seqRecordSCAN = 3,
	seqRecordPINI = 4,
	seqRecordPHAS = 5,
	seqRecordEVNT = 6,
	seqRecordTSE = 7,
	seqRecordTSEL = 8,
	seqRecordDTYP = 9,
	seqRecordDISV = 10,
	seqRecordDISA = 11,
	seqRecordSDIS = 12,
	seqRecordMLOK = 13,
	seqRecordMLIS = 14,
	seqRecordBKLNK = 15,
	seqRecordDISP = 16,
	seqRecordPROC = 17,
	seqRecordSTAT = 18,
	seqRecordSEVR = 19,
	seqRecordAMSG = 20,
	seqRecordNSTA = 21,
	seqRecordNSEV = 22,
	seqRecordNAMSG = 23,
	seqRecordACKS = 24,
	seqRecordACKT = 25,
	seqRecordDISS = 26,
	seqRecordLCNT = 27,
	seqRecordPACT = 28,
	seqRecordPUTF = 29,
	seqRecordRPRO = 30,
	seqRecordASP = 31,
	seqRecordPPN = 32,
	seqRecordPPNR = 33,
	seqRecordSPVT = 34,
	seqRecordRSET = 35,
	seqRecordDSET = 36,
	seqRecordDPVT = 37,
	seqRecordRDES = 38,
	seqRecordLSET = 39,
	seqRecordPRIO = 40,
	seqRecordTPRO = 41,
	seqRecordBKPT = 42,
	seqRecordUDF = 43,
	seqRecordUDFS = 44,
	seqRecordTIME = 45,
	seqRecordUTAG = 46,
	seqRecordFLNK = 47,
	seqRecordVAL = 48,
	seqRecordSELM = 49,
	seqRecordSELN = 50,
	seqRecordSELL = 51,
	seqRecordOFFS = 52,
	seqRecordSHFT = 53,
	seqRecordOLDN = 54,
	seqRecordPREC = 55,
	seqRecordDLY0 = 56,
	seqRecordDOL0 = 57,
	seqRecordDO0 = 58,
	seqRecordLNK0 = 59,
	seqRecordDLY1 = 60,
	seqRecordDOL1 = 61,
	seqRecordDO1 = 62,
	seqRecordLNK1 = 63,
	seqRecordDLY2 = 64,
	seqRecordDOL2 = 65,
	seqRecordDO2 = 66,
	seqRecordLNK2 = 67,
	seqRecordDLY3 = 68,
	seqRecordDOL3 = 69,
	seqRecordDO3 = 70,
	seqRecordLNK3 = 71,
	seqRecordDLY4 = 72,
	seqRecordDOL4 = 73,
	seqRecordDO4 = 74,
	seqRecordLNK4 = 75,
	seqRecordDLY5 = 76,
	seqRecordDOL5 = 77,
	seqRecordDO5 = 78,
	seqRecordLNK5 = 79,
	seqRecordDLY6 = 80,
	seqRecordDOL6 = 81,
	seqRecordDO6 = 82,
	seqRecordLNK6 = 83,
	seqRecordDLY7 = 84,
	seqRecordDOL7 = 85,
	seqRecordDO7 = 86,
	seqRecordLNK7 = 87,
	seqRecordDLY8 = 88,
	seqRecordDOL8 = 89,
	seqRecordDO8 = 90,
	seqRecordLNK8 = 91,
	seqRecordDLY9 = 92,
	seqRecordDOL9 = 93,
	seqRecordDO9 = 94,
	seqRecordLNK9 = 95,
	seqRecordDLYA = 96,
	seqRecordDOLA = 97,
	seqRecordDOA = 98,
	seqRecordLNKA = 99,
	seqRecordDLYB = 100,
	seqRecordDOLB = 101,
	seqRecordDOB = 102,
	seqRecordLNKB = 103,
	seqRecordDLYC = 104,
	seqRecordDOLC = 105,
	seqRecordDOC = 106,
	seqRecordLNKC = 107,
	seqRecordDLYD = 108,
	seqRecordDOLD = 109,
	seqRecordDOD = 110,
	seqRecordLNKD = 111,
	seqRecordDLYE = 112,
	seqRecordDOLE = 113,
	seqRecordDOE = 114,
	seqRecordLNKE = 115,
	seqRecordDLYF = 116,
	seqRecordDOLF = 117,
	seqRecordDOF = 118,
	seqRecordLNKF = 119
} seqFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int seqRecordSizeOffset(dbRecordType *prt)
{
    seqRecord *prec = 0;

    if (prt->no_fields != 120) {
        cantProceed("IOC build or installation error:\n"
            "    The seqRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 120.\n",
            prt->no_fields);
    }
    prt->papFldDes[seqRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[seqRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[seqRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[seqRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[seqRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[seqRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[seqRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[seqRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[seqRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[seqRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[seqRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[seqRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[seqRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[seqRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[seqRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[seqRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[seqRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[seqRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[seqRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[seqRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[seqRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[seqRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[seqRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[seqRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[seqRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[seqRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[seqRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[seqRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[seqRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[seqRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[seqRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[seqRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[seqRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[seqRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[seqRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[seqRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[seqRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[seqRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[seqRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[seqRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[seqRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[seqRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[seqRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[seqRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[seqRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[seqRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[seqRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[seqRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[seqRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[seqRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[seqRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[seqRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[seqRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[seqRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[seqRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[seqRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[seqRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[seqRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[seqRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[seqRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[seqRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[seqRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[seqRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[seqRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[seqRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[seqRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[seqRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[seqRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[seqRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[seqRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[seqRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[seqRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[seqRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[seqRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[seqRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[seqRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[seqRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[seqRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[seqRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[seqRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[seqRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[seqRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[seqRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[seqRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[seqRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[seqRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[seqRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[seqRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[seqRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[seqRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[seqRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[seqRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[seqRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[seqRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[seqRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[seqRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[seqRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[seqRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[seqRecordSELM]->size = sizeof(prec->selm);
    prt->papFldDes[seqRecordSELM]->offset = (unsigned short)((char *)&prec->selm - (char *)prec);
    prt->papFldDes[seqRecordSELN]->size = sizeof(prec->seln);
    prt->papFldDes[seqRecordSELN]->offset = (unsigned short)((char *)&prec->seln - (char *)prec);
    prt->papFldDes[seqRecordSELL]->size = sizeof(prec->sell);
    prt->papFldDes[seqRecordSELL]->offset = (unsigned short)((char *)&prec->sell - (char *)prec);
    prt->papFldDes[seqRecordOFFS]->size = sizeof(prec->offs);
    prt->papFldDes[seqRecordOFFS]->offset = (unsigned short)((char *)&prec->offs - (char *)prec);
    prt->papFldDes[seqRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[seqRecordSHFT]->offset = (unsigned short)((char *)&prec->shft - (char *)prec);
    prt->papFldDes[seqRecordOLDN]->size = sizeof(prec->oldn);
    prt->papFldDes[seqRecordOLDN]->offset = (unsigned short)((char *)&prec->oldn - (char *)prec);
    prt->papFldDes[seqRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[seqRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[seqRecordDLY0]->size = sizeof(prec->dly0);
    prt->papFldDes[seqRecordDLY0]->offset = (unsigned short)((char *)&prec->dly0 - (char *)prec);
    prt->papFldDes[seqRecordDOL0]->size = sizeof(prec->dol0);
    prt->papFldDes[seqRecordDOL0]->offset = (unsigned short)((char *)&prec->dol0 - (char *)prec);
    prt->papFldDes[seqRecordDO0]->size = sizeof(prec->do0);
    prt->papFldDes[seqRecordDO0]->offset = (unsigned short)((char *)&prec->do0 - (char *)prec);
    prt->papFldDes[seqRecordLNK0]->size = sizeof(prec->lnk0);
    prt->papFldDes[seqRecordLNK0]->offset = (unsigned short)((char *)&prec->lnk0 - (char *)prec);
    prt->papFldDes[seqRecordDLY1]->size = sizeof(prec->dly1);
    prt->papFldDes[seqRecordDLY1]->offset = (unsigned short)((char *)&prec->dly1 - (char *)prec);
    prt->papFldDes[seqRecordDOL1]->size = sizeof(prec->dol1);
    prt->papFldDes[seqRecordDOL1]->offset = (unsigned short)((char *)&prec->dol1 - (char *)prec);
    prt->papFldDes[seqRecordDO1]->size = sizeof(prec->do1);
    prt->papFldDes[seqRecordDO1]->offset = (unsigned short)((char *)&prec->do1 - (char *)prec);
    prt->papFldDes[seqRecordLNK1]->size = sizeof(prec->lnk1);
    prt->papFldDes[seqRecordLNK1]->offset = (unsigned short)((char *)&prec->lnk1 - (char *)prec);
    prt->papFldDes[seqRecordDLY2]->size = sizeof(prec->dly2);
    prt->papFldDes[seqRecordDLY2]->offset = (unsigned short)((char *)&prec->dly2 - (char *)prec);
    prt->papFldDes[seqRecordDOL2]->size = sizeof(prec->dol2);
    prt->papFldDes[seqRecordDOL2]->offset = (unsigned short)((char *)&prec->dol2 - (char *)prec);
    prt->papFldDes[seqRecordDO2]->size = sizeof(prec->do2);
    prt->papFldDes[seqRecordDO2]->offset = (unsigned short)((char *)&prec->do2 - (char *)prec);
    prt->papFldDes[seqRecordLNK2]->size = sizeof(prec->lnk2);
    prt->papFldDes[seqRecordLNK2]->offset = (unsigned short)((char *)&prec->lnk2 - (char *)prec);
    prt->papFldDes[seqRecordDLY3]->size = sizeof(prec->dly3);
    prt->papFldDes[seqRecordDLY3]->offset = (unsigned short)((char *)&prec->dly3 - (char *)prec);
    prt->papFldDes[seqRecordDOL3]->size = sizeof(prec->dol3);
    prt->papFldDes[seqRecordDOL3]->offset = (unsigned short)((char *)&prec->dol3 - (char *)prec);
    prt->papFldDes[seqRecordDO3]->size = sizeof(prec->do3);
    prt->papFldDes[seqRecordDO3]->offset = (unsigned short)((char *)&prec->do3 - (char *)prec);
    prt->papFldDes[seqRecordLNK3]->size = sizeof(prec->lnk3);
    prt->papFldDes[seqRecordLNK3]->offset = (unsigned short)((char *)&prec->lnk3 - (char *)prec);
    prt->papFldDes[seqRecordDLY4]->size = sizeof(prec->dly4);
    prt->papFldDes[seqRecordDLY4]->offset = (unsigned short)((char *)&prec->dly4 - (char *)prec);
    prt->papFldDes[seqRecordDOL4]->size = sizeof(prec->dol4);
    prt->papFldDes[seqRecordDOL4]->offset = (unsigned short)((char *)&prec->dol4 - (char *)prec);
    prt->papFldDes[seqRecordDO4]->size = sizeof(prec->do4);
    prt->papFldDes[seqRecordDO4]->offset = (unsigned short)((char *)&prec->do4 - (char *)prec);
    prt->papFldDes[seqRecordLNK4]->size = sizeof(prec->lnk4);
    prt->papFldDes[seqRecordLNK4]->offset = (unsigned short)((char *)&prec->lnk4 - (char *)prec);
    prt->papFldDes[seqRecordDLY5]->size = sizeof(prec->dly5);
    prt->papFldDes[seqRecordDLY5]->offset = (unsigned short)((char *)&prec->dly5 - (char *)prec);
    prt->papFldDes[seqRecordDOL5]->size = sizeof(prec->dol5);
    prt->papFldDes[seqRecordDOL5]->offset = (unsigned short)((char *)&prec->dol5 - (char *)prec);
    prt->papFldDes[seqRecordDO5]->size = sizeof(prec->do5);
    prt->papFldDes[seqRecordDO5]->offset = (unsigned short)((char *)&prec->do5 - (char *)prec);
    prt->papFldDes[seqRecordLNK5]->size = sizeof(prec->lnk5);
    prt->papFldDes[seqRecordLNK5]->offset = (unsigned short)((char *)&prec->lnk5 - (char *)prec);
    prt->papFldDes[seqRecordDLY6]->size = sizeof(prec->dly6);
    prt->papFldDes[seqRecordDLY6]->offset = (unsigned short)((char *)&prec->dly6 - (char *)prec);
    prt->papFldDes[seqRecordDOL6]->size = sizeof(prec->dol6);
    prt->papFldDes[seqRecordDOL6]->offset = (unsigned short)((char *)&prec->dol6 - (char *)prec);
    prt->papFldDes[seqRecordDO6]->size = sizeof(prec->do6);
    prt->papFldDes[seqRecordDO6]->offset = (unsigned short)((char *)&prec->do6 - (char *)prec);
    prt->papFldDes[seqRecordLNK6]->size = sizeof(prec->lnk6);
    prt->papFldDes[seqRecordLNK6]->offset = (unsigned short)((char *)&prec->lnk6 - (char *)prec);
    prt->papFldDes[seqRecordDLY7]->size = sizeof(prec->dly7);
    prt->papFldDes[seqRecordDLY7]->offset = (unsigned short)((char *)&prec->dly7 - (char *)prec);
    prt->papFldDes[seqRecordDOL7]->size = sizeof(prec->dol7);
    prt->papFldDes[seqRecordDOL7]->offset = (unsigned short)((char *)&prec->dol7 - (char *)prec);
    prt->papFldDes[seqRecordDO7]->size = sizeof(prec->do7);
    prt->papFldDes[seqRecordDO7]->offset = (unsigned short)((char *)&prec->do7 - (char *)prec);
    prt->papFldDes[seqRecordLNK7]->size = sizeof(prec->lnk7);
    prt->papFldDes[seqRecordLNK7]->offset = (unsigned short)((char *)&prec->lnk7 - (char *)prec);
    prt->papFldDes[seqRecordDLY8]->size = sizeof(prec->dly8);
    prt->papFldDes[seqRecordDLY8]->offset = (unsigned short)((char *)&prec->dly8 - (char *)prec);
    prt->papFldDes[seqRecordDOL8]->size = sizeof(prec->dol8);
    prt->papFldDes[seqRecordDOL8]->offset = (unsigned short)((char *)&prec->dol8 - (char *)prec);
    prt->papFldDes[seqRecordDO8]->size = sizeof(prec->do8);
    prt->papFldDes[seqRecordDO8]->offset = (unsigned short)((char *)&prec->do8 - (char *)prec);
    prt->papFldDes[seqRecordLNK8]->size = sizeof(prec->lnk8);
    prt->papFldDes[seqRecordLNK8]->offset = (unsigned short)((char *)&prec->lnk8 - (char *)prec);
    prt->papFldDes[seqRecordDLY9]->size = sizeof(prec->dly9);
    prt->papFldDes[seqRecordDLY9]->offset = (unsigned short)((char *)&prec->dly9 - (char *)prec);
    prt->papFldDes[seqRecordDOL9]->size = sizeof(prec->dol9);
    prt->papFldDes[seqRecordDOL9]->offset = (unsigned short)((char *)&prec->dol9 - (char *)prec);
    prt->papFldDes[seqRecordDO9]->size = sizeof(prec->do9);
    prt->papFldDes[seqRecordDO9]->offset = (unsigned short)((char *)&prec->do9 - (char *)prec);
    prt->papFldDes[seqRecordLNK9]->size = sizeof(prec->lnk9);
    prt->papFldDes[seqRecordLNK9]->offset = (unsigned short)((char *)&prec->lnk9 - (char *)prec);
    prt->papFldDes[seqRecordDLYA]->size = sizeof(prec->dlya);
    prt->papFldDes[seqRecordDLYA]->offset = (unsigned short)((char *)&prec->dlya - (char *)prec);
    prt->papFldDes[seqRecordDOLA]->size = sizeof(prec->dola);
    prt->papFldDes[seqRecordDOLA]->offset = (unsigned short)((char *)&prec->dola - (char *)prec);
    prt->papFldDes[seqRecordDOA]->size = sizeof(prec->doa);
    prt->papFldDes[seqRecordDOA]->offset = (unsigned short)((char *)&prec->doa - (char *)prec);
    prt->papFldDes[seqRecordLNKA]->size = sizeof(prec->lnka);
    prt->papFldDes[seqRecordLNKA]->offset = (unsigned short)((char *)&prec->lnka - (char *)prec);
    prt->papFldDes[seqRecordDLYB]->size = sizeof(prec->dlyb);
    prt->papFldDes[seqRecordDLYB]->offset = (unsigned short)((char *)&prec->dlyb - (char *)prec);
    prt->papFldDes[seqRecordDOLB]->size = sizeof(prec->dolb);
    prt->papFldDes[seqRecordDOLB]->offset = (unsigned short)((char *)&prec->dolb - (char *)prec);
    prt->papFldDes[seqRecordDOB]->size = sizeof(prec->dob);
    prt->papFldDes[seqRecordDOB]->offset = (unsigned short)((char *)&prec->dob - (char *)prec);
    prt->papFldDes[seqRecordLNKB]->size = sizeof(prec->lnkb);
    prt->papFldDes[seqRecordLNKB]->offset = (unsigned short)((char *)&prec->lnkb - (char *)prec);
    prt->papFldDes[seqRecordDLYC]->size = sizeof(prec->dlyc);
    prt->papFldDes[seqRecordDLYC]->offset = (unsigned short)((char *)&prec->dlyc - (char *)prec);
    prt->papFldDes[seqRecordDOLC]->size = sizeof(prec->dolc);
    prt->papFldDes[seqRecordDOLC]->offset = (unsigned short)((char *)&prec->dolc - (char *)prec);
    prt->papFldDes[seqRecordDOC]->size = sizeof(prec->doc);
    prt->papFldDes[seqRecordDOC]->offset = (unsigned short)((char *)&prec->doc - (char *)prec);
    prt->papFldDes[seqRecordLNKC]->size = sizeof(prec->lnkc);
    prt->papFldDes[seqRecordLNKC]->offset = (unsigned short)((char *)&prec->lnkc - (char *)prec);
    prt->papFldDes[seqRecordDLYD]->size = sizeof(prec->dlyd);
    prt->papFldDes[seqRecordDLYD]->offset = (unsigned short)((char *)&prec->dlyd - (char *)prec);
    prt->papFldDes[seqRecordDOLD]->size = sizeof(prec->dold);
    prt->papFldDes[seqRecordDOLD]->offset = (unsigned short)((char *)&prec->dold - (char *)prec);
    prt->papFldDes[seqRecordDOD]->size = sizeof(prec->dod);
    prt->papFldDes[seqRecordDOD]->offset = (unsigned short)((char *)&prec->dod - (char *)prec);
    prt->papFldDes[seqRecordLNKD]->size = sizeof(prec->lnkd);
    prt->papFldDes[seqRecordLNKD]->offset = (unsigned short)((char *)&prec->lnkd - (char *)prec);
    prt->papFldDes[seqRecordDLYE]->size = sizeof(prec->dlye);
    prt->papFldDes[seqRecordDLYE]->offset = (unsigned short)((char *)&prec->dlye - (char *)prec);
    prt->papFldDes[seqRecordDOLE]->size = sizeof(prec->dole);
    prt->papFldDes[seqRecordDOLE]->offset = (unsigned short)((char *)&prec->dole - (char *)prec);
    prt->papFldDes[seqRecordDOE]->size = sizeof(prec->doe);
    prt->papFldDes[seqRecordDOE]->offset = (unsigned short)((char *)&prec->doe - (char *)prec);
    prt->papFldDes[seqRecordLNKE]->size = sizeof(prec->lnke);
    prt->papFldDes[seqRecordLNKE]->offset = (unsigned short)((char *)&prec->lnke - (char *)prec);
    prt->papFldDes[seqRecordDLYF]->size = sizeof(prec->dlyf);
    prt->papFldDes[seqRecordDLYF]->offset = (unsigned short)((char *)&prec->dlyf - (char *)prec);
    prt->papFldDes[seqRecordDOLF]->size = sizeof(prec->dolf);
    prt->papFldDes[seqRecordDOLF]->offset = (unsigned short)((char *)&prec->dolf - (char *)prec);
    prt->papFldDes[seqRecordDOF]->size = sizeof(prec->dof);
    prt->papFldDes[seqRecordDOF]->offset = (unsigned short)((char *)&prec->dof - (char *)prec);
    prt->papFldDes[seqRecordLNKF]->size = sizeof(prec->lnkf);
    prt->papFldDes[seqRecordLNKF]->offset = (unsigned short)((char *)&prec->lnkf - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(seqRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_seqRecord_H */
