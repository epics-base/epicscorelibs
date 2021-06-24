/** @file aaiRecord.h
 * @brief Declarations for the @ref aaiRecord "aai" record type.
 *
 * This header was generated from aaiRecord.dbd
 */

#ifndef INC_aaiRecord_H
#define INC_aaiRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct aaiRecord;
typedef struct aaidset {
    dset common; /*init_record returns: (-1,0,AAI_DEVINIT_PASS1)=>(failure,success,callback)*/
    long (*read_aai)(struct aaiRecord *prec); /*returns: (-1,0)=>(failure,success)*/
} aaidset;
#define HAS_aaidset
#define AAI_DEVINIT_PASS1 2

#include "callback.h"

#ifndef aaiPOST_NUM_CHOICES
/** @brief Enumerated type from menu aaiPOST */
typedef enum {
    aaiPOST_Always                  /**< @brief State string "Always" */,
    aaiPOST_OnChange                /**< @brief State string "On Change" */
} aaiPOST;
/** @brief Number of states defined for menu aaiPOST */
#define aaiPOST_NUM_CHOICES 2
#endif

/** @brief Declaration of aai record type. */
typedef struct aaiRecord {
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
    DBLINK              inp;        /**< @brief Input Specification */
    char                egu[16];    /**< @brief Engineering Units */
    epicsFloat64        hopr;       /**< @brief High Operating Range */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsUInt32         nelm;       /**< @brief Number of Elements */
    epicsEnum16         ftvl;       /**< @brief Field Type of Value */
    epicsUInt32         nord;       /**< @brief Number elements read */
    void *		bptr;                   /**< @brief Buffer Pointer */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         mpst;       /**< @brief Post Value Monitors */
    epicsEnum16         apst;       /**< @brief Post Archive Monitors */
    epicsUInt32         hash;       /**< @brief Hash of OnChange data. */
} aaiRecord;

typedef enum {
	aaiRecordNAME = 0,
	aaiRecordDESC = 1,
	aaiRecordASG = 2,
	aaiRecordSCAN = 3,
	aaiRecordPINI = 4,
	aaiRecordPHAS = 5,
	aaiRecordEVNT = 6,
	aaiRecordTSE = 7,
	aaiRecordTSEL = 8,
	aaiRecordDTYP = 9,
	aaiRecordDISV = 10,
	aaiRecordDISA = 11,
	aaiRecordSDIS = 12,
	aaiRecordMLOK = 13,
	aaiRecordMLIS = 14,
	aaiRecordBKLNK = 15,
	aaiRecordDISP = 16,
	aaiRecordPROC = 17,
	aaiRecordSTAT = 18,
	aaiRecordSEVR = 19,
	aaiRecordAMSG = 20,
	aaiRecordNSTA = 21,
	aaiRecordNSEV = 22,
	aaiRecordNAMSG = 23,
	aaiRecordACKS = 24,
	aaiRecordACKT = 25,
	aaiRecordDISS = 26,
	aaiRecordLCNT = 27,
	aaiRecordPACT = 28,
	aaiRecordPUTF = 29,
	aaiRecordRPRO = 30,
	aaiRecordASP = 31,
	aaiRecordPPN = 32,
	aaiRecordPPNR = 33,
	aaiRecordSPVT = 34,
	aaiRecordRSET = 35,
	aaiRecordDSET = 36,
	aaiRecordDPVT = 37,
	aaiRecordRDES = 38,
	aaiRecordLSET = 39,
	aaiRecordPRIO = 40,
	aaiRecordTPRO = 41,
	aaiRecordBKPT = 42,
	aaiRecordUDF = 43,
	aaiRecordUDFS = 44,
	aaiRecordTIME = 45,
	aaiRecordUTAG = 46,
	aaiRecordFLNK = 47,
	aaiRecordVAL = 48,
	aaiRecordPREC = 49,
	aaiRecordINP = 50,
	aaiRecordEGU = 51,
	aaiRecordHOPR = 52,
	aaiRecordLOPR = 53,
	aaiRecordNELM = 54,
	aaiRecordFTVL = 55,
	aaiRecordNORD = 56,
	aaiRecordBPTR = 57,
	aaiRecordSIML = 58,
	aaiRecordSIMM = 59,
	aaiRecordSIMS = 60,
	aaiRecordSIOL = 61,
	aaiRecordOLDSIMM = 62,
	aaiRecordSSCN = 63,
	aaiRecordSDLY = 64,
	aaiRecordSIMPVT = 65,
	aaiRecordMPST = 66,
	aaiRecordAPST = 67,
	aaiRecordHASH = 68
} aaiFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int aaiRecordSizeOffset(dbRecordType *prt)
{
    aaiRecord *prec = 0;

    if (prt->no_fields != 69) {
        cantProceed("IOC build or installation error:\n"
            "    The aaiRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 69.\n",
            prt->no_fields);
    }
    prt->papFldDes[aaiRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aaiRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[aaiRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aaiRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[aaiRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aaiRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[aaiRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aaiRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[aaiRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aaiRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[aaiRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aaiRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[aaiRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aaiRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[aaiRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aaiRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[aaiRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aaiRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[aaiRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aaiRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[aaiRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aaiRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[aaiRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aaiRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[aaiRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aaiRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[aaiRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aaiRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[aaiRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aaiRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[aaiRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aaiRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[aaiRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aaiRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[aaiRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aaiRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[aaiRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aaiRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[aaiRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aaiRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[aaiRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[aaiRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[aaiRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aaiRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[aaiRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aaiRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[aaiRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[aaiRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[aaiRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aaiRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[aaiRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aaiRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[aaiRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aaiRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[aaiRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aaiRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[aaiRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aaiRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[aaiRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aaiRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[aaiRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aaiRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[aaiRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aaiRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[aaiRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aaiRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[aaiRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aaiRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[aaiRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aaiRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[aaiRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aaiRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[aaiRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aaiRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[aaiRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aaiRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[aaiRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aaiRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[aaiRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aaiRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[aaiRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aaiRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[aaiRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aaiRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[aaiRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aaiRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[aaiRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aaiRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[aaiRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aaiRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[aaiRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aaiRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[aaiRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[aaiRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[aaiRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aaiRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[aaiRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aaiRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[aaiRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aaiRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[aaiRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[aaiRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[aaiRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[aaiRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[aaiRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[aaiRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[aaiRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[aaiRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[aaiRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[aaiRecordNELM]->offset = (unsigned short)((char *)&prec->nelm - (char *)prec);
    prt->papFldDes[aaiRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[aaiRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[aaiRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[aaiRecordNORD]->offset = (unsigned short)((char *)&prec->nord - (char *)prec);
    prt->papFldDes[aaiRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[aaiRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->papFldDes[aaiRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[aaiRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[aaiRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[aaiRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[aaiRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[aaiRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[aaiRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[aaiRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[aaiRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[aaiRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[aaiRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[aaiRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[aaiRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[aaiRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[aaiRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[aaiRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[aaiRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[aaiRecordMPST]->offset = (unsigned short)((char *)&prec->mpst - (char *)prec);
    prt->papFldDes[aaiRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[aaiRecordAPST]->offset = (unsigned short)((char *)&prec->apst - (char *)prec);
    prt->papFldDes[aaiRecordHASH]->size = sizeof(prec->hash);
    prt->papFldDes[aaiRecordHASH]->offset = (unsigned short)((char *)&prec->hash - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aaiRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aaiRecord_H */
