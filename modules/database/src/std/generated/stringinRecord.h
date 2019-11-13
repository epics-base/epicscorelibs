/* stringinRecord.h generated from stringinRecord.dbd */

#ifndef INC_stringinRecord_H
#define INC_stringinRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

#ifndef stringinPOST_NUM_CHOICES
typedef enum {
    stringinPOST_OnChange           /* On Change */,
    stringinPOST_Always             /* Always */
} stringinPOST;
#define stringinPOST_NUM_CHOICES 2
#endif

typedef struct stringinRecord {
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
    char                val[40];    /* Current Value */
    char                oval[40];   /* Previous Value */
    DBLINK              inp;        /* Input Specification */
    epicsEnum16         mpst;       /* Post Value Monitors */
    epicsEnum16         apst;       /* Post Archive Monitors */
    DBLINK              siol;       /* Simulation Input Link */
    char                sval[40];   /* Simulation Value */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
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
	stringinRecordNSTA = 20,
	stringinRecordNSEV = 21,
	stringinRecordACKS = 22,
	stringinRecordACKT = 23,
	stringinRecordDISS = 24,
	stringinRecordLCNT = 25,
	stringinRecordPACT = 26,
	stringinRecordPUTF = 27,
	stringinRecordRPRO = 28,
	stringinRecordASP = 29,
	stringinRecordPPN = 30,
	stringinRecordPPNR = 31,
	stringinRecordSPVT = 32,
	stringinRecordRSET = 33,
	stringinRecordDSET = 34,
	stringinRecordDPVT = 35,
	stringinRecordRDES = 36,
	stringinRecordLSET = 37,
	stringinRecordPRIO = 38,
	stringinRecordTPRO = 39,
	stringinRecordBKPT = 40,
	stringinRecordUDF = 41,
	stringinRecordUDFS = 42,
	stringinRecordTIME = 43,
	stringinRecordFLNK = 44,
	stringinRecordVAL = 45,
	stringinRecordOVAL = 46,
	stringinRecordINP = 47,
	stringinRecordMPST = 48,
	stringinRecordAPST = 49,
	stringinRecordSIOL = 50,
	stringinRecordSVAL = 51,
	stringinRecordSIML = 52,
	stringinRecordSIMM = 53,
	stringinRecordSIMS = 54,
	stringinRecordOLDSIMM = 55,
	stringinRecordSSCN = 56,
	stringinRecordSDLY = 57,
	stringinRecordSIMPVT = 58
} stringinFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int stringinRecordSizeOffset(dbRecordType *prt)
{
    stringinRecord *prec = 0;

    assert(prt->no_fields == 59);
    prt->papFldDes[stringinRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[stringinRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[stringinRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[stringinRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[stringinRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[stringinRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[stringinRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[stringinRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[stringinRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[stringinRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[stringinRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[stringinRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[stringinRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[stringinRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[stringinRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[stringinRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[stringinRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[stringinRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[stringinRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[stringinRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[stringinRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[stringinRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[stringinRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[stringinRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[stringinRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[stringinRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[stringinRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[stringinRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[stringinRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[stringinRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[stringinRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[stringinRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[stringinRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[stringinRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[stringinRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[stringinRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[stringinRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[stringinRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[stringinRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[stringinRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[stringinRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[stringinRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[stringinRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[stringinRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[stringinRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[stringinRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[stringinRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[stringinRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[stringinRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[stringinRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[stringinRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[stringinRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[stringinRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[stringinRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[stringinRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[stringinRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[stringinRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[stringinRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[stringinRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[stringinRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[stringinRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[stringinRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[stringinRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[stringinRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[stringinRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[stringinRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[stringinRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[stringinRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[stringinRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[stringinRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[stringinRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[stringinRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[stringinRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[stringinRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[stringinRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[stringinRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[stringinRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[stringinRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[stringinRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[stringinRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[stringinRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[stringinRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[stringinRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[stringinRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[stringinRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[stringinRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[stringinRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[stringinRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[stringinRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[stringinRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[stringinRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[stringinRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[stringinRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[stringinRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[stringinRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[stringinRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[stringinRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[stringinRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[stringinRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[stringinRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[stringinRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[stringinRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[stringinRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[stringinRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[stringinRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[stringinRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[stringinRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[stringinRecordMPST]->offset = (unsigned short)((char *)&prec->mpst - (char *)prec);
    prt->papFldDes[stringinRecordAPST]->offset = (unsigned short)((char *)&prec->apst - (char *)prec);
    prt->papFldDes[stringinRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[stringinRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[stringinRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[stringinRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[stringinRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[stringinRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[stringinRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[stringinRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
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
