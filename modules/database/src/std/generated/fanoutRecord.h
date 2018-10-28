/* fanoutRecord.h generated from fanoutRecord.dbd */

#ifndef INC_fanoutRecord_H
#define INC_fanoutRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"

typedef enum {
    fanoutSELM_All                  /* All */,
    fanoutSELM_Specified            /* Specified */,
    fanoutSELM_Mask                 /* Mask */
} fanoutSELM;
#define fanoutSELM_NUM_CHOICES 3

typedef struct fanoutRecord {
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
    epicsInt32          val;        /* Used to trigger */
    epicsEnum16         selm;       /* Select Mechanism */
    epicsUInt16         seln;       /* Link Selection */
    DBLINK              sell;       /* Link Selection Loc */
    epicsInt16          offs;       /* Offset for Specified */
    epicsInt16          shft;       /* Shift for Mask mode */
    DBLINK              lnk0;       /* Forward Link 0 */
    DBLINK              lnk1;       /* Forward Link 1 */
    DBLINK              lnk2;       /* Forward Link 2 */
    DBLINK              lnk3;       /* Forward Link 3 */
    DBLINK              lnk4;       /* Forward Link 4 */
    DBLINK              lnk5;       /* Forward Link 5 */
    DBLINK              lnk6;       /* Forward Link 6 */
    DBLINK              lnk7;       /* Forward Link 7 */
    DBLINK              lnk8;       /* Forward Link 8 */
    DBLINK              lnk9;       /* Forward Link 9 */
    DBLINK              lnka;       /* Forward Link 10 */
    DBLINK              lnkb;       /* Forward Link 11 */
    DBLINK              lnkc;       /* Forward Link 12 */
    DBLINK              lnkd;       /* Forward Link 13 */
    DBLINK              lnke;       /* Forward Link 14 */
    DBLINK              lnkf;       /* Forward Link 15 */
} fanoutRecord;

typedef enum {
	fanoutRecordNAME = 0,
	fanoutRecordDESC = 1,
	fanoutRecordASG = 2,
	fanoutRecordSCAN = 3,
	fanoutRecordPINI = 4,
	fanoutRecordPHAS = 5,
	fanoutRecordEVNT = 6,
	fanoutRecordTSE = 7,
	fanoutRecordTSEL = 8,
	fanoutRecordDTYP = 9,
	fanoutRecordDISV = 10,
	fanoutRecordDISA = 11,
	fanoutRecordSDIS = 12,
	fanoutRecordMLOK = 13,
	fanoutRecordMLIS = 14,
	fanoutRecordBKLNK = 15,
	fanoutRecordDISP = 16,
	fanoutRecordPROC = 17,
	fanoutRecordSTAT = 18,
	fanoutRecordSEVR = 19,
	fanoutRecordNSTA = 20,
	fanoutRecordNSEV = 21,
	fanoutRecordACKS = 22,
	fanoutRecordACKT = 23,
	fanoutRecordDISS = 24,
	fanoutRecordLCNT = 25,
	fanoutRecordPACT = 26,
	fanoutRecordPUTF = 27,
	fanoutRecordRPRO = 28,
	fanoutRecordASP = 29,
	fanoutRecordPPN = 30,
	fanoutRecordPPNR = 31,
	fanoutRecordSPVT = 32,
	fanoutRecordRSET = 33,
	fanoutRecordDSET = 34,
	fanoutRecordDPVT = 35,
	fanoutRecordRDES = 36,
	fanoutRecordLSET = 37,
	fanoutRecordPRIO = 38,
	fanoutRecordTPRO = 39,
	fanoutRecordBKPT = 40,
	fanoutRecordUDF = 41,
	fanoutRecordUDFS = 42,
	fanoutRecordTIME = 43,
	fanoutRecordFLNK = 44,
	fanoutRecordVAL = 45,
	fanoutRecordSELM = 46,
	fanoutRecordSELN = 47,
	fanoutRecordSELL = 48,
	fanoutRecordOFFS = 49,
	fanoutRecordSHFT = 50,
	fanoutRecordLNK0 = 51,
	fanoutRecordLNK1 = 52,
	fanoutRecordLNK2 = 53,
	fanoutRecordLNK3 = 54,
	fanoutRecordLNK4 = 55,
	fanoutRecordLNK5 = 56,
	fanoutRecordLNK6 = 57,
	fanoutRecordLNK7 = 58,
	fanoutRecordLNK8 = 59,
	fanoutRecordLNK9 = 60,
	fanoutRecordLNKA = 61,
	fanoutRecordLNKB = 62,
	fanoutRecordLNKC = 63,
	fanoutRecordLNKD = 64,
	fanoutRecordLNKE = 65,
	fanoutRecordLNKF = 66
} fanoutFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int fanoutRecordSizeOffset(dbRecordType *prt)
{
    fanoutRecord *prec = 0;

    assert(prt->no_fields == 67);
    prt->papFldDes[fanoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[fanoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[fanoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[fanoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[fanoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[fanoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[fanoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[fanoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[fanoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[fanoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[fanoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[fanoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[fanoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[fanoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[fanoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[fanoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[fanoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[fanoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[fanoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[fanoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[fanoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[fanoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[fanoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[fanoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[fanoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[fanoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[fanoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[fanoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[fanoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[fanoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[fanoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[fanoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[fanoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[fanoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[fanoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[fanoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[fanoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[fanoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[fanoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[fanoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[fanoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[fanoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[fanoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[fanoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[fanoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[fanoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[fanoutRecordSELM]->size = sizeof(prec->selm);
    prt->papFldDes[fanoutRecordSELN]->size = sizeof(prec->seln);
    prt->papFldDes[fanoutRecordSELL]->size = sizeof(prec->sell);
    prt->papFldDes[fanoutRecordOFFS]->size = sizeof(prec->offs);
    prt->papFldDes[fanoutRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[fanoutRecordLNK0]->size = sizeof(prec->lnk0);
    prt->papFldDes[fanoutRecordLNK1]->size = sizeof(prec->lnk1);
    prt->papFldDes[fanoutRecordLNK2]->size = sizeof(prec->lnk2);
    prt->papFldDes[fanoutRecordLNK3]->size = sizeof(prec->lnk3);
    prt->papFldDes[fanoutRecordLNK4]->size = sizeof(prec->lnk4);
    prt->papFldDes[fanoutRecordLNK5]->size = sizeof(prec->lnk5);
    prt->papFldDes[fanoutRecordLNK6]->size = sizeof(prec->lnk6);
    prt->papFldDes[fanoutRecordLNK7]->size = sizeof(prec->lnk7);
    prt->papFldDes[fanoutRecordLNK8]->size = sizeof(prec->lnk8);
    prt->papFldDes[fanoutRecordLNK9]->size = sizeof(prec->lnk9);
    prt->papFldDes[fanoutRecordLNKA]->size = sizeof(prec->lnka);
    prt->papFldDes[fanoutRecordLNKB]->size = sizeof(prec->lnkb);
    prt->papFldDes[fanoutRecordLNKC]->size = sizeof(prec->lnkc);
    prt->papFldDes[fanoutRecordLNKD]->size = sizeof(prec->lnkd);
    prt->papFldDes[fanoutRecordLNKE]->size = sizeof(prec->lnke);
    prt->papFldDes[fanoutRecordLNKF]->size = sizeof(prec->lnkf);
    prt->papFldDes[fanoutRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[fanoutRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[fanoutRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[fanoutRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[fanoutRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[fanoutRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[fanoutRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[fanoutRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[fanoutRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[fanoutRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[fanoutRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[fanoutRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[fanoutRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[fanoutRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[fanoutRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[fanoutRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[fanoutRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[fanoutRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[fanoutRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[fanoutRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[fanoutRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[fanoutRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[fanoutRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[fanoutRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[fanoutRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[fanoutRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[fanoutRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[fanoutRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[fanoutRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[fanoutRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[fanoutRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[fanoutRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[fanoutRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[fanoutRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[fanoutRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[fanoutRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[fanoutRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[fanoutRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[fanoutRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[fanoutRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[fanoutRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[fanoutRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[fanoutRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[fanoutRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[fanoutRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[fanoutRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[fanoutRecordSELM]->offset = (unsigned short)((char *)&prec->selm - (char *)prec);
    prt->papFldDes[fanoutRecordSELN]->offset = (unsigned short)((char *)&prec->seln - (char *)prec);
    prt->papFldDes[fanoutRecordSELL]->offset = (unsigned short)((char *)&prec->sell - (char *)prec);
    prt->papFldDes[fanoutRecordOFFS]->offset = (unsigned short)((char *)&prec->offs - (char *)prec);
    prt->papFldDes[fanoutRecordSHFT]->offset = (unsigned short)((char *)&prec->shft - (char *)prec);
    prt->papFldDes[fanoutRecordLNK0]->offset = (unsigned short)((char *)&prec->lnk0 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK1]->offset = (unsigned short)((char *)&prec->lnk1 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK2]->offset = (unsigned short)((char *)&prec->lnk2 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK3]->offset = (unsigned short)((char *)&prec->lnk3 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK4]->offset = (unsigned short)((char *)&prec->lnk4 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK5]->offset = (unsigned short)((char *)&prec->lnk5 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK6]->offset = (unsigned short)((char *)&prec->lnk6 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK7]->offset = (unsigned short)((char *)&prec->lnk7 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK8]->offset = (unsigned short)((char *)&prec->lnk8 - (char *)prec);
    prt->papFldDes[fanoutRecordLNK9]->offset = (unsigned short)((char *)&prec->lnk9 - (char *)prec);
    prt->papFldDes[fanoutRecordLNKA]->offset = (unsigned short)((char *)&prec->lnka - (char *)prec);
    prt->papFldDes[fanoutRecordLNKB]->offset = (unsigned short)((char *)&prec->lnkb - (char *)prec);
    prt->papFldDes[fanoutRecordLNKC]->offset = (unsigned short)((char *)&prec->lnkc - (char *)prec);
    prt->papFldDes[fanoutRecordLNKD]->offset = (unsigned short)((char *)&prec->lnkd - (char *)prec);
    prt->papFldDes[fanoutRecordLNKE]->offset = (unsigned short)((char *)&prec->lnke - (char *)prec);
    prt->papFldDes[fanoutRecordLNKF]->offset = (unsigned short)((char *)&prec->lnkf - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(fanoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_fanoutRecord_H */
