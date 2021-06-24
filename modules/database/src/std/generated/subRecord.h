/** @file subRecord.h
 * @brief Declarations for the @ref subRecord "sub" record type.
 *
 * This header was generated from subRecord.dbd
 */

#ifndef INC_subRecord_H
#define INC_subRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
struct subRecord;
typedef long (*SUBFUNCPTR)(struct subRecord *);

/** @brief Declaration of sub record type. */
typedef struct subRecord {
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
    char                inam[40];   /**< @brief Init Routine Name */
    char                snam[40];   /**< @brief Subroutine Name */
    SUBFUNCPTR sadr;                /**< @brief Subroutine Address */
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
    epicsFloat64        hopr;       /**< @brief High Operating Range */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsFloat64        hihi;       /**< @brief Hihi Alarm Limit */
    epicsFloat64        lolo;       /**< @brief Lolo Alarm Limit */
    epicsFloat64        high;       /**< @brief High Alarm Limit */
    epicsFloat64        low;        /**< @brief Low Alarm Limit */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsEnum16         brsv;       /**< @brief Bad Return Severity */
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
    epicsFloat64        mlst;       /**< @brief Last Value Monitored */
} subRecord;

typedef enum {
	subRecordNAME = 0,
	subRecordDESC = 1,
	subRecordASG = 2,
	subRecordSCAN = 3,
	subRecordPINI = 4,
	subRecordPHAS = 5,
	subRecordEVNT = 6,
	subRecordTSE = 7,
	subRecordTSEL = 8,
	subRecordDTYP = 9,
	subRecordDISV = 10,
	subRecordDISA = 11,
	subRecordSDIS = 12,
	subRecordMLOK = 13,
	subRecordMLIS = 14,
	subRecordBKLNK = 15,
	subRecordDISP = 16,
	subRecordPROC = 17,
	subRecordSTAT = 18,
	subRecordSEVR = 19,
	subRecordAMSG = 20,
	subRecordNSTA = 21,
	subRecordNSEV = 22,
	subRecordNAMSG = 23,
	subRecordACKS = 24,
	subRecordACKT = 25,
	subRecordDISS = 26,
	subRecordLCNT = 27,
	subRecordPACT = 28,
	subRecordPUTF = 29,
	subRecordRPRO = 30,
	subRecordASP = 31,
	subRecordPPN = 32,
	subRecordPPNR = 33,
	subRecordSPVT = 34,
	subRecordRSET = 35,
	subRecordDSET = 36,
	subRecordDPVT = 37,
	subRecordRDES = 38,
	subRecordLSET = 39,
	subRecordPRIO = 40,
	subRecordTPRO = 41,
	subRecordBKPT = 42,
	subRecordUDF = 43,
	subRecordUDFS = 44,
	subRecordTIME = 45,
	subRecordUTAG = 46,
	subRecordFLNK = 47,
	subRecordVAL = 48,
	subRecordINAM = 49,
	subRecordSNAM = 50,
	subRecordSADR = 51,
	subRecordINPA = 52,
	subRecordINPB = 53,
	subRecordINPC = 54,
	subRecordINPD = 55,
	subRecordINPE = 56,
	subRecordINPF = 57,
	subRecordINPG = 58,
	subRecordINPH = 59,
	subRecordINPI = 60,
	subRecordINPJ = 61,
	subRecordINPK = 62,
	subRecordINPL = 63,
	subRecordEGU = 64,
	subRecordHOPR = 65,
	subRecordLOPR = 66,
	subRecordHIHI = 67,
	subRecordLOLO = 68,
	subRecordHIGH = 69,
	subRecordLOW = 70,
	subRecordPREC = 71,
	subRecordBRSV = 72,
	subRecordHHSV = 73,
	subRecordLLSV = 74,
	subRecordHSV = 75,
	subRecordLSV = 76,
	subRecordHYST = 77,
	subRecordADEL = 78,
	subRecordMDEL = 79,
	subRecordA = 80,
	subRecordB = 81,
	subRecordC = 82,
	subRecordD = 83,
	subRecordE = 84,
	subRecordF = 85,
	subRecordG = 86,
	subRecordH = 87,
	subRecordI = 88,
	subRecordJ = 89,
	subRecordK = 90,
	subRecordL = 91,
	subRecordLA = 92,
	subRecordLB = 93,
	subRecordLC = 94,
	subRecordLD = 95,
	subRecordLE = 96,
	subRecordLF = 97,
	subRecordLG = 98,
	subRecordLH = 99,
	subRecordLI = 100,
	subRecordLJ = 101,
	subRecordLK = 102,
	subRecordLL = 103,
	subRecordLALM = 104,
	subRecordALST = 105,
	subRecordMLST = 106
} subFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int subRecordSizeOffset(dbRecordType *prt)
{
    subRecord *prec = 0;

    if (prt->no_fields != 107) {
        cantProceed("IOC build or installation error:\n"
            "    The subRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 107.\n",
            prt->no_fields);
    }
    prt->papFldDes[subRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[subRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[subRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[subRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[subRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[subRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[subRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[subRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[subRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[subRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[subRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[subRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[subRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[subRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[subRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[subRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[subRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[subRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[subRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[subRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[subRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[subRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[subRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[subRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[subRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[subRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[subRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[subRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[subRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[subRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[subRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[subRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[subRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[subRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[subRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[subRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[subRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[subRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[subRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[subRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[subRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[subRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[subRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[subRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[subRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[subRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[subRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[subRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[subRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[subRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[subRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[subRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[subRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[subRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[subRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[subRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[subRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[subRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[subRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[subRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[subRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[subRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[subRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[subRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[subRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[subRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[subRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[subRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[subRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[subRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[subRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[subRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[subRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[subRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[subRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[subRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[subRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[subRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[subRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[subRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[subRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[subRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[subRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[subRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[subRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[subRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[subRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[subRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[subRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[subRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[subRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[subRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[subRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[subRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[subRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[subRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[subRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[subRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[subRecordINAM]->size = sizeof(prec->inam);
    prt->papFldDes[subRecordINAM]->offset = (unsigned short)((char *)&prec->inam - (char *)prec);
    prt->papFldDes[subRecordSNAM]->size = sizeof(prec->snam);
    prt->papFldDes[subRecordSNAM]->offset = (unsigned short)((char *)&prec->snam - (char *)prec);
    prt->papFldDes[subRecordSADR]->size = sizeof(prec->sadr);
    prt->papFldDes[subRecordSADR]->offset = (unsigned short)((char *)&prec->sadr - (char *)prec);
    prt->papFldDes[subRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[subRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[subRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[subRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[subRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[subRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[subRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[subRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[subRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[subRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[subRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[subRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[subRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[subRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[subRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[subRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[subRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[subRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[subRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[subRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[subRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[subRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[subRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[subRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[subRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[subRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[subRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[subRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[subRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[subRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[subRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[subRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[subRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[subRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[subRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[subRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[subRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[subRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[subRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[subRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[subRecordBRSV]->size = sizeof(prec->brsv);
    prt->papFldDes[subRecordBRSV]->offset = (unsigned short)((char *)&prec->brsv - (char *)prec);
    prt->papFldDes[subRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[subRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[subRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[subRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[subRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[subRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[subRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[subRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[subRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[subRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[subRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[subRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[subRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[subRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[subRecordA]->size = sizeof(prec->a);
    prt->papFldDes[subRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[subRecordB]->size = sizeof(prec->b);
    prt->papFldDes[subRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[subRecordC]->size = sizeof(prec->c);
    prt->papFldDes[subRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[subRecordD]->size = sizeof(prec->d);
    prt->papFldDes[subRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[subRecordE]->size = sizeof(prec->e);
    prt->papFldDes[subRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[subRecordF]->size = sizeof(prec->f);
    prt->papFldDes[subRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[subRecordG]->size = sizeof(prec->g);
    prt->papFldDes[subRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[subRecordH]->size = sizeof(prec->h);
    prt->papFldDes[subRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[subRecordI]->size = sizeof(prec->i);
    prt->papFldDes[subRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[subRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[subRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[subRecordK]->size = sizeof(prec->k);
    prt->papFldDes[subRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[subRecordL]->size = sizeof(prec->l);
    prt->papFldDes[subRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[subRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[subRecordLA]->offset = (unsigned short)((char *)&prec->la - (char *)prec);
    prt->papFldDes[subRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[subRecordLB]->offset = (unsigned short)((char *)&prec->lb - (char *)prec);
    prt->papFldDes[subRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[subRecordLC]->offset = (unsigned short)((char *)&prec->lc - (char *)prec);
    prt->papFldDes[subRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[subRecordLD]->offset = (unsigned short)((char *)&prec->ld - (char *)prec);
    prt->papFldDes[subRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[subRecordLE]->offset = (unsigned short)((char *)&prec->le - (char *)prec);
    prt->papFldDes[subRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[subRecordLF]->offset = (unsigned short)((char *)&prec->lf - (char *)prec);
    prt->papFldDes[subRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[subRecordLG]->offset = (unsigned short)((char *)&prec->lg - (char *)prec);
    prt->papFldDes[subRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[subRecordLH]->offset = (unsigned short)((char *)&prec->lh - (char *)prec);
    prt->papFldDes[subRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[subRecordLI]->offset = (unsigned short)((char *)&prec->li - (char *)prec);
    prt->papFldDes[subRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[subRecordLJ]->offset = (unsigned short)((char *)&prec->lj - (char *)prec);
    prt->papFldDes[subRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[subRecordLK]->offset = (unsigned short)((char *)&prec->lk - (char *)prec);
    prt->papFldDes[subRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[subRecordLL]->offset = (unsigned short)((char *)&prec->ll - (char *)prec);
    prt->papFldDes[subRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[subRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[subRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[subRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[subRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[subRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(subRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_subRecord_H */
