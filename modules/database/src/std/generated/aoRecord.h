/* aoRecord.h generated from aoRecord.dbd */

#ifndef INC_aoRecord_H
#define INC_aoRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

#ifndef aoOIF_NUM_CHOICES
typedef enum {
    aoOIF_Full                      /* Full */,
    aoOIF_Incremental               /* Incremental */
} aoOIF;
#define aoOIF_NUM_CHOICES 2
#endif

typedef struct aoRecord {
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
    epicsFloat64        val;        /* Desired Output */
    epicsFloat64        oval;       /* Output Value */
    DBLINK              out;        /* Output Specification */
    epicsFloat64        oroc;       /* Output Rate of Change */
    DBLINK              dol;        /* Desired Output Loc */
    epicsEnum16         omsl;       /* Output Mode Select */
    epicsEnum16         oif;        /* Out Full/Incremental */
    epicsInt16          prec;       /* Display Precision */
    epicsEnum16         linr;       /* Linearization */
    epicsFloat64        eguf;       /* Eng Units Full */
    epicsFloat64        egul;       /* Eng Units Low */
    char                egu[16];    /* Engineering Units */
    epicsUInt32         roff;       /* Raw Offset */
    epicsFloat64        eoff;       /* EGU to Raw Offset */
    epicsFloat64        eslo;       /* EGU to Raw Slope */
    epicsFloat64        drvh;       /* Drive High Limit */
    epicsFloat64        drvl;       /* Drive Low Limit */
    epicsFloat64        hopr;       /* High Operating Range */
    epicsFloat64        lopr;       /* Low Operating Range */
    epicsFloat64        aoff;       /* Adjustment Offset */
    epicsFloat64        aslo;       /* Adjustment Slope */
    epicsFloat64        hihi;       /* Hihi Alarm Limit */
    epicsFloat64        lolo;       /* Lolo Alarm Limit */
    epicsFloat64        high;       /* High Alarm Limit */
    epicsFloat64        low;        /* Low Alarm Limit */
    epicsEnum16         hhsv;       /* Hihi Severity */
    epicsEnum16         llsv;       /* Lolo Severity */
    epicsEnum16         hsv;        /* High Severity */
    epicsEnum16         lsv;        /* Low Severity */
    epicsFloat64        hyst;       /* Alarm Deadband */
    epicsFloat64        adel;       /* Archive Deadband */
    epicsFloat64        mdel;       /* Monitor Deadband */
    epicsInt32          rval;       /* Current Raw Value */
    epicsInt32          oraw;       /* Previous Raw Value */
    epicsInt32          rbv;        /* Readback Value */
    epicsInt32          orbv;       /* Prev Readback Value */
    epicsFloat64        pval;       /* Previous value */
    epicsFloat64        lalm;       /* Last Value Alarmed */
    epicsFloat64        alst;       /* Last Value Archived */
    epicsFloat64        mlst;       /* Last Val Monitored */
    void *   pbrk;                  /* Ptrto brkTable */
    epicsInt16          init;       /* Initialized? */
    epicsInt16          lbrk;       /* LastBreak Point */
    DBLINK              siol;       /* Simulation Output Link */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
    epicsEnum16         ivoa;       /* INVALID output action */
    epicsFloat64        ivov;       /* INVALID output value */
    epicsUInt8          omod;       /* Was OVAL modified? */
} aoRecord;

typedef enum {
	aoRecordNAME = 0,
	aoRecordDESC = 1,
	aoRecordASG = 2,
	aoRecordSCAN = 3,
	aoRecordPINI = 4,
	aoRecordPHAS = 5,
	aoRecordEVNT = 6,
	aoRecordTSE = 7,
	aoRecordTSEL = 8,
	aoRecordDTYP = 9,
	aoRecordDISV = 10,
	aoRecordDISA = 11,
	aoRecordSDIS = 12,
	aoRecordMLOK = 13,
	aoRecordMLIS = 14,
	aoRecordBKLNK = 15,
	aoRecordDISP = 16,
	aoRecordPROC = 17,
	aoRecordSTAT = 18,
	aoRecordSEVR = 19,
	aoRecordNSTA = 20,
	aoRecordNSEV = 21,
	aoRecordACKS = 22,
	aoRecordACKT = 23,
	aoRecordDISS = 24,
	aoRecordLCNT = 25,
	aoRecordPACT = 26,
	aoRecordPUTF = 27,
	aoRecordRPRO = 28,
	aoRecordASP = 29,
	aoRecordPPN = 30,
	aoRecordPPNR = 31,
	aoRecordSPVT = 32,
	aoRecordRSET = 33,
	aoRecordDSET = 34,
	aoRecordDPVT = 35,
	aoRecordRDES = 36,
	aoRecordLSET = 37,
	aoRecordPRIO = 38,
	aoRecordTPRO = 39,
	aoRecordBKPT = 40,
	aoRecordUDF = 41,
	aoRecordUDFS = 42,
	aoRecordTIME = 43,
	aoRecordFLNK = 44,
	aoRecordVAL = 45,
	aoRecordOVAL = 46,
	aoRecordOUT = 47,
	aoRecordOROC = 48,
	aoRecordDOL = 49,
	aoRecordOMSL = 50,
	aoRecordOIF = 51,
	aoRecordPREC = 52,
	aoRecordLINR = 53,
	aoRecordEGUF = 54,
	aoRecordEGUL = 55,
	aoRecordEGU = 56,
	aoRecordROFF = 57,
	aoRecordEOFF = 58,
	aoRecordESLO = 59,
	aoRecordDRVH = 60,
	aoRecordDRVL = 61,
	aoRecordHOPR = 62,
	aoRecordLOPR = 63,
	aoRecordAOFF = 64,
	aoRecordASLO = 65,
	aoRecordHIHI = 66,
	aoRecordLOLO = 67,
	aoRecordHIGH = 68,
	aoRecordLOW = 69,
	aoRecordHHSV = 70,
	aoRecordLLSV = 71,
	aoRecordHSV = 72,
	aoRecordLSV = 73,
	aoRecordHYST = 74,
	aoRecordADEL = 75,
	aoRecordMDEL = 76,
	aoRecordRVAL = 77,
	aoRecordORAW = 78,
	aoRecordRBV = 79,
	aoRecordORBV = 80,
	aoRecordPVAL = 81,
	aoRecordLALM = 82,
	aoRecordALST = 83,
	aoRecordMLST = 84,
	aoRecordPBRK = 85,
	aoRecordINIT = 86,
	aoRecordLBRK = 87,
	aoRecordSIOL = 88,
	aoRecordSIML = 89,
	aoRecordSIMM = 90,
	aoRecordSIMS = 91,
	aoRecordOLDSIMM = 92,
	aoRecordSSCN = 93,
	aoRecordSDLY = 94,
	aoRecordSIMPVT = 95,
	aoRecordIVOA = 96,
	aoRecordIVOV = 97,
	aoRecordOMOD = 98
} aoFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int aoRecordSizeOffset(dbRecordType *prt)
{
    aoRecord *prec = 0;

    assert(prt->no_fields == 99);
    prt->papFldDes[aoRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aoRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aoRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aoRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aoRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aoRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aoRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aoRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aoRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aoRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aoRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aoRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aoRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aoRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aoRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aoRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aoRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aoRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aoRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aoRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aoRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aoRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aoRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aoRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aoRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aoRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aoRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aoRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aoRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aoRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aoRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aoRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aoRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aoRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aoRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aoRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aoRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aoRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aoRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aoRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aoRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aoRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aoRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aoRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aoRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aoRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aoRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[aoRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[aoRecordOROC]->size = sizeof(prec->oroc);
    prt->papFldDes[aoRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[aoRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[aoRecordOIF]->size = sizeof(prec->oif);
    prt->papFldDes[aoRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aoRecordLINR]->size = sizeof(prec->linr);
    prt->papFldDes[aoRecordEGUF]->size = sizeof(prec->eguf);
    prt->papFldDes[aoRecordEGUL]->size = sizeof(prec->egul);
    prt->papFldDes[aoRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[aoRecordROFF]->size = sizeof(prec->roff);
    prt->papFldDes[aoRecordEOFF]->size = sizeof(prec->eoff);
    prt->papFldDes[aoRecordESLO]->size = sizeof(prec->eslo);
    prt->papFldDes[aoRecordDRVH]->size = sizeof(prec->drvh);
    prt->papFldDes[aoRecordDRVL]->size = sizeof(prec->drvl);
    prt->papFldDes[aoRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[aoRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[aoRecordAOFF]->size = sizeof(prec->aoff);
    prt->papFldDes[aoRecordASLO]->size = sizeof(prec->aslo);
    prt->papFldDes[aoRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[aoRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[aoRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[aoRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[aoRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[aoRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[aoRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[aoRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[aoRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[aoRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[aoRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[aoRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[aoRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[aoRecordRBV]->size = sizeof(prec->rbv);
    prt->papFldDes[aoRecordORBV]->size = sizeof(prec->orbv);
    prt->papFldDes[aoRecordPVAL]->size = sizeof(prec->pval);
    prt->papFldDes[aoRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[aoRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[aoRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[aoRecordPBRK]->size = sizeof(prec->pbrk);
    prt->papFldDes[aoRecordINIT]->size = sizeof(prec->init);
    prt->papFldDes[aoRecordLBRK]->size = sizeof(prec->lbrk);
    prt->papFldDes[aoRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[aoRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[aoRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[aoRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[aoRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[aoRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[aoRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[aoRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[aoRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[aoRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[aoRecordOMOD]->size = sizeof(prec->omod);
    prt->papFldDes[aoRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[aoRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[aoRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[aoRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[aoRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[aoRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[aoRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[aoRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[aoRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[aoRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[aoRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[aoRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[aoRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[aoRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[aoRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[aoRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[aoRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[aoRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[aoRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[aoRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[aoRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[aoRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[aoRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[aoRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[aoRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[aoRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[aoRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[aoRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[aoRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[aoRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[aoRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[aoRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[aoRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[aoRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[aoRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[aoRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[aoRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[aoRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[aoRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[aoRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[aoRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[aoRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[aoRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[aoRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[aoRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[aoRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[aoRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[aoRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[aoRecordOROC]->offset = (unsigned short)((char *)&prec->oroc - (char *)prec);
    prt->papFldDes[aoRecordDOL]->offset = (unsigned short)((char *)&prec->dol - (char *)prec);
    prt->papFldDes[aoRecordOMSL]->offset = (unsigned short)((char *)&prec->omsl - (char *)prec);
    prt->papFldDes[aoRecordOIF]->offset = (unsigned short)((char *)&prec->oif - (char *)prec);
    prt->papFldDes[aoRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[aoRecordLINR]->offset = (unsigned short)((char *)&prec->linr - (char *)prec);
    prt->papFldDes[aoRecordEGUF]->offset = (unsigned short)((char *)&prec->eguf - (char *)prec);
    prt->papFldDes[aoRecordEGUL]->offset = (unsigned short)((char *)&prec->egul - (char *)prec);
    prt->papFldDes[aoRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[aoRecordROFF]->offset = (unsigned short)((char *)&prec->roff - (char *)prec);
    prt->papFldDes[aoRecordEOFF]->offset = (unsigned short)((char *)&prec->eoff - (char *)prec);
    prt->papFldDes[aoRecordESLO]->offset = (unsigned short)((char *)&prec->eslo - (char *)prec);
    prt->papFldDes[aoRecordDRVH]->offset = (unsigned short)((char *)&prec->drvh - (char *)prec);
    prt->papFldDes[aoRecordDRVL]->offset = (unsigned short)((char *)&prec->drvl - (char *)prec);
    prt->papFldDes[aoRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[aoRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[aoRecordAOFF]->offset = (unsigned short)((char *)&prec->aoff - (char *)prec);
    prt->papFldDes[aoRecordASLO]->offset = (unsigned short)((char *)&prec->aslo - (char *)prec);
    prt->papFldDes[aoRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[aoRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[aoRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[aoRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[aoRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[aoRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[aoRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[aoRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[aoRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[aoRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[aoRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[aoRecordRVAL]->offset = (unsigned short)((char *)&prec->rval - (char *)prec);
    prt->papFldDes[aoRecordORAW]->offset = (unsigned short)((char *)&prec->oraw - (char *)prec);
    prt->papFldDes[aoRecordRBV]->offset = (unsigned short)((char *)&prec->rbv - (char *)prec);
    prt->papFldDes[aoRecordORBV]->offset = (unsigned short)((char *)&prec->orbv - (char *)prec);
    prt->papFldDes[aoRecordPVAL]->offset = (unsigned short)((char *)&prec->pval - (char *)prec);
    prt->papFldDes[aoRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[aoRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[aoRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[aoRecordPBRK]->offset = (unsigned short)((char *)&prec->pbrk - (char *)prec);
    prt->papFldDes[aoRecordINIT]->offset = (unsigned short)((char *)&prec->init - (char *)prec);
    prt->papFldDes[aoRecordLBRK]->offset = (unsigned short)((char *)&prec->lbrk - (char *)prec);
    prt->papFldDes[aoRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[aoRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[aoRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[aoRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[aoRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[aoRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[aoRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[aoRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[aoRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[aoRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->papFldDes[aoRecordOMOD]->offset = (unsigned short)((char *)&prec->omod - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aoRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aoRecord_H */
