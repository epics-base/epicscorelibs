/* aaoRecord.h generated from aaoRecord.dbd */

#ifndef INC_aaoRecord_H
#define INC_aaoRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

#ifndef aaoPOST_NUM_CHOICES
typedef enum {
    aaoPOST_Always                  /* Always */,
    aaoPOST_OnChange                /* On Change */
} aaoPOST;
#define aaoPOST_NUM_CHOICES 2
#endif

typedef struct aaoRecord {
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
    DBLINK              out;        /* Output Specification */
    char                egu[16];    /* Engineering Units */
    epicsFloat64        hopr;       /* High Operating Range */
    epicsFloat64        lopr;       /* Low Operating Range */
    epicsUInt32         nelm;       /* Number of Elements */
    epicsEnum16         ftvl;       /* Field Type of Value */
    epicsUInt32         nord;       /* Number elements read */
    void *		bptr;                   /* Buffer Pointer */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    DBLINK              siol;       /* Simulation Output Link */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
    epicsEnum16         mpst;       /* Post Value Monitors */
    epicsEnum16         apst;       /* Post Archive Monitors */
    epicsUInt32         hash;       /* Hash of OnChange data. */
} aaoRecord;

typedef enum {
	aaoRecordNAME = 0,
	aaoRecordDESC = 1,
	aaoRecordASG = 2,
	aaoRecordSCAN = 3,
	aaoRecordPINI = 4,
	aaoRecordPHAS = 5,
	aaoRecordEVNT = 6,
	aaoRecordTSE = 7,
	aaoRecordTSEL = 8,
	aaoRecordDTYP = 9,
	aaoRecordDISV = 10,
	aaoRecordDISA = 11,
	aaoRecordSDIS = 12,
	aaoRecordMLOK = 13,
	aaoRecordMLIS = 14,
	aaoRecordBKLNK = 15,
	aaoRecordDISP = 16,
	aaoRecordPROC = 17,
	aaoRecordSTAT = 18,
	aaoRecordSEVR = 19,
	aaoRecordNSTA = 20,
	aaoRecordNSEV = 21,
	aaoRecordACKS = 22,
	aaoRecordACKT = 23,
	aaoRecordDISS = 24,
	aaoRecordLCNT = 25,
	aaoRecordPACT = 26,
	aaoRecordPUTF = 27,
	aaoRecordRPRO = 28,
	aaoRecordASP = 29,
	aaoRecordPPN = 30,
	aaoRecordPPNR = 31,
	aaoRecordSPVT = 32,
	aaoRecordRSET = 33,
	aaoRecordDSET = 34,
	aaoRecordDPVT = 35,
	aaoRecordRDES = 36,
	aaoRecordLSET = 37,
	aaoRecordPRIO = 38,
	aaoRecordTPRO = 39,
	aaoRecordBKPT = 40,
	aaoRecordUDF = 41,
	aaoRecordUDFS = 42,
	aaoRecordTIME = 43,
	aaoRecordFLNK = 44,
	aaoRecordVAL = 45,
	aaoRecordPREC = 46,
	aaoRecordOUT = 47,
	aaoRecordEGU = 48,
	aaoRecordHOPR = 49,
	aaoRecordLOPR = 50,
	aaoRecordNELM = 51,
	aaoRecordFTVL = 52,
	aaoRecordNORD = 53,
	aaoRecordBPTR = 54,
	aaoRecordSIML = 55,
	aaoRecordSIMM = 56,
	aaoRecordSIMS = 57,
	aaoRecordSIOL = 58,
	aaoRecordOLDSIMM = 59,
	aaoRecordSSCN = 60,
	aaoRecordSDLY = 61,
	aaoRecordSIMPVT = 62,
	aaoRecordMPST = 63,
	aaoRecordAPST = 64,
	aaoRecordHASH = 65
} aaoFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int aaoRecordSizeOffset(dbRecordType *prt)
{
    aaoRecord *prec = 0;

    assert(prt->no_fields == 66);
    prt->papFldDes[aaoRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aaoRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aaoRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aaoRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aaoRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aaoRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aaoRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aaoRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aaoRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aaoRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aaoRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aaoRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aaoRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aaoRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aaoRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aaoRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aaoRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aaoRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aaoRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aaoRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aaoRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aaoRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aaoRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aaoRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aaoRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aaoRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aaoRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aaoRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aaoRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aaoRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aaoRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aaoRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aaoRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aaoRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aaoRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aaoRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aaoRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aaoRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aaoRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aaoRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aaoRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aaoRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aaoRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aaoRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aaoRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aaoRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aaoRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aaoRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[aaoRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[aaoRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[aaoRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[aaoRecordNELM]->size = sizeof(prec->nelm);
    prt->papFldDes[aaoRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[aaoRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[aaoRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[aaoRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[aaoRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[aaoRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[aaoRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[aaoRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[aaoRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[aaoRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[aaoRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[aaoRecordMPST]->size = sizeof(prec->mpst);
    prt->papFldDes[aaoRecordAPST]->size = sizeof(prec->apst);
    prt->papFldDes[aaoRecordHASH]->size = sizeof(prec->hash);
    prt->papFldDes[aaoRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[aaoRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[aaoRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[aaoRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[aaoRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[aaoRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[aaoRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[aaoRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[aaoRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[aaoRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[aaoRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[aaoRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[aaoRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[aaoRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[aaoRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[aaoRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[aaoRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[aaoRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[aaoRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[aaoRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[aaoRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[aaoRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[aaoRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[aaoRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[aaoRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[aaoRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[aaoRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[aaoRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[aaoRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[aaoRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[aaoRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[aaoRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[aaoRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[aaoRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[aaoRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[aaoRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[aaoRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[aaoRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[aaoRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[aaoRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[aaoRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[aaoRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[aaoRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[aaoRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[aaoRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[aaoRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[aaoRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[aaoRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[aaoRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[aaoRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[aaoRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[aaoRecordNELM]->offset = (unsigned short)((char *)&prec->nelm - (char *)prec);
    prt->papFldDes[aaoRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[aaoRecordNORD]->offset = (unsigned short)((char *)&prec->nord - (char *)prec);
    prt->papFldDes[aaoRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->papFldDes[aaoRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[aaoRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[aaoRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[aaoRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[aaoRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[aaoRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[aaoRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[aaoRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[aaoRecordMPST]->offset = (unsigned short)((char *)&prec->mpst - (char *)prec);
    prt->papFldDes[aaoRecordAPST]->offset = (unsigned short)((char *)&prec->apst - (char *)prec);
    prt->papFldDes[aaoRecordHASH]->offset = (unsigned short)((char *)&prec->hash - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aaoRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aaoRecord_H */
