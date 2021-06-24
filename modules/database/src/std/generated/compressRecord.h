/** @file compressRecord.h
 * @brief Declarations for the @ref compressRecord "compress" record type.
 *
 * This header was generated from compressRecord.dbd
 */

#ifndef INC_compressRecord_H
#define INC_compressRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef bufferingALG_NUM_CHOICES
/** @brief Enumerated type from menu bufferingALG */
typedef enum {
    bufferingALG_FIFO               /**< @brief State string "FIFO Buffer" */,
    bufferingALG_LIFO               /**< @brief State string "LIFO Buffer" */
} bufferingALG;
/** @brief Number of states defined for menu bufferingALG */
#define bufferingALG_NUM_CHOICES 2
#endif

#ifndef compressALG_NUM_CHOICES
/** @brief Enumerated type from menu compressALG */
typedef enum {
    compressALG_N_to_1_Low_Value    /**< @brief State string "N to 1 Low Value" */,
    compressALG_N_to_1_High_Value   /**< @brief State string "N to 1 High Value" */,
    compressALG_N_to_1_Average      /**< @brief State string "N to 1 Average" */,
    compressALG_Average             /**< @brief State string "Average" */,
    compressALG_Circular_Buffer     /**< @brief State string "Circular Buffer" */,
    compressALG_N_to_1_Median       /**< @brief State string "N to 1 Median" */
} compressALG;
/** @brief Number of states defined for menu compressALG */
#define compressALG_NUM_CHOICES 6
#endif

/** @brief Declaration of compress record type. */
typedef struct compressRecord {
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
    DBLINK              inp;        /**< @brief Input Specification */
    epicsInt16          res;        /**< @brief Reset */
    epicsEnum16         alg;        /**< @brief Compression Algorithm */
    epicsEnum16         balg;       /**< @brief Buffering Algorithm */
    epicsUInt32         nsam;       /**< @brief Number of Values */
    epicsUInt32         n;          /**< @brief N to 1 Compression */
    epicsFloat64        ihil;       /**< @brief Init High Interest Lim */
    epicsFloat64        ilil;       /**< @brief Init Low Interest Lim */
    epicsFloat64        hopr;       /**< @brief High Operating Range */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsInt16          prec;       /**< @brief Display Precision */
    char                egu[16];    /**< @brief Engineering Units */
    epicsUInt32         off;        /**< @brief Offset */
    epicsUInt32         nuse;       /**< @brief Number Used */
    epicsUInt32         ouse;       /**< @brief Old Number Used */
    double		*bptr;                  /**< @brief Buffer Pointer */
    double		*sptr;                  /**< @brief Summing Buffer Ptr */
    double		*wptr;                  /**< @brief Working Buffer Ptr */
    epicsInt32          inpn;       /**< @brief Number of elements in Working Buffer */
    epicsFloat64        cvb;        /**< @brief Compress Value Buffer */
    epicsUInt32         inx;        /**< @brief Compressed Array Inx */
} compressRecord;

typedef enum {
	compressRecordNAME = 0,
	compressRecordDESC = 1,
	compressRecordASG = 2,
	compressRecordSCAN = 3,
	compressRecordPINI = 4,
	compressRecordPHAS = 5,
	compressRecordEVNT = 6,
	compressRecordTSE = 7,
	compressRecordTSEL = 8,
	compressRecordDTYP = 9,
	compressRecordDISV = 10,
	compressRecordDISA = 11,
	compressRecordSDIS = 12,
	compressRecordMLOK = 13,
	compressRecordMLIS = 14,
	compressRecordBKLNK = 15,
	compressRecordDISP = 16,
	compressRecordPROC = 17,
	compressRecordSTAT = 18,
	compressRecordSEVR = 19,
	compressRecordAMSG = 20,
	compressRecordNSTA = 21,
	compressRecordNSEV = 22,
	compressRecordNAMSG = 23,
	compressRecordACKS = 24,
	compressRecordACKT = 25,
	compressRecordDISS = 26,
	compressRecordLCNT = 27,
	compressRecordPACT = 28,
	compressRecordPUTF = 29,
	compressRecordRPRO = 30,
	compressRecordASP = 31,
	compressRecordPPN = 32,
	compressRecordPPNR = 33,
	compressRecordSPVT = 34,
	compressRecordRSET = 35,
	compressRecordDSET = 36,
	compressRecordDPVT = 37,
	compressRecordRDES = 38,
	compressRecordLSET = 39,
	compressRecordPRIO = 40,
	compressRecordTPRO = 41,
	compressRecordBKPT = 42,
	compressRecordUDF = 43,
	compressRecordUDFS = 44,
	compressRecordTIME = 45,
	compressRecordUTAG = 46,
	compressRecordFLNK = 47,
	compressRecordVAL = 48,
	compressRecordINP = 49,
	compressRecordRES = 50,
	compressRecordALG = 51,
	compressRecordBALG = 52,
	compressRecordNSAM = 53,
	compressRecordN = 54,
	compressRecordIHIL = 55,
	compressRecordILIL = 56,
	compressRecordHOPR = 57,
	compressRecordLOPR = 58,
	compressRecordPREC = 59,
	compressRecordEGU = 60,
	compressRecordOFF = 61,
	compressRecordNUSE = 62,
	compressRecordOUSE = 63,
	compressRecordBPTR = 64,
	compressRecordSPTR = 65,
	compressRecordWPTR = 66,
	compressRecordINPN = 67,
	compressRecordCVB = 68,
	compressRecordINX = 69
} compressFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int compressRecordSizeOffset(dbRecordType *prt)
{
    compressRecord *prec = 0;

    if (prt->no_fields != 70) {
        cantProceed("IOC build or installation error:\n"
            "    The compressRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 70.\n",
            prt->no_fields);
    }
    prt->papFldDes[compressRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[compressRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[compressRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[compressRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[compressRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[compressRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[compressRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[compressRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[compressRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[compressRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[compressRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[compressRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[compressRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[compressRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[compressRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[compressRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[compressRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[compressRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[compressRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[compressRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[compressRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[compressRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[compressRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[compressRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[compressRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[compressRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[compressRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[compressRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[compressRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[compressRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[compressRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[compressRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[compressRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[compressRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[compressRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[compressRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[compressRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[compressRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[compressRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[compressRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[compressRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[compressRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[compressRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[compressRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[compressRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[compressRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[compressRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[compressRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[compressRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[compressRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[compressRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[compressRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[compressRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[compressRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[compressRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[compressRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[compressRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[compressRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[compressRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[compressRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[compressRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[compressRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[compressRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[compressRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[compressRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[compressRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[compressRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[compressRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[compressRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[compressRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[compressRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[compressRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[compressRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[compressRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[compressRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[compressRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[compressRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[compressRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[compressRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[compressRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[compressRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[compressRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[compressRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[compressRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[compressRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[compressRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[compressRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[compressRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[compressRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[compressRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[compressRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[compressRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[compressRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[compressRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[compressRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[compressRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[compressRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[compressRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[compressRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[compressRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[compressRecordRES]->size = sizeof(prec->res);
    prt->papFldDes[compressRecordRES]->offset = (unsigned short)((char *)&prec->res - (char *)prec);
    prt->papFldDes[compressRecordALG]->size = sizeof(prec->alg);
    prt->papFldDes[compressRecordALG]->offset = (unsigned short)((char *)&prec->alg - (char *)prec);
    prt->papFldDes[compressRecordBALG]->size = sizeof(prec->balg);
    prt->papFldDes[compressRecordBALG]->offset = (unsigned short)((char *)&prec->balg - (char *)prec);
    prt->papFldDes[compressRecordNSAM]->size = sizeof(prec->nsam);
    prt->papFldDes[compressRecordNSAM]->offset = (unsigned short)((char *)&prec->nsam - (char *)prec);
    prt->papFldDes[compressRecordN]->size = sizeof(prec->n);
    prt->papFldDes[compressRecordN]->offset = (unsigned short)((char *)&prec->n - (char *)prec);
    prt->papFldDes[compressRecordIHIL]->size = sizeof(prec->ihil);
    prt->papFldDes[compressRecordIHIL]->offset = (unsigned short)((char *)&prec->ihil - (char *)prec);
    prt->papFldDes[compressRecordILIL]->size = sizeof(prec->ilil);
    prt->papFldDes[compressRecordILIL]->offset = (unsigned short)((char *)&prec->ilil - (char *)prec);
    prt->papFldDes[compressRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[compressRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[compressRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[compressRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[compressRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[compressRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[compressRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[compressRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[compressRecordOFF]->size = sizeof(prec->off);
    prt->papFldDes[compressRecordOFF]->offset = (unsigned short)((char *)&prec->off - (char *)prec);
    prt->papFldDes[compressRecordNUSE]->size = sizeof(prec->nuse);
    prt->papFldDes[compressRecordNUSE]->offset = (unsigned short)((char *)&prec->nuse - (char *)prec);
    prt->papFldDes[compressRecordOUSE]->size = sizeof(prec->ouse);
    prt->papFldDes[compressRecordOUSE]->offset = (unsigned short)((char *)&prec->ouse - (char *)prec);
    prt->papFldDes[compressRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[compressRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->papFldDes[compressRecordSPTR]->size = sizeof(prec->sptr);
    prt->papFldDes[compressRecordSPTR]->offset = (unsigned short)((char *)&prec->sptr - (char *)prec);
    prt->papFldDes[compressRecordWPTR]->size = sizeof(prec->wptr);
    prt->papFldDes[compressRecordWPTR]->offset = (unsigned short)((char *)&prec->wptr - (char *)prec);
    prt->papFldDes[compressRecordINPN]->size = sizeof(prec->inpn);
    prt->papFldDes[compressRecordINPN]->offset = (unsigned short)((char *)&prec->inpn - (char *)prec);
    prt->papFldDes[compressRecordCVB]->size = sizeof(prec->cvb);
    prt->papFldDes[compressRecordCVB]->offset = (unsigned short)((char *)&prec->cvb - (char *)prec);
    prt->papFldDes[compressRecordINX]->size = sizeof(prec->inx);
    prt->papFldDes[compressRecordINX]->offset = (unsigned short)((char *)&prec->inx - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(compressRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_compressRecord_H */
