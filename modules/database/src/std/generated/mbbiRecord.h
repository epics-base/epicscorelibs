/* mbbiRecord.h generated from mbbiRecord.dbd */

#ifndef INC_mbbiRecord_H
#define INC_mbbiRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

typedef struct mbbiRecord {
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
    epicsEnum16         val;        /* Current Value */
    epicsUInt16         nobt;       /* Number of Bits */
    DBLINK              inp;        /* Input Specification */
    epicsUInt32         zrvl;       /* Zero Value */
    epicsUInt32         onvl;       /* One Value */
    epicsUInt32         twvl;       /* Two Value */
    epicsUInt32         thvl;       /* Three Value */
    epicsUInt32         frvl;       /* Four Value */
    epicsUInt32         fvvl;       /* Five Value */
    epicsUInt32         sxvl;       /* Six Value */
    epicsUInt32         svvl;       /* Seven Value */
    epicsUInt32         eivl;       /* Eight Value */
    epicsUInt32         nivl;       /* Nine Value */
    epicsUInt32         tevl;       /* Ten Value */
    epicsUInt32         elvl;       /* Eleven Value */
    epicsUInt32         tvvl;       /* Twelve Value */
    epicsUInt32         ttvl;       /* Thirteen Value */
    epicsUInt32         ftvl;       /* Fourteen Value */
    epicsUInt32         ffvl;       /* Fifteen Value */
    char                zrst[26];   /* Zero String */
    char                onst[26];   /* One String */
    char                twst[26];   /* Two String */
    char                thst[26];   /* Three String */
    char                frst[26];   /* Four String */
    char                fvst[26];   /* Five String */
    char                sxst[26];   /* Six String */
    char                svst[26];   /* Seven String */
    char                eist[26];   /* Eight String */
    char                nist[26];   /* Nine String */
    char                test[26];   /* Ten String */
    char                elst[26];   /* Eleven String */
    char                tvst[26];   /* Twelve String */
    char                ttst[26];   /* Thirteen String */
    char                ftst[26];   /* Fourteen String */
    char                ffst[26];   /* Fifteen String */
    epicsEnum16         zrsv;       /* State Zero Severity */
    epicsEnum16         onsv;       /* State One Severity */
    epicsEnum16         twsv;       /* State Two Severity */
    epicsEnum16         thsv;       /* State Three Severity */
    epicsEnum16         frsv;       /* State Four Severity */
    epicsEnum16         fvsv;       /* State Five Severity */
    epicsEnum16         sxsv;       /* State Six Severity */
    epicsEnum16         svsv;       /* State Seven Severity */
    epicsEnum16         eisv;       /* State Eight Severity */
    epicsEnum16         nisv;       /* State Nine Severity */
    epicsEnum16         tesv;       /* State Ten Severity */
    epicsEnum16         elsv;       /* State Eleven Severity */
    epicsEnum16         tvsv;       /* State Twelve Severity */
    epicsEnum16         ttsv;       /* State Thirteen Sevr */
    epicsEnum16         ftsv;       /* State Fourteen Sevr */
    epicsEnum16         ffsv;       /* State Fifteen Severity */
    epicsFloat64        aftc;       /* Alarm Filter Time Constant */
    epicsFloat64        afvl;       /* Alarm Filter Value */
    epicsEnum16         unsv;       /* Unknown State Severity */
    epicsEnum16         cosv;       /* Change of State Svr */
    epicsUInt32         rval;       /* Raw Value */
    epicsUInt32         oraw;       /* Prev Raw Value */
    epicsUInt32         mask;       /* Hardware Mask */
    epicsUInt16         mlst;       /* Last Value Monitored */
    epicsUInt16         lalm;       /* Last Value Alarmed */
    epicsInt16          sdef;       /* States Defined */
    epicsUInt16         shft;       /* Shift */
    DBLINK              siol;       /* Simulation Input Link */
    epicsUInt32         sval;       /* Simulation Value */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
} mbbiRecord;

typedef enum {
	mbbiRecordNAME = 0,
	mbbiRecordDESC = 1,
	mbbiRecordASG = 2,
	mbbiRecordSCAN = 3,
	mbbiRecordPINI = 4,
	mbbiRecordPHAS = 5,
	mbbiRecordEVNT = 6,
	mbbiRecordTSE = 7,
	mbbiRecordTSEL = 8,
	mbbiRecordDTYP = 9,
	mbbiRecordDISV = 10,
	mbbiRecordDISA = 11,
	mbbiRecordSDIS = 12,
	mbbiRecordMLOK = 13,
	mbbiRecordMLIS = 14,
	mbbiRecordBKLNK = 15,
	mbbiRecordDISP = 16,
	mbbiRecordPROC = 17,
	mbbiRecordSTAT = 18,
	mbbiRecordSEVR = 19,
	mbbiRecordNSTA = 20,
	mbbiRecordNSEV = 21,
	mbbiRecordACKS = 22,
	mbbiRecordACKT = 23,
	mbbiRecordDISS = 24,
	mbbiRecordLCNT = 25,
	mbbiRecordPACT = 26,
	mbbiRecordPUTF = 27,
	mbbiRecordRPRO = 28,
	mbbiRecordASP = 29,
	mbbiRecordPPN = 30,
	mbbiRecordPPNR = 31,
	mbbiRecordSPVT = 32,
	mbbiRecordRSET = 33,
	mbbiRecordDSET = 34,
	mbbiRecordDPVT = 35,
	mbbiRecordRDES = 36,
	mbbiRecordLSET = 37,
	mbbiRecordPRIO = 38,
	mbbiRecordTPRO = 39,
	mbbiRecordBKPT = 40,
	mbbiRecordUDF = 41,
	mbbiRecordUDFS = 42,
	mbbiRecordTIME = 43,
	mbbiRecordFLNK = 44,
	mbbiRecordVAL = 45,
	mbbiRecordNOBT = 46,
	mbbiRecordINP = 47,
	mbbiRecordZRVL = 48,
	mbbiRecordONVL = 49,
	mbbiRecordTWVL = 50,
	mbbiRecordTHVL = 51,
	mbbiRecordFRVL = 52,
	mbbiRecordFVVL = 53,
	mbbiRecordSXVL = 54,
	mbbiRecordSVVL = 55,
	mbbiRecordEIVL = 56,
	mbbiRecordNIVL = 57,
	mbbiRecordTEVL = 58,
	mbbiRecordELVL = 59,
	mbbiRecordTVVL = 60,
	mbbiRecordTTVL = 61,
	mbbiRecordFTVL = 62,
	mbbiRecordFFVL = 63,
	mbbiRecordZRST = 64,
	mbbiRecordONST = 65,
	mbbiRecordTWST = 66,
	mbbiRecordTHST = 67,
	mbbiRecordFRST = 68,
	mbbiRecordFVST = 69,
	mbbiRecordSXST = 70,
	mbbiRecordSVST = 71,
	mbbiRecordEIST = 72,
	mbbiRecordNIST = 73,
	mbbiRecordTEST = 74,
	mbbiRecordELST = 75,
	mbbiRecordTVST = 76,
	mbbiRecordTTST = 77,
	mbbiRecordFTST = 78,
	mbbiRecordFFST = 79,
	mbbiRecordZRSV = 80,
	mbbiRecordONSV = 81,
	mbbiRecordTWSV = 82,
	mbbiRecordTHSV = 83,
	mbbiRecordFRSV = 84,
	mbbiRecordFVSV = 85,
	mbbiRecordSXSV = 86,
	mbbiRecordSVSV = 87,
	mbbiRecordEISV = 88,
	mbbiRecordNISV = 89,
	mbbiRecordTESV = 90,
	mbbiRecordELSV = 91,
	mbbiRecordTVSV = 92,
	mbbiRecordTTSV = 93,
	mbbiRecordFTSV = 94,
	mbbiRecordFFSV = 95,
	mbbiRecordAFTC = 96,
	mbbiRecordAFVL = 97,
	mbbiRecordUNSV = 98,
	mbbiRecordCOSV = 99,
	mbbiRecordRVAL = 100,
	mbbiRecordORAW = 101,
	mbbiRecordMASK = 102,
	mbbiRecordMLST = 103,
	mbbiRecordLALM = 104,
	mbbiRecordSDEF = 105,
	mbbiRecordSHFT = 106,
	mbbiRecordSIOL = 107,
	mbbiRecordSVAL = 108,
	mbbiRecordSIML = 109,
	mbbiRecordSIMM = 110,
	mbbiRecordSIMS = 111,
	mbbiRecordOLDSIMM = 112,
	mbbiRecordSSCN = 113,
	mbbiRecordSDLY = 114,
	mbbiRecordSIMPVT = 115
} mbbiFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int mbbiRecordSizeOffset(dbRecordType *prt)
{
    mbbiRecord *prec = 0;

    assert(prt->no_fields == 116);
    prt->papFldDes[mbbiRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[mbbiRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[mbbiRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[mbbiRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[mbbiRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[mbbiRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[mbbiRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[mbbiRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[mbbiRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[mbbiRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[mbbiRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[mbbiRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[mbbiRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[mbbiRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[mbbiRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[mbbiRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[mbbiRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[mbbiRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[mbbiRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[mbbiRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[mbbiRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[mbbiRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[mbbiRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[mbbiRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[mbbiRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[mbbiRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[mbbiRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[mbbiRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[mbbiRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[mbbiRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[mbbiRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[mbbiRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[mbbiRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[mbbiRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[mbbiRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[mbbiRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[mbbiRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[mbbiRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[mbbiRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[mbbiRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[mbbiRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[mbbiRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[mbbiRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[mbbiRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[mbbiRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[mbbiRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[mbbiRecordNOBT]->size = sizeof(prec->nobt);
    prt->papFldDes[mbbiRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[mbbiRecordZRVL]->size = sizeof(prec->zrvl);
    prt->papFldDes[mbbiRecordONVL]->size = sizeof(prec->onvl);
    prt->papFldDes[mbbiRecordTWVL]->size = sizeof(prec->twvl);
    prt->papFldDes[mbbiRecordTHVL]->size = sizeof(prec->thvl);
    prt->papFldDes[mbbiRecordFRVL]->size = sizeof(prec->frvl);
    prt->papFldDes[mbbiRecordFVVL]->size = sizeof(prec->fvvl);
    prt->papFldDes[mbbiRecordSXVL]->size = sizeof(prec->sxvl);
    prt->papFldDes[mbbiRecordSVVL]->size = sizeof(prec->svvl);
    prt->papFldDes[mbbiRecordEIVL]->size = sizeof(prec->eivl);
    prt->papFldDes[mbbiRecordNIVL]->size = sizeof(prec->nivl);
    prt->papFldDes[mbbiRecordTEVL]->size = sizeof(prec->tevl);
    prt->papFldDes[mbbiRecordELVL]->size = sizeof(prec->elvl);
    prt->papFldDes[mbbiRecordTVVL]->size = sizeof(prec->tvvl);
    prt->papFldDes[mbbiRecordTTVL]->size = sizeof(prec->ttvl);
    prt->papFldDes[mbbiRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[mbbiRecordFFVL]->size = sizeof(prec->ffvl);
    prt->papFldDes[mbbiRecordZRST]->size = sizeof(prec->zrst);
    prt->papFldDes[mbbiRecordONST]->size = sizeof(prec->onst);
    prt->papFldDes[mbbiRecordTWST]->size = sizeof(prec->twst);
    prt->papFldDes[mbbiRecordTHST]->size = sizeof(prec->thst);
    prt->papFldDes[mbbiRecordFRST]->size = sizeof(prec->frst);
    prt->papFldDes[mbbiRecordFVST]->size = sizeof(prec->fvst);
    prt->papFldDes[mbbiRecordSXST]->size = sizeof(prec->sxst);
    prt->papFldDes[mbbiRecordSVST]->size = sizeof(prec->svst);
    prt->papFldDes[mbbiRecordEIST]->size = sizeof(prec->eist);
    prt->papFldDes[mbbiRecordNIST]->size = sizeof(prec->nist);
    prt->papFldDes[mbbiRecordTEST]->size = sizeof(prec->test);
    prt->papFldDes[mbbiRecordELST]->size = sizeof(prec->elst);
    prt->papFldDes[mbbiRecordTVST]->size = sizeof(prec->tvst);
    prt->papFldDes[mbbiRecordTTST]->size = sizeof(prec->ttst);
    prt->papFldDes[mbbiRecordFTST]->size = sizeof(prec->ftst);
    prt->papFldDes[mbbiRecordFFST]->size = sizeof(prec->ffst);
    prt->papFldDes[mbbiRecordZRSV]->size = sizeof(prec->zrsv);
    prt->papFldDes[mbbiRecordONSV]->size = sizeof(prec->onsv);
    prt->papFldDes[mbbiRecordTWSV]->size = sizeof(prec->twsv);
    prt->papFldDes[mbbiRecordTHSV]->size = sizeof(prec->thsv);
    prt->papFldDes[mbbiRecordFRSV]->size = sizeof(prec->frsv);
    prt->papFldDes[mbbiRecordFVSV]->size = sizeof(prec->fvsv);
    prt->papFldDes[mbbiRecordSXSV]->size = sizeof(prec->sxsv);
    prt->papFldDes[mbbiRecordSVSV]->size = sizeof(prec->svsv);
    prt->papFldDes[mbbiRecordEISV]->size = sizeof(prec->eisv);
    prt->papFldDes[mbbiRecordNISV]->size = sizeof(prec->nisv);
    prt->papFldDes[mbbiRecordTESV]->size = sizeof(prec->tesv);
    prt->papFldDes[mbbiRecordELSV]->size = sizeof(prec->elsv);
    prt->papFldDes[mbbiRecordTVSV]->size = sizeof(prec->tvsv);
    prt->papFldDes[mbbiRecordTTSV]->size = sizeof(prec->ttsv);
    prt->papFldDes[mbbiRecordFTSV]->size = sizeof(prec->ftsv);
    prt->papFldDes[mbbiRecordFFSV]->size = sizeof(prec->ffsv);
    prt->papFldDes[mbbiRecordAFTC]->size = sizeof(prec->aftc);
    prt->papFldDes[mbbiRecordAFVL]->size = sizeof(prec->afvl);
    prt->papFldDes[mbbiRecordUNSV]->size = sizeof(prec->unsv);
    prt->papFldDes[mbbiRecordCOSV]->size = sizeof(prec->cosv);
    prt->papFldDes[mbbiRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[mbbiRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[mbbiRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[mbbiRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[mbbiRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[mbbiRecordSDEF]->size = sizeof(prec->sdef);
    prt->papFldDes[mbbiRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[mbbiRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[mbbiRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[mbbiRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[mbbiRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[mbbiRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[mbbiRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[mbbiRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[mbbiRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[mbbiRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[mbbiRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[mbbiRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[mbbiRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[mbbiRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[mbbiRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[mbbiRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[mbbiRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[mbbiRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[mbbiRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[mbbiRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[mbbiRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[mbbiRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[mbbiRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[mbbiRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[mbbiRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[mbbiRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[mbbiRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[mbbiRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[mbbiRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[mbbiRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[mbbiRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[mbbiRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[mbbiRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[mbbiRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[mbbiRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[mbbiRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[mbbiRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[mbbiRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[mbbiRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[mbbiRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[mbbiRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[mbbiRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[mbbiRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[mbbiRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[mbbiRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[mbbiRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[mbbiRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[mbbiRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[mbbiRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[mbbiRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[mbbiRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[mbbiRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[mbbiRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[mbbiRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[mbbiRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[mbbiRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[mbbiRecordNOBT]->offset = (unsigned short)((char *)&prec->nobt - (char *)prec);
    prt->papFldDes[mbbiRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[mbbiRecordZRVL]->offset = (unsigned short)((char *)&prec->zrvl - (char *)prec);
    prt->papFldDes[mbbiRecordONVL]->offset = (unsigned short)((char *)&prec->onvl - (char *)prec);
    prt->papFldDes[mbbiRecordTWVL]->offset = (unsigned short)((char *)&prec->twvl - (char *)prec);
    prt->papFldDes[mbbiRecordTHVL]->offset = (unsigned short)((char *)&prec->thvl - (char *)prec);
    prt->papFldDes[mbbiRecordFRVL]->offset = (unsigned short)((char *)&prec->frvl - (char *)prec);
    prt->papFldDes[mbbiRecordFVVL]->offset = (unsigned short)((char *)&prec->fvvl - (char *)prec);
    prt->papFldDes[mbbiRecordSXVL]->offset = (unsigned short)((char *)&prec->sxvl - (char *)prec);
    prt->papFldDes[mbbiRecordSVVL]->offset = (unsigned short)((char *)&prec->svvl - (char *)prec);
    prt->papFldDes[mbbiRecordEIVL]->offset = (unsigned short)((char *)&prec->eivl - (char *)prec);
    prt->papFldDes[mbbiRecordNIVL]->offset = (unsigned short)((char *)&prec->nivl - (char *)prec);
    prt->papFldDes[mbbiRecordTEVL]->offset = (unsigned short)((char *)&prec->tevl - (char *)prec);
    prt->papFldDes[mbbiRecordELVL]->offset = (unsigned short)((char *)&prec->elvl - (char *)prec);
    prt->papFldDes[mbbiRecordTVVL]->offset = (unsigned short)((char *)&prec->tvvl - (char *)prec);
    prt->papFldDes[mbbiRecordTTVL]->offset = (unsigned short)((char *)&prec->ttvl - (char *)prec);
    prt->papFldDes[mbbiRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[mbbiRecordFFVL]->offset = (unsigned short)((char *)&prec->ffvl - (char *)prec);
    prt->papFldDes[mbbiRecordZRST]->offset = (unsigned short)((char *)&prec->zrst - (char *)prec);
    prt->papFldDes[mbbiRecordONST]->offset = (unsigned short)((char *)&prec->onst - (char *)prec);
    prt->papFldDes[mbbiRecordTWST]->offset = (unsigned short)((char *)&prec->twst - (char *)prec);
    prt->papFldDes[mbbiRecordTHST]->offset = (unsigned short)((char *)&prec->thst - (char *)prec);
    prt->papFldDes[mbbiRecordFRST]->offset = (unsigned short)((char *)&prec->frst - (char *)prec);
    prt->papFldDes[mbbiRecordFVST]->offset = (unsigned short)((char *)&prec->fvst - (char *)prec);
    prt->papFldDes[mbbiRecordSXST]->offset = (unsigned short)((char *)&prec->sxst - (char *)prec);
    prt->papFldDes[mbbiRecordSVST]->offset = (unsigned short)((char *)&prec->svst - (char *)prec);
    prt->papFldDes[mbbiRecordEIST]->offset = (unsigned short)((char *)&prec->eist - (char *)prec);
    prt->papFldDes[mbbiRecordNIST]->offset = (unsigned short)((char *)&prec->nist - (char *)prec);
    prt->papFldDes[mbbiRecordTEST]->offset = (unsigned short)((char *)&prec->test - (char *)prec);
    prt->papFldDes[mbbiRecordELST]->offset = (unsigned short)((char *)&prec->elst - (char *)prec);
    prt->papFldDes[mbbiRecordTVST]->offset = (unsigned short)((char *)&prec->tvst - (char *)prec);
    prt->papFldDes[mbbiRecordTTST]->offset = (unsigned short)((char *)&prec->ttst - (char *)prec);
    prt->papFldDes[mbbiRecordFTST]->offset = (unsigned short)((char *)&prec->ftst - (char *)prec);
    prt->papFldDes[mbbiRecordFFST]->offset = (unsigned short)((char *)&prec->ffst - (char *)prec);
    prt->papFldDes[mbbiRecordZRSV]->offset = (unsigned short)((char *)&prec->zrsv - (char *)prec);
    prt->papFldDes[mbbiRecordONSV]->offset = (unsigned short)((char *)&prec->onsv - (char *)prec);
    prt->papFldDes[mbbiRecordTWSV]->offset = (unsigned short)((char *)&prec->twsv - (char *)prec);
    prt->papFldDes[mbbiRecordTHSV]->offset = (unsigned short)((char *)&prec->thsv - (char *)prec);
    prt->papFldDes[mbbiRecordFRSV]->offset = (unsigned short)((char *)&prec->frsv - (char *)prec);
    prt->papFldDes[mbbiRecordFVSV]->offset = (unsigned short)((char *)&prec->fvsv - (char *)prec);
    prt->papFldDes[mbbiRecordSXSV]->offset = (unsigned short)((char *)&prec->sxsv - (char *)prec);
    prt->papFldDes[mbbiRecordSVSV]->offset = (unsigned short)((char *)&prec->svsv - (char *)prec);
    prt->papFldDes[mbbiRecordEISV]->offset = (unsigned short)((char *)&prec->eisv - (char *)prec);
    prt->papFldDes[mbbiRecordNISV]->offset = (unsigned short)((char *)&prec->nisv - (char *)prec);
    prt->papFldDes[mbbiRecordTESV]->offset = (unsigned short)((char *)&prec->tesv - (char *)prec);
    prt->papFldDes[mbbiRecordELSV]->offset = (unsigned short)((char *)&prec->elsv - (char *)prec);
    prt->papFldDes[mbbiRecordTVSV]->offset = (unsigned short)((char *)&prec->tvsv - (char *)prec);
    prt->papFldDes[mbbiRecordTTSV]->offset = (unsigned short)((char *)&prec->ttsv - (char *)prec);
    prt->papFldDes[mbbiRecordFTSV]->offset = (unsigned short)((char *)&prec->ftsv - (char *)prec);
    prt->papFldDes[mbbiRecordFFSV]->offset = (unsigned short)((char *)&prec->ffsv - (char *)prec);
    prt->papFldDes[mbbiRecordAFTC]->offset = (unsigned short)((char *)&prec->aftc - (char *)prec);
    prt->papFldDes[mbbiRecordAFVL]->offset = (unsigned short)((char *)&prec->afvl - (char *)prec);
    prt->papFldDes[mbbiRecordUNSV]->offset = (unsigned short)((char *)&prec->unsv - (char *)prec);
    prt->papFldDes[mbbiRecordCOSV]->offset = (unsigned short)((char *)&prec->cosv - (char *)prec);
    prt->papFldDes[mbbiRecordRVAL]->offset = (unsigned short)((char *)&prec->rval - (char *)prec);
    prt->papFldDes[mbbiRecordORAW]->offset = (unsigned short)((char *)&prec->oraw - (char *)prec);
    prt->papFldDes[mbbiRecordMASK]->offset = (unsigned short)((char *)&prec->mask - (char *)prec);
    prt->papFldDes[mbbiRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[mbbiRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[mbbiRecordSDEF]->offset = (unsigned short)((char *)&prec->sdef - (char *)prec);
    prt->papFldDes[mbbiRecordSHFT]->offset = (unsigned short)((char *)&prec->shft - (char *)prec);
    prt->papFldDes[mbbiRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[mbbiRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[mbbiRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[mbbiRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[mbbiRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[mbbiRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[mbbiRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[mbbiRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[mbbiRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(mbbiRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_mbbiRecord_H */
