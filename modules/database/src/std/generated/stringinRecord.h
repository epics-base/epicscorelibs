/** @file stringinRecord.h
 * @brief Declarations for the @ref stringinRecord "stringin" record type.
 *
 * This header was generated from stringinRecord.dbd
 */

#ifndef INC_stringinRecord_H
#define INC_stringinRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct stringinRecord;
typedef struct stringindset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*read_stringin)(struct stringinRecord *prec); /*returns: (-1,0)=>(failure,success)*/
} stringindset;
#define HAS_stringindset

#include "callback.h"

#ifndef stringinPOST_NUM_CHOICES
/** @brief Enumerated type from menu stringinPOST */
typedef enum {
    stringinPOST_OnChange           /**< @brief State string "On Change" */,
    stringinPOST_Always             /**< @brief State string "Always" */
} stringinPOST;
/** @brief Number of states defined for menu stringinPOST */
#define stringinPOST_NUM_CHOICES 2
#endif

/** @brief Declaration of stringin record type. */
typedef struct stringinRecord {
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
    char                val[40];    /**< @brief Current Value */
    char                oval[40];   /**< @brief Previous Value */
    DBLINK              inp;        /**< @brief Input Specification */
    epicsEnum16         mpst;       /**< @brief Post Value Monitors */
    epicsEnum16         apst;       /**< @brief Post Archive Monitors */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    char                sval[40];   /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} stringinRecord;

typedef enum {
	stringinRecordNAME = 0,
	stringinRecordDESC = 1,
	stringinRecordASG = 2,
	stringinRecordSCAN = 3,
	stringinRecordPINI = 4,
	stringinRecordPHAS = 5,
	stringinRecordEVNT = 6,
	stringinRecordTSE = 7,
	stringinRecordTSEL = 8,
	stringinRecordDTYP = 9,
	stringinRecordDISV = 10,
	stringinRecordDISA = 11,
	stringinRecordSDIS = 12,
	stringinRecordMLOK = 13,
	stringinRecordMLIS = 14,
	stringinRecordBKLNK = 15,
	stringinRecordDISP = 16,
	stringinRecordPROC = 17,
	stringinRecordSTAT = 18,
	stringinRecordSEVR = 19,
	stringinRecordAMSG = 20,
	stringinRecordNSTA = 21,
	stringinRecordNSEV = 22,
	stringinRecordNAMSG = 23,
	stringinRecordACKS = 24,
	stringinRecordACKT = 25,
	stringinRecordDISS = 26,
	stringinRecordLCNT = 27,
	stringinRecordPACT = 28,
	stringinRecordPUTF = 29,
	stringinRecordRPRO = 30,
	stringinRecordASP = 31,
	stringinRecordPPN = 32,
	stringinRecordPPNR = 33,
	stringinRecordSPVT = 34,
	stringinRecordRSET = 35,
	stringinRecordDSET = 36,
	stringinRecordDPVT = 37,
	stringinRecordRDES = 38,
	stringinRecordLSET = 39,
	stringinRecordPRIO = 40,
	stringinRecordTPRO = 41,
	stringinRecordBKPT = 42,
	stringinRecordUDF = 43,
	stringinRecordUDFS = 44,
	stringinRecordTIME = 45,
	stringinRecordUTAG = 46,
	stringinRecordFLNK = 47,
	stringinRecordVAL = 48,
	stringinRecordOVAL = 49,
	stringinRecordINP = 50,
	stringinRecordMPST = 51,
	stringinRecordAPST = 52,
	stringinRecordSIOL = 53,
	stringinRecordSVAL = 54,
	stringinRecordSIML = 55,
	stringinRecordSIMM = 56,
	stringinRecordSIMS = 57,
	stringinRecordOLDSIMM = 58,
	stringinRecordSSCN = 59,
	stringinRecordSDLY = 60,
	stringinRecordSIMPVT = 61
} stringinFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int stringinRecordSizeOffset(dbRecordType *prt)
{
    stringinRecord *prec = 0;

    if (prt->no_fields != 62) {
        cantProceed("IOC build or installation error:\n"
            "    The stringinRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 62.\n",
            prt->no_fields);
    }
    prt->papFldDes[stringinRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[stringinRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[stringinRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[stringinRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[stringinRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[stringinRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[stringinRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[stringinRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[stringinRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[stringinRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[stringinRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[stringinRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[stringinRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[stringinRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[stringinRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[stringinRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[stringinRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[stringinRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[stringinRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[stringinRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[stringinRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[stringinRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[stringinRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[stringinRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[stringinRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[stringinRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[stringinRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[stringinRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[stringinRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[stringinRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[stringinRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[stringinRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[stringinRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[stringinRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[stringinRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[stringinRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[stringinRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[stringinRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[stringinRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[stringinRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[stringinRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[stringinRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[stringinRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[stringinRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[stringinRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[stringinRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[stringinRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[stringinRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[stringinRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[stringinRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[stringinRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[stringinRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[stringinRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[stringinRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[stringinRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[stringinRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[stringinRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[stringinRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[stringinRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[stringinRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[stringinRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[stringinRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[stringinRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[stringinRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[stringinRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[stringinRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[stringinRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[stringinRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[stringinRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[stringinRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[stringinRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[stringinRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[stringinRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[stringinRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[stringinRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[stringinRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[stringinRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[stringinRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[stringinRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[stringinRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[stringinRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[stringinRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[stringinRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[stringinRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[stringinRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[stringinRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[stringinRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[stringinRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[stringinRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[stringinRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[stringinRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[stringinRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[stringinRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[stringinRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[stringinRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[stringinRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[stringinRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[stringinRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[stringinRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[stringinRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[stringinRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[stringinRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[stringinRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[stringinRecordMPST]->offset = (unsigned short)((char *)&prec->mpst - (char *)prec);
    prt->papFldDes[stringinRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[stringinRecordAPST]->offset = (unsigned short)((char *)&prec->apst - (char *)prec);
    prt->papFldDes[stringinRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[stringinRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[stringinRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[stringinRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[stringinRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[stringinRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[stringinRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[stringinRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[stringinRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[stringinRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[stringinRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[stringinRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[stringinRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[stringinRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[stringinRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[stringinRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[stringinRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[stringinRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(stringinRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_stringinRecord_H */
