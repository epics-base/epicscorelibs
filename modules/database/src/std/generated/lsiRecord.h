/* lsiRecord.h generated from lsiRecord.dbd */

#ifndef INC_lsiRecord_H
#define INC_lsiRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "devSup.h"

/* Declare Device Support Entry Table */
typedef struct lsidset {
    long number;
    DEVSUPFUN report;
    DEVSUPFUN init;
    DEVSUPFUN init_record;
    DEVSUPFUN get_ioint_info;
    DEVSUPFUN read_string;
} lsidset;

#include "callback.h"

typedef struct lsiRecord {
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
    char *val;                      /* Current Value */
    char *oval;                     /* Old Value */
    epicsUInt16         sizv;       /* Size of buffers */
    epicsUInt32         len;        /* Length of VAL */
    epicsUInt32         olen;       /* Length of OVAL */
    DBLINK              inp;        /* Input Specification */
    epicsEnum16         mpst;       /* Post Value Monitors */
    epicsEnum16         apst;       /* Post Archive Monitors */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    DBLINK              siol;       /* Simulation Input Link */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
} lsiRecord;

typedef enum {
	lsiRecordNAME = 0,
	lsiRecordDESC = 1,
	lsiRecordASG = 2,
	lsiRecordSCAN = 3,
	lsiRecordPINI = 4,
	lsiRecordPHAS = 5,
	lsiRecordEVNT = 6,
	lsiRecordTSE = 7,
	lsiRecordTSEL = 8,
	lsiRecordDTYP = 9,
	lsiRecordDISV = 10,
	lsiRecordDISA = 11,
	lsiRecordSDIS = 12,
	lsiRecordMLOK = 13,
	lsiRecordMLIS = 14,
	lsiRecordBKLNK = 15,
	lsiRecordDISP = 16,
	lsiRecordPROC = 17,
	lsiRecordSTAT = 18,
	lsiRecordSEVR = 19,
	lsiRecordNSTA = 20,
	lsiRecordNSEV = 21,
	lsiRecordACKS = 22,
	lsiRecordACKT = 23,
	lsiRecordDISS = 24,
	lsiRecordLCNT = 25,
	lsiRecordPACT = 26,
	lsiRecordPUTF = 27,
	lsiRecordRPRO = 28,
	lsiRecordASP = 29,
	lsiRecordPPN = 30,
	lsiRecordPPNR = 31,
	lsiRecordSPVT = 32,
	lsiRecordRSET = 33,
	lsiRecordDSET = 34,
	lsiRecordDPVT = 35,
	lsiRecordRDES = 36,
	lsiRecordLSET = 37,
	lsiRecordPRIO = 38,
	lsiRecordTPRO = 39,
	lsiRecordBKPT = 40,
	lsiRecordUDF = 41,
	lsiRecordUDFS = 42,
	lsiRecordTIME = 43,
	lsiRecordFLNK = 44,
	lsiRecordVAL = 45,
	lsiRecordOVAL = 46,
	lsiRecordSIZV = 47,
	lsiRecordLEN = 48,
	lsiRecordOLEN = 49,
	lsiRecordINP = 50,
	lsiRecordMPST = 51,
	lsiRecordAPST = 52,
	lsiRecordSIML = 53,
	lsiRecordSIMM = 54,
	lsiRecordSIMS = 55,
	lsiRecordSIOL = 56,
	lsiRecordOLDSIMM = 57,
	lsiRecordSSCN = 58,
	lsiRecordSDLY = 59,
	lsiRecordSIMPVT = 60
} lsiFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int lsiRecordSizeOffset(dbRecordType *prt)
{
    lsiRecord *prec = 0;

    assert(prt->no_fields == 61);
    prt->papFldDes[lsiRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[lsiRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[lsiRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[lsiRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[lsiRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[lsiRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[lsiRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[lsiRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[lsiRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[lsiRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[lsiRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[lsiRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[lsiRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[lsiRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[lsiRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[lsiRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[lsiRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[lsiRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[lsiRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[lsiRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[lsiRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[lsiRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[lsiRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[lsiRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[lsiRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[lsiRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[lsiRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[lsiRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[lsiRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[lsiRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[lsiRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[lsiRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[lsiRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[lsiRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[lsiRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[lsiRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[lsiRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[lsiRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[lsiRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[lsiRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[lsiRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[lsiRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[lsiRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[lsiRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[lsiRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[lsiRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[lsiRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[lsiRecordSIZV]->size = sizeof(prec->sizv);
    prt->papFldDes[lsiRecordLEN]->size = sizeof(prec->len);
    prt->papFldDes[lsiRecordOLEN]->size = sizeof(prec->olen);
    prt->papFldDes[lsiRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[lsiRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[lsiRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[lsiRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[lsiRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[lsiRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[lsiRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[lsiRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[lsiRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[lsiRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[lsiRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[lsiRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[lsiRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[lsiRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[lsiRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[lsiRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[lsiRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[lsiRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[lsiRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[lsiRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[lsiRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[lsiRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[lsiRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[lsiRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[lsiRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[lsiRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[lsiRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[lsiRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[lsiRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[lsiRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[lsiRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[lsiRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[lsiRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[lsiRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[lsiRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[lsiRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[lsiRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[lsiRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[lsiRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[lsiRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[lsiRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[lsiRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[lsiRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[lsiRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[lsiRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[lsiRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[lsiRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[lsiRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[lsiRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[lsiRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[lsiRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[lsiRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[lsiRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[lsiRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[lsiRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[lsiRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[lsiRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[lsiRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[lsiRecordSIZV]->offset = (unsigned short)((char *)&prec->sizv - (char *)prec);
    prt->papFldDes[lsiRecordLEN]->offset = (unsigned short)((char *)&prec->len - (char *)prec);
    prt->papFldDes[lsiRecordOLEN]->offset = (unsigned short)((char *)&prec->olen - (char *)prec);
    prt->papFldDes[lsiRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[lsiRecordMPST]->offset = (unsigned short)((char *)&prec->mpst - (char *)prec);
    prt->papFldDes[lsiRecordAPST]->offset = (unsigned short)((char *)&prec->apst - (char *)prec);
    prt->papFldDes[lsiRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[lsiRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[lsiRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[lsiRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[lsiRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[lsiRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[lsiRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[lsiRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(lsiRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_lsiRecord_H */
