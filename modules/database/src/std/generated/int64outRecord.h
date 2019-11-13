/* int64outRecord.h generated from int64outRecord.dbd */

#ifndef INC_int64outRecord_H
#define INC_int64outRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

typedef struct int64outRecord {
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
    epicsInt64          val;        /* Desired Output */
    DBLINK              out;        /* Output Specification */
    DBLINK              dol;        /* Desired Output Loc */
    epicsEnum16         omsl;       /* Output Mode Select */
    char                egu[16];    /* Units name */
    epicsInt64          drvh;       /* Drive High Limit */
    epicsInt64          drvl;       /* Drive Low Limit */
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
    epicsInt64          adel;       /* Archive Deadband */
    epicsInt64          mdel;       /* Monitor Deadband */
    epicsInt64          lalm;       /* Last Value Alarmed */
    epicsInt64          alst;       /* Last Value Archived */
    epicsInt64          mlst;       /* Last Val Monitored */
    DBLINK              siol;       /* Simulation Output Link */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
    epicsEnum16         ivoa;       /* INVALID output action */
    epicsInt64          ivov;       /* INVALID output value */
} int64outRecord;

typedef enum {
	int64outRecordNAME = 0,
	int64outRecordDESC = 1,
	int64outRecordASG = 2,
	int64outRecordSCAN = 3,
	int64outRecordPINI = 4,
	int64outRecordPHAS = 5,
	int64outRecordEVNT = 6,
	int64outRecordTSE = 7,
	int64outRecordTSEL = 8,
	int64outRecordDTYP = 9,
	int64outRecordDISV = 10,
	int64outRecordDISA = 11,
	int64outRecordSDIS = 12,
	int64outRecordMLOK = 13,
	int64outRecordMLIS = 14,
	int64outRecordBKLNK = 15,
	int64outRecordDISP = 16,
	int64outRecordPROC = 17,
	int64outRecordSTAT = 18,
	int64outRecordSEVR = 19,
	int64outRecordNSTA = 20,
	int64outRecordNSEV = 21,
	int64outRecordACKS = 22,
	int64outRecordACKT = 23,
	int64outRecordDISS = 24,
	int64outRecordLCNT = 25,
	int64outRecordPACT = 26,
	int64outRecordPUTF = 27,
	int64outRecordRPRO = 28,
	int64outRecordASP = 29,
	int64outRecordPPN = 30,
	int64outRecordPPNR = 31,
	int64outRecordSPVT = 32,
	int64outRecordRSET = 33,
	int64outRecordDSET = 34,
	int64outRecordDPVT = 35,
	int64outRecordRDES = 36,
	int64outRecordLSET = 37,
	int64outRecordPRIO = 38,
	int64outRecordTPRO = 39,
	int64outRecordBKPT = 40,
	int64outRecordUDF = 41,
	int64outRecordUDFS = 42,
	int64outRecordTIME = 43,
	int64outRecordFLNK = 44,
	int64outRecordVAL = 45,
	int64outRecordOUT = 46,
	int64outRecordDOL = 47,
	int64outRecordOMSL = 48,
	int64outRecordEGU = 49,
	int64outRecordDRVH = 50,
	int64outRecordDRVL = 51,
	int64outRecordHOPR = 52,
	int64outRecordLOPR = 53,
	int64outRecordHIHI = 54,
	int64outRecordLOLO = 55,
	int64outRecordHIGH = 56,
	int64outRecordLOW = 57,
	int64outRecordHHSV = 58,
	int64outRecordLLSV = 59,
	int64outRecordHSV = 60,
	int64outRecordLSV = 61,
	int64outRecordHYST = 62,
	int64outRecordADEL = 63,
	int64outRecordMDEL = 64,
	int64outRecordLALM = 65,
	int64outRecordALST = 66,
	int64outRecordMLST = 67,
	int64outRecordSIOL = 68,
	int64outRecordSIML = 69,
	int64outRecordSIMM = 70,
	int64outRecordSIMS = 71,
	int64outRecordOLDSIMM = 72,
	int64outRecordSSCN = 73,
	int64outRecordSDLY = 74,
	int64outRecordSIMPVT = 75,
	int64outRecordIVOA = 76,
	int64outRecordIVOV = 77
} int64outFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int int64outRecordSizeOffset(dbRecordType *prt)
{
    int64outRecord *prec = 0;

    assert(prt->no_fields == 78);
    prt->papFldDes[int64outRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[int64outRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[int64outRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[int64outRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[int64outRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[int64outRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[int64outRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[int64outRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[int64outRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[int64outRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[int64outRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[int64outRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[int64outRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[int64outRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[int64outRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[int64outRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[int64outRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[int64outRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[int64outRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[int64outRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[int64outRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[int64outRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[int64outRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[int64outRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[int64outRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[int64outRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[int64outRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[int64outRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[int64outRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[int64outRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[int64outRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[int64outRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[int64outRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[int64outRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[int64outRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[int64outRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[int64outRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[int64outRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[int64outRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[int64outRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[int64outRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[int64outRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[int64outRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[int64outRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[int64outRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[int64outRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[int64outRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[int64outRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[int64outRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[int64outRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[int64outRecordDRVH]->size = sizeof(prec->drvh);
    prt->papFldDes[int64outRecordDRVL]->size = sizeof(prec->drvl);
    prt->papFldDes[int64outRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[int64outRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[int64outRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[int64outRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[int64outRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[int64outRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[int64outRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[int64outRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[int64outRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[int64outRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[int64outRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[int64outRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[int64outRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[int64outRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[int64outRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[int64outRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[int64outRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[int64outRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[int64outRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[int64outRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[int64outRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[int64outRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[int64outRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[int64outRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[int64outRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[int64outRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[int64outRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[int64outRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[int64outRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[int64outRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[int64outRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[int64outRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[int64outRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[int64outRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[int64outRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[int64outRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[int64outRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[int64outRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[int64outRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[int64outRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[int64outRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[int64outRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[int64outRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[int64outRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[int64outRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[int64outRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[int64outRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[int64outRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[int64outRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[int64outRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[int64outRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[int64outRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[int64outRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[int64outRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[int64outRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[int64outRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[int64outRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[int64outRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[int64outRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[int64outRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[int64outRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[int64outRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[int64outRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[int64outRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[int64outRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[int64outRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[int64outRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[int64outRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[int64outRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[int64outRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[int64outRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[int64outRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[int64outRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[int64outRecordDOL]->offset = (unsigned short)((char *)&prec->dol - (char *)prec);
    prt->papFldDes[int64outRecordOMSL]->offset = (unsigned short)((char *)&prec->omsl - (char *)prec);
    prt->papFldDes[int64outRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[int64outRecordDRVH]->offset = (unsigned short)((char *)&prec->drvh - (char *)prec);
    prt->papFldDes[int64outRecordDRVL]->offset = (unsigned short)((char *)&prec->drvl - (char *)prec);
    prt->papFldDes[int64outRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[int64outRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[int64outRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[int64outRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[int64outRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[int64outRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[int64outRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[int64outRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[int64outRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[int64outRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[int64outRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[int64outRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[int64outRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[int64outRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[int64outRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[int64outRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[int64outRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[int64outRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[int64outRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[int64outRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[int64outRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[int64outRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[int64outRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[int64outRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[int64outRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[int64outRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(int64outRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_int64outRecord_H */
