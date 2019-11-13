/* biRecord.h generated from biRecord.dbd */

#ifndef INC_biRecord_H
#define INC_biRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

typedef struct biRecord {
    char                name[61];   /* Record Name */
    char                desc[41];   /* Descriptor */
    char                asg[29];    /* Access Security Group */
    epicsEnum16         scan;       /* Scan Mechanism */
    epicsEnum16         pini;       /* Process at iocInit */
    epicsInt16          phas;       /* Scan Phase */
    char                evnt[40];   /* Event Name */
    epicsInt16          tse;        /* Time Stamp Event */
    DBLINK              tsel;       /* Time Stamp Link */
    epicsEnum16         dtyp;       /* Device Type */
    epicsInt16          disv;       /* Disable Value */
    epicsInt16          disa;       /* Disable */
    DBLINK              sdis;       /* Scanning Disable */
    epicsMutexId        mlok;       /* Monitor lock */
    ELLLIST             mlis;       /* Monitor List */
    ELLLIST             bklnk;      /* Backwards link tracking */
    epicsUInt8          disp;       /* Disable putField */
    epicsUInt8          proc;       /* Force Processing */
    epicsEnum16         stat;       /* Alarm Status */
    epicsEnum16         sevr;       /* Alarm Severity */
    epicsEnum16         nsta;       /* New Alarm Status */
    epicsEnum16         nsev;       /* New Alarm Severity */
    epicsEnum16         acks;       /* Alarm Ack Severity */
    epicsEnum16         ackt;       /* Alarm Ack Transient */
    epicsEnum16         diss;       /* Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /* Lock Count */
    epicsUInt8          pact;       /* Record active */
    epicsUInt8          putf;       /* dbPutField process */
    epicsUInt8          rpro;       /* Reprocess  */
    struct asgMember    *asp;       /* Access Security Pvt */
    struct processNotify *ppn;      /* pprocessNotify */
    struct processNotifyRecord *ppnr; /* pprocessNotifyRecord */
    struct scan_element *spvt;      /* Scan Private */
    struct typed_rset   *rset;      /* Address of RSET */
    struct dset         *dset;      /* DSET address */
    void                *dpvt;      /* Device Private */
    struct dbRecordType *rdes;      /* Address of dbRecordType */
    struct lockRecord   *lset;      /* Lock Set */
    epicsEnum16         prio;       /* Scheduling Priority */
    epicsUInt8          tpro;       /* Trace Processing */
    char                bkpt;       /* Break Point */
    epicsUInt8          udf;        /* Undefined */
    epicsEnum16         udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /* Time */
    DBLINK              flnk;       /* Forward Process Link */
    DBLINK              inp;        /* Input Specification */
    epicsEnum16         val;        /* Current Value */
    epicsEnum16         zsv;        /* Zero Error Severity */
    epicsEnum16         osv;        /* One Error Severity */
    epicsEnum16         cosv;       /* Change of State Svr */
    char                znam[26];   /* Zero Name */
    char                onam[26];   /* One Name */
    epicsUInt32         rval;       /* Raw Value */
    epicsUInt32         oraw;       /* prev Raw Value */
    epicsUInt32         mask;       /* Hardware Mask */
    epicsUInt16         lalm;       /* Last Value Alarmed */
    epicsUInt16         mlst;       /* Last Value Monitored */
    DBLINK              siol;       /* Simulation Input Link */
    epicsUInt32         sval;       /* Simulation Value */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
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
	biRecordNSTA = 20,
	biRecordNSEV = 21,
	biRecordACKS = 22,
	biRecordACKT = 23,
	biRecordDISS = 24,
	biRecordLCNT = 25,
	biRecordPACT = 26,
	biRecordPUTF = 27,
	biRecordRPRO = 28,
	biRecordASP = 29,
	biRecordPPN = 30,
	biRecordPPNR = 31,
	biRecordSPVT = 32,
	biRecordRSET = 33,
	biRecordDSET = 34,
	biRecordDPVT = 35,
	biRecordRDES = 36,
	biRecordLSET = 37,
	biRecordPRIO = 38,
	biRecordTPRO = 39,
	biRecordBKPT = 40,
	biRecordUDF = 41,
	biRecordUDFS = 42,
	biRecordTIME = 43,
	biRecordFLNK = 44,
	biRecordINP = 45,
	biRecordVAL = 46,
	biRecordZSV = 47,
	biRecordOSV = 48,
	biRecordCOSV = 49,
	biRecordZNAM = 50,
	biRecordONAM = 51,
	biRecordRVAL = 52,
	biRecordORAW = 53,
	biRecordMASK = 54,
	biRecordLALM = 55,
	biRecordMLST = 56,
	biRecordSIOL = 57,
	biRecordSVAL = 58,
	biRecordSIML = 59,
	biRecordSIMM = 60,
	biRecordSIMS = 61,
	biRecordOLDSIMM = 62,
	biRecordSSCN = 63,
	biRecordSDLY = 64,
	biRecordSIMPVT = 65
} biFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int biRecordSizeOffset(dbRecordType *prt)
{
    biRecord *prec = 0;

    assert(prt->no_fields == 66);
    prt->papFldDes[biRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[biRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[biRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[biRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[biRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[biRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[biRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[biRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[biRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[biRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[biRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[biRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[biRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[biRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[biRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[biRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[biRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[biRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[biRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[biRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[biRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[biRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[biRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[biRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[biRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[biRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[biRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[biRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[biRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[biRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[biRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[biRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[biRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[biRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[biRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[biRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[biRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[biRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[biRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[biRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[biRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[biRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[biRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[biRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[biRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[biRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[biRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[biRecordZSV]->size = sizeof(prec->zsv);
    prt->papFldDes[biRecordOSV]->size = sizeof(prec->osv);
    prt->papFldDes[biRecordCOSV]->size = sizeof(prec->cosv);
    prt->papFldDes[biRecordZNAM]->size = sizeof(prec->znam);
    prt->papFldDes[biRecordONAM]->size = sizeof(prec->onam);
    prt->papFldDes[biRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[biRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[biRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[biRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[biRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[biRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[biRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[biRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[biRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[biRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[biRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[biRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[biRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[biRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[biRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[biRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[biRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[biRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[biRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[biRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[biRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[biRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[biRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[biRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[biRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[biRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[biRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[biRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[biRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[biRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[biRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[biRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[biRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[biRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[biRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[biRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[biRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[biRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[biRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[biRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[biRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[biRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[biRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[biRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[biRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[biRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[biRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[biRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[biRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[biRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[biRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[biRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[biRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[biRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[biRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[biRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[biRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[biRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[biRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[biRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[biRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[biRecordZSV]->offset = (unsigned short)((char *)&prec->zsv - (char *)prec);
    prt->papFldDes[biRecordOSV]->offset = (unsigned short)((char *)&prec->osv - (char *)prec);
    prt->papFldDes[biRecordCOSV]->offset = (unsigned short)((char *)&prec->cosv - (char *)prec);
    prt->papFldDes[biRecordZNAM]->offset = (unsigned short)((char *)&prec->znam - (char *)prec);
    prt->papFldDes[biRecordONAM]->offset = (unsigned short)((char *)&prec->onam - (char *)prec);
    prt->papFldDes[biRecordRVAL]->offset = (unsigned short)((char *)&prec->rval - (char *)prec);
    prt->papFldDes[biRecordORAW]->offset = (unsigned short)((char *)&prec->oraw - (char *)prec);
    prt->papFldDes[biRecordMASK]->offset = (unsigned short)((char *)&prec->mask - (char *)prec);
    prt->papFldDes[biRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[biRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[biRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[biRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[biRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[biRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[biRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[biRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[biRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[biRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[biRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(biRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_biRecord_H */
