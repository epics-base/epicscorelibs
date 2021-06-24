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
    DBLINK              dol;        /**< @brief Desired Output Loc */
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
    prt->papFldDes[boRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[boRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[boRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[boRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[boRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[boRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[boRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[boRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[boRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[boRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[boRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[boRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[boRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[boRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[boRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[boRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[boRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[boRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[boRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[boRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[boRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[boRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[boRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[boRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[boRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[boRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[boRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[boRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[boRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[boRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[boRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[boRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[boRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[boRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[boRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[boRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[boRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[boRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[boRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[boRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[boRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[boRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[boRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[boRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[boRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[boRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[boRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[boRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[boRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[boRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[boRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[boRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[boRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[boRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[boRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[boRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[boRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[boRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[boRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[boRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[boRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[boRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[boRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[boRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[boRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[boRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[boRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[boRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[boRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[boRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[boRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[boRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[boRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[boRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[boRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[boRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[boRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[boRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[boRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[boRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[boRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[boRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[boRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[boRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[boRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[boRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[boRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[boRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[boRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[boRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[boRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[boRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[boRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[boRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[boRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[boRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[boRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[boRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[boRecordOMSL]->offset = (unsigned short)((char *)&prec->omsl - (char *)prec);
    prt->papFldDes[boRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[boRecordDOL]->offset = (unsigned short)((char *)&prec->dol - (char *)prec);
    prt->papFldDes[boRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[boRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[boRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[boRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[boRecordZNAM]->size = sizeof(prec->znam);
    prt->papFldDes[boRecordZNAM]->offset = (unsigned short)((char *)&prec->znam - (char *)prec);
    prt->papFldDes[boRecordONAM]->size = sizeof(prec->onam);
    prt->papFldDes[boRecordONAM]->offset = (unsigned short)((char *)&prec->onam - (char *)prec);
    prt->papFldDes[boRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[boRecordRVAL]->offset = (unsigned short)((char *)&prec->rval - (char *)prec);
    prt->papFldDes[boRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[boRecordORAW]->offset = (unsigned short)((char *)&prec->oraw - (char *)prec);
    prt->papFldDes[boRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[boRecordMASK]->offset = (unsigned short)((char *)&prec->mask - (char *)prec);
    prt->papFldDes[boRecordRPVT]->size = sizeof(prec->rpvt);
    prt->papFldDes[boRecordRPVT]->offset = (unsigned short)((char *)&prec->rpvt - (char *)prec);
    prt->papFldDes[boRecordWDPT]->size = sizeof(prec->wdpt);
    prt->papFldDes[boRecordWDPT]->offset = (unsigned short)((char *)&prec->wdpt - (char *)prec);
    prt->papFldDes[boRecordZSV]->size = sizeof(prec->zsv);
    prt->papFldDes[boRecordZSV]->offset = (unsigned short)((char *)&prec->zsv - (char *)prec);
    prt->papFldDes[boRecordOSV]->size = sizeof(prec->osv);
    prt->papFldDes[boRecordOSV]->offset = (unsigned short)((char *)&prec->osv - (char *)prec);
    prt->papFldDes[boRecordCOSV]->size = sizeof(prec->cosv);
    prt->papFldDes[boRecordCOSV]->offset = (unsigned short)((char *)&prec->cosv - (char *)prec);
    prt->papFldDes[boRecordRBV]->size = sizeof(prec->rbv);
    prt->papFldDes[boRecordRBV]->offset = (unsigned short)((char *)&prec->rbv - (char *)prec);
    prt->papFldDes[boRecordORBV]->size = sizeof(prec->orbv);
    prt->papFldDes[boRecordORBV]->offset = (unsigned short)((char *)&prec->orbv - (char *)prec);
    prt->papFldDes[boRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[boRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[boRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[boRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[boRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[boRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[boRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[boRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[boRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[boRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[boRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[boRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[boRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[boRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[boRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[boRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[boRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[boRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[boRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[boRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[boRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[boRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[boRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[boRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(boRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_boRecord_H */
