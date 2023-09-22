/** @file aoRecord.h
 * @brief Declarations for the @ref aoRecord "ao" record type.
 *
 * This header was generated from aoRecord.dbd
 */

#ifndef INC_aoRecord_H
#define INC_aoRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct aoRecord;
typedef struct aodset {
    dset common; /*init_record returns: (0,2)=>(success,success no convert)*/
    long (*write_ao)(struct aoRecord *prec); /*(0)=>(success ) */
    long (*special_linconv)(struct aoRecord *prec, int after);
} aodset;
#define HAS_aodset

#include "callback.h"

#ifndef aoOIF_NUM_CHOICES
/** @brief Enumerated type from menu aoOIF */
typedef enum {
    aoOIF_Full                      /**< @brief State string "Full" */,
    aoOIF_Incremental               /**< @brief State string "Incremental" */
} aoOIF;
/** @brief Number of states defined for menu aoOIF */
#define aoOIF_NUM_CHOICES 2
#endif

/** @brief Declaration of ao record type. */
typedef struct aoRecord {
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
    epicsFloat64        oval;       /**< @brief Output Value */
    DBLINK              out;        /**< @brief Output Specification */
    epicsFloat64        oroc;       /**< @brief Output Rate of Change */
    DBLINK              dol;        /**< @brief Desired Output Link */
    epicsEnum16         omsl;       /**< @brief Output Mode Select */
    epicsEnum16         oif;        /**< @brief Out Full/Incremental */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsEnum16         linr;       /**< @brief Linearization */
    epicsFloat64        eguf;       /**< @brief Eng Units Full */
    epicsFloat64        egul;       /**< @brief Eng Units Low */
    char                egu[16];    /**< @brief Engineering Units */
    epicsUInt32         roff;       /**< @brief Raw Offset */
    epicsFloat64        eoff;       /**< @brief EGU to Raw Offset */
    epicsFloat64        eslo;       /**< @brief EGU to Raw Slope */
    epicsFloat64        drvh;       /**< @brief Drive High Limit */
    epicsFloat64        drvl;       /**< @brief Drive Low Limit */
    epicsFloat64        hopr;       /**< @brief High Operating Range */
    epicsFloat64        lopr;       /**< @brief Low Operating Range */
    epicsFloat64        aoff;       /**< @brief Adjustment Offset */
    epicsFloat64        aslo;       /**< @brief Adjustment Slope */
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
    epicsInt32          rval;       /**< @brief Current Raw Value */
    epicsInt32          oraw;       /**< @brief Previous Raw Value */
    epicsInt32          rbv;        /**< @brief Readback Value */
    epicsInt32          orbv;       /**< @brief Prev Readback Value */
    epicsFloat64        pval;       /**< @brief Previous value */
    epicsFloat64        lalm;       /**< @brief Last Value Alarmed */
    epicsFloat64        alst;       /**< @brief Last Value Archived */
    epicsFloat64        mlst;       /**< @brief Last Val Monitored */
    void *   pbrk;                  /**< @brief Ptrto brkTable */
    epicsInt16          init;       /**< @brief Initialized? */
    epicsInt16          lbrk;       /**< @brief LastBreak Point */
    DBLINK              siol;       /**< @brief Simulation Output Link */
    DBLINK              siml;       /**< @brief Simulation Mode Link */
    epicsEnum16         simm;       /**< @brief Simulation Mode */
    epicsEnum16         sims;       /**< @brief Simulation Mode Severity */
    epicsEnum16         oldsimm;    /**< @brief Prev. Simulation Mode */
    epicsEnum16         sscn;       /**< @brief Sim. Mode Scan */
    epicsFloat64        sdly;       /**< @brief Sim. Mode Async Delay */
    epicsCallback            *simpvt; /**< @brief Sim. Mode Private */
    epicsEnum16         ivoa;       /**< @brief INVALID output action */
    epicsFloat64        ivov;       /**< @brief INVALID output value */
    epicsUInt8          omod;       /**< @brief Was OVAL modified? */
} aoRecord;

typedef enum {
	aoRecordNAME = 0,
	aoRecordDESC = 1,
	aoRecordASG = 2,
	aoRecordSCAN = 3,
	aoRecordPINI = 4,
	aoRecordPHAS = 5,
	aoRecordEVNT = 6,
	aoRecordTSE = 7,
	aoRecordTSEL = 8,
	aoRecordDTYP = 9,
	aoRecordDISV = 10,
	aoRecordDISA = 11,
	aoRecordSDIS = 12,
	aoRecordMLOK = 13,
	aoRecordMLIS = 14,
	aoRecordBKLNK = 15,
	aoRecordDISP = 16,
	aoRecordPROC = 17,
	aoRecordSTAT = 18,
	aoRecordSEVR = 19,
	aoRecordAMSG = 20,
	aoRecordNSTA = 21,
	aoRecordNSEV = 22,
	aoRecordNAMSG = 23,
	aoRecordACKS = 24,
	aoRecordACKT = 25,
	aoRecordDISS = 26,
	aoRecordLCNT = 27,
	aoRecordPACT = 28,
	aoRecordPUTF = 29,
	aoRecordRPRO = 30,
	aoRecordASP = 31,
	aoRecordPPN = 32,
	aoRecordPPNR = 33,
	aoRecordSPVT = 34,
	aoRecordRSET = 35,
	aoRecordDSET = 36,
	aoRecordDPVT = 37,
	aoRecordRDES = 38,
	aoRecordLSET = 39,
	aoRecordPRIO = 40,
	aoRecordTPRO = 41,
	aoRecordBKPT = 42,
	aoRecordUDF = 43,
	aoRecordUDFS = 44,
	aoRecordTIME = 45,
	aoRecordUTAG = 46,
	aoRecordFLNK = 47,
	aoRecordVAL = 48,
	aoRecordOVAL = 49,
	aoRecordOUT = 50,
	aoRecordOROC = 51,
	aoRecordDOL = 52,
	aoRecordOMSL = 53,
	aoRecordOIF = 54,
	aoRecordPREC = 55,
	aoRecordLINR = 56,
	aoRecordEGUF = 57,
	aoRecordEGUL = 58,
	aoRecordEGU = 59,
	aoRecordROFF = 60,
	aoRecordEOFF = 61,
	aoRecordESLO = 62,
	aoRecordDRVH = 63,
	aoRecordDRVL = 64,
	aoRecordHOPR = 65,
	aoRecordLOPR = 66,
	aoRecordAOFF = 67,
	aoRecordASLO = 68,
	aoRecordHIHI = 69,
	aoRecordLOLO = 70,
	aoRecordHIGH = 71,
	aoRecordLOW = 72,
	aoRecordHHSV = 73,
	aoRecordLLSV = 74,
	aoRecordHSV = 75,
	aoRecordLSV = 76,
	aoRecordHYST = 77,
	aoRecordADEL = 78,
	aoRecordMDEL = 79,
	aoRecordRVAL = 80,
	aoRecordORAW = 81,
	aoRecordRBV = 82,
	aoRecordORBV = 83,
	aoRecordPVAL = 84,
	aoRecordLALM = 85,
	aoRecordALST = 86,
	aoRecordMLST = 87,
	aoRecordPBRK = 88,
	aoRecordINIT = 89,
	aoRecordLBRK = 90,
	aoRecordSIOL = 91,
	aoRecordSIML = 92,
	aoRecordSIMM = 93,
	aoRecordSIMS = 94,
	aoRecordOLDSIMM = 95,
	aoRecordSSCN = 96,
	aoRecordSDLY = 97,
	aoRecordSIMPVT = 98,
	aoRecordIVOA = 99,
	aoRecordIVOV = 100,
	aoRecordOMOD = 101
} aoFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int aoRecordSizeOffset(dbRecordType *prt)
{
    aoRecord *prec = 0;

    if (prt->no_fields != 102) {
        cantProceed("IOC build or installation error:\n"
            "    The aoRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 102.\n",
            prt->no_fields);
    }
    prt->papFldDes[aoRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aoRecordNAME]->offset = (unsigned short)offsetof(aoRecord, name);
    prt->papFldDes[aoRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aoRecordDESC]->offset = (unsigned short)offsetof(aoRecord, desc);
    prt->papFldDes[aoRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aoRecordASG]->offset = (unsigned short)offsetof(aoRecord, asg);
    prt->papFldDes[aoRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aoRecordSCAN]->offset = (unsigned short)offsetof(aoRecord, scan);
    prt->papFldDes[aoRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aoRecordPINI]->offset = (unsigned short)offsetof(aoRecord, pini);
    prt->papFldDes[aoRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aoRecordPHAS]->offset = (unsigned short)offsetof(aoRecord, phas);
    prt->papFldDes[aoRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aoRecordEVNT]->offset = (unsigned short)offsetof(aoRecord, evnt);
    prt->papFldDes[aoRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aoRecordTSE]->offset = (unsigned short)offsetof(aoRecord, tse);
    prt->papFldDes[aoRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aoRecordTSEL]->offset = (unsigned short)offsetof(aoRecord, tsel);
    prt->papFldDes[aoRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aoRecordDTYP]->offset = (unsigned short)offsetof(aoRecord, dtyp);
    prt->papFldDes[aoRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aoRecordDISV]->offset = (unsigned short)offsetof(aoRecord, disv);
    prt->papFldDes[aoRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aoRecordDISA]->offset = (unsigned short)offsetof(aoRecord, disa);
    prt->papFldDes[aoRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aoRecordSDIS]->offset = (unsigned short)offsetof(aoRecord, sdis);
    prt->papFldDes[aoRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aoRecordMLOK]->offset = (unsigned short)offsetof(aoRecord, mlok);
    prt->papFldDes[aoRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aoRecordMLIS]->offset = (unsigned short)offsetof(aoRecord, mlis);
    prt->papFldDes[aoRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aoRecordBKLNK]->offset = (unsigned short)offsetof(aoRecord, bklnk);
    prt->papFldDes[aoRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aoRecordDISP]->offset = (unsigned short)offsetof(aoRecord, disp);
    prt->papFldDes[aoRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aoRecordPROC]->offset = (unsigned short)offsetof(aoRecord, proc);
    prt->papFldDes[aoRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aoRecordSTAT]->offset = (unsigned short)offsetof(aoRecord, stat);
    prt->papFldDes[aoRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aoRecordSEVR]->offset = (unsigned short)offsetof(aoRecord, sevr);
    prt->papFldDes[aoRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[aoRecordAMSG]->offset = (unsigned short)offsetof(aoRecord, amsg);
    prt->papFldDes[aoRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aoRecordNSTA]->offset = (unsigned short)offsetof(aoRecord, nsta);
    prt->papFldDes[aoRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aoRecordNSEV]->offset = (unsigned short)offsetof(aoRecord, nsev);
    prt->papFldDes[aoRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[aoRecordNAMSG]->offset = (unsigned short)offsetof(aoRecord, namsg);
    prt->papFldDes[aoRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aoRecordACKS]->offset = (unsigned short)offsetof(aoRecord, acks);
    prt->papFldDes[aoRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aoRecordACKT]->offset = (unsigned short)offsetof(aoRecord, ackt);
    prt->papFldDes[aoRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aoRecordDISS]->offset = (unsigned short)offsetof(aoRecord, diss);
    prt->papFldDes[aoRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aoRecordLCNT]->offset = (unsigned short)offsetof(aoRecord, lcnt);
    prt->papFldDes[aoRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aoRecordPACT]->offset = (unsigned short)offsetof(aoRecord, pact);
    prt->papFldDes[aoRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aoRecordPUTF]->offset = (unsigned short)offsetof(aoRecord, putf);
    prt->papFldDes[aoRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aoRecordRPRO]->offset = (unsigned short)offsetof(aoRecord, rpro);
    prt->papFldDes[aoRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aoRecordASP]->offset = (unsigned short)offsetof(aoRecord, asp);
    prt->papFldDes[aoRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aoRecordPPN]->offset = (unsigned short)offsetof(aoRecord, ppn);
    prt->papFldDes[aoRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aoRecordPPNR]->offset = (unsigned short)offsetof(aoRecord, ppnr);
    prt->papFldDes[aoRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aoRecordSPVT]->offset = (unsigned short)offsetof(aoRecord, spvt);
    prt->papFldDes[aoRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aoRecordRSET]->offset = (unsigned short)offsetof(aoRecord, rset);
    prt->papFldDes[aoRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aoRecordDSET]->offset = (unsigned short)offsetof(aoRecord, dset);
    prt->papFldDes[aoRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aoRecordDPVT]->offset = (unsigned short)offsetof(aoRecord, dpvt);
    prt->papFldDes[aoRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aoRecordRDES]->offset = (unsigned short)offsetof(aoRecord, rdes);
    prt->papFldDes[aoRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aoRecordLSET]->offset = (unsigned short)offsetof(aoRecord, lset);
    prt->papFldDes[aoRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aoRecordPRIO]->offset = (unsigned short)offsetof(aoRecord, prio);
    prt->papFldDes[aoRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aoRecordTPRO]->offset = (unsigned short)offsetof(aoRecord, tpro);
    prt->papFldDes[aoRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aoRecordBKPT]->offset = (unsigned short)offsetof(aoRecord, bkpt);
    prt->papFldDes[aoRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aoRecordUDF]->offset = (unsigned short)offsetof(aoRecord, udf);
    prt->papFldDes[aoRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aoRecordUDFS]->offset = (unsigned short)offsetof(aoRecord, udfs);
    prt->papFldDes[aoRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aoRecordTIME]->offset = (unsigned short)offsetof(aoRecord, time);
    prt->papFldDes[aoRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[aoRecordUTAG]->offset = (unsigned short)offsetof(aoRecord, utag);
    prt->papFldDes[aoRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aoRecordFLNK]->offset = (unsigned short)offsetof(aoRecord, flnk);
    prt->papFldDes[aoRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aoRecordVAL]->offset = (unsigned short)offsetof(aoRecord, val);
    prt->papFldDes[aoRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[aoRecordOVAL]->offset = (unsigned short)offsetof(aoRecord, oval);
    prt->papFldDes[aoRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[aoRecordOUT]->offset = (unsigned short)offsetof(aoRecord, out);
    prt->papFldDes[aoRecordOROC]->size = sizeof(prec->oroc);
    prt->papFldDes[aoRecordOROC]->offset = (unsigned short)offsetof(aoRecord, oroc);
    prt->papFldDes[aoRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[aoRecordDOL]->offset = (unsigned short)offsetof(aoRecord, dol);
    prt->papFldDes[aoRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[aoRecordOMSL]->offset = (unsigned short)offsetof(aoRecord, omsl);
    prt->papFldDes[aoRecordOIF]->size = sizeof(prec->oif);
    prt->papFldDes[aoRecordOIF]->offset = (unsigned short)offsetof(aoRecord, oif);
    prt->papFldDes[aoRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aoRecordPREC]->offset = (unsigned short)offsetof(aoRecord, prec);
    prt->papFldDes[aoRecordLINR]->size = sizeof(prec->linr);
    prt->papFldDes[aoRecordLINR]->offset = (unsigned short)offsetof(aoRecord, linr);
    prt->papFldDes[aoRecordEGUF]->size = sizeof(prec->eguf);
    prt->papFldDes[aoRecordEGUF]->offset = (unsigned short)offsetof(aoRecord, eguf);
    prt->papFldDes[aoRecordEGUL]->size = sizeof(prec->egul);
    prt->papFldDes[aoRecordEGUL]->offset = (unsigned short)offsetof(aoRecord, egul);
    prt->papFldDes[aoRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[aoRecordEGU]->offset = (unsigned short)offsetof(aoRecord, egu);
    prt->papFldDes[aoRecordROFF]->size = sizeof(prec->roff);
    prt->papFldDes[aoRecordROFF]->offset = (unsigned short)offsetof(aoRecord, roff);
    prt->papFldDes[aoRecordEOFF]->size = sizeof(prec->eoff);
    prt->papFldDes[aoRecordEOFF]->offset = (unsigned short)offsetof(aoRecord, eoff);
    prt->papFldDes[aoRecordESLO]->size = sizeof(prec->eslo);
    prt->papFldDes[aoRecordESLO]->offset = (unsigned short)offsetof(aoRecord, eslo);
    prt->papFldDes[aoRecordDRVH]->size = sizeof(prec->drvh);
    prt->papFldDes[aoRecordDRVH]->offset = (unsigned short)offsetof(aoRecord, drvh);
    prt->papFldDes[aoRecordDRVL]->size = sizeof(prec->drvl);
    prt->papFldDes[aoRecordDRVL]->offset = (unsigned short)offsetof(aoRecord, drvl);
    prt->papFldDes[aoRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[aoRecordHOPR]->offset = (unsigned short)offsetof(aoRecord, hopr);
    prt->papFldDes[aoRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[aoRecordLOPR]->offset = (unsigned short)offsetof(aoRecord, lopr);
    prt->papFldDes[aoRecordAOFF]->size = sizeof(prec->aoff);
    prt->papFldDes[aoRecordAOFF]->offset = (unsigned short)offsetof(aoRecord, aoff);
    prt->papFldDes[aoRecordASLO]->size = sizeof(prec->aslo);
    prt->papFldDes[aoRecordASLO]->offset = (unsigned short)offsetof(aoRecord, aslo);
    prt->papFldDes[aoRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[aoRecordHIHI]->offset = (unsigned short)offsetof(aoRecord, hihi);
    prt->papFldDes[aoRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[aoRecordLOLO]->offset = (unsigned short)offsetof(aoRecord, lolo);
    prt->papFldDes[aoRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[aoRecordHIGH]->offset = (unsigned short)offsetof(aoRecord, high);
    prt->papFldDes[aoRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[aoRecordLOW]->offset = (unsigned short)offsetof(aoRecord, low);
    prt->papFldDes[aoRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[aoRecordHHSV]->offset = (unsigned short)offsetof(aoRecord, hhsv);
    prt->papFldDes[aoRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[aoRecordLLSV]->offset = (unsigned short)offsetof(aoRecord, llsv);
    prt->papFldDes[aoRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[aoRecordHSV]->offset = (unsigned short)offsetof(aoRecord, hsv);
    prt->papFldDes[aoRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[aoRecordLSV]->offset = (unsigned short)offsetof(aoRecord, lsv);
    prt->papFldDes[aoRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[aoRecordHYST]->offset = (unsigned short)offsetof(aoRecord, hyst);
    prt->papFldDes[aoRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[aoRecordADEL]->offset = (unsigned short)offsetof(aoRecord, adel);
    prt->papFldDes[aoRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[aoRecordMDEL]->offset = (unsigned short)offsetof(aoRecord, mdel);
    prt->papFldDes[aoRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[aoRecordRVAL]->offset = (unsigned short)offsetof(aoRecord, rval);
    prt->papFldDes[aoRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[aoRecordORAW]->offset = (unsigned short)offsetof(aoRecord, oraw);
    prt->papFldDes[aoRecordRBV]->size = sizeof(prec->rbv);
    prt->papFldDes[aoRecordRBV]->offset = (unsigned short)offsetof(aoRecord, rbv);
    prt->papFldDes[aoRecordORBV]->size = sizeof(prec->orbv);
    prt->papFldDes[aoRecordORBV]->offset = (unsigned short)offsetof(aoRecord, orbv);
    prt->papFldDes[aoRecordPVAL]->size = sizeof(prec->pval);
    prt->papFldDes[aoRecordPVAL]->offset = (unsigned short)offsetof(aoRecord, pval);
    prt->papFldDes[aoRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[aoRecordLALM]->offset = (unsigned short)offsetof(aoRecord, lalm);
    prt->papFldDes[aoRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[aoRecordALST]->offset = (unsigned short)offsetof(aoRecord, alst);
    prt->papFldDes[aoRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[aoRecordMLST]->offset = (unsigned short)offsetof(aoRecord, mlst);
    prt->papFldDes[aoRecordPBRK]->size = sizeof(prec->pbrk);
    prt->papFldDes[aoRecordPBRK]->offset = (unsigned short)offsetof(aoRecord, pbrk);
    prt->papFldDes[aoRecordINIT]->size = sizeof(prec->init);
    prt->papFldDes[aoRecordINIT]->offset = (unsigned short)offsetof(aoRecord, init);
    prt->papFldDes[aoRecordLBRK]->size = sizeof(prec->lbrk);
    prt->papFldDes[aoRecordLBRK]->offset = (unsigned short)offsetof(aoRecord, lbrk);
    prt->papFldDes[aoRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[aoRecordSIOL]->offset = (unsigned short)offsetof(aoRecord, siol);
    prt->papFldDes[aoRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[aoRecordSIML]->offset = (unsigned short)offsetof(aoRecord, siml);
    prt->papFldDes[aoRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[aoRecordSIMM]->offset = (unsigned short)offsetof(aoRecord, simm);
    prt->papFldDes[aoRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[aoRecordSIMS]->offset = (unsigned short)offsetof(aoRecord, sims);
    prt->papFldDes[aoRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[aoRecordOLDSIMM]->offset = (unsigned short)offsetof(aoRecord, oldsimm);
    prt->papFldDes[aoRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[aoRecordSSCN]->offset = (unsigned short)offsetof(aoRecord, sscn);
    prt->papFldDes[aoRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[aoRecordSDLY]->offset = (unsigned short)offsetof(aoRecord, sdly);
    prt->papFldDes[aoRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[aoRecordSIMPVT]->offset = (unsigned short)offsetof(aoRecord, simpvt);
    prt->papFldDes[aoRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[aoRecordIVOA]->offset = (unsigned short)offsetof(aoRecord, ivoa);
    prt->papFldDes[aoRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[aoRecordIVOV]->offset = (unsigned short)offsetof(aoRecord, ivov);
    prt->papFldDes[aoRecordOMOD]->size = sizeof(prec->omod);
    prt->papFldDes[aoRecordOMOD]->offset = (unsigned short)offsetof(aoRecord, omod);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aoRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aoRecord_H */
