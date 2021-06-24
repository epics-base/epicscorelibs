/** @file permissiveRecord.h
 * @brief Declarations for the @ref permissiveRecord "permissive" record type.
 *
 * This header was generated from permissiveRecord.dbd
 */

#ifndef INC_permissiveRecord_H
#define INC_permissiveRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/** @brief Declaration of permissive record type. */
typedef struct permissiveRecord {
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
    epicsUInt16         val;        /**< @brief Status */
    epicsUInt16         wflg;       /**< @brief Wait Flag */
    char                labl[20];   /**< @brief Button Label */
    epicsUInt16         oval;       /**< @brief Old Status */
    epicsUInt16         oflg;       /**< @brief Old Flag */
} permissiveRecord;

typedef enum {
	permissiveRecordNAME = 0,
	permissiveRecordDESC = 1,
	permissiveRecordASG = 2,
	permissiveRecordSCAN = 3,
	permissiveRecordPINI = 4,
	permissiveRecordPHAS = 5,
	permissiveRecordEVNT = 6,
	permissiveRecordTSE = 7,
	permissiveRecordTSEL = 8,
	permissiveRecordDTYP = 9,
	permissiveRecordDISV = 10,
	permissiveRecordDISA = 11,
	permissiveRecordSDIS = 12,
	permissiveRecordMLOK = 13,
	permissiveRecordMLIS = 14,
	permissiveRecordBKLNK = 15,
	permissiveRecordDISP = 16,
	permissiveRecordPROC = 17,
	permissiveRecordSTAT = 18,
	permissiveRecordSEVR = 19,
	permissiveRecordAMSG = 20,
	permissiveRecordNSTA = 21,
	permissiveRecordNSEV = 22,
	permissiveRecordNAMSG = 23,
	permissiveRecordACKS = 24,
	permissiveRecordACKT = 25,
	permissiveRecordDISS = 26,
	permissiveRecordLCNT = 27,
	permissiveRecordPACT = 28,
	permissiveRecordPUTF = 29,
	permissiveRecordRPRO = 30,
	permissiveRecordASP = 31,
	permissiveRecordPPN = 32,
	permissiveRecordPPNR = 33,
	permissiveRecordSPVT = 34,
	permissiveRecordRSET = 35,
	permissiveRecordDSET = 36,
	permissiveRecordDPVT = 37,
	permissiveRecordRDES = 38,
	permissiveRecordLSET = 39,
	permissiveRecordPRIO = 40,
	permissiveRecordTPRO = 41,
	permissiveRecordBKPT = 42,
	permissiveRecordUDF = 43,
	permissiveRecordUDFS = 44,
	permissiveRecordTIME = 45,
	permissiveRecordUTAG = 46,
	permissiveRecordFLNK = 47,
	permissiveRecordVAL = 48,
	permissiveRecordWFLG = 49,
	permissiveRecordLABL = 50,
	permissiveRecordOVAL = 51,
	permissiveRecordOFLG = 52
} permissiveFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int permissiveRecordSizeOffset(dbRecordType *prt)
{
    permissiveRecord *prec = 0;

    if (prt->no_fields != 53) {
        cantProceed("IOC build or installation error:\n"
            "    The permissiveRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 53.\n",
            prt->no_fields);
    }
    prt->papFldDes[permissiveRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[permissiveRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[permissiveRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[permissiveRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[permissiveRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[permissiveRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[permissiveRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[permissiveRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[permissiveRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[permissiveRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[permissiveRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[permissiveRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[permissiveRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[permissiveRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[permissiveRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[permissiveRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[permissiveRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[permissiveRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[permissiveRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[permissiveRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[permissiveRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[permissiveRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[permissiveRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[permissiveRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[permissiveRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[permissiveRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[permissiveRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[permissiveRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[permissiveRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[permissiveRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[permissiveRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[permissiveRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[permissiveRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[permissiveRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[permissiveRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[permissiveRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[permissiveRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[permissiveRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[permissiveRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[permissiveRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[permissiveRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[permissiveRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[permissiveRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[permissiveRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[permissiveRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[permissiveRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[permissiveRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[permissiveRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[permissiveRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[permissiveRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[permissiveRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[permissiveRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[permissiveRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[permissiveRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[permissiveRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[permissiveRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[permissiveRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[permissiveRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[permissiveRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[permissiveRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[permissiveRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[permissiveRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[permissiveRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[permissiveRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[permissiveRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[permissiveRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[permissiveRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[permissiveRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[permissiveRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[permissiveRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[permissiveRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[permissiveRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[permissiveRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[permissiveRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[permissiveRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[permissiveRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[permissiveRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[permissiveRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[permissiveRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[permissiveRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[permissiveRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[permissiveRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[permissiveRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[permissiveRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[permissiveRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[permissiveRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[permissiveRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[permissiveRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[permissiveRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[permissiveRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[permissiveRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[permissiveRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[permissiveRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[permissiveRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[permissiveRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[permissiveRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[permissiveRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[permissiveRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[permissiveRecordWFLG]->size = sizeof(prec->wflg);
    prt->papFldDes[permissiveRecordWFLG]->offset = (unsigned short)((char *)&prec->wflg - (char *)prec);
    prt->papFldDes[permissiveRecordLABL]->size = sizeof(prec->labl);
    prt->papFldDes[permissiveRecordLABL]->offset = (unsigned short)((char *)&prec->labl - (char *)prec);
    prt->papFldDes[permissiveRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[permissiveRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[permissiveRecordOFLG]->size = sizeof(prec->oflg);
    prt->papFldDes[permissiveRecordOFLG]->offset = (unsigned short)((char *)&prec->oflg - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(permissiveRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_permissiveRecord_H */
