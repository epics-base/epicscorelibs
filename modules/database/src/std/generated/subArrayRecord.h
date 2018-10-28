/* subArrayRecord.h generated from subArrayRecord.dbd */

#ifndef INC_subArrayRecord_H
#define INC_subArrayRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"

typedef struct subArrayRecord {
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
    void *		val;                    /* Value */
    epicsInt16          prec;       /* Display Precision */
    epicsEnum16         ftvl;       /* Field Type of Value */
    DBLINK              inp;        /* Input Specification */
    char                egu[16];    /* Engineering Units */
    epicsFloat64        hopr;       /* High Operating Range */
    epicsFloat64        lopr;       /* Low Operating Range */
    epicsUInt32         malm;       /* Maximum Elements */
    epicsUInt32         nelm;       /* Number of Elements */
    epicsUInt32         indx;       /* Substring Index */
    epicsInt16          busy;       /* Busy Indicator */
    epicsInt32          nord;       /* Number elements read */
    void *		bptr;                   /* Buffer Pointer */
} subArrayRecord;

typedef enum {
	subArrayRecordNAME = 0,
	subArrayRecordDESC = 1,
	subArrayRecordASG = 2,
	subArrayRecordSCAN = 3,
	subArrayRecordPINI = 4,
	subArrayRecordPHAS = 5,
	subArrayRecordEVNT = 6,
	subArrayRecordTSE = 7,
	subArrayRecordTSEL = 8,
	subArrayRecordDTYP = 9,
	subArrayRecordDISV = 10,
	subArrayRecordDISA = 11,
	subArrayRecordSDIS = 12,
	subArrayRecordMLOK = 13,
	subArrayRecordMLIS = 14,
	subArrayRecordBKLNK = 15,
	subArrayRecordDISP = 16,
	subArrayRecordPROC = 17,
	subArrayRecordSTAT = 18,
	subArrayRecordSEVR = 19,
	subArrayRecordNSTA = 20,
	subArrayRecordNSEV = 21,
	subArrayRecordACKS = 22,
	subArrayRecordACKT = 23,
	subArrayRecordDISS = 24,
	subArrayRecordLCNT = 25,
	subArrayRecordPACT = 26,
	subArrayRecordPUTF = 27,
	subArrayRecordRPRO = 28,
	subArrayRecordASP = 29,
	subArrayRecordPPN = 30,
	subArrayRecordPPNR = 31,
	subArrayRecordSPVT = 32,
	subArrayRecordRSET = 33,
	subArrayRecordDSET = 34,
	subArrayRecordDPVT = 35,
	subArrayRecordRDES = 36,
	subArrayRecordLSET = 37,
	subArrayRecordPRIO = 38,
	subArrayRecordTPRO = 39,
	subArrayRecordBKPT = 40,
	subArrayRecordUDF = 41,
	subArrayRecordUDFS = 42,
	subArrayRecordTIME = 43,
	subArrayRecordFLNK = 44,
	subArrayRecordVAL = 45,
	subArrayRecordPREC = 46,
	subArrayRecordFTVL = 47,
	subArrayRecordINP = 48,
	subArrayRecordEGU = 49,
	subArrayRecordHOPR = 50,
	subArrayRecordLOPR = 51,
	subArrayRecordMALM = 52,
	subArrayRecordNELM = 53,
	subArrayRecordINDX = 54,
	subArrayRecordBUSY = 55,
	subArrayRecordNORD = 56,
	subArrayRecordBPTR = 57
} subArrayFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int subArrayRecordSizeOffset(dbRecordType *prt)
{
    subArrayRecord *prec = 0;

    assert(prt->no_fields == 58);
    prt->papFldDes[subArrayRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[subArrayRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[subArrayRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[subArrayRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[subArrayRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[subArrayRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[subArrayRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[subArrayRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[subArrayRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[subArrayRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[subArrayRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[subArrayRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[subArrayRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[subArrayRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[subArrayRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[subArrayRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[subArrayRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[subArrayRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[subArrayRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[subArrayRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[subArrayRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[subArrayRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[subArrayRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[subArrayRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[subArrayRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[subArrayRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[subArrayRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[subArrayRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[subArrayRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[subArrayRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[subArrayRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[subArrayRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[subArrayRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[subArrayRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[subArrayRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[subArrayRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[subArrayRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[subArrayRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[subArrayRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[subArrayRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[subArrayRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[subArrayRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[subArrayRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[subArrayRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[subArrayRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[subArrayRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[subArrayRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[subArrayRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[subArrayRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[subArrayRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[subArrayRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[subArrayRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[subArrayRecordMALM]->size = sizeof(prec->malm);
    prt->papFldDes[subArrayRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[subArrayRecordINDX]->size = sizeof(prec->indx);
    prt->papFldDes[subArrayRecordBUSY]->size = sizeof(prec->busy);
    prt->papFldDes[subArrayRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[subArrayRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[subArrayRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[subArrayRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[subArrayRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[subArrayRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[subArrayRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[subArrayRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[subArrayRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[subArrayRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[subArrayRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[subArrayRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[subArrayRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[subArrayRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[subArrayRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[subArrayRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[subArrayRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[subArrayRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[subArrayRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[subArrayRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[subArrayRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[subArrayRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[subArrayRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[subArrayRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[subArrayRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[subArrayRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[subArrayRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[subArrayRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[subArrayRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[subArrayRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[subArrayRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[subArrayRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[subArrayRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[subArrayRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[subArrayRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[subArrayRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[subArrayRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[subArrayRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[subArrayRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[subArrayRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[subArrayRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[subArrayRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[subArrayRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[subArrayRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[subArrayRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[subArrayRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[subArrayRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[subArrayRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[subArrayRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[subArrayRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[subArrayRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[subArrayRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[subArrayRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[subArrayRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[subArrayRecordMALM]->offset = (unsigned short)((char *)&prec->malm - (char *)prec);
    prt->papFldDes[subArrayRecordNELM]->offset = (unsigned short)((char *)&prec->nelm - (char *)prec);
    prt->papFldDes[subArrayRecordINDX]->offset = (unsigned short)((char *)&prec->indx - (char *)prec);
    prt->papFldDes[subArrayRecordBUSY]->offset = (unsigned short)((char *)&prec->busy - (char *)prec);
    prt->papFldDes[subArrayRecordNORD]->offset = (unsigned short)((char *)&prec->nord - (char *)prec);
    prt->papFldDes[subArrayRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(subArrayRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_subArrayRecord_H */
