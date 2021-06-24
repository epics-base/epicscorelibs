/** @file fanoutRecord.h
 * @brief Declarations for the @ref fanoutRecord "fanout" record type.
 *
 * This header was generated from fanoutRecord.dbd
 */

#ifndef INC_fanoutRecord_H
#define INC_fanoutRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef fanoutSELM_NUM_CHOICES
/** @brief Enumerated type from menu fanoutSELM */
typedef enum {
    fanoutSELM_All                  /**< @brief State string "All" */,
    fanoutSELM_Specified            /**< @brief State string "Specified" */,
    fanoutSELM_Mask                 /**< @brief State string "Mask" */
} fanoutSELM;
/** @brief Number of states defined for menu fanoutSELM */
#define fanoutSELM_NUM_CHOICES 3
#endif

/** @brief Declaration of fanout record type. */
typedef struct fanoutRecord {
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
    DBLINK              lnk0;       /**< @brief Forward Link 0 */
    DBLINK              lnk1;       /**< @brief Forward Link 1 */
    DBLINK              lnk2;       /**< @brief Forward Link 2 */
    DBLINK              lnk3;       /**< @brief Forward Link 3 */
    DBLINK              lnk4;       /**< @brief Forward Link 4 */
    DBLINK              lnk5;       /**< @brief Forward Link 5 */
    DBLINK              lnk6;       /**< @brief Forward Link 6 */
    DBLINK              lnk7;       /**< @brief Forward Link 7 */
    DBLINK              lnk8;       /**< @brief Forward Link 8 */
    DBLINK              lnk9;       /**< @brief Forward Link 9 */
    DBLINK              lnka;       /**< @brief Forward Link 10 */
    DBLINK              lnkb;       /**< @brief Forward Link 11 */
    DBLINK              lnkc;       /**< @brief Forward Link 12 */
    DBLINK              lnkd;       /**< @brief Forward Link 13 */
    DBLINK              lnke;       /**< @brief Forward Link 14 */
    DBLINK              lnkf;       /**< @brief Forward Link 15 */
} fanoutRecord;

typedef enum {
	fanoutRecordNAME = 0,
	fanoutRecordDESC = 1,
	fanoutRecordASG = 2,
	fanoutRecordSCAN = 3,
	fanoutRecordPINI = 4,
	fanoutRecordPHAS = 5,
	fanoutRecordEVNT = 6,
	fanoutRecordTSE = 7,
	fanoutRecordTSEL = 8,
	fanoutRecordDTYP = 9,
	fanoutRecordDISV = 10,
	fanoutRecordDISA = 11,
	fanoutRecordSDIS = 12,
	fanoutRecordMLOK = 13,
	fanoutRecordMLIS = 14,
	fanoutRecordBKLNK = 15,
	fanoutRecordDISP = 16,
	fanoutRecordPROC = 17,
	fanoutRecordSTAT = 18,
	fanoutRecordSEVR = 19,
	fanoutRecordAMSG = 20,
	fanoutRecordNSTA = 21,
	fanoutRecordNSEV = 22,
	fanoutRecordNAMSG = 23,
	fanoutRecordACKS = 24,
	fanoutRecordACKT = 25,
	fanoutRecordDISS = 26,
	fanoutRecordLCNT = 27,
	fanoutRecordPACT = 28,
	fanoutRecordPUTF = 29,
	fanoutRecordRPRO = 30,
	fanoutRecordASP = 31,
	fanoutRecordPPN = 32,
	fanoutRecordPPNR = 33,
	fanoutRecordSPVT = 34,
	fanoutRecordRSET = 35,
	fanoutRecordDSET = 36,
	fanoutRecordDPVT = 37,
	fanoutRecordRDES = 38,
	fanoutRecordLSET = 39,
	fanoutRecordPRIO = 40,
	fanoutRecordTPRO = 41,
	fanoutRecordBKPT = 42,
	fanoutRecordUDF = 43,
	fanoutRecordUDFS = 44,
	fanoutRecordTIME = 45,
	fanoutRecordUTAG = 46,
	fanoutRecordFLNK = 47,
	fanoutRecordVAL = 48,
	fanoutRecordSELM = 49,
	fanoutRecordSELN = 50,
	fanoutRecordSELL = 51,
	fanoutRecordOFFS = 52,
	fanoutRecordSHFT = 53,
	fanoutRecordLNK0 = 54,
	fanoutRecordLNK1 = 55,
	fanoutRecordLNK2 = 56,
	fanoutRecordLNK3 = 57,
	fanoutRecordLNK4 = 58,
	fanoutRecordLNK5 = 59,
	fanoutRecordLNK6 = 60,
	fanoutRecordLNK7 = 61,
	fanoutRecordLNK8 = 62,
	fanoutRecordLNK9 = 63,
	fanoutRecordLNKA = 64,
	fanoutRecordLNKB = 65,
	fanoutRecordLNKC = 66,
	fanoutRecordLNKD = 67,
	fanoutRecordLNKE = 68,
	fanoutRecordLNKF = 69
} fanoutFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int fanoutRecordSizeOffset(dbRecordType *prt)
{
    fanoutRecord *prec = 0;

    if (prt->no_fields != 70) {
        cantProceed("IOC build or installation error:\n"
            "    The fanoutRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 70.\n",
            prt->no_fields);
    }
    prt->papFldDes[fanoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[fanoutRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[fanoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[fanoutRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[fanoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[fanoutRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[fanoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[fanoutRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[fanoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[fanoutRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[fanoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[fanoutRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[fanoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[fanoutRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[fanoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[fanoutRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[fanoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[fanoutRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[fanoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[fanoutRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[fanoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[fanoutRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[fanoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[fanoutRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[fanoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[fanoutRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[fanoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[fanoutRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[fanoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[fanoutRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[fanoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[fanoutRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[fanoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[fanoutRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[fanoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[fanoutRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[fanoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[fanoutRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[fanoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[fanoutRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[fanoutRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[fanoutRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[fanoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[fanoutRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[fanoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[fanoutRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[fanoutRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[fanoutRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[fanoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[fanoutRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[fanoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[fanoutRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[fanoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[fanoutRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[fanoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[fanoutRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[fanoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[fanoutRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[fanoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[fanoutRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[fanoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[fanoutRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[fanoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[fanoutRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[fanoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[fanoutRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[fanoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[fanoutRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[fanoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[fanoutRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[fanoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[fanoutRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[fanoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[fanoutRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[fanoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[fanoutRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[fanoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[fanoutRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[fanoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[fanoutRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[fanoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[fanoutRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[fanoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[fanoutRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[fanoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[fanoutRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[fanoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[fanoutRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[fanoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[fanoutRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[fanoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[fanoutRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[fanoutRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[fanoutRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[fanoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[fanoutRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[fanoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[fanoutRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[fanoutRecordSELM]->size = sizeof(prec->selm);
    prt->papFldDes[fanoutRecordSELM]->offset = (unsigned short)((char *)&prec->selm - (char *)prec);
    prt->papFldDes[fanoutRecordSELN]->size = sizeof(prec->seln);
    prt->papFldDes[fanoutRecordSELN]->offset = (unsigned short)((char *)&prec->seln - (char *)prec);
    prt->papFldDes[fanoutRecordSELL]->size = sizeof(prec->sell);
    prt->papFldDes[fanoutRecordSELL]->offset = (unsigned short)((char *)&prec->sell - (char *)prec);
    prt->papFldDes[fanoutRecordOFFS]->size = sizeof(prec->offs);
    prt->papFldDes[fanoutRecordOFFS]->offset = (unsigned short)((char *)&prec->offs - (char *)prec);
    prt->papFldDes[fanoutRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[fanoutRecordSHFT]->offset = (unsigned short)((char *)&prec->shft - (char *)prec);
    prt->papFldDes[fanoutRecordLNK0]->size = sizeof(prec->lnk0);
    prt->papFldDes[fanoutRecordLNK0]->offset = (unsigned short)((char *)&prec->lnk0 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK1]->size = sizeof(prec->lnk1);
    prt->papFldDes[fanoutRecordLNK1]->offset = (unsigned short)((char *)&prec->lnk1 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK2]->size = sizeof(prec->lnk2);
    prt->papFldDes[fanoutRecordLNK2]->offset = (unsigned short)((char *)&prec->lnk2 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK3]->size = sizeof(prec->lnk3);
    prt->papFldDes[fanoutRecordLNK3]->offset = (unsigned short)((char *)&prec->lnk3 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK4]->size = sizeof(prec->lnk4);
    prt->papFldDes[fanoutRecordLNK4]->offset = (unsigned short)((char *)&prec->lnk4 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK5]->size = sizeof(prec->lnk5);
    prt->papFldDes[fanoutRecordLNK5]->offset = (unsigned short)((char *)&prec->lnk5 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK6]->size = sizeof(prec->lnk6);
    prt->papFldDes[fanoutRecordLNK6]->offset = (unsigned short)((char *)&prec->lnk6 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK7]->size = sizeof(prec->lnk7);
    prt->papFldDes[fanoutRecordLNK7]->offset = (unsigned short)((char *)&prec->lnk7 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK8]->size = sizeof(prec->lnk8);
    prt->papFldDes[fanoutRecordLNK8]->offset = (unsigned short)((char *)&prec->lnk8 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK9]->size = sizeof(prec->lnk9);
    prt->papFldDes[fanoutRecordLNK9]->offset = (unsigned short)((char *)&prec->lnk9 - (char *)prec);
    prt->papFldDes[fanoutRecordLNKA]->size = sizeof(prec->lnka);
    prt->papFldDes[fanoutRecordLNKA]->offset = (unsigned short)((char *)&prec->lnka - (char *)prec);
    prt->papFldDes[fanoutRecordLNKB]->size = sizeof(prec->lnkb);
    prt->papFldDes[fanoutRecordLNKB]->offset = (unsigned short)((char *)&prec->lnkb - (char *)prec);
    prt->papFldDes[fanoutRecordLNKC]->size = sizeof(prec->lnkc);
    prt->papFldDes[fanoutRecordLNKC]->offset = (unsigned short)((char *)&prec->lnkc - (char *)prec);
    prt->papFldDes[fanoutRecordLNKD]->size = sizeof(prec->lnkd);
    prt->papFldDes[fanoutRecordLNKD]->offset = (unsigned short)((char *)&prec->lnkd - (char *)prec);
    prt->papFldDes[fanoutRecordLNKE]->size = sizeof(prec->lnke);
    prt->papFldDes[fanoutRecordLNKE]->offset = (unsigned short)((char *)&prec->lnke - (char *)prec);
    prt->papFldDes[fanoutRecordLNKF]->size = sizeof(prec->lnkf);
    prt->papFldDes[fanoutRecordLNKF]->offset = (unsigned short)((char *)&prec->lnkf - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(fanoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_fanoutRecord_H */
