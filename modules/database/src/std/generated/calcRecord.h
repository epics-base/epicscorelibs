/** @file calcRecord.h
 * @brief Declarations for the @ref calcRecord "calc" record type.
 *
 * This header was generated from calcRecord.dbd
 */

#ifndef INC_calcRecord_H
#define INC_calcRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
#include "postfix.h"

/** @brief Declaration of calc record type. */
typedef struct calcRecord {
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
    char                calc[80];   /**< @brief Calculation */
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
    epicsInt16          prec;       /**< @brief Display Precision */
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
    epicsFloat64        aftc;       /**< @brief Alarm Filter Time Constant */
    epicsFloat64        afvl;       /**< @brief Alarm Filter Value */
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
    char	rpcl[INFIX_TO_POSTFIX_SIZE(80)]; /**< @brief Reverse Polish Calc */
} calcRecord;

typedef enum {
	calcRecordNAME = 0,
	calcRecordDESC = 1,
	calcRecordASG = 2,
	calcRecordSCAN = 3,
	calcRecordPINI = 4,
	calcRecordPHAS = 5,
	calcRecordEVNT = 6,
	calcRecordTSE = 7,
	calcRecordTSEL = 8,
	calcRecordDTYP = 9,
	calcRecordDISV = 10,
	calcRecordDISA = 11,
	calcRecordSDIS = 12,
	calcRecordMLOK = 13,
	calcRecordMLIS = 14,
	calcRecordBKLNK = 15,
	calcRecordDISP = 16,
	calcRecordPROC = 17,
	calcRecordSTAT = 18,
	calcRecordSEVR = 19,
	calcRecordAMSG = 20,
	calcRecordNSTA = 21,
	calcRecordNSEV = 22,
	calcRecordNAMSG = 23,
	calcRecordACKS = 24,
	calcRecordACKT = 25,
	calcRecordDISS = 26,
	calcRecordLCNT = 27,
	calcRecordPACT = 28,
	calcRecordPUTF = 29,
	calcRecordRPRO = 30,
	calcRecordASP = 31,
	calcRecordPPN = 32,
	calcRecordPPNR = 33,
	calcRecordSPVT = 34,
	calcRecordRSET = 35,
	calcRecordDSET = 36,
	calcRecordDPVT = 37,
	calcRecordRDES = 38,
	calcRecordLSET = 39,
	calcRecordPRIO = 40,
	calcRecordTPRO = 41,
	calcRecordBKPT = 42,
	calcRecordUDF = 43,
	calcRecordUDFS = 44,
	calcRecordTIME = 45,
	calcRecordUTAG = 46,
	calcRecordFLNK = 47,
	calcRecordVAL = 48,
	calcRecordCALC = 49,
	calcRecordINPA = 50,
	calcRecordINPB = 51,
	calcRecordINPC = 52,
	calcRecordINPD = 53,
	calcRecordINPE = 54,
	calcRecordINPF = 55,
	calcRecordINPG = 56,
	calcRecordINPH = 57,
	calcRecordINPI = 58,
	calcRecordINPJ = 59,
	calcRecordINPK = 60,
	calcRecordINPL = 61,
	calcRecordEGU = 62,
	calcRecordPREC = 63,
	calcRecordHOPR = 64,
	calcRecordLOPR = 65,
	calcRecordHIHI = 66,
	calcRecordLOLO = 67,
	calcRecordHIGH = 68,
	calcRecordLOW = 69,
	calcRecordHHSV = 70,
	calcRecordLLSV = 71,
	calcRecordHSV = 72,
	calcRecordLSV = 73,
	calcRecordAFTC = 74,
	calcRecordAFVL = 75,
	calcRecordHYST = 76,
	calcRecordADEL = 77,
	calcRecordMDEL = 78,
	calcRecordA = 79,
	calcRecordB = 80,
	calcRecordC = 81,
	calcRecordD = 82,
	calcRecordE = 83,
	calcRecordF = 84,
	calcRecordG = 85,
	calcRecordH = 86,
	calcRecordI = 87,
	calcRecordJ = 88,
	calcRecordK = 89,
	calcRecordL = 90,
	calcRecordLA = 91,
	calcRecordLB = 92,
	calcRecordLC = 93,
	calcRecordLD = 94,
	calcRecordLE = 95,
	calcRecordLF = 96,
	calcRecordLG = 97,
	calcRecordLH = 98,
	calcRecordLI = 99,
	calcRecordLJ = 100,
	calcRecordLK = 101,
	calcRecordLL = 102,
	calcRecordLALM = 103,
	calcRecordALST = 104,
	calcRecordMLST = 105,
	calcRecordRPCL = 106
} calcFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int calcRecordSizeOffset(dbRecordType *prt)
{
    calcRecord *prec = 0;

    if (prt->no_fields != 107) {
        cantProceed("IOC build or installation error:\n"
            "    The calcRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 107.\n",
            prt->no_fields);
    }
    prt->papFldDes[calcRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[calcRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[calcRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[calcRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[calcRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[calcRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[calcRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[calcRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[calcRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[calcRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[calcRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[calcRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[calcRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[calcRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[calcRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[calcRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[calcRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[calcRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[calcRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[calcRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[calcRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[calcRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[calcRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[calcRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[calcRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[calcRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[calcRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[calcRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[calcRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[calcRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[calcRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[calcRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[calcRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[calcRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[calcRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[calcRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[calcRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[calcRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[calcRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[calcRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[calcRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[calcRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[calcRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[calcRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[calcRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[calcRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[calcRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[calcRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[calcRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[calcRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[calcRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[calcRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[calcRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[calcRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[calcRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[calcRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[calcRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[calcRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[calcRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[calcRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[calcRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[calcRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[calcRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[calcRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[calcRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[calcRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[calcRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[calcRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[calcRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[calcRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[calcRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[calcRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[calcRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[calcRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[calcRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[calcRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[calcRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[calcRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[calcRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[calcRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[calcRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[calcRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[calcRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[calcRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[calcRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[calcRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[calcRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[calcRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[calcRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[calcRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[calcRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[calcRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[calcRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[calcRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[calcRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[calcRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[calcRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[calcRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[calcRecordCALC]->size = sizeof(prec->calc);
    prt->papFldDes[calcRecordCALC]->offset = (unsigned short)((char *)&prec->calc - (char *)prec);
    prt->papFldDes[calcRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[calcRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[calcRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[calcRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[calcRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[calcRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[calcRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[calcRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[calcRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[calcRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[calcRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[calcRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[calcRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[calcRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[calcRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[calcRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[calcRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[calcRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[calcRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[calcRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[calcRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[calcRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[calcRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[calcRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[calcRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[calcRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[calcRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[calcRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[calcRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[calcRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[calcRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[calcRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[calcRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[calcRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[calcRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[calcRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[calcRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[calcRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[calcRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[calcRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[calcRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[calcRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[calcRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[calcRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[calcRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[calcRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[calcRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[calcRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[calcRecordAFTC]->size = sizeof(prec->aftc);
    prt->papFldDes[calcRecordAFTC]->offset = (unsigned short)((char *)&prec->aftc - (char *)prec);
    prt->papFldDes[calcRecordAFVL]->size = sizeof(prec->afvl);
    prt->papFldDes[calcRecordAFVL]->offset = (unsigned short)((char *)&prec->afvl - (char *)prec);
    prt->papFldDes[calcRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[calcRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[calcRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[calcRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[calcRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[calcRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[calcRecordA]->size = sizeof(prec->a);
    prt->papFldDes[calcRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[calcRecordB]->size = sizeof(prec->b);
    prt->papFldDes[calcRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[calcRecordC]->size = sizeof(prec->c);
    prt->papFldDes[calcRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[calcRecordD]->size = sizeof(prec->d);
    prt->papFldDes[calcRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[calcRecordE]->size = sizeof(prec->e);
    prt->papFldDes[calcRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[calcRecordF]->size = sizeof(prec->f);
    prt->papFldDes[calcRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[calcRecordG]->size = sizeof(prec->g);
    prt->papFldDes[calcRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[calcRecordH]->size = sizeof(prec->h);
    prt->papFldDes[calcRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[calcRecordI]->size = sizeof(prec->i);
    prt->papFldDes[calcRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[calcRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[calcRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[calcRecordK]->size = sizeof(prec->k);
    prt->papFldDes[calcRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[calcRecordL]->size = sizeof(prec->l);
    prt->papFldDes[calcRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[calcRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[calcRecordLA]->offset = (unsigned short)((char *)&prec->la - (char *)prec);
    prt->papFldDes[calcRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[calcRecordLB]->offset = (unsigned short)((char *)&prec->lb - (char *)prec);
    prt->papFldDes[calcRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[calcRecordLC]->offset = (unsigned short)((char *)&prec->lc - (char *)prec);
    prt->papFldDes[calcRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[calcRecordLD]->offset = (unsigned short)((char *)&prec->ld - (char *)prec);
    prt->papFldDes[calcRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[calcRecordLE]->offset = (unsigned short)((char *)&prec->le - (char *)prec);
    prt->papFldDes[calcRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[calcRecordLF]->offset = (unsigned short)((char *)&prec->lf - (char *)prec);
    prt->papFldDes[calcRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[calcRecordLG]->offset = (unsigned short)((char *)&prec->lg - (char *)prec);
    prt->papFldDes[calcRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[calcRecordLH]->offset = (unsigned short)((char *)&prec->lh - (char *)prec);
    prt->papFldDes[calcRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[calcRecordLI]->offset = (unsigned short)((char *)&prec->li - (char *)prec);
    prt->papFldDes[calcRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[calcRecordLJ]->offset = (unsigned short)((char *)&prec->lj - (char *)prec);
    prt->papFldDes[calcRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[calcRecordLK]->offset = (unsigned short)((char *)&prec->lk - (char *)prec);
    prt->papFldDes[calcRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[calcRecordLL]->offset = (unsigned short)((char *)&prec->ll - (char *)prec);
    prt->papFldDes[calcRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[calcRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[calcRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[calcRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[calcRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[calcRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[calcRecordRPCL]->size = sizeof(prec->rpcl);
    prt->papFldDes[calcRecordRPCL]->offset = (unsigned short)((char *)&prec->rpcl - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(calcRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_calcRecord_H */
