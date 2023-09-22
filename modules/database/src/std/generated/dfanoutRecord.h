/** @file dfanoutRecord.h
 * @brief Declarations for the @ref dfanoutRecord "dfanout" record type.
 *
 * This header was generated from dfanoutRecord.dbd
 */

#ifndef INC_dfanoutRecord_H
#define INC_dfanoutRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef dfanoutSELM_NUM_CHOICES
/** @brief Enumerated type from menu dfanoutSELM */
typedef enum {
    dfanoutSELM_All                 /**< @brief State string "All" */,
    dfanoutSELM_Specified           /**< @brief State string "Specified" */,
    dfanoutSELM_Mask                /**< @brief State string "Mask" */
} dfanoutSELM;
/** @brief Number of states defined for menu dfanoutSELM */
#define dfanoutSELM_NUM_CHOICES 3
#endif

/** @brief Declaration of dfanout record type. */
typedef struct dfanoutRecord {
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
    epicsFloat64        val;        /**< @brief Desired Output */
    epicsEnum16         selm;       /**< @brief Select Mechanism */
    epicsUInt16         seln;       /**< @brief Link Selection */
    DBLINK              sell;       /**< @brief Link Selection Loc */
    DBLINK              outa;       /**< @brief Output Spec A */
    DBLINK              outb;       /**< @brief Output Spec B */
    DBLINK              outc;       /**< @brief Output Spec C */
    DBLINK              outd;       /**< @brief Output Spec D */
    DBLINK              oute;       /**< @brief Output Spec E */
    DBLINK              outf;       /**< @brief Output Spec F */
    DBLINK              outg;       /**< @brief Output Spec G */
    DBLINK              outh;       /**< @brief Output Spec H */
    DBLINK              dol;        /**< @brief Desired Output Link */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    char                egu[16];    /**< @brief Engineering Units */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsFloat64        hopr;       /**< @brief High Operating Range */
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
    epicsFloat64        lalm;       /**< @brief Last Value Alarmed */
    epicsFloat64        alst;       /**< @brief Last Value Archived */
    epicsFloat64        mlst;       /**< @brief Last Val Monitored */
} dfanoutRecord;

typedef enum {
	dfanoutRecordNAME = 0,
	dfanoutRecordDESC = 1,
	dfanoutRecordASG = 2,
	dfanoutRecordSCAN = 3,
	dfanoutRecordPINI = 4,
	dfanoutRecordPHAS = 5,
	dfanoutRecordEVNT = 6,
	dfanoutRecordTSE = 7,
	dfanoutRecordTSEL = 8,
	dfanoutRecordDTYP = 9,
	dfanoutRecordDISV = 10,
	dfanoutRecordDISA = 11,
	dfanoutRecordSDIS = 12,
	dfanoutRecordMLOK = 13,
	dfanoutRecordMLIS = 14,
	dfanoutRecordBKLNK = 15,
	dfanoutRecordDISP = 16,
	dfanoutRecordPROC = 17,
	dfanoutRecordSTAT = 18,
	dfanoutRecordSEVR = 19,
	dfanoutRecordAMSG = 20,
	dfanoutRecordNSTA = 21,
	dfanoutRecordNSEV = 22,
	dfanoutRecordNAMSG = 23,
	dfanoutRecordACKS = 24,
	dfanoutRecordACKT = 25,
	dfanoutRecordDISS = 26,
	dfanoutRecordLCNT = 27,
	dfanoutRecordPACT = 28,
	dfanoutRecordPUTF = 29,
	dfanoutRecordRPRO = 30,
	dfanoutRecordASP = 31,
	dfanoutRecordPPN = 32,
	dfanoutRecordPPNR = 33,
	dfanoutRecordSPVT = 34,
	dfanoutRecordRSET = 35,
	dfanoutRecordDSET = 36,
	dfanoutRecordDPVT = 37,
	dfanoutRecordRDES = 38,
	dfanoutRecordLSET = 39,
	dfanoutRecordPRIO = 40,
	dfanoutRecordTPRO = 41,
	dfanoutRecordBKPT = 42,
	dfanoutRecordUDF = 43,
	dfanoutRecordUDFS = 44,
	dfanoutRecordTIME = 45,
	dfanoutRecordUTAG = 46,
	dfanoutRecordFLNK = 47,
	dfanoutRecordVAL = 48,
	dfanoutRecordSELM = 49,
	dfanoutRecordSELN = 50,
	dfanoutRecordSELL = 51,
	dfanoutRecordOUTA = 52,
	dfanoutRecordOUTB = 53,
	dfanoutRecordOUTC = 54,
	dfanoutRecordOUTD = 55,
	dfanoutRecordOUTE = 56,
	dfanoutRecordOUTF = 57,
	dfanoutRecordOUTG = 58,
	dfanoutRecordOUTH = 59,
	dfanoutRecordDOL = 60,
	dfanoutRecordOMSL = 61,
	dfanoutRecordEGU = 62,
	dfanoutRecordPREC = 63,
	dfanoutRecordHOPR = 64,
	dfanoutRecordLOPR = 65,
	dfanoutRecordHIHI = 66,
	dfanoutRecordLOLO = 67,
	dfanoutRecordHIGH = 68,
	dfanoutRecordLOW = 69,
	dfanoutRecordHHSV = 70,
	dfanoutRecordLLSV = 71,
	dfanoutRecordHSV = 72,
	dfanoutRecordLSV = 73,
	dfanoutRecordHYST = 74,
	dfanoutRecordADEL = 75,
	dfanoutRecordMDEL = 76,
	dfanoutRecordLALM = 77,
	dfanoutRecordALST = 78,
	dfanoutRecordMLST = 79
} dfanoutFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int dfanoutRecordSizeOffset(dbRecordType *prt)
{
    dfanoutRecord *prec = 0;

    if (prt->no_fields != 80) {
        cantProceed("IOC build or installation error:\n"
            "    The dfanoutRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 80.\n",
            prt->no_fields);
    }
    prt->papFldDes[dfanoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[dfanoutRecordNAME]->offset = (unsigned short)offsetof(dfanoutRecord, name);
    prt->papFldDes[dfanoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[dfanoutRecordDESC]->offset = (unsigned short)offsetof(dfanoutRecord, desc);
    prt->papFldDes[dfanoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[dfanoutRecordASG]->offset = (unsigned short)offsetof(dfanoutRecord, asg);
    prt->papFldDes[dfanoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[dfanoutRecordSCAN]->offset = (unsigned short)offsetof(dfanoutRecord, scan);
    prt->papFldDes[dfanoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[dfanoutRecordPINI]->offset = (unsigned short)offsetof(dfanoutRecord, pini);
    prt->papFldDes[dfanoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[dfanoutRecordPHAS]->offset = (unsigned short)offsetof(dfanoutRecord, phas);
    prt->papFldDes[dfanoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[dfanoutRecordEVNT]->offset = (unsigned short)offsetof(dfanoutRecord, evnt);
    prt->papFldDes[dfanoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[dfanoutRecordTSE]->offset = (unsigned short)offsetof(dfanoutRecord, tse);
    prt->papFldDes[dfanoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[dfanoutRecordTSEL]->offset = (unsigned short)offsetof(dfanoutRecord, tsel);
    prt->papFldDes[dfanoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[dfanoutRecordDTYP]->offset = (unsigned short)offsetof(dfanoutRecord, dtyp);
    prt->papFldDes[dfanoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[dfanoutRecordDISV]->offset = (unsigned short)offsetof(dfanoutRecord, disv);
    prt->papFldDes[dfanoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[dfanoutRecordDISA]->offset = (unsigned short)offsetof(dfanoutRecord, disa);
    prt->papFldDes[dfanoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[dfanoutRecordSDIS]->offset = (unsigned short)offsetof(dfanoutRecord, sdis);
    prt->papFldDes[dfanoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[dfanoutRecordMLOK]->offset = (unsigned short)offsetof(dfanoutRecord, mlok);
    prt->papFldDes[dfanoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[dfanoutRecordMLIS]->offset = (unsigned short)offsetof(dfanoutRecord, mlis);
    prt->papFldDes[dfanoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[dfanoutRecordBKLNK]->offset = (unsigned short)offsetof(dfanoutRecord, bklnk);
    prt->papFldDes[dfanoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[dfanoutRecordDISP]->offset = (unsigned short)offsetof(dfanoutRecord, disp);
    prt->papFldDes[dfanoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[dfanoutRecordPROC]->offset = (unsigned short)offsetof(dfanoutRecord, proc);
    prt->papFldDes[dfanoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[dfanoutRecordSTAT]->offset = (unsigned short)offsetof(dfanoutRecord, stat);
    prt->papFldDes[dfanoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[dfanoutRecordSEVR]->offset = (unsigned short)offsetof(dfanoutRecord, sevr);
    prt->papFldDes[dfanoutRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[dfanoutRecordAMSG]->offset = (unsigned short)offsetof(dfanoutRecord, amsg);
    prt->papFldDes[dfanoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[dfanoutRecordNSTA]->offset = (unsigned short)offsetof(dfanoutRecord, nsta);
    prt->papFldDes[dfanoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[dfanoutRecordNSEV]->offset = (unsigned short)offsetof(dfanoutRecord, nsev);
    prt->papFldDes[dfanoutRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[dfanoutRecordNAMSG]->offset = (unsigned short)offsetof(dfanoutRecord, namsg);
    prt->papFldDes[dfanoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[dfanoutRecordACKS]->offset = (unsigned short)offsetof(dfanoutRecord, acks);
    prt->papFldDes[dfanoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[dfanoutRecordACKT]->offset = (unsigned short)offsetof(dfanoutRecord, ackt);
    prt->papFldDes[dfanoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[dfanoutRecordDISS]->offset = (unsigned short)offsetof(dfanoutRecord, diss);
    prt->papFldDes[dfanoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[dfanoutRecordLCNT]->offset = (unsigned short)offsetof(dfanoutRecord, lcnt);
    prt->papFldDes[dfanoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[dfanoutRecordPACT]->offset = (unsigned short)offsetof(dfanoutRecord, pact);
    prt->papFldDes[dfanoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[dfanoutRecordPUTF]->offset = (unsigned short)offsetof(dfanoutRecord, putf);
    prt->papFldDes[dfanoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[dfanoutRecordRPRO]->offset = (unsigned short)offsetof(dfanoutRecord, rpro);
    prt->papFldDes[dfanoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[dfanoutRecordASP]->offset = (unsigned short)offsetof(dfanoutRecord, asp);
    prt->papFldDes[dfanoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[dfanoutRecordPPN]->offset = (unsigned short)offsetof(dfanoutRecord, ppn);
    prt->papFldDes[dfanoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[dfanoutRecordPPNR]->offset = (unsigned short)offsetof(dfanoutRecord, ppnr);
    prt->papFldDes[dfanoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[dfanoutRecordSPVT]->offset = (unsigned short)offsetof(dfanoutRecord, spvt);
    prt->papFldDes[dfanoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[dfanoutRecordRSET]->offset = (unsigned short)offsetof(dfanoutRecord, rset);
    prt->papFldDes[dfanoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[dfanoutRecordDSET]->offset = (unsigned short)offsetof(dfanoutRecord, dset);
    prt->papFldDes[dfanoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[dfanoutRecordDPVT]->offset = (unsigned short)offsetof(dfanoutRecord, dpvt);
    prt->papFldDes[dfanoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[dfanoutRecordRDES]->offset = (unsigned short)offsetof(dfanoutRecord, rdes);
    prt->papFldDes[dfanoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[dfanoutRecordLSET]->offset = (unsigned short)offsetof(dfanoutRecord, lset);
    prt->papFldDes[dfanoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[dfanoutRecordPRIO]->offset = (unsigned short)offsetof(dfanoutRecord, prio);
    prt->papFldDes[dfanoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[dfanoutRecordTPRO]->offset = (unsigned short)offsetof(dfanoutRecord, tpro);
    prt->papFldDes[dfanoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[dfanoutRecordBKPT]->offset = (unsigned short)offsetof(dfanoutRecord, bkpt);
    prt->papFldDes[dfanoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[dfanoutRecordUDF]->offset = (unsigned short)offsetof(dfanoutRecord, udf);
    prt->papFldDes[dfanoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[dfanoutRecordUDFS]->offset = (unsigned short)offsetof(dfanoutRecord, udfs);
    prt->papFldDes[dfanoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[dfanoutRecordTIME]->offset = (unsigned short)offsetof(dfanoutRecord, time);
    prt->papFldDes[dfanoutRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[dfanoutRecordUTAG]->offset = (unsigned short)offsetof(dfanoutRecord, utag);
    prt->papFldDes[dfanoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[dfanoutRecordFLNK]->offset = (unsigned short)offsetof(dfanoutRecord, flnk);
    prt->papFldDes[dfanoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[dfanoutRecordVAL]->offset = (unsigned short)offsetof(dfanoutRecord, val);
    prt->papFldDes[dfanoutRecordSELM]->size = sizeof(prec->selm);
    prt->papFldDes[dfanoutRecordSELM]->offset = (unsigned short)offsetof(dfanoutRecord, selm);
    prt->papFldDes[dfanoutRecordSELN]->size = sizeof(prec->seln);
    prt->papFldDes[dfanoutRecordSELN]->offset = (unsigned short)offsetof(dfanoutRecord, seln);
    prt->papFldDes[dfanoutRecordSELL]->size = sizeof(prec->sell);
    prt->papFldDes[dfanoutRecordSELL]->offset = (unsigned short)offsetof(dfanoutRecord, sell);
    prt->papFldDes[dfanoutRecordOUTA]->size = sizeof(prec->outa);
    prt->papFldDes[dfanoutRecordOUTA]->offset = (unsigned short)offsetof(dfanoutRecord, outa);
    prt->papFldDes[dfanoutRecordOUTB]->size = sizeof(prec->outb);
    prt->papFldDes[dfanoutRecordOUTB]->offset = (unsigned short)offsetof(dfanoutRecord, outb);
    prt->papFldDes[dfanoutRecordOUTC]->size = sizeof(prec->outc);
    prt->papFldDes[dfanoutRecordOUTC]->offset = (unsigned short)offsetof(dfanoutRecord, outc);
    prt->papFldDes[dfanoutRecordOUTD]->size = sizeof(prec->outd);
    prt->papFldDes[dfanoutRecordOUTD]->offset = (unsigned short)offsetof(dfanoutRecord, outd);
    prt->papFldDes[dfanoutRecordOUTE]->size = sizeof(prec->oute);
    prt->papFldDes[dfanoutRecordOUTE]->offset = (unsigned short)offsetof(dfanoutRecord, oute);
    prt->papFldDes[dfanoutRecordOUTF]->size = sizeof(prec->outf);
    prt->papFldDes[dfanoutRecordOUTF]->offset = (unsigned short)offsetof(dfanoutRecord, outf);
    prt->papFldDes[dfanoutRecordOUTG]->size = sizeof(prec->outg);
    prt->papFldDes[dfanoutRecordOUTG]->offset = (unsigned short)offsetof(dfanoutRecord, outg);
    prt->papFldDes[dfanoutRecordOUTH]->size = sizeof(prec->outh);
    prt->papFldDes[dfanoutRecordOUTH]->offset = (unsigned short)offsetof(dfanoutRecord, outh);
    prt->papFldDes[dfanoutRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[dfanoutRecordDOL]->offset = (unsigned short)offsetof(dfanoutRecord, dol);
    prt->papFldDes[dfanoutRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[dfanoutRecordOMSL]->offset = (unsigned short)offsetof(dfanoutRecord, omsl);
    prt->papFldDes[dfanoutRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[dfanoutRecordEGU]->offset = (unsigned short)offsetof(dfanoutRecord, egu);
    prt->papFldDes[dfanoutRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[dfanoutRecordPREC]->offset = (unsigned short)offsetof(dfanoutRecord, prec);
    prt->papFldDes[dfanoutRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[dfanoutRecordHOPR]->offset = (unsigned short)offsetof(dfanoutRecord, hopr);
    prt->papFldDes[dfanoutRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[dfanoutRecordLOPR]->offset = (unsigned short)offsetof(dfanoutRecord, lopr);
    prt->papFldDes[dfanoutRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[dfanoutRecordHIHI]->offset = (unsigned short)offsetof(dfanoutRecord, hihi);
    prt->papFldDes[dfanoutRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[dfanoutRecordLOLO]->offset = (unsigned short)offsetof(dfanoutRecord, lolo);
    prt->papFldDes[dfanoutRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[dfanoutRecordHIGH]->offset = (unsigned short)offsetof(dfanoutRecord, high);
    prt->papFldDes[dfanoutRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[dfanoutRecordLOW]->offset = (unsigned short)offsetof(dfanoutRecord, low);
    prt->papFldDes[dfanoutRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[dfanoutRecordHHSV]->offset = (unsigned short)offsetof(dfanoutRecord, hhsv);
    prt->papFldDes[dfanoutRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[dfanoutRecordLLSV]->offset = (unsigned short)offsetof(dfanoutRecord, llsv);
    prt->papFldDes[dfanoutRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[dfanoutRecordHSV]->offset = (unsigned short)offsetof(dfanoutRecord, hsv);
    prt->papFldDes[dfanoutRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[dfanoutRecordLSV]->offset = (unsigned short)offsetof(dfanoutRecord, lsv);
    prt->papFldDes[dfanoutRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[dfanoutRecordHYST]->offset = (unsigned short)offsetof(dfanoutRecord, hyst);
    prt->papFldDes[dfanoutRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[dfanoutRecordADEL]->offset = (unsigned short)offsetof(dfanoutRecord, adel);
    prt->papFldDes[dfanoutRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[dfanoutRecordMDEL]->offset = (unsigned short)offsetof(dfanoutRecord, mdel);
    prt->papFldDes[dfanoutRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[dfanoutRecordLALM]->offset = (unsigned short)offsetof(dfanoutRecord, lalm);
    prt->papFldDes[dfanoutRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[dfanoutRecordALST]->offset = (unsigned short)offsetof(dfanoutRecord, alst);
    prt->papFldDes[dfanoutRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[dfanoutRecordMLST]->offset = (unsigned short)offsetof(dfanoutRecord, mlst);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(dfanoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_dfanoutRecord_H */
