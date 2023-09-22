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
    prt->papFldDes[seqRecordNAME]->offset = (unsigned short)offsetof(seqRecord, name);
    prt->papFldDes[seqRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[seqRecordDESC]->offset = (unsigned short)offsetof(seqRecord, desc);
    prt->papFldDes[seqRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[seqRecordASG]->offset = (unsigned short)offsetof(seqRecord, asg);
    prt->papFldDes[seqRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[seqRecordSCAN]->offset = (unsigned short)offsetof(seqRecord, scan);
    prt->papFldDes[seqRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[seqRecordPINI]->offset = (unsigned short)offsetof(seqRecord, pini);
    prt->papFldDes[seqRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[seqRecordPHAS]->offset = (unsigned short)offsetof(seqRecord, phas);
    prt->papFldDes[seqRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[seqRecordEVNT]->offset = (unsigned short)offsetof(seqRecord, evnt);
    prt->papFldDes[seqRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[seqRecordTSE]->offset = (unsigned short)offsetof(seqRecord, tse);
    prt->papFldDes[seqRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[seqRecordTSEL]->offset = (unsigned short)offsetof(seqRecord, tsel);
    prt->papFldDes[seqRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[seqRecordDTYP]->offset = (unsigned short)offsetof(seqRecord, dtyp);
    prt->papFldDes[seqRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[seqRecordDISV]->offset = (unsigned short)offsetof(seqRecord, disv);
    prt->papFldDes[seqRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[seqRecordDISA]->offset = (unsigned short)offsetof(seqRecord, disa);
    prt->papFldDes[seqRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[seqRecordSDIS]->offset = (unsigned short)offsetof(seqRecord, sdis);
    prt->papFldDes[seqRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[seqRecordMLOK]->offset = (unsigned short)offsetof(seqRecord, mlok);
    prt->papFldDes[seqRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[seqRecordMLIS]->offset = (unsigned short)offsetof(seqRecord, mlis);
    prt->papFldDes[seqRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[seqRecordBKLNK]->offset = (unsigned short)offsetof(seqRecord, bklnk);
    prt->papFldDes[seqRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[seqRecordDISP]->offset = (unsigned short)offsetof(seqRecord, disp);
    prt->papFldDes[seqRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[seqRecordPROC]->offset = (unsigned short)offsetof(seqRecord, proc);
    prt->papFldDes[seqRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[seqRecordSTAT]->offset = (unsigned short)offsetof(seqRecord, stat);
    prt->papFldDes[seqRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[seqRecordSEVR]->offset = (unsigned short)offsetof(seqRecord, sevr);
    prt->papFldDes[seqRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[seqRecordAMSG]->offset = (unsigned short)offsetof(seqRecord, amsg);
    prt->papFldDes[seqRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[seqRecordNSTA]->offset = (unsigned short)offsetof(seqRecord, nsta);
    prt->papFldDes[seqRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[seqRecordNSEV]->offset = (unsigned short)offsetof(seqRecord, nsev);
    prt->papFldDes[seqRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[seqRecordNAMSG]->offset = (unsigned short)offsetof(seqRecord, namsg);
    prt->papFldDes[seqRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[seqRecordACKS]->offset = (unsigned short)offsetof(seqRecord, acks);
    prt->papFldDes[seqRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[seqRecordACKT]->offset = (unsigned short)offsetof(seqRecord, ackt);
    prt->papFldDes[seqRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[seqRecordDISS]->offset = (unsigned short)offsetof(seqRecord, diss);
    prt->papFldDes[seqRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[seqRecordLCNT]->offset = (unsigned short)offsetof(seqRecord, lcnt);
    prt->papFldDes[seqRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[seqRecordPACT]->offset = (unsigned short)offsetof(seqRecord, pact);
    prt->papFldDes[seqRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[seqRecordPUTF]->offset = (unsigned short)offsetof(seqRecord, putf);
    prt->papFldDes[seqRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[seqRecordRPRO]->offset = (unsigned short)offsetof(seqRecord, rpro);
    prt->papFldDes[seqRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[seqRecordASP]->offset = (unsigned short)offsetof(seqRecord, asp);
    prt->papFldDes[seqRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[seqRecordPPN]->offset = (unsigned short)offsetof(seqRecord, ppn);
    prt->papFldDes[seqRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[seqRecordPPNR]->offset = (unsigned short)offsetof(seqRecord, ppnr);
    prt->papFldDes[seqRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[seqRecordSPVT]->offset = (unsigned short)offsetof(seqRecord, spvt);
    prt->papFldDes[seqRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[seqRecordRSET]->offset = (unsigned short)offsetof(seqRecord, rset);
    prt->papFldDes[seqRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[seqRecordDSET]->offset = (unsigned short)offsetof(seqRecord, dset);
    prt->papFldDes[seqRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[seqRecordDPVT]->offset = (unsigned short)offsetof(seqRecord, dpvt);
    prt->papFldDes[seqRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[seqRecordRDES]->offset = (unsigned short)offsetof(seqRecord, rdes);
    prt->papFldDes[seqRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[seqRecordLSET]->offset = (unsigned short)offsetof(seqRecord, lset);
    prt->papFldDes[seqRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[seqRecordPRIO]->offset = (unsigned short)offsetof(seqRecord, prio);
    prt->papFldDes[seqRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[seqRecordTPRO]->offset = (unsigned short)offsetof(seqRecord, tpro);
    prt->papFldDes[seqRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[seqRecordBKPT]->offset = (unsigned short)offsetof(seqRecord, bkpt);
    prt->papFldDes[seqRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[seqRecordUDF]->offset = (unsigned short)offsetof(seqRecord, udf);
    prt->papFldDes[seqRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[seqRecordUDFS]->offset = (unsigned short)offsetof(seqRecord, udfs);
    prt->papFldDes[seqRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[seqRecordTIME]->offset = (unsigned short)offsetof(seqRecord, time);
    prt->papFldDes[seqRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[seqRecordUTAG]->offset = (unsigned short)offsetof(seqRecord, utag);
    prt->papFldDes[seqRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[seqRecordFLNK]->offset = (unsigned short)offsetof(seqRecord, flnk);
    prt->papFldDes[seqRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[seqRecordVAL]->offset = (unsigned short)offsetof(seqRecord, val);
    prt->papFldDes[seqRecordSELM]->size = sizeof(prec->selm);
    prt->papFldDes[seqRecordSELM]->offset = (unsigned short)offsetof(seqRecord, selm);
    prt->papFldDes[seqRecordSELN]->size = sizeof(prec->seln);
    prt->papFldDes[seqRecordSELN]->offset = (unsigned short)offsetof(seqRecord, seln);
    prt->papFldDes[seqRecordSELL]->size = sizeof(prec->sell);
    prt->papFldDes[seqRecordSELL]->offset = (unsigned short)offsetof(seqRecord, sell);
    prt->papFldDes[seqRecordOFFS]->size = sizeof(prec->offs);
    prt->papFldDes[seqRecordOFFS]->offset = (unsigned short)offsetof(seqRecord, offs);
    prt->papFldDes[seqRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[seqRecordSHFT]->offset = (unsigned short)offsetof(seqRecord, shft);
    prt->papFldDes[seqRecordOLDN]->size = sizeof(prec->oldn);
    prt->papFldDes[seqRecordOLDN]->offset = (unsigned short)offsetof(seqRecord, oldn);
    prt->papFldDes[seqRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[seqRecordPREC]->offset = (unsigned short)offsetof(seqRecord, prec);
    prt->papFldDes[seqRecordDLY0]->size = sizeof(prec->dly0);
    prt->papFldDes[seqRecordDLY0]->offset = (unsigned short)offsetof(seqRecord, dly0);
    prt->papFldDes[seqRecordDOL0]->size = sizeof(prec->dol0);
    prt->papFldDes[seqRecordDOL0]->offset = (unsigned short)offsetof(seqRecord, dol0);
    prt->papFldDes[seqRecordDO0]->size = sizeof(prec->do0);
    prt->papFldDes[seqRecordDO0]->offset = (unsigned short)offsetof(seqRecord, do0);
    prt->papFldDes[seqRecordLNK0]->size = sizeof(prec->lnk0);
    prt->papFldDes[seqRecordLNK0]->offset = (unsigned short)offsetof(seqRecord, lnk0);
    prt->papFldDes[seqRecordDLY1]->size = sizeof(prec->dly1);
    prt->papFldDes[seqRecordDLY1]->offset = (unsigned short)offsetof(seqRecord, dly1);
    prt->papFldDes[seqRecordDOL1]->size = sizeof(prec->dol1);
    prt->papFldDes[seqRecordDOL1]->offset = (unsigned short)offsetof(seqRecord, dol1);
    prt->papFldDes[seqRecordDO1]->size = sizeof(prec->do1);
    prt->papFldDes[seqRecordDO1]->offset = (unsigned short)offsetof(seqRecord, do1);
    prt->papFldDes[seqRecordLNK1]->size = sizeof(prec->lnk1);
    prt->papFldDes[seqRecordLNK1]->offset = (unsigned short)offsetof(seqRecord, lnk1);
    prt->papFldDes[seqRecordDLY2]->size = sizeof(prec->dly2);
    prt->papFldDes[seqRecordDLY2]->offset = (unsigned short)offsetof(seqRecord, dly2);
    prt->papFldDes[seqRecordDOL2]->size = sizeof(prec->dol2);
    prt->papFldDes[seqRecordDOL2]->offset = (unsigned short)offsetof(seqRecord, dol2);
    prt->papFldDes[seqRecordDO2]->size = sizeof(prec->do2);
    prt->papFldDes[seqRecordDO2]->offset = (unsigned short)offsetof(seqRecord, do2);
    prt->papFldDes[seqRecordLNK2]->size = sizeof(prec->lnk2);
    prt->papFldDes[seqRecordLNK2]->offset = (unsigned short)offsetof(seqRecord, lnk2);
    prt->papFldDes[seqRecordDLY3]->size = sizeof(prec->dly3);
    prt->papFldDes[seqRecordDLY3]->offset = (unsigned short)offsetof(seqRecord, dly3);
    prt->papFldDes[seqRecordDOL3]->size = sizeof(prec->dol3);
    prt->papFldDes[seqRecordDOL3]->offset = (unsigned short)offsetof(seqRecord, dol3);
    prt->papFldDes[seqRecordDO3]->size = sizeof(prec->do3);
    prt->papFldDes[seqRecordDO3]->offset = (unsigned short)offsetof(seqRecord, do3);
    prt->papFldDes[seqRecordLNK3]->size = sizeof(prec->lnk3);
    prt->papFldDes[seqRecordLNK3]->offset = (unsigned short)offsetof(seqRecord, lnk3);
    prt->papFldDes[seqRecordDLY4]->size = sizeof(prec->dly4);
    prt->papFldDes[seqRecordDLY4]->offset = (unsigned short)offsetof(seqRecord, dly4);
    prt->papFldDes[seqRecordDOL4]->size = sizeof(prec->dol4);
    prt->papFldDes[seqRecordDOL4]->offset = (unsigned short)offsetof(seqRecord, dol4);
    prt->papFldDes[seqRecordDO4]->size = sizeof(prec->do4);
    prt->papFldDes[seqRecordDO4]->offset = (unsigned short)offsetof(seqRecord, do4);
    prt->papFldDes[seqRecordLNK4]->size = sizeof(prec->lnk4);
    prt->papFldDes[seqRecordLNK4]->offset = (unsigned short)offsetof(seqRecord, lnk4);
    prt->papFldDes[seqRecordDLY5]->size = sizeof(prec->dly5);
    prt->papFldDes[seqRecordDLY5]->offset = (unsigned short)offsetof(seqRecord, dly5);
    prt->papFldDes[seqRecordDOL5]->size = sizeof(prec->dol5);
    prt->papFldDes[seqRecordDOL5]->offset = (unsigned short)offsetof(seqRecord, dol5);
    prt->papFldDes[seqRecordDO5]->size = sizeof(prec->do5);
    prt->papFldDes[seqRecordDO5]->offset = (unsigned short)offsetof(seqRecord, do5);
    prt->papFldDes[seqRecordLNK5]->size = sizeof(prec->lnk5);
    prt->papFldDes[seqRecordLNK5]->offset = (unsigned short)offsetof(seqRecord, lnk5);
    prt->papFldDes[seqRecordDLY6]->size = sizeof(prec->dly6);
    prt->papFldDes[seqRecordDLY6]->offset = (unsigned short)offsetof(seqRecord, dly6);
    prt->papFldDes[seqRecordDOL6]->size = sizeof(prec->dol6);
    prt->papFldDes[seqRecordDOL6]->offset = (unsigned short)offsetof(seqRecord, dol6);
    prt->papFldDes[seqRecordDO6]->size = sizeof(prec->do6);
    prt->papFldDes[seqRecordDO6]->offset = (unsigned short)offsetof(seqRecord, do6);
    prt->papFldDes[seqRecordLNK6]->size = sizeof(prec->lnk6);
    prt->papFldDes[seqRecordLNK6]->offset = (unsigned short)offsetof(seqRecord, lnk6);
    prt->papFldDes[seqRecordDLY7]->size = sizeof(prec->dly7);
    prt->papFldDes[seqRecordDLY7]->offset = (unsigned short)offsetof(seqRecord, dly7);
    prt->papFldDes[seqRecordDOL7]->size = sizeof(prec->dol7);
    prt->papFldDes[seqRecordDOL7]->offset = (unsigned short)offsetof(seqRecord, dol7);
    prt->papFldDes[seqRecordDO7]->size = sizeof(prec->do7);
    prt->papFldDes[seqRecordDO7]->offset = (unsigned short)offsetof(seqRecord, do7);
    prt->papFldDes[seqRecordLNK7]->size = sizeof(prec->lnk7);
    prt->papFldDes[seqRecordLNK7]->offset = (unsigned short)offsetof(seqRecord, lnk7);
    prt->papFldDes[seqRecordDLY8]->size = sizeof(prec->dly8);
    prt->papFldDes[seqRecordDLY8]->offset = (unsigned short)offsetof(seqRecord, dly8);
    prt->papFldDes[seqRecordDOL8]->size = sizeof(prec->dol8);
    prt->papFldDes[seqRecordDOL8]->offset = (unsigned short)offsetof(seqRecord, dol8);
    prt->papFldDes[seqRecordDO8]->size = sizeof(prec->do8);
    prt->papFldDes[seqRecordDO8]->offset = (unsigned short)offsetof(seqRecord, do8);
    prt->papFldDes[seqRecordLNK8]->size = sizeof(prec->lnk8);
    prt->papFldDes[seqRecordLNK8]->offset = (unsigned short)offsetof(seqRecord, lnk8);
    prt->papFldDes[seqRecordDLY9]->size = sizeof(prec->dly9);
    prt->papFldDes[seqRecordDLY9]->offset = (unsigned short)offsetof(seqRecord, dly9);
    prt->papFldDes[seqRecordDOL9]->size = sizeof(prec->dol9);
    prt->papFldDes[seqRecordDOL9]->offset = (unsigned short)offsetof(seqRecord, dol9);
    prt->papFldDes[seqRecordDO9]->size = sizeof(prec->do9);
    prt->papFldDes[seqRecordDO9]->offset = (unsigned short)offsetof(seqRecord, do9);
    prt->papFldDes[seqRecordLNK9]->size = sizeof(prec->lnk9);
    prt->papFldDes[seqRecordLNK9]->offset = (unsigned short)offsetof(seqRecord, lnk9);
    prt->papFldDes[seqRecordDLYA]->size = sizeof(prec->dlya);
    prt->papFldDes[seqRecordDLYA]->offset = (unsigned short)offsetof(seqRecord, dlya);
    prt->papFldDes[seqRecordDOLA]->size = sizeof(prec->dola);
    prt->papFldDes[seqRecordDOLA]->offset = (unsigned short)offsetof(seqRecord, dola);
    prt->papFldDes[seqRecordDOA]->size = sizeof(prec->doa);
    prt->papFldDes[seqRecordDOA]->offset = (unsigned short)offsetof(seqRecord, doa);
    prt->papFldDes[seqRecordLNKA]->size = sizeof(prec->lnka);
    prt->papFldDes[seqRecordLNKA]->offset = (unsigned short)offsetof(seqRecord, lnka);
    prt->papFldDes[seqRecordDLYB]->size = sizeof(prec->dlyb);
    prt->papFldDes[seqRecordDLYB]->offset = (unsigned short)offsetof(seqRecord, dlyb);
    prt->papFldDes[seqRecordDOLB]->size = sizeof(prec->dolb);
    prt->papFldDes[seqRecordDOLB]->offset = (unsigned short)offsetof(seqRecord, dolb);
    prt->papFldDes[seqRecordDOB]->size = sizeof(prec->dob);
    prt->papFldDes[seqRecordDOB]->offset = (unsigned short)offsetof(seqRecord, dob);
    prt->papFldDes[seqRecordLNKB]->size = sizeof(prec->lnkb);
    prt->papFldDes[seqRecordLNKB]->offset = (unsigned short)offsetof(seqRecord, lnkb);
    prt->papFldDes[seqRecordDLYC]->size = sizeof(prec->dlyc);
    prt->papFldDes[seqRecordDLYC]->offset = (unsigned short)offsetof(seqRecord, dlyc);
    prt->papFldDes[seqRecordDOLC]->size = sizeof(prec->dolc);
    prt->papFldDes[seqRecordDOLC]->offset = (unsigned short)offsetof(seqRecord, dolc);
    prt->papFldDes[seqRecordDOC]->size = sizeof(prec->doc);
    prt->papFldDes[seqRecordDOC]->offset = (unsigned short)offsetof(seqRecord, doc);
    prt->papFldDes[seqRecordLNKC]->size = sizeof(prec->lnkc);
    prt->papFldDes[seqRecordLNKC]->offset = (unsigned short)offsetof(seqRecord, lnkc);
    prt->papFldDes[seqRecordDLYD]->size = sizeof(prec->dlyd);
    prt->papFldDes[seqRecordDLYD]->offset = (unsigned short)offsetof(seqRecord, dlyd);
    prt->papFldDes[seqRecordDOLD]->size = sizeof(prec->dold);
    prt->papFldDes[seqRecordDOLD]->offset = (unsigned short)offsetof(seqRecord, dold);
    prt->papFldDes[seqRecordDOD]->size = sizeof(prec->dod);
    prt->papFldDes[seqRecordDOD]->offset = (unsigned short)offsetof(seqRecord, dod);
    prt->papFldDes[seqRecordLNKD]->size = sizeof(prec->lnkd);
    prt->papFldDes[seqRecordLNKD]->offset = (unsigned short)offsetof(seqRecord, lnkd);
    prt->papFldDes[seqRecordDLYE]->size = sizeof(prec->dlye);
    prt->papFldDes[seqRecordDLYE]->offset = (unsigned short)offsetof(seqRecord, dlye);
    prt->papFldDes[seqRecordDOLE]->size = sizeof(prec->dole);
    prt->papFldDes[seqRecordDOLE]->offset = (unsigned short)offsetof(seqRecord, dole);
    prt->papFldDes[seqRecordDOE]->size = sizeof(prec->doe);
    prt->papFldDes[seqRecordDOE]->offset = (unsigned short)offsetof(seqRecord, doe);
    prt->papFldDes[seqRecordLNKE]->size = sizeof(prec->lnke);
    prt->papFldDes[seqRecordLNKE]->offset = (unsigned short)offsetof(seqRecord, lnke);
    prt->papFldDes[seqRecordDLYF]->size = sizeof(prec->dlyf);
    prt->papFldDes[seqRecordDLYF]->offset = (unsigned short)offsetof(seqRecord, dlyf);
    prt->papFldDes[seqRecordDOLF]->size = sizeof(prec->dolf);
    prt->papFldDes[seqRecordDOLF]->offset = (unsigned short)offsetof(seqRecord, dolf);
    prt->papFldDes[seqRecordDOF]->size = sizeof(prec->dof);
    prt->papFldDes[seqRecordDOF]->offset = (unsigned short)offsetof(seqRecord, dof);
    prt->papFldDes[seqRecordLNKF]->size = sizeof(prec->lnkf);
    prt->papFldDes[seqRecordLNKF]->offset = (unsigned short)offsetof(seqRecord, lnkf);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(seqRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_seqRecord_H */
