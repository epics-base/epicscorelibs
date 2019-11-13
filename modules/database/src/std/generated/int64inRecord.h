/* int64inRecord.h generated from int64inRecord.dbd */

#ifndef INC_int64inRecord_H
#define INC_int64inRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

typedef struct int64inRecord {
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
    epicsInt64          val;        /* Current value */
    DBLINK              inp;        /* Input Specification */
    char                egu[16];    /* Units name */
    epicsInt64          hopr;       /* High Operating Range */
    epicsInt64          lopr;       /* Low Operating Range */
    epicsInt64          hihi;       /* Hihi Alarm Limit */
    epicsInt64          lolo;       /* Lolo Alarm Limit */
    epicsInt64          high;       /* High Alarm Limit */
    epicsInt64          low;        /* Low Alarm Limit */
    epicsEnum16         hhsv;       /* Hihi Severity */
    epicsEnum16         llsv;       /* Lolo Severity */
    epicsEnum16         hsv;        /* High Severity */
    epicsEnum16         lsv;        /* Low Severity */
    epicsInt64          hyst;       /* Alarm Deadband */
    epicsFloat64        aftc;       /* Alarm Filter Time Constant */
    epicsFloat64        afvl;       /* Alarm Filter Value */
    epicsInt64          adel;       /* Archive Deadband */
    epicsInt64          mdel;       /* Monitor Deadband */
    epicsInt64          lalm;       /* Last Value Alarmed */
    epicsInt64          alst;       /* Last Value Archived */
    epicsInt64          mlst;       /* Last Val Monitored */
    DBLINK              siol;       /* Simulation Input Link */
    epicsInt64          sval;       /* Simulation Value */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
} int64inRecord;

typedef enum {
	int64inRecordNAME = 0,
	int64inRecordDESC = 1,
	int64inRecordASG = 2,
	int64inRecordSCAN = 3,
	int64inRecordPINI = 4,
	int64inRecordPHAS = 5,
	int64inRecordEVNT = 6,
	int64inRecordTSE = 7,
	int64inRecordTSEL = 8,
	int64inRecordDTYP = 9,
	int64inRecordDISV = 10,
	int64inRecordDISA = 11,
	int64inRecordSDIS = 12,
	int64inRecordMLOK = 13,
	int64inRecordMLIS = 14,
	int64inRecordBKLNK = 15,
	int64inRecordDISP = 16,
	int64inRecordPROC = 17,
	int64inRecordSTAT = 18,
	int64inRecordSEVR = 19,
	int64inRecordNSTA = 20,
	int64inRecordNSEV = 21,
	int64inRecordACKS = 22,
	int64inRecordACKT = 23,
	int64inRecordDISS = 24,
	int64inRecordLCNT = 25,
	int64inRecordPACT = 26,
	int64inRecordPUTF = 27,
	int64inRecordRPRO = 28,
	int64inRecordASP = 29,
	int64inRecordPPN = 30,
	int64inRecordPPNR = 31,
	int64inRecordSPVT = 32,
	int64inRecordRSET = 33,
	int64inRecordDSET = 34,
	int64inRecordDPVT = 35,
	int64inRecordRDES = 36,
	int64inRecordLSET = 37,
	int64inRecordPRIO = 38,
	int64inRecordTPRO = 39,
	int64inRecordBKPT = 40,
	int64inRecordUDF = 41,
	int64inRecordUDFS = 42,
	int64inRecordTIME = 43,
	int64inRecordFLNK = 44,
	int64inRecordVAL = 45,
	int64inRecordINP = 46,
	int64inRecordEGU = 47,
	int64inRecordHOPR = 48,
	int64inRecordLOPR = 49,
	int64inRecordHIHI = 50,
	int64inRecordLOLO = 51,
	int64inRecordHIGH = 52,
	int64inRecordLOW = 53,
	int64inRecordHHSV = 54,
	int64inRecordLLSV = 55,
	int64inRecordHSV = 56,
	int64inRecordLSV = 57,
	int64inRecordHYST = 58,
	int64inRecordAFTC = 59,
	int64inRecordAFVL = 60,
	int64inRecordADEL = 61,
	int64inRecordMDEL = 62,
	int64inRecordLALM = 63,
	int64inRecordALST = 64,
	int64inRecordMLST = 65,
	int64inRecordSIOL = 66,
	int64inRecordSVAL = 67,
	int64inRecordSIML = 68,
	int64inRecordSIMM = 69,
	int64inRecordSIMS = 70,
	int64inRecordOLDSIMM = 71,
	int64inRecordSSCN = 72,
	int64inRecordSDLY = 73,
	int64inRecordSIMPVT = 74
} int64inFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int int64inRecordSizeOffset(dbRecordType *prt)
{
    int64inRecord *prec = 0;

    assert(prt->no_fields == 75);
    prt->papFldDes[int64inRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[int64inRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[int64inRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[int64inRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[int64inRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[int64inRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[int64inRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[int64inRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[int64inRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[int64inRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[int64inRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[int64inRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[int64inRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[int64inRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[int64inRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[int64inRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[int64inRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[int64inRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[int64inRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[int64inRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[int64inRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[int64inRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[int64inRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[int64inRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[int64inRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[int64inRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[int64inRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[int64inRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[int64inRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[int64inRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[int64inRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[int64inRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[int64inRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[int64inRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[int64inRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[int64inRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[int64inRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[int64inRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[int64inRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[int64inRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[int64inRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[int64inRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[int64inRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[int64inRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[int64inRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[int64inRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[int64inRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[int64inRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[int64inRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[int64inRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[int64inRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[int64inRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[int64inRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[int64inRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[int64inRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[int64inRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[int64inRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[int64inRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[int64inRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[int64inRecordAFTC]->size = sizeof(prec->aftc);
    prt->papFldDes[int64inRecordAFVL]->size = sizeof(prec->afvl);
    prt->papFldDes[int64inRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[int64inRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[int64inRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[int64inRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[int64inRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[int64inRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[int64inRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[int64inRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[int64inRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[int64inRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[int64inRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[int64inRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[int64inRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[int64inRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[int64inRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[int64inRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[int64inRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[int64inRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[int64inRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[int64inRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[int64inRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[int64inRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[int64inRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[int64inRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[int64inRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[int64inRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[int64inRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[int64inRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[int64inRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[int64inRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[int64inRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[int64inRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[int64inRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[int64inRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[int64inRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[int64inRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[int64inRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[int64inRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[int64inRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[int64inRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[int64inRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[int64inRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[int64inRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[int64inRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[int64inRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[int64inRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[int64inRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[int64inRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[int64inRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[int64inRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[int64inRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[int64inRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[int64inRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[int64inRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[int64inRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[int64inRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[int64inRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[int64inRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[int64inRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[int64inRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[int64inRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[int64inRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[int64inRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[int64inRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[int64inRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[int64inRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[int64inRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[int64inRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[int64inRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[int64inRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[int64inRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[int64inRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[int64inRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[int64inRecordAFTC]->offset = (unsigned short)((char *)&prec->aftc - (char *)prec);
    prt->papFldDes[int64inRecordAFVL]->offset = (unsigned short)((char *)&prec->afvl - (char *)prec);
    prt->papFldDes[int64inRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[int64inRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[int64inRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[int64inRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[int64inRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[int64inRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[int64inRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[int64inRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[int64inRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[int64inRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[int64inRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[int64inRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[int64inRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[int64inRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(int64inRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_int64inRecord_H */
