/** @file mbboDirectRecord.h
 * @brief Declarations for the @ref mbboDirectRecord "mbboDirect" record type.
 *
 * This header was generated from mbboDirectRecord.dbd
 */

#ifndef INC_mbboDirectRecord_H
#define INC_mbboDirectRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
/* Declare Device Support Entry Table */
struct mbboDirectRecord;
typedef struct mbbodirectdset {
    dset common; /*init_record returns: (0, 2)=>(success, success no convert)*/
    long (*write_mbbo)(struct mbboDirectRecord *prec); /*returns: (0, 2)=>(success, success no convert)*/
} mbbodirectdset;
#define HAS_mbbodirectdset

#include "callback.h"

/** @brief Declaration of mbboDirect record type. */
typedef struct mbboDirectRecord {
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
    epicsInt32          val;        /**< @brief Word */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    epicsInt16          nobt;       /**< @brief Number of Bits */
    DBLINK              dol;        /**< @brief Desired Output Link */
    DBLINK              out;        /**< @brief Output Specification */
    epicsUInt32         rval;       /**< @brief Raw Value */
    epicsUInt32         oraw;       /**< @brief Prev Raw Value */
    epicsUInt32         rbv;        /**< @brief Readback Value */
    epicsUInt32         orbv;       /**< @brief Prev Readback Value */
    epicsUInt32         mask;       /**< @brief Hardware Mask */
    epicsInt32          mlst;       /**< @brief Last Value Monitored */
    epicsInt32          obit;       /**< @brief Last Bit mask Monitored */
    epicsUInt16         shft;       /**< @brief Shift */
    DBLINK              siol;       /**< @brief Simulation Output Link */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID outpt action */
    epicsInt32          ivov;       /**< @brief INVALID output value */
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
} mbboDirectRecord;

typedef enum {
	mbboDirectRecordNAME = 0,
	mbboDirectRecordDESC = 1,
	mbboDirectRecordASG = 2,
	mbboDirectRecordSCAN = 3,
	mbboDirectRecordPINI = 4,
	mbboDirectRecordPHAS = 5,
	mbboDirectRecordEVNT = 6,
	mbboDirectRecordTSE = 7,
	mbboDirectRecordTSEL = 8,
	mbboDirectRecordDTYP = 9,
	mbboDirectRecordDISV = 10,
	mbboDirectRecordDISA = 11,
	mbboDirectRecordSDIS = 12,
	mbboDirectRecordMLOK = 13,
	mbboDirectRecordMLIS = 14,
	mbboDirectRecordBKLNK = 15,
	mbboDirectRecordDISP = 16,
	mbboDirectRecordPROC = 17,
	mbboDirectRecordSTAT = 18,
	mbboDirectRecordSEVR = 19,
	mbboDirectRecordAMSG = 20,
	mbboDirectRecordNSTA = 21,
	mbboDirectRecordNSEV = 22,
	mbboDirectRecordNAMSG = 23,
	mbboDirectRecordACKS = 24,
	mbboDirectRecordACKT = 25,
	mbboDirectRecordDISS = 26,
	mbboDirectRecordLCNT = 27,
	mbboDirectRecordPACT = 28,
	mbboDirectRecordPUTF = 29,
	mbboDirectRecordRPRO = 30,
	mbboDirectRecordASP = 31,
	mbboDirectRecordPPN = 32,
	mbboDirectRecordPPNR = 33,
	mbboDirectRecordSPVT = 34,
	mbboDirectRecordRSET = 35,
	mbboDirectRecordDSET = 36,
	mbboDirectRecordDPVT = 37,
	mbboDirectRecordRDES = 38,
	mbboDirectRecordLSET = 39,
	mbboDirectRecordPRIO = 40,
	mbboDirectRecordTPRO = 41,
	mbboDirectRecordBKPT = 42,
	mbboDirectRecordUDF = 43,
	mbboDirectRecordUDFS = 44,
	mbboDirectRecordTIME = 45,
	mbboDirectRecordUTAG = 46,
	mbboDirectRecordFLNK = 47,
	mbboDirectRecordVAL = 48,
	mbboDirectRecordOMSL = 49,
	mbboDirectRecordNOBT = 50,
	mbboDirectRecordDOL = 51,
	mbboDirectRecordOUT = 52,
	mbboDirectRecordRVAL = 53,
	mbboDirectRecordORAW = 54,
	mbboDirectRecordRBV = 55,
	mbboDirectRecordORBV = 56,
	mbboDirectRecordMASK = 57,
	mbboDirectRecordMLST = 58,
	mbboDirectRecordOBIT = 59,
	mbboDirectRecordSHFT = 60,
	mbboDirectRecordSIOL = 61,
	mbboDirectRecordSIML = 62,
	mbboDirectRecordSIMM = 63,
	mbboDirectRecordSIMS = 64,
	mbboDirectRecordOLDSIMM = 65,
	mbboDirectRecordSSCN = 66,
	mbboDirectRecordSDLY = 67,
	mbboDirectRecordSIMPVT = 68,
	mbboDirectRecordIVOA = 69,
	mbboDirectRecordIVOV = 70,
	mbboDirectRecordB0 = 71,
	mbboDirectRecordB1 = 72,
	mbboDirectRecordB2 = 73,
	mbboDirectRecordB3 = 74,
	mbboDirectRecordB4 = 75,
	mbboDirectRecordB5 = 76,
	mbboDirectRecordB6 = 77,
	mbboDirectRecordB7 = 78,
	mbboDirectRecordB8 = 79,
	mbboDirectRecordB9 = 80,
	mbboDirectRecordBA = 81,
	mbboDirectRecordBB = 82,
	mbboDirectRecordBC = 83,
	mbboDirectRecordBD = 84,
	mbboDirectRecordBE = 85,
	mbboDirectRecordBF = 86,
	mbboDirectRecordB10 = 87,
	mbboDirectRecordB11 = 88,
	mbboDirectRecordB12 = 89,
	mbboDirectRecordB13 = 90,
	mbboDirectRecordB14 = 91,
	mbboDirectRecordB15 = 92,
	mbboDirectRecordB16 = 93,
	mbboDirectRecordB17 = 94,
	mbboDirectRecordB18 = 95,
	mbboDirectRecordB19 = 96,
	mbboDirectRecordB1A = 97,
	mbboDirectRecordB1B = 98,
	mbboDirectRecordB1C = 99,
	mbboDirectRecordB1D = 100,
	mbboDirectRecordB1E = 101,
	mbboDirectRecordB1F = 102
} mbboDirectFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int mbboDirectRecordSizeOffset(dbRecordType *prt)
{
    mbboDirectRecord *prec = 0;

    if (prt->no_fields != 103) {
        cantProceed("IOC build or installation error:\n"
            "    The mbboDirectRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 103.\n",
            prt->no_fields);
    }
    prt->papFldDes[mbboDirectRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[mbboDirectRecordNAME]->offset = (unsigned short)offsetof(mbboDirectRecord, name);
    prt->papFldDes[mbboDirectRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[mbboDirectRecordDESC]->offset = (unsigned short)offsetof(mbboDirectRecord, desc);
    prt->papFldDes[mbboDirectRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[mbboDirectRecordASG]->offset = (unsigned short)offsetof(mbboDirectRecord, asg);
    prt->papFldDes[mbboDirectRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[mbboDirectRecordSCAN]->offset = (unsigned short)offsetof(mbboDirectRecord, scan);
    prt->papFldDes[mbboDirectRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[mbboDirectRecordPINI]->offset = (unsigned short)offsetof(mbboDirectRecord, pini);
    prt->papFldDes[mbboDirectRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[mbboDirectRecordPHAS]->offset = (unsigned short)offsetof(mbboDirectRecord, phas);
    prt->papFldDes[mbboDirectRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[mbboDirectRecordEVNT]->offset = (unsigned short)offsetof(mbboDirectRecord, evnt);
    prt->papFldDes[mbboDirectRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[mbboDirectRecordTSE]->offset = (unsigned short)offsetof(mbboDirectRecord, tse);
    prt->papFldDes[mbboDirectRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[mbboDirectRecordTSEL]->offset = (unsigned short)offsetof(mbboDirectRecord, tsel);
    prt->papFldDes[mbboDirectRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[mbboDirectRecordDTYP]->offset = (unsigned short)offsetof(mbboDirectRecord, dtyp);
    prt->papFldDes[mbboDirectRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[mbboDirectRecordDISV]->offset = (unsigned short)offsetof(mbboDirectRecord, disv);
    prt->papFldDes[mbboDirectRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[mbboDirectRecordDISA]->offset = (unsigned short)offsetof(mbboDirectRecord, disa);
    prt->papFldDes[mbboDirectRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[mbboDirectRecordSDIS]->offset = (unsigned short)offsetof(mbboDirectRecord, sdis);
    prt->papFldDes[mbboDirectRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[mbboDirectRecordMLOK]->offset = (unsigned short)offsetof(mbboDirectRecord, mlok);
    prt->papFldDes[mbboDirectRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[mbboDirectRecordMLIS]->offset = (unsigned short)offsetof(mbboDirectRecord, mlis);
    prt->papFldDes[mbboDirectRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[mbboDirectRecordBKLNK]->offset = (unsigned short)offsetof(mbboDirectRecord, bklnk);
    prt->papFldDes[mbboDirectRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[mbboDirectRecordDISP]->offset = (unsigned short)offsetof(mbboDirectRecord, disp);
    prt->papFldDes[mbboDirectRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[mbboDirectRecordPROC]->offset = (unsigned short)offsetof(mbboDirectRecord, proc);
    prt->papFldDes[mbboDirectRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[mbboDirectRecordSTAT]->offset = (unsigned short)offsetof(mbboDirectRecord, stat);
    prt->papFldDes[mbboDirectRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[mbboDirectRecordSEVR]->offset = (unsigned short)offsetof(mbboDirectRecord, sevr);
    prt->papFldDes[mbboDirectRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[mbboDirectRecordAMSG]->offset = (unsigned short)offsetof(mbboDirectRecord, amsg);
    prt->papFldDes[mbboDirectRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[mbboDirectRecordNSTA]->offset = (unsigned short)offsetof(mbboDirectRecord, nsta);
    prt->papFldDes[mbboDirectRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[mbboDirectRecordNSEV]->offset = (unsigned short)offsetof(mbboDirectRecord, nsev);
    prt->papFldDes[mbboDirectRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[mbboDirectRecordNAMSG]->offset = (unsigned short)offsetof(mbboDirectRecord, namsg);
    prt->papFldDes[mbboDirectRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[mbboDirectRecordACKS]->offset = (unsigned short)offsetof(mbboDirectRecord, acks);
    prt->papFldDes[mbboDirectRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[mbboDirectRecordACKT]->offset = (unsigned short)offsetof(mbboDirectRecord, ackt);
    prt->papFldDes[mbboDirectRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[mbboDirectRecordDISS]->offset = (unsigned short)offsetof(mbboDirectRecord, diss);
    prt->papFldDes[mbboDirectRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[mbboDirectRecordLCNT]->offset = (unsigned short)offsetof(mbboDirectRecord, lcnt);
    prt->papFldDes[mbboDirectRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[mbboDirectRecordPACT]->offset = (unsigned short)offsetof(mbboDirectRecord, pact);
    prt->papFldDes[mbboDirectRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[mbboDirectRecordPUTF]->offset = (unsigned short)offsetof(mbboDirectRecord, putf);
    prt->papFldDes[mbboDirectRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[mbboDirectRecordRPRO]->offset = (unsigned short)offsetof(mbboDirectRecord, rpro);
    prt->papFldDes[mbboDirectRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[mbboDirectRecordASP]->offset = (unsigned short)offsetof(mbboDirectRecord, asp);
    prt->papFldDes[mbboDirectRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[mbboDirectRecordPPN]->offset = (unsigned short)offsetof(mbboDirectRecord, ppn);
    prt->papFldDes[mbboDirectRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[mbboDirectRecordPPNR]->offset = (unsigned short)offsetof(mbboDirectRecord, ppnr);
    prt->papFldDes[mbboDirectRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[mbboDirectRecordSPVT]->offset = (unsigned short)offsetof(mbboDirectRecord, spvt);
    prt->papFldDes[mbboDirectRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[mbboDirectRecordRSET]->offset = (unsigned short)offsetof(mbboDirectRecord, rset);
    prt->papFldDes[mbboDirectRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[mbboDirectRecordDSET]->offset = (unsigned short)offsetof(mbboDirectRecord, dset);
    prt->papFldDes[mbboDirectRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[mbboDirectRecordDPVT]->offset = (unsigned short)offsetof(mbboDirectRecord, dpvt);
    prt->papFldDes[mbboDirectRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[mbboDirectRecordRDES]->offset = (unsigned short)offsetof(mbboDirectRecord, rdes);
    prt->papFldDes[mbboDirectRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[mbboDirectRecordLSET]->offset = (unsigned short)offsetof(mbboDirectRecord, lset);
    prt->papFldDes[mbboDirectRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[mbboDirectRecordPRIO]->offset = (unsigned short)offsetof(mbboDirectRecord, prio);
    prt->papFldDes[mbboDirectRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[mbboDirectRecordTPRO]->offset = (unsigned short)offsetof(mbboDirectRecord, tpro);
    prt->papFldDes[mbboDirectRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[mbboDirectRecordBKPT]->offset = (unsigned short)offsetof(mbboDirectRecord, bkpt);
    prt->papFldDes[mbboDirectRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[mbboDirectRecordUDF]->offset = (unsigned short)offsetof(mbboDirectRecord, udf);
    prt->papFldDes[mbboDirectRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[mbboDirectRecordUDFS]->offset = (unsigned short)offsetof(mbboDirectRecord, udfs);
    prt->papFldDes[mbboDirectRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[mbboDirectRecordTIME]->offset = (unsigned short)offsetof(mbboDirectRecord, time);
    prt->papFldDes[mbboDirectRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[mbboDirectRecordUTAG]->offset = (unsigned short)offsetof(mbboDirectRecord, utag);
    prt->papFldDes[mbboDirectRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[mbboDirectRecordFLNK]->offset = (unsigned short)offsetof(mbboDirectRecord, flnk);
    prt->papFldDes[mbboDirectRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[mbboDirectRecordVAL]->offset = (unsigned short)offsetof(mbboDirectRecord, val);
    prt->papFldDes[mbboDirectRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[mbboDirectRecordOMSL]->offset = (unsigned short)offsetof(mbboDirectRecord, omsl);
    prt->papFldDes[mbboDirectRecordNOBT]->size = sizeof(prec->nobt);
    prt->papFldDes[mbboDirectRecordNOBT]->offset = (unsigned short)offsetof(mbboDirectRecord, nobt);
    prt->papFldDes[mbboDirectRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[mbboDirectRecordDOL]->offset = (unsigned short)offsetof(mbboDirectRecord, dol);
    prt->papFldDes[mbboDirectRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[mbboDirectRecordOUT]->offset = (unsigned short)offsetof(mbboDirectRecord, out);
    prt->papFldDes[mbboDirectRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[mbboDirectRecordRVAL]->offset = (unsigned short)offsetof(mbboDirectRecord, rval);
    prt->papFldDes[mbboDirectRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[mbboDirectRecordORAW]->offset = (unsigned short)offsetof(mbboDirectRecord, oraw);
    prt->papFldDes[mbboDirectRecordRBV]->size = sizeof(prec->rbv);
    prt->papFldDes[mbboDirectRecordRBV]->offset = (unsigned short)offsetof(mbboDirectRecord, rbv);
    prt->papFldDes[mbboDirectRecordORBV]->size = sizeof(prec->orbv);
    prt->papFldDes[mbboDirectRecordORBV]->offset = (unsigned short)offsetof(mbboDirectRecord, orbv);
    prt->papFldDes[mbboDirectRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[mbboDirectRecordMASK]->offset = (unsigned short)offsetof(mbboDirectRecord, mask);
    prt->papFldDes[mbboDirectRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[mbboDirectRecordMLST]->offset = (unsigned short)offsetof(mbboDirectRecord, mlst);
    prt->papFldDes[mbboDirectRecordOBIT]->size = sizeof(prec->obit);
    prt->papFldDes[mbboDirectRecordOBIT]->offset = (unsigned short)offsetof(mbboDirectRecord, obit);
    prt->papFldDes[mbboDirectRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[mbboDirectRecordSHFT]->offset = (unsigned short)offsetof(mbboDirectRecord, shft);
    prt->papFldDes[mbboDirectRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[mbboDirectRecordSIOL]->offset = (unsigned short)offsetof(mbboDirectRecord, siol);
    prt->papFldDes[mbboDirectRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[mbboDirectRecordSIML]->offset = (unsigned short)offsetof(mbboDirectRecord, siml);
    prt->papFldDes[mbboDirectRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[mbboDirectRecordSIMM]->offset = (unsigned short)offsetof(mbboDirectRecord, simm);
    prt->papFldDes[mbboDirectRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[mbboDirectRecordSIMS]->offset = (unsigned short)offsetof(mbboDirectRecord, sims);
    prt->papFldDes[mbboDirectRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[mbboDirectRecordOLDSIMM]->offset = (unsigned short)offsetof(mbboDirectRecord, oldsimm);
    prt->papFldDes[mbboDirectRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[mbboDirectRecordSSCN]->offset = (unsigned short)offsetof(mbboDirectRecord, sscn);
    prt->papFldDes[mbboDirectRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[mbboDirectRecordSDLY]->offset = (unsigned short)offsetof(mbboDirectRecord, sdly);
    prt->papFldDes[mbboDirectRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[mbboDirectRecordSIMPVT]->offset = (unsigned short)offsetof(mbboDirectRecord, simpvt);
    prt->papFldDes[mbboDirectRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[mbboDirectRecordIVOA]->offset = (unsigned short)offsetof(mbboDirectRecord, ivoa);
    prt->papFldDes[mbboDirectRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[mbboDirectRecordIVOV]->offset = (unsigned short)offsetof(mbboDirectRecord, ivov);
    prt->papFldDes[mbboDirectRecordB0]->size = sizeof(prec->b0);
    prt->papFldDes[mbboDirectRecordB0]->offset = (unsigned short)offsetof(mbboDirectRecord, b0);
    prt->papFldDes[mbboDirectRecordB1]->size = sizeof(prec->b1);
    prt->papFldDes[mbboDirectRecordB1]->offset = (unsigned short)offsetof(mbboDirectRecord, b1);
    prt->papFldDes[mbboDirectRecordB2]->size = sizeof(prec->b2);
    prt->papFldDes[mbboDirectRecordB2]->offset = (unsigned short)offsetof(mbboDirectRecord, b2);
    prt->papFldDes[mbboDirectRecordB3]->size = sizeof(prec->b3);
    prt->papFldDes[mbboDirectRecordB3]->offset = (unsigned short)offsetof(mbboDirectRecord, b3);
    prt->papFldDes[mbboDirectRecordB4]->size = sizeof(prec->b4);
    prt->papFldDes[mbboDirectRecordB4]->offset = (unsigned short)offsetof(mbboDirectRecord, b4);
    prt->papFldDes[mbboDirectRecordB5]->size = sizeof(prec->b5);
    prt->papFldDes[mbboDirectRecordB5]->offset = (unsigned short)offsetof(mbboDirectRecord, b5);
    prt->papFldDes[mbboDirectRecordB6]->size = sizeof(prec->b6);
    prt->papFldDes[mbboDirectRecordB6]->offset = (unsigned short)offsetof(mbboDirectRecord, b6);
    prt->papFldDes[mbboDirectRecordB7]->size = sizeof(prec->b7);
    prt->papFldDes[mbboDirectRecordB7]->offset = (unsigned short)offsetof(mbboDirectRecord, b7);
    prt->papFldDes[mbboDirectRecordB8]->size = sizeof(prec->b8);
    prt->papFldDes[mbboDirectRecordB8]->offset = (unsigned short)offsetof(mbboDirectRecord, b8);
    prt->papFldDes[mbboDirectRecordB9]->size = sizeof(prec->b9);
    prt->papFldDes[mbboDirectRecordB9]->offset = (unsigned short)offsetof(mbboDirectRecord, b9);
    prt->papFldDes[mbboDirectRecordBA]->size = sizeof(prec->ba);
    prt->papFldDes[mbboDirectRecordBA]->offset = (unsigned short)offsetof(mbboDirectRecord, ba);
    prt->papFldDes[mbboDirectRecordBB]->size = sizeof(prec->bb);
    prt->papFldDes[mbboDirectRecordBB]->offset = (unsigned short)offsetof(mbboDirectRecord, bb);
    prt->papFldDes[mbboDirectRecordBC]->size = sizeof(prec->bc);
    prt->papFldDes[mbboDirectRecordBC]->offset = (unsigned short)offsetof(mbboDirectRecord, bc);
    prt->papFldDes[mbboDirectRecordBD]->size = sizeof(prec->bd);
    prt->papFldDes[mbboDirectRecordBD]->offset = (unsigned short)offsetof(mbboDirectRecord, bd);
    prt->papFldDes[mbboDirectRecordBE]->size = sizeof(prec->be);
    prt->papFldDes[mbboDirectRecordBE]->offset = (unsigned short)offsetof(mbboDirectRecord, be);
    prt->papFldDes[mbboDirectRecordBF]->size = sizeof(prec->bf);
    prt->papFldDes[mbboDirectRecordBF]->offset = (unsigned short)offsetof(mbboDirectRecord, bf);
    prt->papFldDes[mbboDirectRecordB10]->size = sizeof(prec->b10);
    prt->papFldDes[mbboDirectRecordB10]->offset = (unsigned short)offsetof(mbboDirectRecord, b10);
    prt->papFldDes[mbboDirectRecordB11]->size = sizeof(prec->b11);
    prt->papFldDes[mbboDirectRecordB11]->offset = (unsigned short)offsetof(mbboDirectRecord, b11);
    prt->papFldDes[mbboDirectRecordB12]->size = sizeof(prec->b12);
    prt->papFldDes[mbboDirectRecordB12]->offset = (unsigned short)offsetof(mbboDirectRecord, b12);
    prt->papFldDes[mbboDirectRecordB13]->size = sizeof(prec->b13);
    prt->papFldDes[mbboDirectRecordB13]->offset = (unsigned short)offsetof(mbboDirectRecord, b13);
    prt->papFldDes[mbboDirectRecordB14]->size = sizeof(prec->b14);
    prt->papFldDes[mbboDirectRecordB14]->offset = (unsigned short)offsetof(mbboDirectRecord, b14);
    prt->papFldDes[mbboDirectRecordB15]->size = sizeof(prec->b15);
    prt->papFldDes[mbboDirectRecordB15]->offset = (unsigned short)offsetof(mbboDirectRecord, b15);
    prt->papFldDes[mbboDirectRecordB16]->size = sizeof(prec->b16);
    prt->papFldDes[mbboDirectRecordB16]->offset = (unsigned short)offsetof(mbboDirectRecord, b16);
    prt->papFldDes[mbboDirectRecordB17]->size = sizeof(prec->b17);
    prt->papFldDes[mbboDirectRecordB17]->offset = (unsigned short)offsetof(mbboDirectRecord, b17);
    prt->papFldDes[mbboDirectRecordB18]->size = sizeof(prec->b18);
    prt->papFldDes[mbboDirectRecordB18]->offset = (unsigned short)offsetof(mbboDirectRecord, b18);
    prt->papFldDes[mbboDirectRecordB19]->size = sizeof(prec->b19);
    prt->papFldDes[mbboDirectRecordB19]->offset = (unsigned short)offsetof(mbboDirectRecord, b19);
    prt->papFldDes[mbboDirectRecordB1A]->size = sizeof(prec->b1a);
    prt->papFldDes[mbboDirectRecordB1A]->offset = (unsigned short)offsetof(mbboDirectRecord, b1a);
    prt->papFldDes[mbboDirectRecordB1B]->size = sizeof(prec->b1b);
    prt->papFldDes[mbboDirectRecordB1B]->offset = (unsigned short)offsetof(mbboDirectRecord, b1b);
    prt->papFldDes[mbboDirectRecordB1C]->size = sizeof(prec->b1c);
    prt->papFldDes[mbboDirectRecordB1C]->offset = (unsigned short)offsetof(mbboDirectRecord, b1c);
    prt->papFldDes[mbboDirectRecordB1D]->size = sizeof(prec->b1d);
    prt->papFldDes[mbboDirectRecordB1D]->offset = (unsigned short)offsetof(mbboDirectRecord, b1d);
    prt->papFldDes[mbboDirectRecordB1E]->size = sizeof(prec->b1e);
    prt->papFldDes[mbboDirectRecordB1E]->offset = (unsigned short)offsetof(mbboDirectRecord, b1e);
    prt->papFldDes[mbboDirectRecordB1F]->size = sizeof(prec->b1f);
    prt->papFldDes[mbboDirectRecordB1F]->offset = (unsigned short)offsetof(mbboDirectRecord, b1f);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(mbboDirectRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_mbboDirectRecord_H */
