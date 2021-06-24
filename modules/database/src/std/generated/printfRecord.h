/** @file printfRecord.h
 * @brief Declarations for the @ref printfRecord "printf" record type.
 *
 * This header was generated from printfRecord.dbd
 */

#ifndef INC_printfRecord_H
#define INC_printfRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct printfRecord;
typedef struct printfdset {
    dset common;
    long (*write_string)(struct printfRecord *prec);
} printfdset;
#define HAS_printfdset

/* Number of INPx fields defined */
#define PRINTF_NLINKS 10

/** @brief Declaration of printf record type. */
typedef struct printfRecord {
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
    char *val;                      /**< @brief Result */
    epicsUInt16         sizv;       /**< @brief Size of VAL buffer */
    epicsUInt32         len;        /**< @brief Length of VAL */
    DBLINK              out;        /**< @brief Output Specification */
    char                fmt[81];    /**< @brief Format String */
    char                ivls[16];   /**< @brief Invalid Link String */
    DBLINK              inp0;       /**< @brief Input 0 */
    DBLINK              inp1;       /**< @brief Input 1 */
    DBLINK              inp2;       /**< @brief Input 2 */
    DBLINK              inp3;       /**< @brief Input 3 */
    DBLINK              inp4;       /**< @brief Input 4 */
    DBLINK              inp5;       /**< @brief Input 5 */
    DBLINK              inp6;       /**< @brief Input 6 */
    DBLINK              inp7;       /**< @brief Input 7 */
    DBLINK              inp8;       /**< @brief Input 8 */
    DBLINK              inp9;       /**< @brief Input 9 */
} printfRecord;

typedef enum {
	printfRecordNAME = 0,
	printfRecordDESC = 1,
	printfRecordASG = 2,
	printfRecordSCAN = 3,
	printfRecordPINI = 4,
	printfRecordPHAS = 5,
	printfRecordEVNT = 6,
	printfRecordTSE = 7,
	printfRecordTSEL = 8,
	printfRecordDTYP = 9,
	printfRecordDISV = 10,
	printfRecordDISA = 11,
	printfRecordSDIS = 12,
	printfRecordMLOK = 13,
	printfRecordMLIS = 14,
	printfRecordBKLNK = 15,
	printfRecordDISP = 16,
	printfRecordPROC = 17,
	printfRecordSTAT = 18,
	printfRecordSEVR = 19,
	printfRecordAMSG = 20,
	printfRecordNSTA = 21,
	printfRecordNSEV = 22,
	printfRecordNAMSG = 23,
	printfRecordACKS = 24,
	printfRecordACKT = 25,
	printfRecordDISS = 26,
	printfRecordLCNT = 27,
	printfRecordPACT = 28,
	printfRecordPUTF = 29,
	printfRecordRPRO = 30,
	printfRecordASP = 31,
	printfRecordPPN = 32,
	printfRecordPPNR = 33,
	printfRecordSPVT = 34,
	printfRecordRSET = 35,
	printfRecordDSET = 36,
	printfRecordDPVT = 37,
	printfRecordRDES = 38,
	printfRecordLSET = 39,
	printfRecordPRIO = 40,
	printfRecordTPRO = 41,
	printfRecordBKPT = 42,
	printfRecordUDF = 43,
	printfRecordUDFS = 44,
	printfRecordTIME = 45,
	printfRecordUTAG = 46,
	printfRecordFLNK = 47,
	printfRecordVAL = 48,
	printfRecordSIZV = 49,
	printfRecordLEN = 50,
	printfRecordOUT = 51,
	printfRecordFMT = 52,
	printfRecordIVLS = 53,
	printfRecordINP0 = 54,
	printfRecordINP1 = 55,
	printfRecordINP2 = 56,
	printfRecordINP3 = 57,
	printfRecordINP4 = 58,
	printfRecordINP5 = 59,
	printfRecordINP6 = 60,
	printfRecordINP7 = 61,
	printfRecordINP8 = 62,
	printfRecordINP9 = 63
} printfFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int printfRecordSizeOffset(dbRecordType *prt)
{
    printfRecord *prec = 0;

    if (prt->no_fields != 64) {
        cantProceed("IOC build or installation error:\n"
            "    The printfRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 64.\n",
            prt->no_fields);
    }
    prt->papFldDes[printfRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[printfRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[printfRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[printfRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[printfRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[printfRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[printfRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[printfRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[printfRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[printfRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[printfRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[printfRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[printfRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[printfRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[printfRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[printfRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[printfRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[printfRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[printfRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[printfRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[printfRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[printfRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[printfRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[printfRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[printfRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[printfRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[printfRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[printfRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[printfRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[printfRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[printfRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[printfRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[printfRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[printfRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[printfRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[printfRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[printfRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[printfRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[printfRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[printfRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[printfRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[printfRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[printfRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[printfRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[printfRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[printfRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[printfRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[printfRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[printfRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[printfRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[printfRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[printfRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[printfRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[printfRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[printfRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[printfRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[printfRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[printfRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[printfRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[printfRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[printfRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[printfRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[printfRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[printfRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[printfRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[printfRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[printfRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[printfRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[printfRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[printfRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[printfRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[printfRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[printfRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[printfRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[printfRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[printfRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[printfRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[printfRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[printfRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[printfRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[printfRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[printfRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[printfRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[printfRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[printfRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[printfRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[printfRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[printfRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[printfRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[printfRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[printfRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[printfRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[printfRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[printfRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[printfRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[printfRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[printfRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[printfRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[printfRecordSIZV]->size = sizeof(prec->sizv);
    prt->papFldDes[printfRecordSIZV]->offset = (unsigned short)((char *)&prec->sizv - (char *)prec);
    prt->papFldDes[printfRecordLEN]->size = sizeof(prec->len);
    prt->papFldDes[printfRecordLEN]->offset = (unsigned short)((char *)&prec->len - (char *)prec);
    prt->papFldDes[printfRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[printfRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[printfRecordFMT]->size = sizeof(prec->fmt);
    prt->papFldDes[printfRecordFMT]->offset = (unsigned short)((char *)&prec->fmt - (char *)prec);
    prt->papFldDes[printfRecordIVLS]->size = sizeof(prec->ivls);
    prt->papFldDes[printfRecordIVLS]->offset = (unsigned short)((char *)&prec->ivls - (char *)prec);
    prt->papFldDes[printfRecordINP0]->size = sizeof(prec->inp0);
    prt->papFldDes[printfRecordINP0]->offset = (unsigned short)((char *)&prec->inp0 - (char *)prec);
    prt->papFldDes[printfRecordINP1]->size = sizeof(prec->inp1);
    prt->papFldDes[printfRecordINP1]->offset = (unsigned short)((char *)&prec->inp1 - (char *)prec);
    prt->papFldDes[printfRecordINP2]->size = sizeof(prec->inp2);
    prt->papFldDes[printfRecordINP2]->offset = (unsigned short)((char *)&prec->inp2 - (char *)prec);
    prt->papFldDes[printfRecordINP3]->size = sizeof(prec->inp3);
    prt->papFldDes[printfRecordINP3]->offset = (unsigned short)((char *)&prec->inp3 - (char *)prec);
    prt->papFldDes[printfRecordINP4]->size = sizeof(prec->inp4);
    prt->papFldDes[printfRecordINP4]->offset = (unsigned short)((char *)&prec->inp4 - (char *)prec);
    prt->papFldDes[printfRecordINP5]->size = sizeof(prec->inp5);
    prt->papFldDes[printfRecordINP5]->offset = (unsigned short)((char *)&prec->inp5 - (char *)prec);
    prt->papFldDes[printfRecordINP6]->size = sizeof(prec->inp6);
    prt->papFldDes[printfRecordINP6]->offset = (unsigned short)((char *)&prec->inp6 - (char *)prec);
    prt->papFldDes[printfRecordINP7]->size = sizeof(prec->inp7);
    prt->papFldDes[printfRecordINP7]->offset = (unsigned short)((char *)&prec->inp7 - (char *)prec);
    prt->papFldDes[printfRecordINP8]->size = sizeof(prec->inp8);
    prt->papFldDes[printfRecordINP8]->offset = (unsigned short)((char *)&prec->inp8 - (char *)prec);
    prt->papFldDes[printfRecordINP9]->size = sizeof(prec->inp9);
    prt->papFldDes[printfRecordINP9]->offset = (unsigned short)((char *)&prec->inp9 - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(printfRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_printfRecord_H */
