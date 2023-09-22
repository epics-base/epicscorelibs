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
    prt->papFldDes[subArrayRecordNAME]->offset = (unsigned short)offsetof(subArrayRecord, name);
    prt->papFldDes[subArrayRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[subArrayRecordDESC]->offset = (unsigned short)offsetof(subArrayRecord, desc);
    prt->papFldDes[subArrayRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[subArrayRecordASG]->offset = (unsigned short)offsetof(subArrayRecord, asg);
    prt->papFldDes[subArrayRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[subArrayRecordSCAN]->offset = (unsigned short)offsetof(subArrayRecord, scan);
    prt->papFldDes[subArrayRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[subArrayRecordPINI]->offset = (unsigned short)offsetof(subArrayRecord, pini);
    prt->papFldDes[subArrayRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[subArrayRecordPHAS]->offset = (unsigned short)offsetof(subArrayRecord, phas);
    prt->papFldDes[subArrayRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[subArrayRecordEVNT]->offset = (unsigned short)offsetof(subArrayRecord, evnt);
    prt->papFldDes[subArrayRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[subArrayRecordTSE]->offset = (unsigned short)offsetof(subArrayRecord, tse);
    prt->papFldDes[subArrayRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[subArrayRecordTSEL]->offset = (unsigned short)offsetof(subArrayRecord, tsel);
    prt->papFldDes[subArrayRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[subArrayRecordDTYP]->offset = (unsigned short)offsetof(subArrayRecord, dtyp);
    prt->papFldDes[subArrayRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[subArrayRecordDISV]->offset = (unsigned short)offsetof(subArrayRecord, disv);
    prt->papFldDes[subArrayRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[subArrayRecordDISA]->offset = (unsigned short)offsetof(subArrayRecord, disa);
    prt->papFldDes[subArrayRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[subArrayRecordSDIS]->offset = (unsigned short)offsetof(subArrayRecord, sdis);
    prt->papFldDes[subArrayRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[subArrayRecordMLOK]->offset = (unsigned short)offsetof(subArrayRecord, mlok);
    prt->papFldDes[subArrayRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[subArrayRecordMLIS]->offset = (unsigned short)offsetof(subArrayRecord, mlis);
    prt->papFldDes[subArrayRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[subArrayRecordBKLNK]->offset = (unsigned short)offsetof(subArrayRecord, bklnk);
    prt->papFldDes[subArrayRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[subArrayRecordDISP]->offset = (unsigned short)offsetof(subArrayRecord, disp);
    prt->papFldDes[subArrayRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[subArrayRecordPROC]->offset = (unsigned short)offsetof(subArrayRecord, proc);
    prt->papFldDes[subArrayRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[subArrayRecordSTAT]->offset = (unsigned short)offsetof(subArrayRecord, stat);
    prt->papFldDes[subArrayRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[subArrayRecordSEVR]->offset = (unsigned short)offsetof(subArrayRecord, sevr);
    prt->papFldDes[subArrayRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[subArrayRecordAMSG]->offset = (unsigned short)offsetof(subArrayRecord, amsg);
    prt->papFldDes[subArrayRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[subArrayRecordNSTA]->offset = (unsigned short)offsetof(subArrayRecord, nsta);
    prt->papFldDes[subArrayRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[subArrayRecordNSEV]->offset = (unsigned short)offsetof(subArrayRecord, nsev);
    prt->papFldDes[subArrayRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[subArrayRecordNAMSG]->offset = (unsigned short)offsetof(subArrayRecord, namsg);
    prt->papFldDes[subArrayRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[subArrayRecordACKS]->offset = (unsigned short)offsetof(subArrayRecord, acks);
    prt->papFldDes[subArrayRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[subArrayRecordACKT]->offset = (unsigned short)offsetof(subArrayRecord, ackt);
    prt->papFldDes[subArrayRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[subArrayRecordDISS]->offset = (unsigned short)offsetof(subArrayRecord, diss);
    prt->papFldDes[subArrayRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[subArrayRecordLCNT]->offset = (unsigned short)offsetof(subArrayRecord, lcnt);
    prt->papFldDes[subArrayRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[subArrayRecordPACT]->offset = (unsigned short)offsetof(subArrayRecord, pact);
    prt->papFldDes[subArrayRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[subArrayRecordPUTF]->offset = (unsigned short)offsetof(subArrayRecord, putf);
    prt->papFldDes[subArrayRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[subArrayRecordRPRO]->offset = (unsigned short)offsetof(subArrayRecord, rpro);
    prt->papFldDes[subArrayRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[subArrayRecordASP]->offset = (unsigned short)offsetof(subArrayRecord, asp);
    prt->papFldDes[subArrayRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[subArrayRecordPPN]->offset = (unsigned short)offsetof(subArrayRecord, ppn);
    prt->papFldDes[subArrayRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[subArrayRecordPPNR]->offset = (unsigned short)offsetof(subArrayRecord, ppnr);
    prt->papFldDes[subArrayRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[subArrayRecordSPVT]->offset = (unsigned short)offsetof(subArrayRecord, spvt);
    prt->papFldDes[subArrayRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[subArrayRecordRSET]->offset = (unsigned short)offsetof(subArrayRecord, rset);
    prt->papFldDes[subArrayRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[subArrayRecordDSET]->offset = (unsigned short)offsetof(subArrayRecord, dset);
    prt->papFldDes[subArrayRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[subArrayRecordDPVT]->offset = (unsigned short)offsetof(subArrayRecord, dpvt);
    prt->papFldDes[subArrayRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[subArrayRecordRDES]->offset = (unsigned short)offsetof(subArrayRecord, rdes);
    prt->papFldDes[subArrayRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[subArrayRecordLSET]->offset = (unsigned short)offsetof(subArrayRecord, lset);
    prt->papFldDes[subArrayRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[subArrayRecordPRIO]->offset = (unsigned short)offsetof(subArrayRecord, prio);
    prt->papFldDes[subArrayRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[subArrayRecordTPRO]->offset = (unsigned short)offsetof(subArrayRecord, tpro);
    prt->papFldDes[subArrayRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[subArrayRecordBKPT]->offset = (unsigned short)offsetof(subArrayRecord, bkpt);
    prt->papFldDes[subArrayRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[subArrayRecordUDF]->offset = (unsigned short)offsetof(subArrayRecord, udf);
    prt->papFldDes[subArrayRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[subArrayRecordUDFS]->offset = (unsigned short)offsetof(subArrayRecord, udfs);
    prt->papFldDes[subArrayRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[subArrayRecordTIME]->offset = (unsigned short)offsetof(subArrayRecord, time);
    prt->papFldDes[subArrayRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[subArrayRecordUTAG]->offset = (unsigned short)offsetof(subArrayRecord, utag);
    prt->papFldDes[subArrayRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[subArrayRecordFLNK]->offset = (unsigned short)offsetof(subArrayRecord, flnk);
    prt->papFldDes[subArrayRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[subArrayRecordVAL]->offset = (unsigned short)offsetof(subArrayRecord, val);
    prt->papFldDes[subArrayRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[subArrayRecordPREC]->offset = (unsigned short)offsetof(subArrayRecord, prec);
    prt->papFldDes[subArrayRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[subArrayRecordFTVL]->offset = (unsigned short)offsetof(subArrayRecord, ftvl);
    prt->papFldDes[subArrayRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[subArrayRecordINP]->offset = (unsigned short)offsetof(subArrayRecord, inp);
    prt->papFldDes[subArrayRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[subArrayRecordEGU]->offset = (unsigned short)offsetof(subArrayRecord, egu);
    prt->papFldDes[subArrayRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[subArrayRecordHOPR]->offset = (unsigned short)offsetof(subArrayRecord, hopr);
    prt->papFldDes[subArrayRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[subArrayRecordLOPR]->offset = (unsigned short)offsetof(subArrayRecord, lopr);
    prt->papFldDes[subArrayRecordMALM]->size = sizeof(prec->malm);
    prt->papFldDes[subArrayRecordMALM]->offset = (unsigned short)offsetof(subArrayRecord, malm);
    prt->papFldDes[subArrayRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[subArrayRecordNELM]->offset = (unsigned short)offsetof(subArrayRecord, nelm);
    prt->papFldDes[subArrayRecordINDX]->size = sizeof(prec->indx);
    prt->papFldDes[subArrayRecordINDX]->offset = (unsigned short)offsetof(subArrayRecord, indx);
    prt->papFldDes[subArrayRecordBUSY]->size = sizeof(prec->busy);
    prt->papFldDes[subArrayRecordBUSY]->offset = (unsigned short)offsetof(subArrayRecord, busy);
    prt->papFldDes[subArrayRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[subArrayRecordNORD]->offset = (unsigned short)offsetof(subArrayRecord, nord);
    prt->papFldDes[subArrayRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[subArrayRecordBPTR]->offset = (unsigned short)offsetof(subArrayRecord, bptr);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(subArrayRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_subArrayRecord_H */
