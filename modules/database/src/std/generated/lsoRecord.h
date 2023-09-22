/** @file lsoRecord.h
 * @brief Declarations for the @ref lsoRecord "lso" record type.
 *
 * This header was generated from lsoRecord.dbd
 */

#ifndef INC_lsoRecord_H
#define INC_lsoRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct lsoRecord;
typedef struct lsodset {
    dset common;
    long (*write_string)(struct lsoRecord *prec);
} lsodset;
#define HAS_lsodset

#include "callback.h"

/** @brief Declaration of lso record type. */
typedef struct lsoRecord {
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
    char *val;                      /**< @brief Current Value */
    char *oval;                     /**< @brief Previous Value */
    epicsUInt16         sizv;       /**< @brief Size of buffers */
    epicsUInt32         len;        /**< @brief Length of VAL */
    epicsUInt32         olen;       /**< @brief Length of OVAL */
    DBLINK              dol;        /**< @brief Desired Output Link */
    epicsEnum16         ivoa;       /**< @brief INVALID Output Action */
    char                ivov[40];   /**< @brief INVALID Output Value */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    DBLINK              out;        /**< @brief Output Specification */
    epicsEnum16         mpst;       /**< @brief Post Value Monitors */
    epicsEnum16         apst;       /**< @brief Post Archive Monitors */
    DBLINK              siml;       /**< @brief Simulation Mode link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    DBLINK              siol;       /**< @brief Simulation Output Link */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} lsoRecord;

typedef enum {
	lsoRecordNAME = 0,
	lsoRecordDESC = 1,
	lsoRecordASG = 2,
	lsoRecordSCAN = 3,
	lsoRecordPINI = 4,
	lsoRecordPHAS = 5,
	lsoRecordEVNT = 6,
	lsoRecordTSE = 7,
	lsoRecordTSEL = 8,
	lsoRecordDTYP = 9,
	lsoRecordDISV = 10,
	lsoRecordDISA = 11,
	lsoRecordSDIS = 12,
	lsoRecordMLOK = 13,
	lsoRecordMLIS = 14,
	lsoRecordBKLNK = 15,
	lsoRecordDISP = 16,
	lsoRecordPROC = 17,
	lsoRecordSTAT = 18,
	lsoRecordSEVR = 19,
	lsoRecordAMSG = 20,
	lsoRecordNSTA = 21,
	lsoRecordNSEV = 22,
	lsoRecordNAMSG = 23,
	lsoRecordACKS = 24,
	lsoRecordACKT = 25,
	lsoRecordDISS = 26,
	lsoRecordLCNT = 27,
	lsoRecordPACT = 28,
	lsoRecordPUTF = 29,
	lsoRecordRPRO = 30,
	lsoRecordASP = 31,
	lsoRecordPPN = 32,
	lsoRecordPPNR = 33,
	lsoRecordSPVT = 34,
	lsoRecordRSET = 35,
	lsoRecordDSET = 36,
	lsoRecordDPVT = 37,
	lsoRecordRDES = 38,
	lsoRecordLSET = 39,
	lsoRecordPRIO = 40,
	lsoRecordTPRO = 41,
	lsoRecordBKPT = 42,
	lsoRecordUDF = 43,
	lsoRecordUDFS = 44,
	lsoRecordTIME = 45,
	lsoRecordUTAG = 46,
	lsoRecordFLNK = 47,
	lsoRecordVAL = 48,
	lsoRecordOVAL = 49,
	lsoRecordSIZV = 50,
	lsoRecordLEN = 51,
	lsoRecordOLEN = 52,
	lsoRecordDOL = 53,
	lsoRecordIVOA = 54,
	lsoRecordIVOV = 55,
	lsoRecordOMSL = 56,
	lsoRecordOUT = 57,
	lsoRecordMPST = 58,
	lsoRecordAPST = 59,
	lsoRecordSIML = 60,
	lsoRecordSIMM = 61,
	lsoRecordSIMS = 62,
	lsoRecordSIOL = 63,
	lsoRecordOLDSIMM = 64,
	lsoRecordSSCN = 65,
	lsoRecordSDLY = 66,
	lsoRecordSIMPVT = 67
} lsoFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int lsoRecordSizeOffset(dbRecordType *prt)
{
    lsoRecord *prec = 0;

    if (prt->no_fields != 68) {
        cantProceed("IOC build or installation error:\n"
            "    The lsoRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 68.\n",
            prt->no_fields);
    }
    prt->papFldDes[lsoRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[lsoRecordNAME]->offset = (unsigned short)offsetof(lsoRecord, name);
    prt->papFldDes[lsoRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[lsoRecordDESC]->offset = (unsigned short)offsetof(lsoRecord, desc);
    prt->papFldDes[lsoRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[lsoRecordASG]->offset = (unsigned short)offsetof(lsoRecord, asg);
    prt->papFldDes[lsoRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[lsoRecordSCAN]->offset = (unsigned short)offsetof(lsoRecord, scan);
    prt->papFldDes[lsoRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[lsoRecordPINI]->offset = (unsigned short)offsetof(lsoRecord, pini);
    prt->papFldDes[lsoRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[lsoRecordPHAS]->offset = (unsigned short)offsetof(lsoRecord, phas);
    prt->papFldDes[lsoRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[lsoRecordEVNT]->offset = (unsigned short)offsetof(lsoRecord, evnt);
    prt->papFldDes[lsoRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[lsoRecordTSE]->offset = (unsigned short)offsetof(lsoRecord, tse);
    prt->papFldDes[lsoRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[lsoRecordTSEL]->offset = (unsigned short)offsetof(lsoRecord, tsel);
    prt->papFldDes[lsoRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[lsoRecordDTYP]->offset = (unsigned short)offsetof(lsoRecord, dtyp);
    prt->papFldDes[lsoRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[lsoRecordDISV]->offset = (unsigned short)offsetof(lsoRecord, disv);
    prt->papFldDes[lsoRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[lsoRecordDISA]->offset = (unsigned short)offsetof(lsoRecord, disa);
    prt->papFldDes[lsoRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[lsoRecordSDIS]->offset = (unsigned short)offsetof(lsoRecord, sdis);
    prt->papFldDes[lsoRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[lsoRecordMLOK]->offset = (unsigned short)offsetof(lsoRecord, mlok);
    prt->papFldDes[lsoRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[lsoRecordMLIS]->offset = (unsigned short)offsetof(lsoRecord, mlis);
    prt->papFldDes[lsoRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[lsoRecordBKLNK]->offset = (unsigned short)offsetof(lsoRecord, bklnk);
    prt->papFldDes[lsoRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[lsoRecordDISP]->offset = (unsigned short)offsetof(lsoRecord, disp);
    prt->papFldDes[lsoRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[lsoRecordPROC]->offset = (unsigned short)offsetof(lsoRecord, proc);
    prt->papFldDes[lsoRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[lsoRecordSTAT]->offset = (unsigned short)offsetof(lsoRecord, stat);
    prt->papFldDes[lsoRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[lsoRecordSEVR]->offset = (unsigned short)offsetof(lsoRecord, sevr);
    prt->papFldDes[lsoRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[lsoRecordAMSG]->offset = (unsigned short)offsetof(lsoRecord, amsg);
    prt->papFldDes[lsoRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[lsoRecordNSTA]->offset = (unsigned short)offsetof(lsoRecord, nsta);
    prt->papFldDes[lsoRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[lsoRecordNSEV]->offset = (unsigned short)offsetof(lsoRecord, nsev);
    prt->papFldDes[lsoRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[lsoRecordNAMSG]->offset = (unsigned short)offsetof(lsoRecord, namsg);
    prt->papFldDes[lsoRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[lsoRecordACKS]->offset = (unsigned short)offsetof(lsoRecord, acks);
    prt->papFldDes[lsoRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[lsoRecordACKT]->offset = (unsigned short)offsetof(lsoRecord, ackt);
    prt->papFldDes[lsoRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[lsoRecordDISS]->offset = (unsigned short)offsetof(lsoRecord, diss);
    prt->papFldDes[lsoRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[lsoRecordLCNT]->offset = (unsigned short)offsetof(lsoRecord, lcnt);
    prt->papFldDes[lsoRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[lsoRecordPACT]->offset = (unsigned short)offsetof(lsoRecord, pact);
    prt->papFldDes[lsoRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[lsoRecordPUTF]->offset = (unsigned short)offsetof(lsoRecord, putf);
    prt->papFldDes[lsoRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[lsoRecordRPRO]->offset = (unsigned short)offsetof(lsoRecord, rpro);
    prt->papFldDes[lsoRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[lsoRecordASP]->offset = (unsigned short)offsetof(lsoRecord, asp);
    prt->papFldDes[lsoRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[lsoRecordPPN]->offset = (unsigned short)offsetof(lsoRecord, ppn);
    prt->papFldDes[lsoRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[lsoRecordPPNR]->offset = (unsigned short)offsetof(lsoRecord, ppnr);
    prt->papFldDes[lsoRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[lsoRecordSPVT]->offset = (unsigned short)offsetof(lsoRecord, spvt);
    prt->papFldDes[lsoRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[lsoRecordRSET]->offset = (unsigned short)offsetof(lsoRecord, rset);
    prt->papFldDes[lsoRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[lsoRecordDSET]->offset = (unsigned short)offsetof(lsoRecord, dset);
    prt->papFldDes[lsoRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[lsoRecordDPVT]->offset = (unsigned short)offsetof(lsoRecord, dpvt);
    prt->papFldDes[lsoRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[lsoRecordRDES]->offset = (unsigned short)offsetof(lsoRecord, rdes);
    prt->papFldDes[lsoRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[lsoRecordLSET]->offset = (unsigned short)offsetof(lsoRecord, lset);
    prt->papFldDes[lsoRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[lsoRecordPRIO]->offset = (unsigned short)offsetof(lsoRecord, prio);
    prt->papFldDes[lsoRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[lsoRecordTPRO]->offset = (unsigned short)offsetof(lsoRecord, tpro);
    prt->papFldDes[lsoRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[lsoRecordBKPT]->offset = (unsigned short)offsetof(lsoRecord, bkpt);
    prt->papFldDes[lsoRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[lsoRecordUDF]->offset = (unsigned short)offsetof(lsoRecord, udf);
    prt->papFldDes[lsoRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[lsoRecordUDFS]->offset = (unsigned short)offsetof(lsoRecord, udfs);
    prt->papFldDes[lsoRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[lsoRecordTIME]->offset = (unsigned short)offsetof(lsoRecord, time);
    prt->papFldDes[lsoRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[lsoRecordUTAG]->offset = (unsigned short)offsetof(lsoRecord, utag);
    prt->papFldDes[lsoRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[lsoRecordFLNK]->offset = (unsigned short)offsetof(lsoRecord, flnk);
    prt->papFldDes[lsoRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[lsoRecordVAL]->offset = (unsigned short)offsetof(lsoRecord, val);
    prt->papFldDes[lsoRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[lsoRecordOVAL]->offset = (unsigned short)offsetof(lsoRecord, oval);
    prt->papFldDes[lsoRecordSIZV]->size = sizeof(prec->sizv);
    prt->papFldDes[lsoRecordSIZV]->offset = (unsigned short)offsetof(lsoRecord, sizv);
    prt->papFldDes[lsoRecordLEN]->size = sizeof(prec->len);
    prt->papFldDes[lsoRecordLEN]->offset = (unsigned short)offsetof(lsoRecord, len);
    prt->papFldDes[lsoRecordOLEN]->size = sizeof(prec->olen);
    prt->papFldDes[lsoRecordOLEN]->offset = (unsigned short)offsetof(lsoRecord, olen);
    prt->papFldDes[lsoRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[lsoRecordDOL]->offset = (unsigned short)offsetof(lsoRecord, dol);
    prt->papFldDes[lsoRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[lsoRecordIVOA]->offset = (unsigned short)offsetof(lsoRecord, ivoa);
    prt->papFldDes[lsoRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[lsoRecordIVOV]->offset = (unsigned short)offsetof(lsoRecord, ivov);
    prt->papFldDes[lsoRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[lsoRecordOMSL]->offset = (unsigned short)offsetof(lsoRecord, omsl);
    prt->papFldDes[lsoRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[lsoRecordOUT]->offset = (unsigned short)offsetof(lsoRecord, out);
    prt->papFldDes[lsoRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[lsoRecordMPST]->offset = (unsigned short)offsetof(lsoRecord, mpst);
    prt->papFldDes[lsoRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[lsoRecordAPST]->offset = (unsigned short)offsetof(lsoRecord, apst);
    prt->papFldDes[lsoRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[lsoRecordSIML]->offset = (unsigned short)offsetof(lsoRecord, siml);
    prt->papFldDes[lsoRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[lsoRecordSIMM]->offset = (unsigned short)offsetof(lsoRecord, simm);
    prt->papFldDes[lsoRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[lsoRecordSIMS]->offset = (unsigned short)offsetof(lsoRecord, sims);
    prt->papFldDes[lsoRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[lsoRecordSIOL]->offset = (unsigned short)offsetof(lsoRecord, siol);
    prt->papFldDes[lsoRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[lsoRecordOLDSIMM]->offset = (unsigned short)offsetof(lsoRecord, oldsimm);
    prt->papFldDes[lsoRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[lsoRecordSSCN]->offset = (unsigned short)offsetof(lsoRecord, sscn);
    prt->papFldDes[lsoRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[lsoRecordSDLY]->offset = (unsigned short)offsetof(lsoRecord, sdly);
    prt->papFldDes[lsoRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[lsoRecordSIMPVT]->offset = (unsigned short)offsetof(lsoRecord, simpvt);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(lsoRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_lsoRecord_H */
