/** @file aaoRecord.h
 * @brief Declarations for the @ref aaoRecord "aao" record type.
 *
 * This header was generated from aaoRecord.dbd
 */

#ifndef INC_aaoRecord_H
#define INC_aaoRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct aaoRecord;
typedef struct aaodset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*write_aao)(struct aaoRecord *prec); /*returns: (-1,0)=>(failure,success)*/
} aaodset;
#define HAS_aaodset

#include "callback.h"

#ifndef aaoPOST_NUM_CHOICES
/** @brief Enumerated type from menu aaoPOST */
typedef enum {
    aaoPOST_Always                  /**< @brief State string "Always" */,
    aaoPOST_OnChange                /**< @brief State string "On Change" */
} aaoPOST;
/** @brief Number of states defined for menu aaoPOST */
#define aaoPOST_NUM_CHOICES 2
#endif

/** @brief Declaration of aao record type. */
typedef struct aaoRecord {
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
    DBLINK              out;        /**< @brief Output Specification */
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
    DBLINK              siol;       /**< @brief Simulation Output Link */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         mpst;       /**< @brief Post Value Monitors */
    epicsEnum16         apst;       /**< @brief Post Archive Monitors */
    epicsUInt32         hash;       /**< @brief Hash of OnChange data. */
} aaoRecord;

typedef enum {
	aaoRecordNAME = 0,
	aaoRecordDESC = 1,
	aaoRecordASG = 2,
	aaoRecordSCAN = 3,
	aaoRecordPINI = 4,
	aaoRecordPHAS = 5,
	aaoRecordEVNT = 6,
	aaoRecordTSE = 7,
	aaoRecordTSEL = 8,
	aaoRecordDTYP = 9,
	aaoRecordDISV = 10,
	aaoRecordDISA = 11,
	aaoRecordSDIS = 12,
	aaoRecordMLOK = 13,
	aaoRecordMLIS = 14,
	aaoRecordBKLNK = 15,
	aaoRecordDISP = 16,
	aaoRecordPROC = 17,
	aaoRecordSTAT = 18,
	aaoRecordSEVR = 19,
	aaoRecordAMSG = 20,
	aaoRecordNSTA = 21,
	aaoRecordNSEV = 22,
	aaoRecordNAMSG = 23,
	aaoRecordACKS = 24,
	aaoRecordACKT = 25,
	aaoRecordDISS = 26,
	aaoRecordLCNT = 27,
	aaoRecordPACT = 28,
	aaoRecordPUTF = 29,
	aaoRecordRPRO = 30,
	aaoRecordASP = 31,
	aaoRecordPPN = 32,
	aaoRecordPPNR = 33,
	aaoRecordSPVT = 34,
	aaoRecordRSET = 35,
	aaoRecordDSET = 36,
	aaoRecordDPVT = 37,
	aaoRecordRDES = 38,
	aaoRecordLSET = 39,
	aaoRecordPRIO = 40,
	aaoRecordTPRO = 41,
	aaoRecordBKPT = 42,
	aaoRecordUDF = 43,
	aaoRecordUDFS = 44,
	aaoRecordTIME = 45,
	aaoRecordUTAG = 46,
	aaoRecordFLNK = 47,
	aaoRecordVAL = 48,
	aaoRecordPREC = 49,
	aaoRecordOUT = 50,
	aaoRecordEGU = 51,
	aaoRecordHOPR = 52,
	aaoRecordLOPR = 53,
	aaoRecordNELM = 54,
	aaoRecordFTVL = 55,
	aaoRecordNORD = 56,
	aaoRecordBPTR = 57,
	aaoRecordSIML = 58,
	aaoRecordSIMM = 59,
	aaoRecordSIMS = 60,
	aaoRecordSIOL = 61,
	aaoRecordOLDSIMM = 62,
	aaoRecordSSCN = 63,
	aaoRecordSDLY = 64,
	aaoRecordSIMPVT = 65,
	aaoRecordMPST = 66,
	aaoRecordAPST = 67,
	aaoRecordHASH = 68
} aaoFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int aaoRecordSizeOffset(dbRecordType *prt)
{
    aaoRecord *prec = 0;

    if (prt->no_fields != 69) {
        cantProceed("IOC build or installation error:\n"
            "    The aaoRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 69.\n",
            prt->no_fields);
    }
    prt->papFldDes[aaoRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aaoRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[aaoRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aaoRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[aaoRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aaoRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[aaoRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aaoRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[aaoRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aaoRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[aaoRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aaoRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[aaoRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aaoRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[aaoRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aaoRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[aaoRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aaoRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[aaoRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aaoRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[aaoRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aaoRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[aaoRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aaoRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[aaoRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aaoRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[aaoRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aaoRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[aaoRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aaoRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[aaoRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aaoRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[aaoRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aaoRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[aaoRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aaoRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[aaoRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aaoRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[aaoRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aaoRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[aaoRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[aaoRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[aaoRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aaoRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[aaoRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aaoRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[aaoRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[aaoRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[aaoRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aaoRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[aaoRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aaoRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[aaoRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aaoRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[aaoRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aaoRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[aaoRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aaoRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[aaoRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aaoRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[aaoRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aaoRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[aaoRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aaoRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[aaoRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aaoRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[aaoRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aaoRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[aaoRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aaoRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[aaoRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aaoRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[aaoRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aaoRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[aaoRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aaoRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[aaoRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aaoRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[aaoRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aaoRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[aaoRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aaoRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[aaoRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aaoRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[aaoRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aaoRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[aaoRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aaoRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[aaoRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aaoRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[aaoRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aaoRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[aaoRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[aaoRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[aaoRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aaoRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[aaoRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aaoRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[aaoRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aaoRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[aaoRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[aaoRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[aaoRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[aaoRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[aaoRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[aaoRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[aaoRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[aaoRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[aaoRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[aaoRecordNELM]->offset = (unsigned short)((char *)&prec->nelm - (char *)prec);
    prt->papFldDes[aaoRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[aaoRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[aaoRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[aaoRecordNORD]->offset = (unsigned short)((char *)&prec->nord - (char *)prec);
    prt->papFldDes[aaoRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[aaoRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->papFldDes[aaoRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[aaoRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[aaoRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[aaoRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[aaoRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[aaoRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[aaoRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[aaoRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[aaoRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[aaoRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[aaoRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[aaoRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[aaoRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[aaoRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[aaoRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[aaoRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[aaoRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[aaoRecordMPST]->offset = (unsigned short)((char *)&prec->mpst - (char *)prec);
    prt->papFldDes[aaoRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[aaoRecordAPST]->offset = (unsigned short)((char *)&prec->apst - (char *)prec);
    prt->papFldDes[aaoRecordHASH]->size = sizeof(prec->hash);
    prt->papFldDes[aaoRecordHASH]->offset = (unsigned short)((char *)&prec->hash - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aaoRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aaoRecord_H */
