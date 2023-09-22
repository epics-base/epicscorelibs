/** @file mbbiDirectRecord.h
 * @brief Declarations for the @ref mbbiDirectRecord "mbbiDirect" record type.
 *
 * This header was generated from mbbiDirectRecord.dbd
 */

#ifndef INC_mbbiDirectRecord_H
#define INC_mbbiDirectRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
/* Declare Device Support Entry Table */
struct mbbiDirectRecord;
typedef struct mbbidirectdset {
    dset common; /* init_record returns: (-1,0) => (failure, success)*/
    long (*read_mbbi)(struct mbbiDirectRecord *prec); /* (0, 2) => (success, success no convert)*/
} mbbidirectdset;
#define HAS_mbbidirectdset

#include "callback.h"

/** @brief Declaration of mbbiDirect record type. */
typedef struct mbbiDirectRecord {
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
    epicsInt32          val;        /**< @brief Current Value */
    epicsInt16          nobt;       /**< @brief Number of Bits */
    DBLINK              inp;        /**< @brief Input Specification */
    epicsUInt32         rval;       /**< @brief Raw Value */
    epicsUInt32         oraw;       /**< @brief Prev Raw Value */
    epicsUInt32         mask;       /**< @brief Hardware Mask */
    epicsInt32          mlst;       /**< @brief Last Value Monitored */
    epicsUInt16         shft;       /**< @brief Shift */
    DBLINK              siol;       /**< @brief Simulation Input Link */
    epicsInt32          sval;       /**< @brief Simulation Value */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsUInt8          b0;         /**< @brief Bit 0 */
    epicsUInt8          b1;         /**< @brief Bit 1 */
    epicsUInt8          b2;         /**< @brief Bit 2 */
    epicsUInt8          b3;         /**< @brief Bit 3 */
    epicsUInt8          b4;         /**< @brief Bit 4 */
    epicsUInt8          b5;         /**< @brief Bit 5 */
    epicsUInt8          b6;         /**< @brief Bit 6 */
    epicsUInt8          b7;         /**< @brief Bit 7 */
    epicsUInt8          b8;         /**< @brief Bit 8 */
    epicsUInt8          b9;         /**< @brief Bit 9 */
    epicsUInt8          ba;         /**< @brief Bit 10 */
    epicsUInt8          bb;         /**< @brief Bit 11 */
    epicsUInt8          bc;         /**< @brief Bit 12 */
    epicsUInt8          bd;         /**< @brief Bit 13 */
    epicsUInt8          be;         /**< @brief Bit 14 */
    epicsUInt8          bf;         /**< @brief Bit 15 */
    epicsUInt8          b10;        /**< @brief Bit 16 */
    epicsUInt8          b11;        /**< @brief Bit 17 */
    epicsUInt8          b12;        /**< @brief Bit 18 */
    epicsUInt8          b13;        /**< @brief Bit 19 */
    epicsUInt8          b14;        /**< @brief Bit 20 */
    epicsUInt8          b15;        /**< @brief Bit 21 */
    epicsUInt8          b16;        /**< @brief Bit 22 */
    epicsUInt8          b17;        /**< @brief Bit 23 */
    epicsUInt8          b18;        /**< @brief Bit 24 */
    epicsUInt8          b19;        /**< @brief Bit 25 */
    epicsUInt8          b1a;        /**< @brief Bit 26 */
    epicsUInt8          b1b;        /**< @brief Bit 27 */
    epicsUInt8          b1c;        /**< @brief Bit 28 */
    epicsUInt8          b1d;        /**< @brief Bit 29 */
    epicsUInt8          b1e;        /**< @brief Bit 30 */
    epicsUInt8          b1f;        /**< @brief Bit 31 */
} mbbiDirectRecord;

typedef enum {
	mbbiDirectRecordNAME = 0,
	mbbiDirectRecordDESC = 1,
	mbbiDirectRecordASG = 2,
	mbbiDirectRecordSCAN = 3,
	mbbiDirectRecordPINI = 4,
	mbbiDirectRecordPHAS = 5,
	mbbiDirectRecordEVNT = 6,
	mbbiDirectRecordTSE = 7,
	mbbiDirectRecordTSEL = 8,
	mbbiDirectRecordDTYP = 9,
	mbbiDirectRecordDISV = 10,
	mbbiDirectRecordDISA = 11,
	mbbiDirectRecordSDIS = 12,
	mbbiDirectRecordMLOK = 13,
	mbbiDirectRecordMLIS = 14,
	mbbiDirectRecordBKLNK = 15,
	mbbiDirectRecordDISP = 16,
	mbbiDirectRecordPROC = 17,
	mbbiDirectRecordSTAT = 18,
	mbbiDirectRecordSEVR = 19,
	mbbiDirectRecordAMSG = 20,
	mbbiDirectRecordNSTA = 21,
	mbbiDirectRecordNSEV = 22,
	mbbiDirectRecordNAMSG = 23,
	mbbiDirectRecordACKS = 24,
	mbbiDirectRecordACKT = 25,
	mbbiDirectRecordDISS = 26,
	mbbiDirectRecordLCNT = 27,
	mbbiDirectRecordPACT = 28,
	mbbiDirectRecordPUTF = 29,
	mbbiDirectRecordRPRO = 30,
	mbbiDirectRecordASP = 31,
	mbbiDirectRecordPPN = 32,
	mbbiDirectRecordPPNR = 33,
	mbbiDirectRecordSPVT = 34,
	mbbiDirectRecordRSET = 35,
	mbbiDirectRecordDSET = 36,
	mbbiDirectRecordDPVT = 37,
	mbbiDirectRecordRDES = 38,
	mbbiDirectRecordLSET = 39,
	mbbiDirectRecordPRIO = 40,
	mbbiDirectRecordTPRO = 41,
	mbbiDirectRecordBKPT = 42,
	mbbiDirectRecordUDF = 43,
	mbbiDirectRecordUDFS = 44,
	mbbiDirectRecordTIME = 45,
	mbbiDirectRecordUTAG = 46,
	mbbiDirectRecordFLNK = 47,
	mbbiDirectRecordVAL = 48,
	mbbiDirectRecordNOBT = 49,
	mbbiDirectRecordINP = 50,
	mbbiDirectRecordRVAL = 51,
	mbbiDirectRecordORAW = 52,
	mbbiDirectRecordMASK = 53,
	mbbiDirectRecordMLST = 54,
	mbbiDirectRecordSHFT = 55,
	mbbiDirectRecordSIOL = 56,
	mbbiDirectRecordSVAL = 57,
	mbbiDirectRecordSIML = 58,
	mbbiDirectRecordSIMM = 59,
	mbbiDirectRecordSIMS = 60,
	mbbiDirectRecordOLDSIMM = 61,
	mbbiDirectRecordSSCN = 62,
	mbbiDirectRecordSDLY = 63,
	mbbiDirectRecordSIMPVT = 64,
	mbbiDirectRecordB0 = 65,
	mbbiDirectRecordB1 = 66,
	mbbiDirectRecordB2 = 67,
	mbbiDirectRecordB3 = 68,
	mbbiDirectRecordB4 = 69,
	mbbiDirectRecordB5 = 70,
	mbbiDirectRecordB6 = 71,
	mbbiDirectRecordB7 = 72,
	mbbiDirectRecordB8 = 73,
	mbbiDirectRecordB9 = 74,
	mbbiDirectRecordBA = 75,
	mbbiDirectRecordBB = 76,
	mbbiDirectRecordBC = 77,
	mbbiDirectRecordBD = 78,
	mbbiDirectRecordBE = 79,
	mbbiDirectRecordBF = 80,
	mbbiDirectRecordB10 = 81,
	mbbiDirectRecordB11 = 82,
	mbbiDirectRecordB12 = 83,
	mbbiDirectRecordB13 = 84,
	mbbiDirectRecordB14 = 85,
	mbbiDirectRecordB15 = 86,
	mbbiDirectRecordB16 = 87,
	mbbiDirectRecordB17 = 88,
	mbbiDirectRecordB18 = 89,
	mbbiDirectRecordB19 = 90,
	mbbiDirectRecordB1A = 91,
	mbbiDirectRecordB1B = 92,
	mbbiDirectRecordB1C = 93,
	mbbiDirectRecordB1D = 94,
	mbbiDirectRecordB1E = 95,
	mbbiDirectRecordB1F = 96
} mbbiDirectFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int mbbiDirectRecordSizeOffset(dbRecordType *prt)
{
    mbbiDirectRecord *prec = 0;

    if (prt->no_fields != 97) {
        cantProceed("IOC build or installation error:\n"
            "    The mbbiDirectRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 97.\n",
            prt->no_fields);
    }
    prt->papFldDes[mbbiDirectRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[mbbiDirectRecordNAME]->offset = (unsigned short)offsetof(mbbiDirectRecord, name);
    prt->papFldDes[mbbiDirectRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[mbbiDirectRecordDESC]->offset = (unsigned short)offsetof(mbbiDirectRecord, desc);
    prt->papFldDes[mbbiDirectRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[mbbiDirectRecordASG]->offset = (unsigned short)offsetof(mbbiDirectRecord, asg);
    prt->papFldDes[mbbiDirectRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[mbbiDirectRecordSCAN]->offset = (unsigned short)offsetof(mbbiDirectRecord, scan);
    prt->papFldDes[mbbiDirectRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[mbbiDirectRecordPINI]->offset = (unsigned short)offsetof(mbbiDirectRecord, pini);
    prt->papFldDes[mbbiDirectRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[mbbiDirectRecordPHAS]->offset = (unsigned short)offsetof(mbbiDirectRecord, phas);
    prt->papFldDes[mbbiDirectRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[mbbiDirectRecordEVNT]->offset = (unsigned short)offsetof(mbbiDirectRecord, evnt);
    prt->papFldDes[mbbiDirectRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[mbbiDirectRecordTSE]->offset = (unsigned short)offsetof(mbbiDirectRecord, tse);
    prt->papFldDes[mbbiDirectRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[mbbiDirectRecordTSEL]->offset = (unsigned short)offsetof(mbbiDirectRecord, tsel);
    prt->papFldDes[mbbiDirectRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[mbbiDirectRecordDTYP]->offset = (unsigned short)offsetof(mbbiDirectRecord, dtyp);
    prt->papFldDes[mbbiDirectRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[mbbiDirectRecordDISV]->offset = (unsigned short)offsetof(mbbiDirectRecord, disv);
    prt->papFldDes[mbbiDirectRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[mbbiDirectRecordDISA]->offset = (unsigned short)offsetof(mbbiDirectRecord, disa);
    prt->papFldDes[mbbiDirectRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[mbbiDirectRecordSDIS]->offset = (unsigned short)offsetof(mbbiDirectRecord, sdis);
    prt->papFldDes[mbbiDirectRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[mbbiDirectRecordMLOK]->offset = (unsigned short)offsetof(mbbiDirectRecord, mlok);
    prt->papFldDes[mbbiDirectRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[mbbiDirectRecordMLIS]->offset = (unsigned short)offsetof(mbbiDirectRecord, mlis);
    prt->papFldDes[mbbiDirectRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[mbbiDirectRecordBKLNK]->offset = (unsigned short)offsetof(mbbiDirectRecord, bklnk);
    prt->papFldDes[mbbiDirectRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[mbbiDirectRecordDISP]->offset = (unsigned short)offsetof(mbbiDirectRecord, disp);
    prt->papFldDes[mbbiDirectRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[mbbiDirectRecordPROC]->offset = (unsigned short)offsetof(mbbiDirectRecord, proc);
    prt->papFldDes[mbbiDirectRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[mbbiDirectRecordSTAT]->offset = (unsigned short)offsetof(mbbiDirectRecord, stat);
    prt->papFldDes[mbbiDirectRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[mbbiDirectRecordSEVR]->offset = (unsigned short)offsetof(mbbiDirectRecord, sevr);
    prt->papFldDes[mbbiDirectRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[mbbiDirectRecordAMSG]->offset = (unsigned short)offsetof(mbbiDirectRecord, amsg);
    prt->papFldDes[mbbiDirectRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[mbbiDirectRecordNSTA]->offset = (unsigned short)offsetof(mbbiDirectRecord, nsta);
    prt->papFldDes[mbbiDirectRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[mbbiDirectRecordNSEV]->offset = (unsigned short)offsetof(mbbiDirectRecord, nsev);
    prt->papFldDes[mbbiDirectRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[mbbiDirectRecordNAMSG]->offset = (unsigned short)offsetof(mbbiDirectRecord, namsg);
    prt->papFldDes[mbbiDirectRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[mbbiDirectRecordACKS]->offset = (unsigned short)offsetof(mbbiDirectRecord, acks);
    prt->papFldDes[mbbiDirectRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[mbbiDirectRecordACKT]->offset = (unsigned short)offsetof(mbbiDirectRecord, ackt);
    prt->papFldDes[mbbiDirectRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[mbbiDirectRecordDISS]->offset = (unsigned short)offsetof(mbbiDirectRecord, diss);
    prt->papFldDes[mbbiDirectRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[mbbiDirectRecordLCNT]->offset = (unsigned short)offsetof(mbbiDirectRecord, lcnt);
    prt->papFldDes[mbbiDirectRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[mbbiDirectRecordPACT]->offset = (unsigned short)offsetof(mbbiDirectRecord, pact);
    prt->papFldDes[mbbiDirectRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[mbbiDirectRecordPUTF]->offset = (unsigned short)offsetof(mbbiDirectRecord, putf);
    prt->papFldDes[mbbiDirectRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[mbbiDirectRecordRPRO]->offset = (unsigned short)offsetof(mbbiDirectRecord, rpro);
    prt->papFldDes[mbbiDirectRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[mbbiDirectRecordASP]->offset = (unsigned short)offsetof(mbbiDirectRecord, asp);
    prt->papFldDes[mbbiDirectRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[mbbiDirectRecordPPN]->offset = (unsigned short)offsetof(mbbiDirectRecord, ppn);
    prt->papFldDes[mbbiDirectRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[mbbiDirectRecordPPNR]->offset = (unsigned short)offsetof(mbbiDirectRecord, ppnr);
    prt->papFldDes[mbbiDirectRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[mbbiDirectRecordSPVT]->offset = (unsigned short)offsetof(mbbiDirectRecord, spvt);
    prt->papFldDes[mbbiDirectRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[mbbiDirectRecordRSET]->offset = (unsigned short)offsetof(mbbiDirectRecord, rset);
    prt->papFldDes[mbbiDirectRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[mbbiDirectRecordDSET]->offset = (unsigned short)offsetof(mbbiDirectRecord, dset);
    prt->papFldDes[mbbiDirectRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[mbbiDirectRecordDPVT]->offset = (unsigned short)offsetof(mbbiDirectRecord, dpvt);
    prt->papFldDes[mbbiDirectRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[mbbiDirectRecordRDES]->offset = (unsigned short)offsetof(mbbiDirectRecord, rdes);
    prt->papFldDes[mbbiDirectRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[mbbiDirectRecordLSET]->offset = (unsigned short)offsetof(mbbiDirectRecord, lset);
    prt->papFldDes[mbbiDirectRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[mbbiDirectRecordPRIO]->offset = (unsigned short)offsetof(mbbiDirectRecord, prio);
    prt->papFldDes[mbbiDirectRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[mbbiDirectRecordTPRO]->offset = (unsigned short)offsetof(mbbiDirectRecord, tpro);
    prt->papFldDes[mbbiDirectRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[mbbiDirectRecordBKPT]->offset = (unsigned short)offsetof(mbbiDirectRecord, bkpt);
    prt->papFldDes[mbbiDirectRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[mbbiDirectRecordUDF]->offset = (unsigned short)offsetof(mbbiDirectRecord, udf);
    prt->papFldDes[mbbiDirectRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[mbbiDirectRecordUDFS]->offset = (unsigned short)offsetof(mbbiDirectRecord, udfs);
    prt->papFldDes[mbbiDirectRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[mbbiDirectRecordTIME]->offset = (unsigned short)offsetof(mbbiDirectRecord, time);
    prt->papFldDes[mbbiDirectRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[mbbiDirectRecordUTAG]->offset = (unsigned short)offsetof(mbbiDirectRecord, utag);
    prt->papFldDes[mbbiDirectRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[mbbiDirectRecordFLNK]->offset = (unsigned short)offsetof(mbbiDirectRecord, flnk);
    prt->papFldDes[mbbiDirectRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[mbbiDirectRecordVAL]->offset = (unsigned short)offsetof(mbbiDirectRecord, val);
    prt->papFldDes[mbbiDirectRecordNOBT]->size = sizeof(prec->nobt);
    prt->papFldDes[mbbiDirectRecordNOBT]->offset = (unsigned short)offsetof(mbbiDirectRecord, nobt);
    prt->papFldDes[mbbiDirectRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[mbbiDirectRecordINP]->offset = (unsigned short)offsetof(mbbiDirectRecord, inp);
    prt->papFldDes[mbbiDirectRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[mbbiDirectRecordRVAL]->offset = (unsigned short)offsetof(mbbiDirectRecord, rval);
    prt->papFldDes[mbbiDirectRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[mbbiDirectRecordORAW]->offset = (unsigned short)offsetof(mbbiDirectRecord, oraw);
    prt->papFldDes[mbbiDirectRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[mbbiDirectRecordMASK]->offset = (unsigned short)offsetof(mbbiDirectRecord, mask);
    prt->papFldDes[mbbiDirectRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[mbbiDirectRecordMLST]->offset = (unsigned short)offsetof(mbbiDirectRecord, mlst);
    prt->papFldDes[mbbiDirectRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[mbbiDirectRecordSHFT]->offset = (unsigned short)offsetof(mbbiDirectRecord, shft);
    prt->papFldDes[mbbiDirectRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[mbbiDirectRecordSIOL]->offset = (unsigned short)offsetof(mbbiDirectRecord, siol);
    prt->papFldDes[mbbiDirectRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[mbbiDirectRecordSVAL]->offset = (unsigned short)offsetof(mbbiDirectRecord, sval);
    prt->papFldDes[mbbiDirectRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[mbbiDirectRecordSIML]->offset = (unsigned short)offsetof(mbbiDirectRecord, siml);
    prt->papFldDes[mbbiDirectRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[mbbiDirectRecordSIMM]->offset = (unsigned short)offsetof(mbbiDirectRecord, simm);
    prt->papFldDes[mbbiDirectRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[mbbiDirectRecordSIMS]->offset = (unsigned short)offsetof(mbbiDirectRecord, sims);
    prt->papFldDes[mbbiDirectRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[mbbiDirectRecordOLDSIMM]->offset = (unsigned short)offsetof(mbbiDirectRecord, oldsimm);
    prt->papFldDes[mbbiDirectRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[mbbiDirectRecordSSCN]->offset = (unsigned short)offsetof(mbbiDirectRecord, sscn);
    prt->papFldDes[mbbiDirectRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[mbbiDirectRecordSDLY]->offset = (unsigned short)offsetof(mbbiDirectRecord, sdly);
    prt->papFldDes[mbbiDirectRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[mbbiDirectRecordSIMPVT]->offset = (unsigned short)offsetof(mbbiDirectRecord, simpvt);
    prt->papFldDes[mbbiDirectRecordB0]->size = sizeof(prec->b0);
    prt->papFldDes[mbbiDirectRecordB0]->offset = (unsigned short)offsetof(mbbiDirectRecord, b0);
    prt->papFldDes[mbbiDirectRecordB1]->size = sizeof(prec->b1);
    prt->papFldDes[mbbiDirectRecordB1]->offset = (unsigned short)offsetof(mbbiDirectRecord, b1);
    prt->papFldDes[mbbiDirectRecordB2]->size = sizeof(prec->b2);
    prt->papFldDes[mbbiDirectRecordB2]->offset = (unsigned short)offsetof(mbbiDirectRecord, b2);
    prt->papFldDes[mbbiDirectRecordB3]->size = sizeof(prec->b3);
    prt->papFldDes[mbbiDirectRecordB3]->offset = (unsigned short)offsetof(mbbiDirectRecord, b3);
    prt->papFldDes[mbbiDirectRecordB4]->size = sizeof(prec->b4);
    prt->papFldDes[mbbiDirectRecordB4]->offset = (unsigned short)offsetof(mbbiDirectRecord, b4);
    prt->papFldDes[mbbiDirectRecordB5]->size = sizeof(prec->b5);
    prt->papFldDes[mbbiDirectRecordB5]->offset = (unsigned short)offsetof(mbbiDirectRecord, b5);
    prt->papFldDes[mbbiDirectRecordB6]->size = sizeof(prec->b6);
    prt->papFldDes[mbbiDirectRecordB6]->offset = (unsigned short)offsetof(mbbiDirectRecord, b6);
    prt->papFldDes[mbbiDirectRecordB7]->size = sizeof(prec->b7);
    prt->papFldDes[mbbiDirectRecordB7]->offset = (unsigned short)offsetof(mbbiDirectRecord, b7);
    prt->papFldDes[mbbiDirectRecordB8]->size = sizeof(prec->b8);
    prt->papFldDes[mbbiDirectRecordB8]->offset = (unsigned short)offsetof(mbbiDirectRecord, b8);
    prt->papFldDes[mbbiDirectRecordB9]->size = sizeof(prec->b9);
    prt->papFldDes[mbbiDirectRecordB9]->offset = (unsigned short)offsetof(mbbiDirectRecord, b9);
    prt->papFldDes[mbbiDirectRecordBA]->size = sizeof(prec->ba);
    prt->papFldDes[mbbiDirectRecordBA]->offset = (unsigned short)offsetof(mbbiDirectRecord, ba);
    prt->papFldDes[mbbiDirectRecordBB]->size = sizeof(prec->bb);
    prt->papFldDes[mbbiDirectRecordBB]->offset = (unsigned short)offsetof(mbbiDirectRecord, bb);
    prt->papFldDes[mbbiDirectRecordBC]->size = sizeof(prec->bc);
    prt->papFldDes[mbbiDirectRecordBC]->offset = (unsigned short)offsetof(mbbiDirectRecord, bc);
    prt->papFldDes[mbbiDirectRecordBD]->size = sizeof(prec->bd);
    prt->papFldDes[mbbiDirectRecordBD]->offset = (unsigned short)offsetof(mbbiDirectRecord, bd);
    prt->papFldDes[mbbiDirectRecordBE]->size = sizeof(prec->be);
    prt->papFldDes[mbbiDirectRecordBE]->offset = (unsigned short)offsetof(mbbiDirectRecord, be);
    prt->papFldDes[mbbiDirectRecordBF]->size = sizeof(prec->bf);
    prt->papFldDes[mbbiDirectRecordBF]->offset = (unsigned short)offsetof(mbbiDirectRecord, bf);
    prt->papFldDes[mbbiDirectRecordB10]->size = sizeof(prec->b10);
    prt->papFldDes[mbbiDirectRecordB10]->offset = (unsigned short)offsetof(mbbiDirectRecord, b10);
    prt->papFldDes[mbbiDirectRecordB11]->size = sizeof(prec->b11);
    prt->papFldDes[mbbiDirectRecordB11]->offset = (unsigned short)offsetof(mbbiDirectRecord, b11);
    prt->papFldDes[mbbiDirectRecordB12]->size = sizeof(prec->b12);
    prt->papFldDes[mbbiDirectRecordB12]->offset = (unsigned short)offsetof(mbbiDirectRecord, b12);
    prt->papFldDes[mbbiDirectRecordB13]->size = sizeof(prec->b13);
    prt->papFldDes[mbbiDirectRecordB13]->offset = (unsigned short)offsetof(mbbiDirectRecord, b13);
    prt->papFldDes[mbbiDirectRecordB14]->size = sizeof(prec->b14);
    prt->papFldDes[mbbiDirectRecordB14]->offset = (unsigned short)offsetof(mbbiDirectRecord, b14);
    prt->papFldDes[mbbiDirectRecordB15]->size = sizeof(prec->b15);
    prt->papFldDes[mbbiDirectRecordB15]->offset = (unsigned short)offsetof(mbbiDirectRecord, b15);
    prt->papFldDes[mbbiDirectRecordB16]->size = sizeof(prec->b16);
    prt->papFldDes[mbbiDirectRecordB16]->offset = (unsigned short)offsetof(mbbiDirectRecord, b16);
    prt->papFldDes[mbbiDirectRecordB17]->size = sizeof(prec->b17);
    prt->papFldDes[mbbiDirectRecordB17]->offset = (unsigned short)offsetof(mbbiDirectRecord, b17);
    prt->papFldDes[mbbiDirectRecordB18]->size = sizeof(prec->b18);
    prt->papFldDes[mbbiDirectRecordB18]->offset = (unsigned short)offsetof(mbbiDirectRecord, b18);
    prt->papFldDes[mbbiDirectRecordB19]->size = sizeof(prec->b19);
    prt->papFldDes[mbbiDirectRecordB19]->offset = (unsigned short)offsetof(mbbiDirectRecord, b19);
    prt->papFldDes[mbbiDirectRecordB1A]->size = sizeof(prec->b1a);
    prt->papFldDes[mbbiDirectRecordB1A]->offset = (unsigned short)offsetof(mbbiDirectRecord, b1a);
    prt->papFldDes[mbbiDirectRecordB1B]->size = sizeof(prec->b1b);
    prt->papFldDes[mbbiDirectRecordB1B]->offset = (unsigned short)offsetof(mbbiDirectRecord, b1b);
    prt->papFldDes[mbbiDirectRecordB1C]->size = sizeof(prec->b1c);
    prt->papFldDes[mbbiDirectRecordB1C]->offset = (unsigned short)offsetof(mbbiDirectRecord, b1c);
    prt->papFldDes[mbbiDirectRecordB1D]->size = sizeof(prec->b1d);
    prt->papFldDes[mbbiDirectRecordB1D]->offset = (unsigned short)offsetof(mbbiDirectRecord, b1d);
    prt->papFldDes[mbbiDirectRecordB1E]->size = sizeof(prec->b1e);
    prt->papFldDes[mbbiDirectRecordB1E]->offset = (unsigned short)offsetof(mbbiDirectRecord, b1e);
    prt->papFldDes[mbbiDirectRecordB1F]->size = sizeof(prec->b1f);
    prt->papFldDes[mbbiDirectRecordB1F]->offset = (unsigned short)offsetof(mbbiDirectRecord, b1f);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(mbbiDirectRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_mbbiDirectRecord_H */
