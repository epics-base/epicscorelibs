/** @file stringoutRecord.h
 * @brief Declarations for the @ref stringoutRecord "stringout" record type.
 *
 * This header was generated from stringoutRecord.dbd
 */

#ifndef INC_stringoutRecord_H
#define INC_stringoutRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct stringoutRecord;
typedef struct stringoutdset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*write_stringout)(struct stringoutRecord *prec); /*(-1,0)=>(failure,success)*/
} stringoutdset;
#define HAS_stringoutdset

#include "callback.h"

#ifndef stringoutPOST_NUM_CHOICES
/** @brief Enumerated type from menu stringoutPOST */
typedef enum {
    stringoutPOST_OnChange          /**< @brief State string "On Change" */,
    stringoutPOST_Always            /**< @brief State string "Always" */
} stringoutPOST;
/** @brief Number of states defined for menu stringoutPOST */
#define stringoutPOST_NUM_CHOICES 2
#endif

/** @brief Declaration of stringout record type. */
typedef struct stringoutRecord {
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
    DBLINK              dol;        /**< @brief Desired Output Link */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    DBLINK              out;        /**< @brief Output Specification */
    epicsEnum16         mpst;       /**< @brief Post Value Monitors */
    epicsEnum16         apst;       /**< @brief Post Archive Monitors */
    DBLINK              siol;       /**< @brief Simulation Output Link */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID output action */
    char                ivov[40];   /**< @brief INVALID output value */
} stringoutRecord;

typedef enum {
	stringoutRecordNAME = 0,
	stringoutRecordDESC = 1,
	stringoutRecordASG = 2,
	stringoutRecordSCAN = 3,
	stringoutRecordPINI = 4,
	stringoutRecordPHAS = 5,
	stringoutRecordEVNT = 6,
	stringoutRecordTSE = 7,
	stringoutRecordTSEL = 8,
	stringoutRecordDTYP = 9,
	stringoutRecordDISV = 10,
	stringoutRecordDISA = 11,
	stringoutRecordSDIS = 12,
	stringoutRecordMLOK = 13,
	stringoutRecordMLIS = 14,
	stringoutRecordBKLNK = 15,
	stringoutRecordDISP = 16,
	stringoutRecordPROC = 17,
	stringoutRecordSTAT = 18,
	stringoutRecordSEVR = 19,
	stringoutRecordAMSG = 20,
	stringoutRecordNSTA = 21,
	stringoutRecordNSEV = 22,
	stringoutRecordNAMSG = 23,
	stringoutRecordACKS = 24,
	stringoutRecordACKT = 25,
	stringoutRecordDISS = 26,
	stringoutRecordLCNT = 27,
	stringoutRecordPACT = 28,
	stringoutRecordPUTF = 29,
	stringoutRecordRPRO = 30,
	stringoutRecordASP = 31,
	stringoutRecordPPN = 32,
	stringoutRecordPPNR = 33,
	stringoutRecordSPVT = 34,
	stringoutRecordRSET = 35,
	stringoutRecordDSET = 36,
	stringoutRecordDPVT = 37,
	stringoutRecordRDES = 38,
	stringoutRecordLSET = 39,
	stringoutRecordPRIO = 40,
	stringoutRecordTPRO = 41,
	stringoutRecordBKPT = 42,
	stringoutRecordUDF = 43,
	stringoutRecordUDFS = 44,
	stringoutRecordTIME = 45,
	stringoutRecordUTAG = 46,
	stringoutRecordFLNK = 47,
	stringoutRecordVAL = 48,
	stringoutRecordOVAL = 49,
	stringoutRecordDOL = 50,
	stringoutRecordOMSL = 51,
	stringoutRecordOUT = 52,
	stringoutRecordMPST = 53,
	stringoutRecordAPST = 54,
	stringoutRecordSIOL = 55,
	stringoutRecordSIML = 56,
	stringoutRecordSIMM = 57,
	stringoutRecordSIMS = 58,
	stringoutRecordOLDSIMM = 59,
	stringoutRecordSSCN = 60,
	stringoutRecordSDLY = 61,
	stringoutRecordSIMPVT = 62,
	stringoutRecordIVOA = 63,
	stringoutRecordIVOV = 64
} stringoutFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int stringoutRecordSizeOffset(dbRecordType *prt)
{
    stringoutRecord *prec = 0;

    if (prt->no_fields != 65) {
        cantProceed("IOC build or installation error:\n"
            "    The stringoutRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 65.\n",
            prt->no_fields);
    }
    prt->papFldDes[stringoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[stringoutRecordNAME]->offset = (unsigned short)offsetof(stringoutRecord, name);
    prt->papFldDes[stringoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[stringoutRecordDESC]->offset = (unsigned short)offsetof(stringoutRecord, desc);
    prt->papFldDes[stringoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[stringoutRecordASG]->offset = (unsigned short)offsetof(stringoutRecord, asg);
    prt->papFldDes[stringoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[stringoutRecordSCAN]->offset = (unsigned short)offsetof(stringoutRecord, scan);
    prt->papFldDes[stringoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[stringoutRecordPINI]->offset = (unsigned short)offsetof(stringoutRecord, pini);
    prt->papFldDes[stringoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[stringoutRecordPHAS]->offset = (unsigned short)offsetof(stringoutRecord, phas);
    prt->papFldDes[stringoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[stringoutRecordEVNT]->offset = (unsigned short)offsetof(stringoutRecord, evnt);
    prt->papFldDes[stringoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[stringoutRecordTSE]->offset = (unsigned short)offsetof(stringoutRecord, tse);
    prt->papFldDes[stringoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[stringoutRecordTSEL]->offset = (unsigned short)offsetof(stringoutRecord, tsel);
    prt->papFldDes[stringoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[stringoutRecordDTYP]->offset = (unsigned short)offsetof(stringoutRecord, dtyp);
    prt->papFldDes[stringoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[stringoutRecordDISV]->offset = (unsigned short)offsetof(stringoutRecord, disv);
    prt->papFldDes[stringoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[stringoutRecordDISA]->offset = (unsigned short)offsetof(stringoutRecord, disa);
    prt->papFldDes[stringoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[stringoutRecordSDIS]->offset = (unsigned short)offsetof(stringoutRecord, sdis);
    prt->papFldDes[stringoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[stringoutRecordMLOK]->offset = (unsigned short)offsetof(stringoutRecord, mlok);
    prt->papFldDes[stringoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[stringoutRecordMLIS]->offset = (unsigned short)offsetof(stringoutRecord, mlis);
    prt->papFldDes[stringoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[stringoutRecordBKLNK]->offset = (unsigned short)offsetof(stringoutRecord, bklnk);
    prt->papFldDes[stringoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[stringoutRecordDISP]->offset = (unsigned short)offsetof(stringoutRecord, disp);
    prt->papFldDes[stringoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[stringoutRecordPROC]->offset = (unsigned short)offsetof(stringoutRecord, proc);
    prt->papFldDes[stringoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[stringoutRecordSTAT]->offset = (unsigned short)offsetof(stringoutRecord, stat);
    prt->papFldDes[stringoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[stringoutRecordSEVR]->offset = (unsigned short)offsetof(stringoutRecord, sevr);
    prt->papFldDes[stringoutRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[stringoutRecordAMSG]->offset = (unsigned short)offsetof(stringoutRecord, amsg);
    prt->papFldDes[stringoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[stringoutRecordNSTA]->offset = (unsigned short)offsetof(stringoutRecord, nsta);
    prt->papFldDes[stringoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[stringoutRecordNSEV]->offset = (unsigned short)offsetof(stringoutRecord, nsev);
    prt->papFldDes[stringoutRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[stringoutRecordNAMSG]->offset = (unsigned short)offsetof(stringoutRecord, namsg);
    prt->papFldDes[stringoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[stringoutRecordACKS]->offset = (unsigned short)offsetof(stringoutRecord, acks);
    prt->papFldDes[stringoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[stringoutRecordACKT]->offset = (unsigned short)offsetof(stringoutRecord, ackt);
    prt->papFldDes[stringoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[stringoutRecordDISS]->offset = (unsigned short)offsetof(stringoutRecord, diss);
    prt->papFldDes[stringoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[stringoutRecordLCNT]->offset = (unsigned short)offsetof(stringoutRecord, lcnt);
    prt->papFldDes[stringoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[stringoutRecordPACT]->offset = (unsigned short)offsetof(stringoutRecord, pact);
    prt->papFldDes[stringoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[stringoutRecordPUTF]->offset = (unsigned short)offsetof(stringoutRecord, putf);
    prt->papFldDes[stringoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[stringoutRecordRPRO]->offset = (unsigned short)offsetof(stringoutRecord, rpro);
    prt->papFldDes[stringoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[stringoutRecordASP]->offset = (unsigned short)offsetof(stringoutRecord, asp);
    prt->papFldDes[stringoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[stringoutRecordPPN]->offset = (unsigned short)offsetof(stringoutRecord, ppn);
    prt->papFldDes[stringoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[stringoutRecordPPNR]->offset = (unsigned short)offsetof(stringoutRecord, ppnr);
    prt->papFldDes[stringoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[stringoutRecordSPVT]->offset = (unsigned short)offsetof(stringoutRecord, spvt);
    prt->papFldDes[stringoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[stringoutRecordRSET]->offset = (unsigned short)offsetof(stringoutRecord, rset);
    prt->papFldDes[stringoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[stringoutRecordDSET]->offset = (unsigned short)offsetof(stringoutRecord, dset);
    prt->papFldDes[stringoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[stringoutRecordDPVT]->offset = (unsigned short)offsetof(stringoutRecord, dpvt);
    prt->papFldDes[stringoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[stringoutRecordRDES]->offset = (unsigned short)offsetof(stringoutRecord, rdes);
    prt->papFldDes[stringoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[stringoutRecordLSET]->offset = (unsigned short)offsetof(stringoutRecord, lset);
    prt->papFldDes[stringoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[stringoutRecordPRIO]->offset = (unsigned short)offsetof(stringoutRecord, prio);
    prt->papFldDes[stringoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[stringoutRecordTPRO]->offset = (unsigned short)offsetof(stringoutRecord, tpro);
    prt->papFldDes[stringoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[stringoutRecordBKPT]->offset = (unsigned short)offsetof(stringoutRecord, bkpt);
    prt->papFldDes[stringoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[stringoutRecordUDF]->offset = (unsigned short)offsetof(stringoutRecord, udf);
    prt->papFldDes[stringoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[stringoutRecordUDFS]->offset = (unsigned short)offsetof(stringoutRecord, udfs);
    prt->papFldDes[stringoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[stringoutRecordTIME]->offset = (unsigned short)offsetof(stringoutRecord, time);
    prt->papFldDes[stringoutRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[stringoutRecordUTAG]->offset = (unsigned short)offsetof(stringoutRecord, utag);
    prt->papFldDes[stringoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[stringoutRecordFLNK]->offset = (unsigned short)offsetof(stringoutRecord, flnk);
    prt->papFldDes[stringoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[stringoutRecordVAL]->offset = (unsigned short)offsetof(stringoutRecord, val);
    prt->papFldDes[stringoutRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[stringoutRecordOVAL]->offset = (unsigned short)offsetof(stringoutRecord, oval);
    prt->papFldDes[stringoutRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[stringoutRecordDOL]->offset = (unsigned short)offsetof(stringoutRecord, dol);
    prt->papFldDes[stringoutRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[stringoutRecordOMSL]->offset = (unsigned short)offsetof(stringoutRecord, omsl);
    prt->papFldDes[stringoutRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[stringoutRecordOUT]->offset = (unsigned short)offsetof(stringoutRecord, out);
    prt->papFldDes[stringoutRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[stringoutRecordMPST]->offset = (unsigned short)offsetof(stringoutRecord, mpst);
    prt->papFldDes[stringoutRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[stringoutRecordAPST]->offset = (unsigned short)offsetof(stringoutRecord, apst);
    prt->papFldDes[stringoutRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[stringoutRecordSIOL]->offset = (unsigned short)offsetof(stringoutRecord, siol);
    prt->papFldDes[stringoutRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[stringoutRecordSIML]->offset = (unsigned short)offsetof(stringoutRecord, siml);
    prt->papFldDes[stringoutRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[stringoutRecordSIMM]->offset = (unsigned short)offsetof(stringoutRecord, simm);
    prt->papFldDes[stringoutRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[stringoutRecordSIMS]->offset = (unsigned short)offsetof(stringoutRecord, sims);
    prt->papFldDes[stringoutRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[stringoutRecordOLDSIMM]->offset = (unsigned short)offsetof(stringoutRecord, oldsimm);
    prt->papFldDes[stringoutRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[stringoutRecordSSCN]->offset = (unsigned short)offsetof(stringoutRecord, sscn);
    prt->papFldDes[stringoutRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[stringoutRecordSDLY]->offset = (unsigned short)offsetof(stringoutRecord, sdly);
    prt->papFldDes[stringoutRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[stringoutRecordSIMPVT]->offset = (unsigned short)offsetof(stringoutRecord, simpvt);
    prt->papFldDes[stringoutRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[stringoutRecordIVOA]->offset = (unsigned short)offsetof(stringoutRecord, ivoa);
    prt->papFldDes[stringoutRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[stringoutRecordIVOV]->offset = (unsigned short)offsetof(stringoutRecord, ivov);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(stringoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_stringoutRecord_H */
