/** @file selRecord.h
 * @brief Declarations for the @ref selRecord "sel" record type.
 *
 * This header was generated from selRecord.dbd
 */

#ifndef INC_selRecord_H
#define INC_selRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef selSELM_NUM_CHOICES
/** @brief Enumerated type from menu selSELM */
typedef enum {
    selSELM_Specified               /**< @brief State string "Specified" */,
    selSELM_High_Signal             /**< @brief State string "High Signal" */,
    selSELM_Low_Signal              /**< @brief State string "Low Signal" */,
    selSELM_Median_Signal           /**< @brief State string "Median Signal" */
} selSELM;
/** @brief Number of states defined for menu selSELM */
#define selSELM_NUM_CHOICES 4
#endif

/** @brief Declaration of sel record type. */
typedef struct selRecord {
    char                name[61];   /**< @brief Record Name */
    char                desc[41];   /**< @brief Descriptor */
    char                asg[29];    /**< @brief Access Security Group */
    epicsEnum16         scan;       /**< @brief Scan Mechanism */
    epicsEnum16         pini;       /**< @brief Process at iocInit */
    epicsInt16          phas;       /**< @brief Scan Phase */
    char                evnt[40];   /**< @brief Event Name */
    epicsInt16          tse;        /**< @brief Time Stamp Event */
    DBLINK              tsel;       /**< @brief Time Stamp Link */
    epicsEnum16         dtyp;       /**< @brief Device Type */
    epicsInt16          disv;       /**< @brief Disable Value */
    epicsInt16          disa;       /**< @brief Disable */
    DBLINK              sdis;       /**< @brief Scanning Disable */
    epicsMutexId        mlok;       /**< @brief Monitor lock */
    ELLLIST             mlis;       /**< @brief Monitor List */
    ELLLIST             bklnk;      /**< @brief Backwards link tracking */
    epicsUInt8          disp;       /**< @brief Disable putField */
    epicsUInt8          proc;       /**< @brief Force Processing */
    epicsEnum16         stat;       /**< @brief Alarm Status */
    epicsEnum16         sevr;       /**< @brief Alarm Severity */
    char                amsg[40];   /**< @brief Alarm Message */
    epicsEnum16         nsta;       /**< @brief New Alarm Status */
    epicsEnum16         nsev;       /**< @brief New Alarm Severity */
    char                namsg[40];  /**< @brief New Alarm Message */
    epicsEnum16         acks;       /**< @brief Alarm Ack Severity */
    epicsEnum16         ackt;       /**< @brief Alarm Ack Transient */
    epicsEnum16         diss;       /**< @brief Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /**< @brief Lock Count */
    epicsUInt8          pact;       /**< @brief Record active */
    epicsUInt8          putf;       /**< @brief dbPutField process */
    epicsUInt8          rpro;       /**< @brief Reprocess  */
    struct asgMember    *asp;       /**< @brief Access Security Pvt */
    struct processNotify *ppn;      /**< @brief pprocessNotify */
    struct processNotifyRecord *ppnr; /**< @brief pprocessNotifyRecord */
    struct scan_element *spvt;      /**< @brief Scan Private */
    struct typed_rset   *rset;      /**< @brief Address of RSET */
    unambiguous_dset    *dset;      /**< @brief DSET address */
    void                *dpvt;      /**< @brief Device Private */
    struct dbRecordType *rdes;      /**< @brief Address of dbRecordType */
    struct lockRecord   *lset;      /**< @brief Lock Set */
    epicsEnum16         prio;       /**< @brief Scheduling Priority */
    epicsUInt8          tpro;       /**< @brief Trace Processing */
    epicsUInt8          bkpt;       /**< @brief Break Point */
    epicsUInt8          udf;        /**< @brief Undefined */
    epicsEnum16         udfs;       /**< @brief Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /**< @brief Time */
    epicsUInt64         utag;       /**< @brief Time Tag */
    DBLINK              flnk;       /**< @brief Forward Process Link */
    epicsFloat64        val;        /**< @brief Result */
    epicsEnum16         selm;       /**< @brief Select Mechanism */
    epicsUInt16         seln;       /**< @brief Index value */
    epicsInt16          prec;       /**< @brief Display Precision */
    DBLINK              nvl;        /**< @brief Index Value Location */
    DBLINK              inpa;       /**< @brief Input A */
    DBLINK              inpb;       /**< @brief Input B */
    DBLINK              inpc;       /**< @brief Input C */
    DBLINK              inpd;       /**< @brief Input D */
    DBLINK              inpe;       /**< @brief Input E */
    DBLINK              inpf;       /**< @brief Input F */
    DBLINK              inpg;       /**< @brief Input G */
    DBLINK              inph;       /**< @brief Input H */
    DBLINK              inpi;       /**< @brief Input I */
    DBLINK              inpj;       /**< @brief Input J */
    DBLINK              inpk;       /**< @brief Input K */
    DBLINK              inpl;       /**< @brief Input L */
    char                egu[16];    /**< @brief Engineering Units */
    epicsFloat64        hopr;       /**< @brief High Operating Rng */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsFloat64        hihi;       /**< @brief Hihi Alarm Limit */
    epicsFloat64        lolo;       /**< @brief Lolo Alarm Limit */
    epicsFloat64        high;       /**< @brief High Alarm Limit */
    epicsFloat64        low;        /**< @brief Low Alarm Limit */
    epicsEnum16         hhsv;       /**< @brief Hihi Severity */
    epicsEnum16         llsv;       /**< @brief Lolo Severity */
    epicsEnum16         hsv;        /**< @brief High Severity */
    epicsEnum16         lsv;        /**< @brief Low Severity */
    epicsFloat64        hyst;       /**< @brief Alarm Deadband */
    epicsFloat64        adel;       /**< @brief Archive Deadband */
    epicsFloat64        mdel;       /**< @brief Monitor Deadband */
    epicsFloat64        a;          /**< @brief Value of Input A */
    epicsFloat64        b;          /**< @brief Value of Input B */
    epicsFloat64        c;          /**< @brief Value of Input C */
    epicsFloat64        d;          /**< @brief Value of Input D */
    epicsFloat64        e;          /**< @brief Value of Input E */
    epicsFloat64        f;          /**< @brief Value of Input F */
    epicsFloat64        g;          /**< @brief Value of Input G */
    epicsFloat64        h;          /**< @brief Value of Input H */
    epicsFloat64        i;          /**< @brief Value of Input I */
    epicsFloat64        j;          /**< @brief Value of Input J */
    epicsFloat64        k;          /**< @brief Value of Input K */
    epicsFloat64        l;          /**< @brief Value of Input L */
    epicsFloat64        la;         /**< @brief Prev Value of A */
    epicsFloat64        lb;         /**< @brief Prev Value of B */
    epicsFloat64        lc;         /**< @brief Prev Value of C */
    epicsFloat64        ld;         /**< @brief Prev Value of D */
    epicsFloat64        le;         /**< @brief Prev Value of E */
    epicsFloat64        lf;         /**< @brief Prev Value of F */
    epicsFloat64        lg;         /**< @brief Prev Value of G */
    epicsFloat64        lh;         /**< @brief Prev Value of H */
    epicsFloat64        li;         /**< @brief Prev Value of I */
    epicsFloat64        lj;         /**< @brief Prev Value of J */
    epicsFloat64        lk;         /**< @brief Prev Value of K */
    epicsFloat64        ll;         /**< @brief Prev Value of L */
    epicsFloat64        lalm;       /**< @brief Last Value Alarmed */
    epicsFloat64        alst;       /**< @brief Last Value Archived */
    epicsFloat64        mlst;       /**< @brief Last Val Monitored */
    epicsUInt16         nlst;       /**< @brief Last Index Monitored */
} selRecord;

typedef enum {
	selRecordNAME = 0,
	selRecordDESC = 1,
	selRecordASG = 2,
	selRecordSCAN = 3,
	selRecordPINI = 4,
	selRecordPHAS = 5,
	selRecordEVNT = 6,
	selRecordTSE = 7,
	selRecordTSEL = 8,
	selRecordDTYP = 9,
	selRecordDISV = 10,
	selRecordDISA = 11,
	selRecordSDIS = 12,
	selRecordMLOK = 13,
	selRecordMLIS = 14,
	selRecordBKLNK = 15,
	selRecordDISP = 16,
	selRecordPROC = 17,
	selRecordSTAT = 18,
	selRecordSEVR = 19,
	selRecordAMSG = 20,
	selRecordNSTA = 21,
	selRecordNSEV = 22,
	selRecordNAMSG = 23,
	selRecordACKS = 24,
	selRecordACKT = 25,
	selRecordDISS = 26,
	selRecordLCNT = 27,
	selRecordPACT = 28,
	selRecordPUTF = 29,
	selRecordRPRO = 30,
	selRecordASP = 31,
	selRecordPPN = 32,
	selRecordPPNR = 33,
	selRecordSPVT = 34,
	selRecordRSET = 35,
	selRecordDSET = 36,
	selRecordDPVT = 37,
	selRecordRDES = 38,
	selRecordLSET = 39,
	selRecordPRIO = 40,
	selRecordTPRO = 41,
	selRecordBKPT = 42,
	selRecordUDF = 43,
	selRecordUDFS = 44,
	selRecordTIME = 45,
	selRecordUTAG = 46,
	selRecordFLNK = 47,
	selRecordVAL = 48,
	selRecordSELM = 49,
	selRecordSELN = 50,
	selRecordPREC = 51,
	selRecordNVL = 52,
	selRecordINPA = 53,
	selRecordINPB = 54,
	selRecordINPC = 55,
	selRecordINPD = 56,
	selRecordINPE = 57,
	selRecordINPF = 58,
	selRecordINPG = 59,
	selRecordINPH = 60,
	selRecordINPI = 61,
	selRecordINPJ = 62,
	selRecordINPK = 63,
	selRecordINPL = 64,
	selRecordEGU = 65,
	selRecordHOPR = 66,
	selRecordLOPR = 67,
	selRecordHIHI = 68,
	selRecordLOLO = 69,
	selRecordHIGH = 70,
	selRecordLOW = 71,
	selRecordHHSV = 72,
	selRecordLLSV = 73,
	selRecordHSV = 74,
	selRecordLSV = 75,
	selRecordHYST = 76,
	selRecordADEL = 77,
	selRecordMDEL = 78,
	selRecordA = 79,
	selRecordB = 80,
	selRecordC = 81,
	selRecordD = 82,
	selRecordE = 83,
	selRecordF = 84,
	selRecordG = 85,
	selRecordH = 86,
	selRecordI = 87,
	selRecordJ = 88,
	selRecordK = 89,
	selRecordL = 90,
	selRecordLA = 91,
	selRecordLB = 92,
	selRecordLC = 93,
	selRecordLD = 94,
	selRecordLE = 95,
	selRecordLF = 96,
	selRecordLG = 97,
	selRecordLH = 98,
	selRecordLI = 99,
	selRecordLJ = 100,
	selRecordLK = 101,
	selRecordLL = 102,
	selRecordLALM = 103,
	selRecordALST = 104,
	selRecordMLST = 105,
	selRecordNLST = 106
} selFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int selRecordSizeOffset(dbRecordType *prt)
{
    selRecord *prec = 0;

    if (prt->no_fields != 107) {
        cantProceed("IOC build or installation error:\n"
            "    The selRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 107.\n",
            prt->no_fields);
    }
    prt->papFldDes[selRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[selRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[selRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[selRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[selRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[selRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[selRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[selRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[selRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[selRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[selRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[selRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[selRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[selRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[selRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[selRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[selRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[selRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[selRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[selRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[selRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[selRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[selRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[selRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[selRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[selRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[selRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[selRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[selRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[selRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[selRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[selRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[selRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[selRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[selRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[selRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[selRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[selRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[selRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[selRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[selRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[selRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[selRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[selRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[selRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[selRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[selRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[selRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[selRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[selRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[selRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[selRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[selRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[selRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[selRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[selRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[selRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[selRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[selRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[selRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[selRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[selRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[selRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[selRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[selRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[selRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[selRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[selRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[selRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[selRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[selRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[selRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[selRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[selRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[selRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[selRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[selRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[selRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[selRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[selRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[selRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[selRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[selRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[selRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[selRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[selRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[selRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[selRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[selRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[selRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[selRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[selRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[selRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[selRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[selRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[selRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[selRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[selRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[selRecordSELM]->size = sizeof(prec->selm);
    prt->papFldDes[selRecordSELM]->offset = (unsigned short)((char *)&prec->selm - (char *)prec);
    prt->papFldDes[selRecordSELN]->size = sizeof(prec->seln);
    prt->papFldDes[selRecordSELN]->offset = (unsigned short)((char *)&prec->seln - (char *)prec);
    prt->papFldDes[selRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[selRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[selRecordNVL]->size = sizeof(prec->nvl);
    prt->papFldDes[selRecordNVL]->offset = (unsigned short)((char *)&prec->nvl - (char *)prec);
    prt->papFldDes[selRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[selRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[selRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[selRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[selRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[selRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[selRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[selRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[selRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[selRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[selRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[selRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[selRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[selRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[selRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[selRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[selRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[selRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[selRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[selRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[selRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[selRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[selRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[selRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[selRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[selRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[selRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[selRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[selRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[selRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[selRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[selRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[selRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[selRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[selRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[selRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[selRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[selRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[selRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[selRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[selRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[selRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[selRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[selRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[selRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[selRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[selRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[selRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[selRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[selRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[selRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[selRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[selRecordA]->size = sizeof(prec->a);
    prt->papFldDes[selRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[selRecordB]->size = sizeof(prec->b);
    prt->papFldDes[selRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[selRecordC]->size = sizeof(prec->c);
    prt->papFldDes[selRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[selRecordD]->size = sizeof(prec->d);
    prt->papFldDes[selRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[selRecordE]->size = sizeof(prec->e);
    prt->papFldDes[selRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[selRecordF]->size = sizeof(prec->f);
    prt->papFldDes[selRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[selRecordG]->size = sizeof(prec->g);
    prt->papFldDes[selRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[selRecordH]->size = sizeof(prec->h);
    prt->papFldDes[selRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[selRecordI]->size = sizeof(prec->i);
    prt->papFldDes[selRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[selRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[selRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[selRecordK]->size = sizeof(prec->k);
    prt->papFldDes[selRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[selRecordL]->size = sizeof(prec->l);
    prt->papFldDes[selRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[selRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[selRecordLA]->offset = (unsigned short)((char *)&prec->la - (char *)prec);
    prt->papFldDes[selRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[selRecordLB]->offset = (unsigned short)((char *)&prec->lb - (char *)prec);
    prt->papFldDes[selRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[selRecordLC]->offset = (unsigned short)((char *)&prec->lc - (char *)prec);
    prt->papFldDes[selRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[selRecordLD]->offset = (unsigned short)((char *)&prec->ld - (char *)prec);
    prt->papFldDes[selRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[selRecordLE]->offset = (unsigned short)((char *)&prec->le - (char *)prec);
    prt->papFldDes[selRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[selRecordLF]->offset = (unsigned short)((char *)&prec->lf - (char *)prec);
    prt->papFldDes[selRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[selRecordLG]->offset = (unsigned short)((char *)&prec->lg - (char *)prec);
    prt->papFldDes[selRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[selRecordLH]->offset = (unsigned short)((char *)&prec->lh - (char *)prec);
    prt->papFldDes[selRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[selRecordLI]->offset = (unsigned short)((char *)&prec->li - (char *)prec);
    prt->papFldDes[selRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[selRecordLJ]->offset = (unsigned short)((char *)&prec->lj - (char *)prec);
    prt->papFldDes[selRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[selRecordLK]->offset = (unsigned short)((char *)&prec->lk - (char *)prec);
    prt->papFldDes[selRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[selRecordLL]->offset = (unsigned short)((char *)&prec->ll - (char *)prec);
    prt->papFldDes[selRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[selRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[selRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[selRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[selRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[selRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[selRecordNLST]->size = sizeof(prec->nlst);
    prt->papFldDes[selRecordNLST]->offset = (unsigned short)((char *)&prec->nlst - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(selRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_selRecord_H */
