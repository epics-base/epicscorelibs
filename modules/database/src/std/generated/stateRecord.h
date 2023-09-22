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
    prt->papFldDes[stateRecordNAME]->offset = (unsigned short)offsetof(stateRecord, name);
    prt->papFldDes[stateRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[stateRecordDESC]->offset = (unsigned short)offsetof(stateRecord, desc);
    prt->papFldDes[stateRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[stateRecordASG]->offset = (unsigned short)offsetof(stateRecord, asg);
    prt->papFldDes[stateRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[stateRecordSCAN]->offset = (unsigned short)offsetof(stateRecord, scan);
    prt->papFldDes[stateRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[stateRecordPINI]->offset = (unsigned short)offsetof(stateRecord, pini);
    prt->papFldDes[stateRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[stateRecordPHAS]->offset = (unsigned short)offsetof(stateRecord, phas);
    prt->papFldDes[stateRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[stateRecordEVNT]->offset = (unsigned short)offsetof(stateRecord, evnt);
    prt->papFldDes[stateRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[stateRecordTSE]->offset = (unsigned short)offsetof(stateRecord, tse);
    prt->papFldDes[stateRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[stateRecordTSEL]->offset = (unsigned short)offsetof(stateRecord, tsel);
    prt->papFldDes[stateRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[stateRecordDTYP]->offset = (unsigned short)offsetof(stateRecord, dtyp);
    prt->papFldDes[stateRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[stateRecordDISV]->offset = (unsigned short)offsetof(stateRecord, disv);
    prt->papFldDes[stateRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[stateRecordDISA]->offset = (unsigned short)offsetof(stateRecord, disa);
    prt->papFldDes[stateRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[stateRecordSDIS]->offset = (unsigned short)offsetof(stateRecord, sdis);
    prt->papFldDes[stateRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[stateRecordMLOK]->offset = (unsigned short)offsetof(stateRecord, mlok);
    prt->papFldDes[stateRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[stateRecordMLIS]->offset = (unsigned short)offsetof(stateRecord, mlis);
    prt->papFldDes[stateRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[stateRecordBKLNK]->offset = (unsigned short)offsetof(stateRecord, bklnk);
    prt->papFldDes[stateRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[stateRecordDISP]->offset = (unsigned short)offsetof(stateRecord, disp);
    prt->papFldDes[stateRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[stateRecordPROC]->offset = (unsigned short)offsetof(stateRecord, proc);
    prt->papFldDes[stateRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[stateRecordSTAT]->offset = (unsigned short)offsetof(stateRecord, stat);
    prt->papFldDes[stateRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[stateRecordSEVR]->offset = (unsigned short)offsetof(stateRecord, sevr);
    prt->papFldDes[stateRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[stateRecordAMSG]->offset = (unsigned short)offsetof(stateRecord, amsg);
    prt->papFldDes[stateRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[stateRecordNSTA]->offset = (unsigned short)offsetof(stateRecord, nsta);
    prt->papFldDes[stateRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[stateRecordNSEV]->offset = (unsigned short)offsetof(stateRecord, nsev);
    prt->papFldDes[stateRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[stateRecordNAMSG]->offset = (unsigned short)offsetof(stateRecord, namsg);
    prt->papFldDes[stateRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[stateRecordACKS]->offset = (unsigned short)offsetof(stateRecord, acks);
    prt->papFldDes[stateRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[stateRecordACKT]->offset = (unsigned short)offsetof(stateRecord, ackt);
    prt->papFldDes[stateRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[stateRecordDISS]->offset = (unsigned short)offsetof(stateRecord, diss);
    prt->papFldDes[stateRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[stateRecordLCNT]->offset = (unsigned short)offsetof(stateRecord, lcnt);
    prt->papFldDes[stateRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[stateRecordPACT]->offset = (unsigned short)offsetof(stateRecord, pact);
    prt->papFldDes[stateRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[stateRecordPUTF]->offset = (unsigned short)offsetof(stateRecord, putf);
    prt->papFldDes[stateRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[stateRecordRPRO]->offset = (unsigned short)offsetof(stateRecord, rpro);
    prt->papFldDes[stateRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[stateRecordASP]->offset = (unsigned short)offsetof(stateRecord, asp);
    prt->papFldDes[stateRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[stateRecordPPN]->offset = (unsigned short)offsetof(stateRecord, ppn);
    prt->papFldDes[stateRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[stateRecordPPNR]->offset = (unsigned short)offsetof(stateRecord, ppnr);
    prt->papFldDes[stateRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[stateRecordSPVT]->offset = (unsigned short)offsetof(stateRecord, spvt);
    prt->papFldDes[stateRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[stateRecordRSET]->offset = (unsigned short)offsetof(stateRecord, rset);
    prt->papFldDes[stateRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[stateRecordDSET]->offset = (unsigned short)offsetof(stateRecord, dset);
    prt->papFldDes[stateRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[stateRecordDPVT]->offset = (unsigned short)offsetof(stateRecord, dpvt);
    prt->papFldDes[stateRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[stateRecordRDES]->offset = (unsigned short)offsetof(stateRecord, rdes);
    prt->papFldDes[stateRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[stateRecordLSET]->offset = (unsigned short)offsetof(stateRecord, lset);
    prt->papFldDes[stateRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[stateRecordPRIO]->offset = (unsigned short)offsetof(stateRecord, prio);
    prt->papFldDes[stateRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[stateRecordTPRO]->offset = (unsigned short)offsetof(stateRecord, tpro);
    prt->papFldDes[stateRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[stateRecordBKPT]->offset = (unsigned short)offsetof(stateRecord, bkpt);
    prt->papFldDes[stateRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[stateRecordUDF]->offset = (unsigned short)offsetof(stateRecord, udf);
    prt->papFldDes[stateRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[stateRecordUDFS]->offset = (unsigned short)offsetof(stateRecord, udfs);
    prt->papFldDes[stateRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[stateRecordTIME]->offset = (unsigned short)offsetof(stateRecord, time);
    prt->papFldDes[stateRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[stateRecordUTAG]->offset = (unsigned short)offsetof(stateRecord, utag);
    prt->papFldDes[stateRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[stateRecordFLNK]->offset = (unsigned short)offsetof(stateRecord, flnk);
    prt->papFldDes[stateRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[stateRecordVAL]->offset = (unsigned short)offsetof(stateRecord, val);
    prt->papFldDes[stateRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[stateRecordOVAL]->offset = (unsigned short)offsetof(stateRecord, oval);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(stateRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_stateRecord_H */
