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
    prt->papFldDes[subRecordNAME]->offset = (unsigned short)offsetof(subRecord, name);
    prt->papFldDes[subRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[subRecordDESC]->offset = (unsigned short)offsetof(subRecord, desc);
    prt->papFldDes[subRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[subRecordASG]->offset = (unsigned short)offsetof(subRecord, asg);
    prt->papFldDes[subRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[subRecordSCAN]->offset = (unsigned short)offsetof(subRecord, scan);
    prt->papFldDes[subRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[subRecordPINI]->offset = (unsigned short)offsetof(subRecord, pini);
    prt->papFldDes[subRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[subRecordPHAS]->offset = (unsigned short)offsetof(subRecord, phas);
    prt->papFldDes[subRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[subRecordEVNT]->offset = (unsigned short)offsetof(subRecord, evnt);
    prt->papFldDes[subRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[subRecordTSE]->offset = (unsigned short)offsetof(subRecord, tse);
    prt->papFldDes[subRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[subRecordTSEL]->offset = (unsigned short)offsetof(subRecord, tsel);
    prt->papFldDes[subRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[subRecordDTYP]->offset = (unsigned short)offsetof(subRecord, dtyp);
    prt->papFldDes[subRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[subRecordDISV]->offset = (unsigned short)offsetof(subRecord, disv);
    prt->papFldDes[subRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[subRecordDISA]->offset = (unsigned short)offsetof(subRecord, disa);
    prt->papFldDes[subRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[subRecordSDIS]->offset = (unsigned short)offsetof(subRecord, sdis);
    prt->papFldDes[subRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[subRecordMLOK]->offset = (unsigned short)offsetof(subRecord, mlok);
    prt->papFldDes[subRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[subRecordMLIS]->offset = (unsigned short)offsetof(subRecord, mlis);
    prt->papFldDes[subRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[subRecordBKLNK]->offset = (unsigned short)offsetof(subRecord, bklnk);
    prt->papFldDes[subRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[subRecordDISP]->offset = (unsigned short)offsetof(subRecord, disp);
    prt->papFldDes[subRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[subRecordPROC]->offset = (unsigned short)offsetof(subRecord, proc);
    prt->papFldDes[subRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[subRecordSTAT]->offset = (unsigned short)offsetof(subRecord, stat);
    prt->papFldDes[subRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[subRecordSEVR]->offset = (unsigned short)offsetof(subRecord, sevr);
    prt->papFldDes[subRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[subRecordAMSG]->offset = (unsigned short)offsetof(subRecord, amsg);
    prt->papFldDes[subRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[subRecordNSTA]->offset = (unsigned short)offsetof(subRecord, nsta);
    prt->papFldDes[subRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[subRecordNSEV]->offset = (unsigned short)offsetof(subRecord, nsev);
    prt->papFldDes[subRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[subRecordNAMSG]->offset = (unsigned short)offsetof(subRecord, namsg);
    prt->papFldDes[subRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[subRecordACKS]->offset = (unsigned short)offsetof(subRecord, acks);
    prt->papFldDes[subRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[subRecordACKT]->offset = (unsigned short)offsetof(subRecord, ackt);
    prt->papFldDes[subRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[subRecordDISS]->offset = (unsigned short)offsetof(subRecord, diss);
    prt->papFldDes[subRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[subRecordLCNT]->offset = (unsigned short)offsetof(subRecord, lcnt);
    prt->papFldDes[subRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[subRecordPACT]->offset = (unsigned short)offsetof(subRecord, pact);
    prt->papFldDes[subRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[subRecordPUTF]->offset = (unsigned short)offsetof(subRecord, putf);
    prt->papFldDes[subRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[subRecordRPRO]->offset = (unsigned short)offsetof(subRecord, rpro);
    prt->papFldDes[subRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[subRecordASP]->offset = (unsigned short)offsetof(subRecord, asp);
    prt->papFldDes[subRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[subRecordPPN]->offset = (unsigned short)offsetof(subRecord, ppn);
    prt->papFldDes[subRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[subRecordPPNR]->offset = (unsigned short)offsetof(subRecord, ppnr);
    prt->papFldDes[subRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[subRecordSPVT]->offset = (unsigned short)offsetof(subRecord, spvt);
    prt->papFldDes[subRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[subRecordRSET]->offset = (unsigned short)offsetof(subRecord, rset);
    prt->papFldDes[subRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[subRecordDSET]->offset = (unsigned short)offsetof(subRecord, dset);
    prt->papFldDes[subRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[subRecordDPVT]->offset = (unsigned short)offsetof(subRecord, dpvt);
    prt->papFldDes[subRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[subRecordRDES]->offset = (unsigned short)offsetof(subRecord, rdes);
    prt->papFldDes[subRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[subRecordLSET]->offset = (unsigned short)offsetof(subRecord, lset);
    prt->papFldDes[subRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[subRecordPRIO]->offset = (unsigned short)offsetof(subRecord, prio);
    prt->papFldDes[subRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[subRecordTPRO]->offset = (unsigned short)offsetof(subRecord, tpro);
    prt->papFldDes[subRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[subRecordBKPT]->offset = (unsigned short)offsetof(subRecord, bkpt);
    prt->papFldDes[subRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[subRecordUDF]->offset = (unsigned short)offsetof(subRecord, udf);
    prt->papFldDes[subRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[subRecordUDFS]->offset = (unsigned short)offsetof(subRecord, udfs);
    prt->papFldDes[subRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[subRecordTIME]->offset = (unsigned short)offsetof(subRecord, time);
    prt->papFldDes[subRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[subRecordUTAG]->offset = (unsigned short)offsetof(subRecord, utag);
    prt->papFldDes[subRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[subRecordFLNK]->offset = (unsigned short)offsetof(subRecord, flnk);
    prt->papFldDes[subRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[subRecordVAL]->offset = (unsigned short)offsetof(subRecord, val);
    prt->papFldDes[subRecordINAM]->size = sizeof(prec->inam);
    prt->papFldDes[subRecordINAM]->offset = (unsigned short)offsetof(subRecord, inam);
    prt->papFldDes[subRecordSNAM]->size = sizeof(prec->snam);
    prt->papFldDes[subRecordSNAM]->offset = (unsigned short)offsetof(subRecord, snam);
    prt->papFldDes[subRecordSADR]->size = sizeof(prec->sadr);
    prt->papFldDes[subRecordSADR]->offset = (unsigned short)offsetof(subRecord, sadr);
    prt->papFldDes[subRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[subRecordINPA]->offset = (unsigned short)offsetof(subRecord, inpa);
    prt->papFldDes[subRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[subRecordINPB]->offset = (unsigned short)offsetof(subRecord, inpb);
    prt->papFldDes[subRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[subRecordINPC]->offset = (unsigned short)offsetof(subRecord, inpc);
    prt->papFldDes[subRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[subRecordINPD]->offset = (unsigned short)offsetof(subRecord, inpd);
    prt->papFldDes[subRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[subRecordINPE]->offset = (unsigned short)offsetof(subRecord, inpe);
    prt->papFldDes[subRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[subRecordINPF]->offset = (unsigned short)offsetof(subRecord, inpf);
    prt->papFldDes[subRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[subRecordINPG]->offset = (unsigned short)offsetof(subRecord, inpg);
    prt->papFldDes[subRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[subRecordINPH]->offset = (unsigned short)offsetof(subRecord, inph);
    prt->papFldDes[subRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[subRecordINPI]->offset = (unsigned short)offsetof(subRecord, inpi);
    prt->papFldDes[subRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[subRecordINPJ]->offset = (unsigned short)offsetof(subRecord, inpj);
    prt->papFldDes[subRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[subRecordINPK]->offset = (unsigned short)offsetof(subRecord, inpk);
    prt->papFldDes[subRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[subRecordINPL]->offset = (unsigned short)offsetof(subRecord, inpl);
    prt->papFldDes[subRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[subRecordEGU]->offset = (unsigned short)offsetof(subRecord, egu);
    prt->papFldDes[subRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[subRecordHOPR]->offset = (unsigned short)offsetof(subRecord, hopr);
    prt->papFldDes[subRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[subRecordLOPR]->offset = (unsigned short)offsetof(subRecord, lopr);
    prt->papFldDes[subRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[subRecordHIHI]->offset = (unsigned short)offsetof(subRecord, hihi);
    prt->papFldDes[subRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[subRecordLOLO]->offset = (unsigned short)offsetof(subRecord, lolo);
    prt->papFldDes[subRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[subRecordHIGH]->offset = (unsigned short)offsetof(subRecord, high);
    prt->papFldDes[subRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[subRecordLOW]->offset = (unsigned short)offsetof(subRecord, low);
    prt->papFldDes[subRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[subRecordPREC]->offset = (unsigned short)offsetof(subRecord, prec);
    prt->papFldDes[subRecordBRSV]->size = sizeof(prec->brsv);
    prt->papFldDes[subRecordBRSV]->offset = (unsigned short)offsetof(subRecord, brsv);
    prt->papFldDes[subRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[subRecordHHSV]->offset = (unsigned short)offsetof(subRecord, hhsv);
    prt->papFldDes[subRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[subRecordLLSV]->offset = (unsigned short)offsetof(subRecord, llsv);
    prt->papFldDes[subRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[subRecordHSV]->offset = (unsigned short)offsetof(subRecord, hsv);
    prt->papFldDes[subRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[subRecordLSV]->offset = (unsigned short)offsetof(subRecord, lsv);
    prt->papFldDes[subRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[subRecordHYST]->offset = (unsigned short)offsetof(subRecord, hyst);
    prt->papFldDes[subRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[subRecordADEL]->offset = (unsigned short)offsetof(subRecord, adel);
    prt->papFldDes[subRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[subRecordMDEL]->offset = (unsigned short)offsetof(subRecord, mdel);
    prt->papFldDes[subRecordA]->size = sizeof(prec->a);
    prt->papFldDes[subRecordA]->offset = (unsigned short)offsetof(subRecord, a);
    prt->papFldDes[subRecordB]->size = sizeof(prec->b);
    prt->papFldDes[subRecordB]->offset = (unsigned short)offsetof(subRecord, b);
    prt->papFldDes[subRecordC]->size = sizeof(prec->c);
    prt->papFldDes[subRecordC]->offset = (unsigned short)offsetof(subRecord, c);
    prt->papFldDes[subRecordD]->size = sizeof(prec->d);
    prt->papFldDes[subRecordD]->offset = (unsigned short)offsetof(subRecord, d);
    prt->papFldDes[subRecordE]->size = sizeof(prec->e);
    prt->papFldDes[subRecordE]->offset = (unsigned short)offsetof(subRecord, e);
    prt->papFldDes[subRecordF]->size = sizeof(prec->f);
    prt->papFldDes[subRecordF]->offset = (unsigned short)offsetof(subRecord, f);
    prt->papFldDes[subRecordG]->size = sizeof(prec->g);
    prt->papFldDes[subRecordG]->offset = (unsigned short)offsetof(subRecord, g);
    prt->papFldDes[subRecordH]->size = sizeof(prec->h);
    prt->papFldDes[subRecordH]->offset = (unsigned short)offsetof(subRecord, h);
    prt->papFldDes[subRecordI]->size = sizeof(prec->i);
    prt->papFldDes[subRecordI]->offset = (unsigned short)offsetof(subRecord, i);
    prt->papFldDes[subRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[subRecordJ]->offset = (unsigned short)offsetof(subRecord, j);
    prt->papFldDes[subRecordK]->size = sizeof(prec->k);
    prt->papFldDes[subRecordK]->offset = (unsigned short)offsetof(subRecord, k);
    prt->papFldDes[subRecordL]->size = sizeof(prec->l);
    prt->papFldDes[subRecordL]->offset = (unsigned short)offsetof(subRecord, l);
    prt->papFldDes[subRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[subRecordLA]->offset = (unsigned short)offsetof(subRecord, la);
    prt->papFldDes[subRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[subRecordLB]->offset = (unsigned short)offsetof(subRecord, lb);
    prt->papFldDes[subRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[subRecordLC]->offset = (unsigned short)offsetof(subRecord, lc);
    prt->papFldDes[subRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[subRecordLD]->offset = (unsigned short)offsetof(subRecord, ld);
    prt->papFldDes[subRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[subRecordLE]->offset = (unsigned short)offsetof(subRecord, le);
    prt->papFldDes[subRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[subRecordLF]->offset = (unsigned short)offsetof(subRecord, lf);
    prt->papFldDes[subRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[subRecordLG]->offset = (unsigned short)offsetof(subRecord, lg);
    prt->papFldDes[subRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[subRecordLH]->offset = (unsigned short)offsetof(subRecord, lh);
    prt->papFldDes[subRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[subRecordLI]->offset = (unsigned short)offsetof(subRecord, li);
    prt->papFldDes[subRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[subRecordLJ]->offset = (unsigned short)offsetof(subRecord, lj);
    prt->papFldDes[subRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[subRecordLK]->offset = (unsigned short)offsetof(subRecord, lk);
    prt->papFldDes[subRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[subRecordLL]->offset = (unsigned short)offsetof(subRecord, ll);
    prt->papFldDes[subRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[subRecordLALM]->offset = (unsigned short)offsetof(subRecord, lalm);
    prt->papFldDes[subRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[subRecordALST]->offset = (unsigned short)offsetof(subRecord, alst);
    prt->papFldDes[subRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[subRecordMLST]->offset = (unsigned short)offsetof(subRecord, mlst);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(subRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_subRecord_H */
