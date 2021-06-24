/** @file stateRecord.h
 * @brief Declarations for the @ref stateRecord "state" record type.
 *
 * This header was generated from stateRecord.dbd
 */

#ifndef INC_stateRecord_H
#define INC_stateRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/** @brief Declaration of state record type. */
typedef struct stateRecord {
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
    char                val[20];    /**< @brief Value */
    char                oval[20];   /**< @brief Prev Value */
} stateRecord;

typedef enum {
	stateRecordNAME = 0,
	stateRecordDESC = 1,
	stateRecordASG = 2,
	stateRecordSCAN = 3,
	stateRecordPINI = 4,
	stateRecordPHAS = 5,
	stateRecordEVNT = 6,
	stateRecordTSE = 7,
	stateRecordTSEL = 8,
	stateRecordDTYP = 9,
	stateRecordDISV = 10,
	stateRecordDISA = 11,
	stateRecordSDIS = 12,
	stateRecordMLOK = 13,
	stateRecordMLIS = 14,
	stateRecordBKLNK = 15,
	stateRecordDISP = 16,
	stateRecordPROC = 17,
	stateRecordSTAT = 18,
	stateRecordSEVR = 19,
	stateRecordAMSG = 20,
	stateRecordNSTA = 21,
	stateRecordNSEV = 22,
	stateRecordNAMSG = 23,
	stateRecordACKS = 24,
	stateRecordACKT = 25,
	stateRecordDISS = 26,
	stateRecordLCNT = 27,
	stateRecordPACT = 28,
	stateRecordPUTF = 29,
	stateRecordRPRO = 30,
	stateRecordASP = 31,
	stateRecordPPN = 32,
	stateRecordPPNR = 33,
	stateRecordSPVT = 34,
	stateRecordRSET = 35,
	stateRecordDSET = 36,
	stateRecordDPVT = 37,
	stateRecordRDES = 38,
	stateRecordLSET = 39,
	stateRecordPRIO = 40,
	stateRecordTPRO = 41,
	stateRecordBKPT = 42,
	stateRecordUDF = 43,
	stateRecordUDFS = 44,
	stateRecordTIME = 45,
	stateRecordUTAG = 46,
	stateRecordFLNK = 47,
	stateRecordVAL = 48,
	stateRecordOVAL = 49
} stateFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int stateRecordSizeOffset(dbRecordType *prt)
{
    stateRecord *prec = 0;

    if (prt->no_fields != 50) {
        cantProceed("IOC build or installation error:\n"
            "    The stateRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 50.\n",
            prt->no_fields);
    }
    prt->papFldDes[stateRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[stateRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[stateRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[stateRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[stateRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[stateRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[stateRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[stateRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[stateRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[stateRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[stateRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[stateRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[stateRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[stateRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[stateRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[stateRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[stateRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[stateRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[stateRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[stateRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[stateRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[stateRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[stateRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[stateRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[stateRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[stateRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[stateRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[stateRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[stateRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[stateRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[stateRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[stateRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[stateRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[stateRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[stateRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[stateRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[stateRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[stateRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[stateRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[stateRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[stateRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[stateRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[stateRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[stateRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[stateRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[stateRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[stateRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[stateRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[stateRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[stateRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[stateRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[stateRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[stateRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[stateRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[stateRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[stateRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[stateRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[stateRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[stateRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[stateRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[stateRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[stateRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[stateRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[stateRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[stateRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[stateRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[stateRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[stateRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[stateRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[stateRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[stateRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[stateRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[stateRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[stateRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[stateRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[stateRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[stateRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[stateRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[stateRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[stateRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[stateRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[stateRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[stateRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[stateRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[stateRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[stateRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[stateRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[stateRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[stateRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[stateRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[stateRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[stateRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[stateRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[stateRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[stateRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[stateRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[stateRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[stateRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[stateRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[stateRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(stateRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_stateRecord_H */
