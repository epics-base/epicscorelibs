/** @file boRecord.h
 * @brief Declarations for the @ref boRecord "bo" record type.
 *
 * This header was generated from boRecord.dbd
 */

#ifndef INC_boRecord_H
#define INC_boRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct boRecord;
typedef struct bodset {
    dset common; /*init_record returns:(0,2)=>(success,success no convert*/
    long (*write_bo)(struct boRecord *prec); /*returns: (-1,0)=>(failure,success)*/
} bodset;
#define HAS_bodset

#include "callback.h"

/** @brief Declaration of bo record type. */
typedef struct boRecord {
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
    epicsEnum16         val;        /**< @brief Current Value */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    DBLINK              dol;        /**< @brief Desired Output Link */
    DBLINK              out;        /**< @brief Output Specification */
    epicsFloat64        high;       /**< @brief Seconds to Hold High */
    char                znam[26];   /**< @brief Zero Name */
    char                onam[26];   /**< @brief One Name */
    epicsUInt32         rval;       /**< @brief Raw Value */
    epicsUInt32         oraw;       /**< @brief prev Raw Value */
    epicsUInt32         mask;       /**< @brief Hardware Mask */
    void *  rpvt;                   /**< @brief Record Private */
    void *	wdpt;                    /**< @brief Watch Dog Timer ID */
    epicsEnum16         zsv;        /**< @brief Zero Error Severity */
    epicsEnum16         osv;        /**< @brief One Error Severity */
    epicsEnum16         cosv;       /**< @brief Change of State Sevr */
    epicsUInt32         rbv;        /**< @brief Readback Value */
    epicsUInt32         orbv;       /**< @brief Prev Readback Value */
    epicsUInt16         mlst;       /**< @brief Last Value Monitored */
    epicsUInt16         lalm;       /**< @brief Last Value Alarmed */
    DBLINK              siol;       /**< @brief Simulation Output Link */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID outpt action */
    epicsUInt16         ivov;       /**< @brief INVALID output value */
} boRecord;

typedef enum {
	boRecordNAME = 0,
	boRecordDESC = 1,
	boRecordASG = 2,
	boRecordSCAN = 3,
	boRecordPINI = 4,
	boRecordPHAS = 5,
	boRecordEVNT = 6,
	boRecordTSE = 7,
	boRecordTSEL = 8,
	boRecordDTYP = 9,
	boRecordDISV = 10,
	boRecordDISA = 11,
	boRecordSDIS = 12,
	boRecordMLOK = 13,
	boRecordMLIS = 14,
	boRecordBKLNK = 15,
	boRecordDISP = 16,
	boRecordPROC = 17,
	boRecordSTAT = 18,
	boRecordSEVR = 19,
	boRecordAMSG = 20,
	boRecordNSTA = 21,
	boRecordNSEV = 22,
	boRecordNAMSG = 23,
	boRecordACKS = 24,
	boRecordACKT = 25,
	boRecordDISS = 26,
	boRecordLCNT = 27,
	boRecordPACT = 28,
	boRecordPUTF = 29,
	boRecordRPRO = 30,
	boRecordASP = 31,
	boRecordPPN = 32,
	boRecordPPNR = 33,
	boRecordSPVT = 34,
	boRecordRSET = 35,
	boRecordDSET = 36,
	boRecordDPVT = 37,
	boRecordRDES = 38,
	boRecordLSET = 39,
	boRecordPRIO = 40,
	boRecordTPRO = 41,
	boRecordBKPT = 42,
	boRecordUDF = 43,
	boRecordUDFS = 44,
	boRecordTIME = 45,
	boRecordUTAG = 46,
	boRecordFLNK = 47,
	boRecordVAL = 48,
	boRecordOMSL = 49,
	boRecordDOL = 50,
	boRecordOUT = 51,
	boRecordHIGH = 52,
	boRecordZNAM = 53,
	boRecordONAM = 54,
	boRecordRVAL = 55,
	boRecordORAW = 56,
	boRecordMASK = 57,
	boRecordRPVT = 58,
	boRecordWDPT = 59,
	boRecordZSV = 60,
	boRecordOSV = 61,
	boRecordCOSV = 62,
	boRecordRBV = 63,
	boRecordORBV = 64,
	boRecordMLST = 65,
	boRecordLALM = 66,
	boRecordSIOL = 67,
	boRecordSIML = 68,
	boRecordSIMM = 69,
	boRecordSIMS = 70,
	boRecordOLDSIMM = 71,
	boRecordSSCN = 72,
	boRecordSDLY = 73,
	boRecordSIMPVT = 74,
	boRecordIVOA = 75,
	boRecordIVOV = 76
} boFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int boRecordSizeOffset(dbRecordType *prt)
{
    boRecord *prec = 0;

    if (prt->no_fields != 77) {
        cantProceed("IOC build or installation error:\n"
            "    The boRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 77.\n",
            prt->no_fields);
    }
    prt->papFldDes[boRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[boRecordNAME]->offset = (unsigned short)offsetof(boRecord, name);
    prt->papFldDes[boRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[boRecordDESC]->offset = (unsigned short)offsetof(boRecord, desc);
    prt->papFldDes[boRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[boRecordASG]->offset = (unsigned short)offsetof(boRecord, asg);
    prt->papFldDes[boRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[boRecordSCAN]->offset = (unsigned short)offsetof(boRecord, scan);
    prt->papFldDes[boRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[boRecordPINI]->offset = (unsigned short)offsetof(boRecord, pini);
    prt->papFldDes[boRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[boRecordPHAS]->offset = (unsigned short)offsetof(boRecord, phas);
    prt->papFldDes[boRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[boRecordEVNT]->offset = (unsigned short)offsetof(boRecord, evnt);
    prt->papFldDes[boRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[boRecordTSE]->offset = (unsigned short)offsetof(boRecord, tse);
    prt->papFldDes[boRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[boRecordTSEL]->offset = (unsigned short)offsetof(boRecord, tsel);
    prt->papFldDes[boRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[boRecordDTYP]->offset = (unsigned short)offsetof(boRecord, dtyp);
    prt->papFldDes[boRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[boRecordDISV]->offset = (unsigned short)offsetof(boRecord, disv);
    prt->papFldDes[boRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[boRecordDISA]->offset = (unsigned short)offsetof(boRecord, disa);
    prt->papFldDes[boRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[boRecordSDIS]->offset = (unsigned short)offsetof(boRecord, sdis);
    prt->papFldDes[boRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[boRecordMLOK]->offset = (unsigned short)offsetof(boRecord, mlok);
    prt->papFldDes[boRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[boRecordMLIS]->offset = (unsigned short)offsetof(boRecord, mlis);
    prt->papFldDes[boRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[boRecordBKLNK]->offset = (unsigned short)offsetof(boRecord, bklnk);
    prt->papFldDes[boRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[boRecordDISP]->offset = (unsigned short)offsetof(boRecord, disp);
    prt->papFldDes[boRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[boRecordPROC]->offset = (unsigned short)offsetof(boRecord, proc);
    prt->papFldDes[boRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[boRecordSTAT]->offset = (unsigned short)offsetof(boRecord, stat);
    prt->papFldDes[boRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[boRecordSEVR]->offset = (unsigned short)offsetof(boRecord, sevr);
    prt->papFldDes[boRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[boRecordAMSG]->offset = (unsigned short)offsetof(boRecord, amsg);
    prt->papFldDes[boRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[boRecordNSTA]->offset = (unsigned short)offsetof(boRecord, nsta);
    prt->papFldDes[boRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[boRecordNSEV]->offset = (unsigned short)offsetof(boRecord, nsev);
    prt->papFldDes[boRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[boRecordNAMSG]->offset = (unsigned short)offsetof(boRecord, namsg);
    prt->papFldDes[boRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[boRecordACKS]->offset = (unsigned short)offsetof(boRecord, acks);
    prt->papFldDes[boRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[boRecordACKT]->offset = (unsigned short)offsetof(boRecord, ackt);
    prt->papFldDes[boRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[boRecordDISS]->offset = (unsigned short)offsetof(boRecord, diss);
    prt->papFldDes[boRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[boRecordLCNT]->offset = (unsigned short)offsetof(boRecord, lcnt);
    prt->papFldDes[boRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[boRecordPACT]->offset = (unsigned short)offsetof(boRecord, pact);
    prt->papFldDes[boRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[boRecordPUTF]->offset = (unsigned short)offsetof(boRecord, putf);
    prt->papFldDes[boRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[boRecordRPRO]->offset = (unsigned short)offsetof(boRecord, rpro);
    prt->papFldDes[boRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[boRecordASP]->offset = (unsigned short)offsetof(boRecord, asp);
    prt->papFldDes[boRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[boRecordPPN]->offset = (unsigned short)offsetof(boRecord, ppn);
    prt->papFldDes[boRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[boRecordPPNR]->offset = (unsigned short)offsetof(boRecord, ppnr);
    prt->papFldDes[boRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[boRecordSPVT]->offset = (unsigned short)offsetof(boRecord, spvt);
    prt->papFldDes[boRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[boRecordRSET]->offset = (unsigned short)offsetof(boRecord, rset);
    prt->papFldDes[boRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[boRecordDSET]->offset = (unsigned short)offsetof(boRecord, dset);
    prt->papFldDes[boRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[boRecordDPVT]->offset = (unsigned short)offsetof(boRecord, dpvt);
    prt->papFldDes[boRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[boRecordRDES]->offset = (unsigned short)offsetof(boRecord, rdes);
    prt->papFldDes[boRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[boRecordLSET]->offset = (unsigned short)offsetof(boRecord, lset);
    prt->papFldDes[boRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[boRecordPRIO]->offset = (unsigned short)offsetof(boRecord, prio);
    prt->papFldDes[boRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[boRecordTPRO]->offset = (unsigned short)offsetof(boRecord, tpro);
    prt->papFldDes[boRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[boRecordBKPT]->offset = (unsigned short)offsetof(boRecord, bkpt);
    prt->papFldDes[boRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[boRecordUDF]->offset = (unsigned short)offsetof(boRecord, udf);
    prt->papFldDes[boRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[boRecordUDFS]->offset = (unsigned short)offsetof(boRecord, udfs);
    prt->papFldDes[boRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[boRecordTIME]->offset = (unsigned short)offsetof(boRecord, time);
    prt->papFldDes[boRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[boRecordUTAG]->offset = (unsigned short)offsetof(boRecord, utag);
    prt->papFldDes[boRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[boRecordFLNK]->offset = (unsigned short)offsetof(boRecord, flnk);
    prt->papFldDes[boRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[boRecordVAL]->offset = (unsigned short)offsetof(boRecord, val);
    prt->papFldDes[boRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[boRecordOMSL]->offset = (unsigned short)offsetof(boRecord, omsl);
    prt->papFldDes[boRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[boRecordDOL]->offset = (unsigned short)offsetof(boRecord, dol);
    prt->papFldDes[boRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[boRecordOUT]->offset = (unsigned short)offsetof(boRecord, out);
    prt->papFldDes[boRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[boRecordHIGH]->offset = (unsigned short)offsetof(boRecord, high);
    prt->papFldDes[boRecordZNAM]->size = sizeof(prec->znam);
    prt->papFldDes[boRecordZNAM]->offset = (unsigned short)offsetof(boRecord, znam);
    prt->papFldDes[boRecordONAM]->size = sizeof(prec->onam);
    prt->papFldDes[boRecordONAM]->offset = (unsigned short)offsetof(boRecord, onam);
    prt->papFldDes[boRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[boRecordRVAL]->offset = (unsigned short)offsetof(boRecord, rval);
    prt->papFldDes[boRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[boRecordORAW]->offset = (unsigned short)offsetof(boRecord, oraw);
    prt->papFldDes[boRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[boRecordMASK]->offset = (unsigned short)offsetof(boRecord, mask);
    prt->papFldDes[boRecordRPVT]->size = sizeof(prec->rpvt);
    prt->papFldDes[boRecordRPVT]->offset = (unsigned short)offsetof(boRecord, rpvt);
    prt->papFldDes[boRecordWDPT]->size = sizeof(prec->wdpt);
    prt->papFldDes[boRecordWDPT]->offset = (unsigned short)offsetof(boRecord, wdpt);
    prt->papFldDes[boRecordZSV]->size = sizeof(prec->zsv);
    prt->papFldDes[boRecordZSV]->offset = (unsigned short)offsetof(boRecord, zsv);
    prt->papFldDes[boRecordOSV]->size = sizeof(prec->osv);
    prt->papFldDes[boRecordOSV]->offset = (unsigned short)offsetof(boRecord, osv);
    prt->papFldDes[boRecordCOSV]->size = sizeof(prec->cosv);
    prt->papFldDes[boRecordCOSV]->offset = (unsigned short)offsetof(boRecord, cosv);
    prt->papFldDes[boRecordRBV]->size = sizeof(prec->rbv);
    prt->papFldDes[boRecordRBV]->offset = (unsigned short)offsetof(boRecord, rbv);
    prt->papFldDes[boRecordORBV]->size = sizeof(prec->orbv);
    prt->papFldDes[boRecordORBV]->offset = (unsigned short)offsetof(boRecord, orbv);
    prt->papFldDes[boRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[boRecordMLST]->offset = (unsigned short)offsetof(boRecord, mlst);
    prt->papFldDes[boRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[boRecordLALM]->offset = (unsigned short)offsetof(boRecord, lalm);
    prt->papFldDes[boRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[boRecordSIOL]->offset = (unsigned short)offsetof(boRecord, siol);
    prt->papFldDes[boRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[boRecordSIML]->offset = (unsigned short)offsetof(boRecord, siml);
    prt->papFldDes[boRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[boRecordSIMM]->offset = (unsigned short)offsetof(boRecord, simm);
    prt->papFldDes[boRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[boRecordSIMS]->offset = (unsigned short)offsetof(boRecord, sims);
    prt->papFldDes[boRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[boRecordOLDSIMM]->offset = (unsigned short)offsetof(boRecord, oldsimm);
    prt->papFldDes[boRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[boRecordSSCN]->offset = (unsigned short)offsetof(boRecord, sscn);
    prt->papFldDes[boRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[boRecordSDLY]->offset = (unsigned short)offsetof(boRecord, sdly);
    prt->papFldDes[boRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[boRecordSIMPVT]->offset = (unsigned short)offsetof(boRecord, simpvt);
    prt->papFldDes[boRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[boRecordIVOA]->offset = (unsigned short)offsetof(boRecord, ivoa);
    prt->papFldDes[boRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[boRecordIVOV]->offset = (unsigned short)offsetof(boRecord, ivov);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(boRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_boRecord_H */
