/** @file biRecord.h
 * @brief Declarations for the @ref biRecord "bi" record type.
 *
 * This header was generated from biRecord.dbd
 */

#ifndef INC_biRecord_H
#define INC_biRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct biRecord;
typedef struct bidset {
    dset common;
    long (*read_bi)(struct biRecord *prec);
} bidset;
#define HAS_bidset

#include "callback.h"

/** @brief Declaration of bi record type. */
typedef struct biRecord {
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
    DBLINK              inp;        /**< @brief Input Specification */
    epicsEnum16         val;        /**< @brief Current Value */
    epicsEnum16         zsv;        /**< @brief Zero Error Severity */
    epicsEnum16         osv;        /**< @brief One Error Severity */
    epicsEnum16         cosv;       /**< @brief Change of State Svr */
    char                znam[26];   /**< @brief Zero Name */
    char                onam[26];   /**< @brief One Name */
    epicsUInt32         rval;       /**< @brief Raw Value */
    epicsUInt32         oraw;       /**< @brief prev Raw Value */
    epicsUInt32         mask;       /**< @brief Hardware Mask */
    epicsUInt16         lalm;       /**< @brief Last Value Alarmed */
    epicsUInt16         mlst;       /**< @brief Last Value Monitored */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    epicsUInt32         sval;       /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
} biRecord;

typedef enum {
	biRecordNAME = 0,
	biRecordDESC = 1,
	biRecordASG = 2,
	biRecordSCAN = 3,
	biRecordPINI = 4,
	biRecordPHAS = 5,
	biRecordEVNT = 6,
	biRecordTSE = 7,
	biRecordTSEL = 8,
	biRecordDTYP = 9,
	biRecordDISV = 10,
	biRecordDISA = 11,
	biRecordSDIS = 12,
	biRecordMLOK = 13,
	biRecordMLIS = 14,
	biRecordBKLNK = 15,
	biRecordDISP = 16,
	biRecordPROC = 17,
	biRecordSTAT = 18,
	biRecordSEVR = 19,
	biRecordAMSG = 20,
	biRecordNSTA = 21,
	biRecordNSEV = 22,
	biRecordNAMSG = 23,
	biRecordACKS = 24,
	biRecordACKT = 25,
	biRecordDISS = 26,
	biRecordLCNT = 27,
	biRecordPACT = 28,
	biRecordPUTF = 29,
	biRecordRPRO = 30,
	biRecordASP = 31,
	biRecordPPN = 32,
	biRecordPPNR = 33,
	biRecordSPVT = 34,
	biRecordRSET = 35,
	biRecordDSET = 36,
	biRecordDPVT = 37,
	biRecordRDES = 38,
	biRecordLSET = 39,
	biRecordPRIO = 40,
	biRecordTPRO = 41,
	biRecordBKPT = 42,
	biRecordUDF = 43,
	biRecordUDFS = 44,
	biRecordTIME = 45,
	biRecordUTAG = 46,
	biRecordFLNK = 47,
	biRecordINP = 48,
	biRecordVAL = 49,
	biRecordZSV = 50,
	biRecordOSV = 51,
	biRecordCOSV = 52,
	biRecordZNAM = 53,
	biRecordONAM = 54,
	biRecordRVAL = 55,
	biRecordORAW = 56,
	biRecordMASK = 57,
	biRecordLALM = 58,
	biRecordMLST = 59,
	biRecordSIOL = 60,
	biRecordSVAL = 61,
	biRecordSIML = 62,
	biRecordSIMM = 63,
	biRecordSIMS = 64,
	biRecordOLDSIMM = 65,
	biRecordSSCN = 66,
	biRecordSDLY = 67,
	biRecordSIMPVT = 68
} biFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int biRecordSizeOffset(dbRecordType *prt)
{
    biRecord *prec = 0;

    if (prt->no_fields != 69) {
        cantProceed("IOC build or installation error:\n"
            "    The biRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 69.\n",
            prt->no_fields);
    }
    prt->papFldDes[biRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[biRecordNAME]->offset = (unsigned short)offsetof(biRecord, name);
    prt->papFldDes[biRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[biRecordDESC]->offset = (unsigned short)offsetof(biRecord, desc);
    prt->papFldDes[biRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[biRecordASG]->offset = (unsigned short)offsetof(biRecord, asg);
    prt->papFldDes[biRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[biRecordSCAN]->offset = (unsigned short)offsetof(biRecord, scan);
    prt->papFldDes[biRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[biRecordPINI]->offset = (unsigned short)offsetof(biRecord, pini);
    prt->papFldDes[biRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[biRecordPHAS]->offset = (unsigned short)offsetof(biRecord, phas);
    prt->papFldDes[biRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[biRecordEVNT]->offset = (unsigned short)offsetof(biRecord, evnt);
    prt->papFldDes[biRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[biRecordTSE]->offset = (unsigned short)offsetof(biRecord, tse);
    prt->papFldDes[biRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[biRecordTSEL]->offset = (unsigned short)offsetof(biRecord, tsel);
    prt->papFldDes[biRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[biRecordDTYP]->offset = (unsigned short)offsetof(biRecord, dtyp);
    prt->papFldDes[biRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[biRecordDISV]->offset = (unsigned short)offsetof(biRecord, disv);
    prt->papFldDes[biRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[biRecordDISA]->offset = (unsigned short)offsetof(biRecord, disa);
    prt->papFldDes[biRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[biRecordSDIS]->offset = (unsigned short)offsetof(biRecord, sdis);
    prt->papFldDes[biRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[biRecordMLOK]->offset = (unsigned short)offsetof(biRecord, mlok);
    prt->papFldDes[biRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[biRecordMLIS]->offset = (unsigned short)offsetof(biRecord, mlis);
    prt->papFldDes[biRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[biRecordBKLNK]->offset = (unsigned short)offsetof(biRecord, bklnk);
    prt->papFldDes[biRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[biRecordDISP]->offset = (unsigned short)offsetof(biRecord, disp);
    prt->papFldDes[biRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[biRecordPROC]->offset = (unsigned short)offsetof(biRecord, proc);
    prt->papFldDes[biRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[biRecordSTAT]->offset = (unsigned short)offsetof(biRecord, stat);
    prt->papFldDes[biRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[biRecordSEVR]->offset = (unsigned short)offsetof(biRecord, sevr);
    prt->papFldDes[biRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[biRecordAMSG]->offset = (unsigned short)offsetof(biRecord, amsg);
    prt->papFldDes[biRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[biRecordNSTA]->offset = (unsigned short)offsetof(biRecord, nsta);
    prt->papFldDes[biRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[biRecordNSEV]->offset = (unsigned short)offsetof(biRecord, nsev);
    prt->papFldDes[biRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[biRecordNAMSG]->offset = (unsigned short)offsetof(biRecord, namsg);
    prt->papFldDes[biRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[biRecordACKS]->offset = (unsigned short)offsetof(biRecord, acks);
    prt->papFldDes[biRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[biRecordACKT]->offset = (unsigned short)offsetof(biRecord, ackt);
    prt->papFldDes[biRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[biRecordDISS]->offset = (unsigned short)offsetof(biRecord, diss);
    prt->papFldDes[biRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[biRecordLCNT]->offset = (unsigned short)offsetof(biRecord, lcnt);
    prt->papFldDes[biRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[biRecordPACT]->offset = (unsigned short)offsetof(biRecord, pact);
    prt->papFldDes[biRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[biRecordPUTF]->offset = (unsigned short)offsetof(biRecord, putf);
    prt->papFldDes[biRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[biRecordRPRO]->offset = (unsigned short)offsetof(biRecord, rpro);
    prt->papFldDes[biRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[biRecordASP]->offset = (unsigned short)offsetof(biRecord, asp);
    prt->papFldDes[biRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[biRecordPPN]->offset = (unsigned short)offsetof(biRecord, ppn);
    prt->papFldDes[biRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[biRecordPPNR]->offset = (unsigned short)offsetof(biRecord, ppnr);
    prt->papFldDes[biRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[biRecordSPVT]->offset = (unsigned short)offsetof(biRecord, spvt);
    prt->papFldDes[biRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[biRecordRSET]->offset = (unsigned short)offsetof(biRecord, rset);
    prt->papFldDes[biRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[biRecordDSET]->offset = (unsigned short)offsetof(biRecord, dset);
    prt->papFldDes[biRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[biRecordDPVT]->offset = (unsigned short)offsetof(biRecord, dpvt);
    prt->papFldDes[biRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[biRecordRDES]->offset = (unsigned short)offsetof(biRecord, rdes);
    prt->papFldDes[biRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[biRecordLSET]->offset = (unsigned short)offsetof(biRecord, lset);
    prt->papFldDes[biRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[biRecordPRIO]->offset = (unsigned short)offsetof(biRecord, prio);
    prt->papFldDes[biRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[biRecordTPRO]->offset = (unsigned short)offsetof(biRecord, tpro);
    prt->papFldDes[biRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[biRecordBKPT]->offset = (unsigned short)offsetof(biRecord, bkpt);
    prt->papFldDes[biRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[biRecordUDF]->offset = (unsigned short)offsetof(biRecord, udf);
    prt->papFldDes[biRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[biRecordUDFS]->offset = (unsigned short)offsetof(biRecord, udfs);
    prt->papFldDes[biRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[biRecordTIME]->offset = (unsigned short)offsetof(biRecord, time);
    prt->papFldDes[biRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[biRecordUTAG]->offset = (unsigned short)offsetof(biRecord, utag);
    prt->papFldDes[biRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[biRecordFLNK]->offset = (unsigned short)offsetof(biRecord, flnk);
    prt->papFldDes[biRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[biRecordINP]->offset = (unsigned short)offsetof(biRecord, inp);
    prt->papFldDes[biRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[biRecordVAL]->offset = (unsigned short)offsetof(biRecord, val);
    prt->papFldDes[biRecordZSV]->size = sizeof(prec->zsv);
    prt->papFldDes[biRecordZSV]->offset = (unsigned short)offsetof(biRecord, zsv);
    prt->papFldDes[biRecordOSV]->size = sizeof(prec->osv);
    prt->papFldDes[biRecordOSV]->offset = (unsigned short)offsetof(biRecord, osv);
    prt->papFldDes[biRecordCOSV]->size = sizeof(prec->cosv);
    prt->papFldDes[biRecordCOSV]->offset = (unsigned short)offsetof(biRecord, cosv);
    prt->papFldDes[biRecordZNAM]->size = sizeof(prec->znam);
    prt->papFldDes[biRecordZNAM]->offset = (unsigned short)offsetof(biRecord, znam);
    prt->papFldDes[biRecordONAM]->size = sizeof(prec->onam);
    prt->papFldDes[biRecordONAM]->offset = (unsigned short)offsetof(biRecord, onam);
    prt->papFldDes[biRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[biRecordRVAL]->offset = (unsigned short)offsetof(biRecord, rval);
    prt->papFldDes[biRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[biRecordORAW]->offset = (unsigned short)offsetof(biRecord, oraw);
    prt->papFldDes[biRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[biRecordMASK]->offset = (unsigned short)offsetof(biRecord, mask);
    prt->papFldDes[biRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[biRecordLALM]->offset = (unsigned short)offsetof(biRecord, lalm);
    prt->papFldDes[biRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[biRecordMLST]->offset = (unsigned short)offsetof(biRecord, mlst);
    prt->papFldDes[biRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[biRecordSIOL]->offset = (unsigned short)offsetof(biRecord, siol);
    prt->papFldDes[biRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[biRecordSVAL]->offset = (unsigned short)offsetof(biRecord, sval);
    prt->papFldDes[biRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[biRecordSIML]->offset = (unsigned short)offsetof(biRecord, siml);
    prt->papFldDes[biRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[biRecordSIMM]->offset = (unsigned short)offsetof(biRecord, simm);
    prt->papFldDes[biRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[biRecordSIMS]->offset = (unsigned short)offsetof(biRecord, sims);
    prt->papFldDes[biRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[biRecordOLDSIMM]->offset = (unsigned short)offsetof(biRecord, oldsimm);
    prt->papFldDes[biRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[biRecordSSCN]->offset = (unsigned short)offsetof(biRecord, sscn);
    prt->papFldDes[biRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[biRecordSDLY]->offset = (unsigned short)offsetof(biRecord, sdly);
    prt->papFldDes[biRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[biRecordSIMPVT]->offset = (unsigned short)offsetof(biRecord, simpvt);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(biRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_biRecord_H */
