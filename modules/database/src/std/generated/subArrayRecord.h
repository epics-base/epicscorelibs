/** @file subArrayRecord.h
 * @brief Declarations for the @ref subArrayRecord "subArray" record type.
 *
 * This header was generated from subArrayRecord.dbd
 */

#ifndef INC_subArrayRecord_H
#define INC_subArrayRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct subArrayRecord;
typedef struct sadset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*read_sa)(struct subArrayRecord *prec); /*returns: (-1,0)=>(failure,success)*/
} sadset;
#define HAS_sadset


/** @brief Declaration of subArray record type. */
typedef struct subArrayRecord {
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
    void *		val;                    /**< @brief Value */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsEnum16         ftvl;       /**< @brief Field Type of Value */
    DBLINK              inp;        /**< @brief Input Specification */
    char                egu[16];    /**< @brief Engineering Units */
    epicsFloat64        hopr;       /**< @brief High Operating Range */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsUInt32         malm;       /**< @brief Maximum Elements */
    epicsUInt32         nelm;       /**< @brief Number of Elements */
    epicsUInt32         indx;       /**< @brief Substring Index */
    epicsInt16          busy;       /**< @brief Busy Indicator */
    epicsInt32          nord;       /**< @brief Number elements read */
    void *		bptr;                   /**< @brief Buffer Pointer */
} subArrayRecord;

typedef enum {
	subArrayRecordNAME = 0,
	subArrayRecordDESC = 1,
	subArrayRecordASG = 2,
	subArrayRecordSCAN = 3,
	subArrayRecordPINI = 4,
	subArrayRecordPHAS = 5,
	subArrayRecordEVNT = 6,
	subArrayRecordTSE = 7,
	subArrayRecordTSEL = 8,
	subArrayRecordDTYP = 9,
	subArrayRecordDISV = 10,
	subArrayRecordDISA = 11,
	subArrayRecordSDIS = 12,
	subArrayRecordMLOK = 13,
	subArrayRecordMLIS = 14,
	subArrayRecordBKLNK = 15,
	subArrayRecordDISP = 16,
	subArrayRecordPROC = 17,
	subArrayRecordSTAT = 18,
	subArrayRecordSEVR = 19,
	subArrayRecordAMSG = 20,
	subArrayRecordNSTA = 21,
	subArrayRecordNSEV = 22,
	subArrayRecordNAMSG = 23,
	subArrayRecordACKS = 24,
	subArrayRecordACKT = 25,
	subArrayRecordDISS = 26,
	subArrayRecordLCNT = 27,
	subArrayRecordPACT = 28,
	subArrayRecordPUTF = 29,
	subArrayRecordRPRO = 30,
	subArrayRecordASP = 31,
	subArrayRecordPPN = 32,
	subArrayRecordPPNR = 33,
	subArrayRecordSPVT = 34,
	subArrayRecordRSET = 35,
	subArrayRecordDSET = 36,
	subArrayRecordDPVT = 37,
	subArrayRecordRDES = 38,
	subArrayRecordLSET = 39,
	subArrayRecordPRIO = 40,
	subArrayRecordTPRO = 41,
	subArrayRecordBKPT = 42,
	subArrayRecordUDF = 43,
	subArrayRecordUDFS = 44,
	subArrayRecordTIME = 45,
	subArrayRecordUTAG = 46,
	subArrayRecordFLNK = 47,
	subArrayRecordVAL = 48,
	subArrayRecordPREC = 49,
	subArrayRecordFTVL = 50,
	subArrayRecordINP = 51,
	subArrayRecordEGU = 52,
	subArrayRecordHOPR = 53,
	subArrayRecordLOPR = 54,
	subArrayRecordMALM = 55,
	subArrayRecordNELM = 56,
	subArrayRecordINDX = 57,
	subArrayRecordBUSY = 58,
	subArrayRecordNORD = 59,
	subArrayRecordBPTR = 60
} subArrayFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int subArrayRecordSizeOffset(dbRecordType *prt)
{
    subArrayRecord *prec = 0;

    if (prt->no_fields != 61) {
        cantProceed("IOC build or installation error:\n"
            "    The subArrayRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 61.\n",
            prt->no_fields);
    }
    prt->papFldDes[subArrayRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[subArrayRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[subArrayRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[subArrayRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[subArrayRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[subArrayRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[subArrayRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[subArrayRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[subArrayRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[subArrayRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[subArrayRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[subArrayRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[subArrayRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[subArrayRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[subArrayRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[subArrayRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[subArrayRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[subArrayRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[subArrayRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[subArrayRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[subArrayRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[subArrayRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[subArrayRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[subArrayRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[subArrayRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[subArrayRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[subArrayRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[subArrayRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[subArrayRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[subArrayRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[subArrayRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[subArrayRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[subArrayRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[subArrayRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[subArrayRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[subArrayRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[subArrayRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[subArrayRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[subArrayRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[subArrayRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[subArrayRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[subArrayRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[subArrayRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[subArrayRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[subArrayRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[subArrayRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[subArrayRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[subArrayRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[subArrayRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[subArrayRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[subArrayRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[subArrayRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[subArrayRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[subArrayRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[subArrayRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[subArrayRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[subArrayRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[subArrayRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[subArrayRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[subArrayRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[subArrayRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[subArrayRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[subArrayRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[subArrayRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[subArrayRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[subArrayRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[subArrayRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[subArrayRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[subArrayRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[subArrayRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[subArrayRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[subArrayRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[subArrayRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[subArrayRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[subArrayRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[subArrayRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[subArrayRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[subArrayRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[subArrayRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[subArrayRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[subArrayRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[subArrayRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[subArrayRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[subArrayRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[subArrayRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[subArrayRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[subArrayRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[subArrayRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[subArrayRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[subArrayRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[subArrayRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[subArrayRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[subArrayRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[subArrayRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[subArrayRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[subArrayRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[subArrayRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[subArrayRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[subArrayRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[subArrayRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[subArrayRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[subArrayRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[subArrayRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[subArrayRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[subArrayRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[subArrayRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[subArrayRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[subArrayRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[subArrayRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[subArrayRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[subArrayRecordMALM]->size = sizeof(prec->malm);
    prt->papFldDes[subArrayRecordMALM]->offset = (unsigned short)((char *)&prec->malm - (char *)prec);
    prt->papFldDes[subArrayRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[subArrayRecordNELM]->offset = (unsigned short)((char *)&prec->nelm - (char *)prec);
    prt->papFldDes[subArrayRecordINDX]->size = sizeof(prec->indx);
    prt->papFldDes[subArrayRecordINDX]->offset = (unsigned short)((char *)&prec->indx - (char *)prec);
    prt->papFldDes[subArrayRecordBUSY]->size = sizeof(prec->busy);
    prt->papFldDes[subArrayRecordBUSY]->offset = (unsigned short)((char *)&prec->busy - (char *)prec);
    prt->papFldDes[subArrayRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[subArrayRecordNORD]->offset = (unsigned short)((char *)&prec->nord - (char *)prec);
    prt->papFldDes[subArrayRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[subArrayRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(subArrayRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_subArrayRecord_H */
