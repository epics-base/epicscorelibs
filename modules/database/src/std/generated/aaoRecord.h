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
    DBLINK              dol;        /**< @brief Desired Output Link */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
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
	aaoRecordDOL = 51,
	aaoRecordOMSL = 52,
	aaoRecordEGU = 53,
	aaoRecordHOPR = 54,
	aaoRecordLOPR = 55,
	aaoRecordNELM = 56,
	aaoRecordFTVL = 57,
	aaoRecordNORD = 58,
	aaoRecordBPTR = 59,
	aaoRecordSIML = 60,
	aaoRecordSIMM = 61,
	aaoRecordSIMS = 62,
	aaoRecordSIOL = 63,
	aaoRecordOLDSIMM = 64,
	aaoRecordSSCN = 65,
	aaoRecordSDLY = 66,
	aaoRecordSIMPVT = 67,
	aaoRecordMPST = 68,
	aaoRecordAPST = 69,
	aaoRecordHASH = 70
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

    if (prt->no_fields != 71) {
        cantProceed("IOC build or installation error:\n"
            "    The aaoRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 71.\n",
            prt->no_fields);
    }
    prt->papFldDes[aaoRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aaoRecordNAME]->offset = (unsigned short)offsetof(aaoRecord, name);
    prt->papFldDes[aaoRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aaoRecordDESC]->offset = (unsigned short)offsetof(aaoRecord, desc);
    prt->papFldDes[aaoRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aaoRecordASG]->offset = (unsigned short)offsetof(aaoRecord, asg);
    prt->papFldDes[aaoRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aaoRecordSCAN]->offset = (unsigned short)offsetof(aaoRecord, scan);
    prt->papFldDes[aaoRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aaoRecordPINI]->offset = (unsigned short)offsetof(aaoRecord, pini);
    prt->papFldDes[aaoRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aaoRecordPHAS]->offset = (unsigned short)offsetof(aaoRecord, phas);
    prt->papFldDes[aaoRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aaoRecordEVNT]->offset = (unsigned short)offsetof(aaoRecord, evnt);
    prt->papFldDes[aaoRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aaoRecordTSE]->offset = (unsigned short)offsetof(aaoRecord, tse);
    prt->papFldDes[aaoRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aaoRecordTSEL]->offset = (unsigned short)offsetof(aaoRecord, tsel);
    prt->papFldDes[aaoRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aaoRecordDTYP]->offset = (unsigned short)offsetof(aaoRecord, dtyp);
    prt->papFldDes[aaoRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aaoRecordDISV]->offset = (unsigned short)offsetof(aaoRecord, disv);
    prt->papFldDes[aaoRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aaoRecordDISA]->offset = (unsigned short)offsetof(aaoRecord, disa);
    prt->papFldDes[aaoRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aaoRecordSDIS]->offset = (unsigned short)offsetof(aaoRecord, sdis);
    prt->papFldDes[aaoRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aaoRecordMLOK]->offset = (unsigned short)offsetof(aaoRecord, mlok);
    prt->papFldDes[aaoRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aaoRecordMLIS]->offset = (unsigned short)offsetof(aaoRecord, mlis);
    prt->papFldDes[aaoRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aaoRecordBKLNK]->offset = (unsigned short)offsetof(aaoRecord, bklnk);
    prt->papFldDes[aaoRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aaoRecordDISP]->offset = (unsigned short)offsetof(aaoRecord, disp);
    prt->papFldDes[aaoRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aaoRecordPROC]->offset = (unsigned short)offsetof(aaoRecord, proc);
    prt->papFldDes[aaoRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aaoRecordSTAT]->offset = (unsigned short)offsetof(aaoRecord, stat);
    prt->papFldDes[aaoRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aaoRecordSEVR]->offset = (unsigned short)offsetof(aaoRecord, sevr);
    prt->papFldDes[aaoRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[aaoRecordAMSG]->offset = (unsigned short)offsetof(aaoRecord, amsg);
    prt->papFldDes[aaoRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aaoRecordNSTA]->offset = (unsigned short)offsetof(aaoRecord, nsta);
    prt->papFldDes[aaoRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aaoRecordNSEV]->offset = (unsigned short)offsetof(aaoRecord, nsev);
    prt->papFldDes[aaoRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[aaoRecordNAMSG]->offset = (unsigned short)offsetof(aaoRecord, namsg);
    prt->papFldDes[aaoRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aaoRecordACKS]->offset = (unsigned short)offsetof(aaoRecord, acks);
    prt->papFldDes[aaoRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aaoRecordACKT]->offset = (unsigned short)offsetof(aaoRecord, ackt);
    prt->papFldDes[aaoRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aaoRecordDISS]->offset = (unsigned short)offsetof(aaoRecord, diss);
    prt->papFldDes[aaoRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aaoRecordLCNT]->offset = (unsigned short)offsetof(aaoRecord, lcnt);
    prt->papFldDes[aaoRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aaoRecordPACT]->offset = (unsigned short)offsetof(aaoRecord, pact);
    prt->papFldDes[aaoRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aaoRecordPUTF]->offset = (unsigned short)offsetof(aaoRecord, putf);
    prt->papFldDes[aaoRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aaoRecordRPRO]->offset = (unsigned short)offsetof(aaoRecord, rpro);
    prt->papFldDes[aaoRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aaoRecordASP]->offset = (unsigned short)offsetof(aaoRecord, asp);
    prt->papFldDes[aaoRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aaoRecordPPN]->offset = (unsigned short)offsetof(aaoRecord, ppn);
    prt->papFldDes[aaoRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aaoRecordPPNR]->offset = (unsigned short)offsetof(aaoRecord, ppnr);
    prt->papFldDes[aaoRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aaoRecordSPVT]->offset = (unsigned short)offsetof(aaoRecord, spvt);
    prt->papFldDes[aaoRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aaoRecordRSET]->offset = (unsigned short)offsetof(aaoRecord, rset);
    prt->papFldDes[aaoRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aaoRecordDSET]->offset = (unsigned short)offsetof(aaoRecord, dset);
    prt->papFldDes[aaoRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aaoRecordDPVT]->offset = (unsigned short)offsetof(aaoRecord, dpvt);
    prt->papFldDes[aaoRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aaoRecordRDES]->offset = (unsigned short)offsetof(aaoRecord, rdes);
    prt->papFldDes[aaoRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aaoRecordLSET]->offset = (unsigned short)offsetof(aaoRecord, lset);
    prt->papFldDes[aaoRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aaoRecordPRIO]->offset = (unsigned short)offsetof(aaoRecord, prio);
    prt->papFldDes[aaoRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aaoRecordTPRO]->offset = (unsigned short)offsetof(aaoRecord, tpro);
    prt->papFldDes[aaoRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aaoRecordBKPT]->offset = (unsigned short)offsetof(aaoRecord, bkpt);
    prt->papFldDes[aaoRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aaoRecordUDF]->offset = (unsigned short)offsetof(aaoRecord, udf);
    prt->papFldDes[aaoRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aaoRecordUDFS]->offset = (unsigned short)offsetof(aaoRecord, udfs);
    prt->papFldDes[aaoRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aaoRecordTIME]->offset = (unsigned short)offsetof(aaoRecord, time);
    prt->papFldDes[aaoRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[aaoRecordUTAG]->offset = (unsigned short)offsetof(aaoRecord, utag);
    prt->papFldDes[aaoRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aaoRecordFLNK]->offset = (unsigned short)offsetof(aaoRecord, flnk);
    prt->papFldDes[aaoRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aaoRecordVAL]->offset = (unsigned short)offsetof(aaoRecord, val);
    prt->papFldDes[aaoRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aaoRecordPREC]->offset = (unsigned short)offsetof(aaoRecord, prec);
    prt->papFldDes[aaoRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[aaoRecordOUT]->offset = (unsigned short)offsetof(aaoRecord, out);
    prt->papFldDes[aaoRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[aaoRecordDOL]->offset = (unsigned short)offsetof(aaoRecord, dol);
    prt->papFldDes[aaoRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[aaoRecordOMSL]->offset = (unsigned short)offsetof(aaoRecord, omsl);
    prt->papFldDes[aaoRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[aaoRecordEGU]->offset = (unsigned short)offsetof(aaoRecord, egu);
    prt->papFldDes[aaoRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[aaoRecordHOPR]->offset = (unsigned short)offsetof(aaoRecord, hopr);
    prt->papFldDes[aaoRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[aaoRecordLOPR]->offset = (unsigned short)offsetof(aaoRecord, lopr);
    prt->papFldDes[aaoRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[aaoRecordNELM]->offset = (unsigned short)offsetof(aaoRecord, nelm);
    prt->papFldDes[aaoRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[aaoRecordFTVL]->offset = (unsigned short)offsetof(aaoRecord, ftvl);
    prt->papFldDes[aaoRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[aaoRecordNORD]->offset = (unsigned short)offsetof(aaoRecord, nord);
    prt->papFldDes[aaoRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[aaoRecordBPTR]->offset = (unsigned short)offsetof(aaoRecord, bptr);
    prt->papFldDes[aaoRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[aaoRecordSIML]->offset = (unsigned short)offsetof(aaoRecord, siml);
    prt->papFldDes[aaoRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[aaoRecordSIMM]->offset = (unsigned short)offsetof(aaoRecord, simm);
    prt->papFldDes[aaoRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[aaoRecordSIMS]->offset = (unsigned short)offsetof(aaoRecord, sims);
    prt->papFldDes[aaoRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[aaoRecordSIOL]->offset = (unsigned short)offsetof(aaoRecord, siol);
    prt->papFldDes[aaoRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[aaoRecordOLDSIMM]->offset = (unsigned short)offsetof(aaoRecord, oldsimm);
    prt->papFldDes[aaoRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[aaoRecordSSCN]->offset = (unsigned short)offsetof(aaoRecord, sscn);
    prt->papFldDes[aaoRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[aaoRecordSDLY]->offset = (unsigned short)offsetof(aaoRecord, sdly);
    prt->papFldDes[aaoRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[aaoRecordSIMPVT]->offset = (unsigned short)offsetof(aaoRecord, simpvt);
    prt->papFldDes[aaoRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[aaoRecordMPST]->offset = (unsigned short)offsetof(aaoRecord, mpst);
    prt->papFldDes[aaoRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[aaoRecordAPST]->offset = (unsigned short)offsetof(aaoRecord, apst);
    prt->papFldDes[aaoRecordHASH]->size = sizeof(prec->hash);
    prt->papFldDes[aaoRecordHASH]->offset = (unsigned short)offsetof(aaoRecord, hash);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aaoRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aaoRecord_H */
