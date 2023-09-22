/** @file eventRecord.h
 * @brief Declarations for the @ref eventRecord "event" record type.
 *
 * This header was generated from eventRecord.dbd
 */

#ifndef INC_eventRecord_H
#define INC_eventRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct eventRecord;
typedef struct eventdset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*read_event)(struct eventRecord *prec); /*(0)=> success */
} eventdset;
#define HAS_eventdset

#include "dbScan.h"
#include "callback.h"

/** @brief Declaration of event record type. */
typedef struct eventRecord {
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
    char                val[40];    /**< @brief Event Name To Post */
    EVENTPVT epvt;                  /**< @brief Event private */
    DBLINK              inp;        /**< @brief Input Specification */
    DBLINK              siol;       /**< @brief Sim Input Specifctn */
    char                sval[40];   /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Sim Mode Location */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Sim mode Alarm Svrty */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} eventRecord;

typedef enum {
	eventRecordNAME = 0,
	eventRecordDESC = 1,
	eventRecordASG = 2,
	eventRecordSCAN = 3,
	eventRecordPINI = 4,
	eventRecordPHAS = 5,
	eventRecordEVNT = 6,
	eventRecordTSE = 7,
	eventRecordTSEL = 8,
	eventRecordDTYP = 9,
	eventRecordDISV = 10,
	eventRecordDISA = 11,
	eventRecordSDIS = 12,
	eventRecordMLOK = 13,
	eventRecordMLIS = 14,
	eventRecordBKLNK = 15,
	eventRecordDISP = 16,
	eventRecordPROC = 17,
	eventRecordSTAT = 18,
	eventRecordSEVR = 19,
	eventRecordAMSG = 20,
	eventRecordNSTA = 21,
	eventRecordNSEV = 22,
	eventRecordNAMSG = 23,
	eventRecordACKS = 24,
	eventRecordACKT = 25,
	eventRecordDISS = 26,
	eventRecordLCNT = 27,
	eventRecordPACT = 28,
	eventRecordPUTF = 29,
	eventRecordRPRO = 30,
	eventRecordASP = 31,
	eventRecordPPN = 32,
	eventRecordPPNR = 33,
	eventRecordSPVT = 34,
	eventRecordRSET = 35,
	eventRecordDSET = 36,
	eventRecordDPVT = 37,
	eventRecordRDES = 38,
	eventRecordLSET = 39,
	eventRecordPRIO = 40,
	eventRecordTPRO = 41,
	eventRecordBKPT = 42,
	eventRecordUDF = 43,
	eventRecordUDFS = 44,
	eventRecordTIME = 45,
	eventRecordUTAG = 46,
	eventRecordFLNK = 47,
	eventRecordVAL = 48,
	eventRecordEPVT = 49,
	eventRecordINP = 50,
	eventRecordSIOL = 51,
	eventRecordSVAL = 52,
	eventRecordSIML = 53,
	eventRecordSIMM = 54,
	eventRecordSIMS = 55,
	eventRecordOLDSIMM = 56,
	eventRecordSSCN = 57,
	eventRecordSDLY = 58,
	eventRecordSIMPVT = 59
} eventFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int eventRecordSizeOffset(dbRecordType *prt)
{
    eventRecord *prec = 0;

    if (prt->no_fields != 60) {
        cantProceed("IOC build or installation error:\n"
            "    The eventRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 60.\n",
            prt->no_fields);
    }
    prt->papFldDes[eventRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[eventRecordNAME]->offset = (unsigned short)offsetof(eventRecord, name);
    prt->papFldDes[eventRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[eventRecordDESC]->offset = (unsigned short)offsetof(eventRecord, desc);
    prt->papFldDes[eventRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[eventRecordASG]->offset = (unsigned short)offsetof(eventRecord, asg);
    prt->papFldDes[eventRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[eventRecordSCAN]->offset = (unsigned short)offsetof(eventRecord, scan);
    prt->papFldDes[eventRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[eventRecordPINI]->offset = (unsigned short)offsetof(eventRecord, pini);
    prt->papFldDes[eventRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[eventRecordPHAS]->offset = (unsigned short)offsetof(eventRecord, phas);
    prt->papFldDes[eventRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[eventRecordEVNT]->offset = (unsigned short)offsetof(eventRecord, evnt);
    prt->papFldDes[eventRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[eventRecordTSE]->offset = (unsigned short)offsetof(eventRecord, tse);
    prt->papFldDes[eventRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[eventRecordTSEL]->offset = (unsigned short)offsetof(eventRecord, tsel);
    prt->papFldDes[eventRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[eventRecordDTYP]->offset = (unsigned short)offsetof(eventRecord, dtyp);
    prt->papFldDes[eventRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[eventRecordDISV]->offset = (unsigned short)offsetof(eventRecord, disv);
    prt->papFldDes[eventRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[eventRecordDISA]->offset = (unsigned short)offsetof(eventRecord, disa);
    prt->papFldDes[eventRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[eventRecordSDIS]->offset = (unsigned short)offsetof(eventRecord, sdis);
    prt->papFldDes[eventRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[eventRecordMLOK]->offset = (unsigned short)offsetof(eventRecord, mlok);
    prt->papFldDes[eventRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[eventRecordMLIS]->offset = (unsigned short)offsetof(eventRecord, mlis);
    prt->papFldDes[eventRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[eventRecordBKLNK]->offset = (unsigned short)offsetof(eventRecord, bklnk);
    prt->papFldDes[eventRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[eventRecordDISP]->offset = (unsigned short)offsetof(eventRecord, disp);
    prt->papFldDes[eventRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[eventRecordPROC]->offset = (unsigned short)offsetof(eventRecord, proc);
    prt->papFldDes[eventRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[eventRecordSTAT]->offset = (unsigned short)offsetof(eventRecord, stat);
    prt->papFldDes[eventRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[eventRecordSEVR]->offset = (unsigned short)offsetof(eventRecord, sevr);
    prt->papFldDes[eventRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[eventRecordAMSG]->offset = (unsigned short)offsetof(eventRecord, amsg);
    prt->papFldDes[eventRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[eventRecordNSTA]->offset = (unsigned short)offsetof(eventRecord, nsta);
    prt->papFldDes[eventRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[eventRecordNSEV]->offset = (unsigned short)offsetof(eventRecord, nsev);
    prt->papFldDes[eventRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[eventRecordNAMSG]->offset = (unsigned short)offsetof(eventRecord, namsg);
    prt->papFldDes[eventRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[eventRecordACKS]->offset = (unsigned short)offsetof(eventRecord, acks);
    prt->papFldDes[eventRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[eventRecordACKT]->offset = (unsigned short)offsetof(eventRecord, ackt);
    prt->papFldDes[eventRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[eventRecordDISS]->offset = (unsigned short)offsetof(eventRecord, diss);
    prt->papFldDes[eventRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[eventRecordLCNT]->offset = (unsigned short)offsetof(eventRecord, lcnt);
    prt->papFldDes[eventRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[eventRecordPACT]->offset = (unsigned short)offsetof(eventRecord, pact);
    prt->papFldDes[eventRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[eventRecordPUTF]->offset = (unsigned short)offsetof(eventRecord, putf);
    prt->papFldDes[eventRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[eventRecordRPRO]->offset = (unsigned short)offsetof(eventRecord, rpro);
    prt->papFldDes[eventRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[eventRecordASP]->offset = (unsigned short)offsetof(eventRecord, asp);
    prt->papFldDes[eventRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[eventRecordPPN]->offset = (unsigned short)offsetof(eventRecord, ppn);
    prt->papFldDes[eventRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[eventRecordPPNR]->offset = (unsigned short)offsetof(eventRecord, ppnr);
    prt->papFldDes[eventRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[eventRecordSPVT]->offset = (unsigned short)offsetof(eventRecord, spvt);
    prt->papFldDes[eventRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[eventRecordRSET]->offset = (unsigned short)offsetof(eventRecord, rset);
    prt->papFldDes[eventRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[eventRecordDSET]->offset = (unsigned short)offsetof(eventRecord, dset);
    prt->papFldDes[eventRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[eventRecordDPVT]->offset = (unsigned short)offsetof(eventRecord, dpvt);
    prt->papFldDes[eventRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[eventRecordRDES]->offset = (unsigned short)offsetof(eventRecord, rdes);
    prt->papFldDes[eventRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[eventRecordLSET]->offset = (unsigned short)offsetof(eventRecord, lset);
    prt->papFldDes[eventRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[eventRecordPRIO]->offset = (unsigned short)offsetof(eventRecord, prio);
    prt->papFldDes[eventRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[eventRecordTPRO]->offset = (unsigned short)offsetof(eventRecord, tpro);
    prt->papFldDes[eventRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[eventRecordBKPT]->offset = (unsigned short)offsetof(eventRecord, bkpt);
    prt->papFldDes[eventRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[eventRecordUDF]->offset = (unsigned short)offsetof(eventRecord, udf);
    prt->papFldDes[eventRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[eventRecordUDFS]->offset = (unsigned short)offsetof(eventRecord, udfs);
    prt->papFldDes[eventRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[eventRecordTIME]->offset = (unsigned short)offsetof(eventRecord, time);
    prt->papFldDes[eventRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[eventRecordUTAG]->offset = (unsigned short)offsetof(eventRecord, utag);
    prt->papFldDes[eventRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[eventRecordFLNK]->offset = (unsigned short)offsetof(eventRecord, flnk);
    prt->papFldDes[eventRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[eventRecordVAL]->offset = (unsigned short)offsetof(eventRecord, val);
    prt->papFldDes[eventRecordEPVT]->size = sizeof(prec->epvt);
    prt->papFldDes[eventRecordEPVT]->offset = (unsigned short)offsetof(eventRecord, epvt);
    prt->papFldDes[eventRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[eventRecordINP]->offset = (unsigned short)offsetof(eventRecord, inp);
    prt->papFldDes[eventRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[eventRecordSIOL]->offset = (unsigned short)offsetof(eventRecord, siol);
    prt->papFldDes[eventRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[eventRecordSVAL]->offset = (unsigned short)offsetof(eventRecord, sval);
    prt->papFldDes[eventRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[eventRecordSIML]->offset = (unsigned short)offsetof(eventRecord, siml);
    prt->papFldDes[eventRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[eventRecordSIMM]->offset = (unsigned short)offsetof(eventRecord, simm);
    prt->papFldDes[eventRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[eventRecordSIMS]->offset = (unsigned short)offsetof(eventRecord, sims);
    prt->papFldDes[eventRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[eventRecordOLDSIMM]->offset = (unsigned short)offsetof(eventRecord, oldsimm);
    prt->papFldDes[eventRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[eventRecordSSCN]->offset = (unsigned short)offsetof(eventRecord, sscn);
    prt->papFldDes[eventRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[eventRecordSDLY]->offset = (unsigned short)offsetof(eventRecord, sdly);
    prt->papFldDes[eventRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[eventRecordSIMPVT]->offset = (unsigned short)offsetof(eventRecord, simpvt);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(eventRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_eventRecord_H */
