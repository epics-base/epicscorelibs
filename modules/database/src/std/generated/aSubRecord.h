/** @file aSubRecord.h
 * @brief Declarations for the @ref aSubRecord "aSub" record type.
 *
 * This header was generated from aSubRecord.dbd
 */

#ifndef INC_aSubRecord_H
#define INC_aSubRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"
struct aSubRecord;

#ifndef aSubLFLG_NUM_CHOICES
/** @brief Enumerated type from menu aSubLFLG */
typedef enum {
    aSubLFLG_IGNORE                 /**< @brief State string "IGNORE" */,
    aSubLFLG_READ                   /**< @brief State string "READ" */
} aSubLFLG;
/** @brief Number of states defined for menu aSubLFLG */
#define aSubLFLG_NUM_CHOICES 2
#endif

#ifndef aSubEFLG_NUM_CHOICES
/** @brief Enumerated type from menu aSubEFLG */
typedef enum {
    aSubEFLG_NEVER                  /**< @brief State string "NEVER" */,
    aSubEFLG_ON_CHANGE              /**< @brief State string "ON CHANGE" */,
    aSubEFLG_ALWAYS                 /**< @brief State string "ALWAYS" */
} aSubEFLG;
/** @brief Number of states defined for menu aSubEFLG */
#define aSubEFLG_NUM_CHOICES 3
#endif

/** @brief Declaration of aSub record type. */
typedef struct aSubRecord {
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
    epicsInt32          val;        /**< @brief Subr. return value */
    epicsInt32          oval;       /**< @brief Old return value */
    char                inam[41];   /**< @brief Initialize Subr. Name */
    epicsEnum16         lflg;       /**< @brief Subr. Input Enable */
    DBLINK              subl;       /**< @brief Subroutine Name Link */
    char                snam[41];   /**< @brief Process Subr. Name */
    char                onam[41];   /**< @brief Old Subr. Name */
    long (*sadr)(struct aSubRecord *); /**< @brief Subroutine Address */
    void (*cadr)(struct aSubRecord *); /**< @brief Subroutine Cleanup Address */
    epicsEnum16         brsv;       /**< @brief Bad Return Severity */
    epicsInt16          prec;       /**< @brief Display Precision */
    epicsEnum16         eflg;       /**< @brief Output Event Flag */
    DBLINK              inpa;       /**< @brief Input Link A */
    DBLINK              inpb;       /**< @brief Input Link B */
    DBLINK              inpc;       /**< @brief Input Link C */
    DBLINK              inpd;       /**< @brief Input Link D */
    DBLINK              inpe;       /**< @brief Input Link E */
    DBLINK              inpf;       /**< @brief Input Link F */
    DBLINK              inpg;       /**< @brief Input Link G */
    DBLINK              inph;       /**< @brief Input Link H */
    DBLINK              inpi;       /**< @brief Input Link I */
    DBLINK              inpj;       /**< @brief Input Link J */
    DBLINK              inpk;       /**< @brief Input Link K */
    DBLINK              inpl;       /**< @brief Input Link L */
    DBLINK              inpm;       /**< @brief Input Link M */
    DBLINK              inpn;       /**< @brief Input Link N */
    DBLINK              inpo;       /**< @brief Input Link O */
    DBLINK              inpp;       /**< @brief Input Link P */
    DBLINK              inpq;       /**< @brief Input Link Q */
    DBLINK              inpr;       /**< @brief Input Link R */
    DBLINK              inps;       /**< @brief Input Link S */
    DBLINK              inpt;       /**< @brief Input Link T */
    DBLINK              inpu;       /**< @brief Input Link U */
    void *a;                        /**< @brief Input value A */
    void *b;                        /**< @brief Input value B */
    void *c;                        /**< @brief Input value C */
    void *d;                        /**< @brief Input value D */
    void *e;                        /**< @brief Input value E */
    void *f;                        /**< @brief Input value F */
    void *g;                        /**< @brief Input value G */
    void *h;                        /**< @brief Input value H */
    void *i;                        /**< @brief Input value I */
    void *j;                        /**< @brief Input value J */
    void *k;                        /**< @brief Input value K */
    void *l;                        /**< @brief Input value L */
    void *m;                        /**< @brief Input value M */
    void *n;                        /**< @brief Input value N */
    void *o;                        /**< @brief Input value O */
    void *p;                        /**< @brief Input value P */
    void *q;                        /**< @brief Input value Q */
    void *r;                        /**< @brief Input value R */
    void *s;                        /**< @brief Input value S */
    void *t;                        /**< @brief Input value T */
    void *u;                        /**< @brief Input value U */
    epicsEnum16         fta;        /**< @brief Type of A */
    epicsEnum16         ftb;        /**< @brief Type of B */
    epicsEnum16         ftc;        /**< @brief Type of C */
    epicsEnum16         ftd;        /**< @brief Type of D */
    epicsEnum16         fte;        /**< @brief Type of E */
    epicsEnum16         ftf;        /**< @brief Type of F */
    epicsEnum16         ftg;        /**< @brief Type of G */
    epicsEnum16         fth;        /**< @brief Type of H */
    epicsEnum16         fti;        /**< @brief Type of I */
    epicsEnum16         ftj;        /**< @brief Type of J */
    epicsEnum16         ftk;        /**< @brief Type of K */
    epicsEnum16         ftl;        /**< @brief Type of L */
    epicsEnum16         ftm;        /**< @brief Type of M */
    epicsEnum16         ftn;        /**< @brief Type of N */
    epicsEnum16         fto;        /**< @brief Type of O */
    epicsEnum16         ftp;        /**< @brief Type of P */
    epicsEnum16         ftq;        /**< @brief Type of Q */
    epicsEnum16         ftr;        /**< @brief Type of R */
    epicsEnum16         fts;        /**< @brief Type of S */
    epicsEnum16         ftt;        /**< @brief Type of T */
    epicsEnum16         ftu;        /**< @brief Type of U */
    epicsUInt32         noa;        /**< @brief Max. elements in A */
    epicsUInt32         nob;        /**< @brief Max. elements in B */
    epicsUInt32         noc;        /**< @brief Max. elements in C */
    epicsUInt32         nod;        /**< @brief Max. elements in D */
    epicsUInt32         noe;        /**< @brief Max. elements in E */
    epicsUInt32         nof;        /**< @brief Max. elements in F */
    epicsUInt32         nog;        /**< @brief Max. elements in G */
    epicsUInt32         noh;        /**< @brief Max. elements in H */
    epicsUInt32         noi;        /**< @brief Max. elements in I */
    epicsUInt32         noj;        /**< @brief Max. elements in J */
    epicsUInt32         nok;        /**< @brief Max. elements in K */
    epicsUInt32         nol;        /**< @brief Max. elements in L */
    epicsUInt32         nom;        /**< @brief Max. elements in M */
    epicsUInt32         non;        /**< @brief Max. elements in N */
    epicsUInt32         noo;        /**< @brief Max. elements in O */
    epicsUInt32         nop;        /**< @brief Max. elements in P */
    epicsUInt32         noq;        /**< @brief Max. elements in Q */
    epicsUInt32         nor;        /**< @brief Max. elements in R */
    epicsUInt32         nos;        /**< @brief Max. elements in S */
    epicsUInt32         NOT;        /**< @brief Max. elements in T */
    epicsUInt32         nou;        /**< @brief Max. elements in U */
    epicsUInt32         nea;        /**< @brief Num. elements in A */
    epicsUInt32         neb;        /**< @brief Num. elements in B */
    epicsUInt32         nec;        /**< @brief Num. elements in C */
    epicsUInt32         ned;        /**< @brief Num. elements in D */
    epicsUInt32         nee;        /**< @brief Num. elements in E */
    epicsUInt32         nef;        /**< @brief Num. elements in F */
    epicsUInt32         neg;        /**< @brief Num. elements in G */
    epicsUInt32         neh;        /**< @brief Num. elements in H */
    epicsUInt32         nei;        /**< @brief Num. elements in I */
    epicsUInt32         nej;        /**< @brief Num. elements in J */
    epicsUInt32         nek;        /**< @brief Num. elements in K */
    epicsUInt32         nel;        /**< @brief Num. elements in L */
    epicsUInt32         nem;        /**< @brief Num. elements in M */
    epicsUInt32         nen;        /**< @brief Num. elements in N */
    epicsUInt32         neo;        /**< @brief Num. elements in O */
    epicsUInt32         nep;        /**< @brief Num. elements in P */
    epicsUInt32         neq;        /**< @brief Num. elements in Q */
    epicsUInt32         ner;        /**< @brief Num. elements in R */
    epicsUInt32         nes;        /**< @brief Num. elements in S */
    epicsUInt32         net;        /**< @brief Num. elements in T */
    epicsUInt32         neu;        /**< @brief Num. elements in U */
    DBLINK              outa;       /**< @brief Output Link A */
    DBLINK              outb;       /**< @brief Output Link B */
    DBLINK              outc;       /**< @brief Output Link C */
    DBLINK              outd;       /**< @brief Output Link D */
    DBLINK              oute;       /**< @brief Output Link E */
    DBLINK              outf;       /**< @brief Output Link F */
    DBLINK              outg;       /**< @brief Output Link G */
    DBLINK              outh;       /**< @brief Output Link H */
    DBLINK              outi;       /**< @brief Output Link I */
    DBLINK              outj;       /**< @brief Output Link J */
    DBLINK              outk;       /**< @brief Output Link K */
    DBLINK              outl;       /**< @brief Output Link L */
    DBLINK              outm;       /**< @brief Output Link M */
    DBLINK              outn;       /**< @brief Output Link N */
    DBLINK              outo;       /**< @brief Output Link O */
    DBLINK              outp;       /**< @brief Output Link P */
    DBLINK              outq;       /**< @brief Output Link Q */
    DBLINK              outr;       /**< @brief Output Link R */
    DBLINK              outs;       /**< @brief Output Link S */
    DBLINK              outt;       /**< @brief Output Link T */
    DBLINK              outu;       /**< @brief Output Link U */
    void *vala;                     /**< @brief Output value A */
    void *valb;                     /**< @brief Output value B */
    void *valc;                     /**< @brief Output value C */
    void *vald;                     /**< @brief Output value D */
    void *vale;                     /**< @brief Output value E */
    void *valf;                     /**< @brief Output value F */
    void *valg;                     /**< @brief Output value G */
    void *valh;                     /**< @brief Output value H */
    void *vali;                     /**< @brief Output value I */
    void *valj;                     /**< @brief Output value J */
    void *valk;                     /**< @brief Output value K */
    void *vall;                     /**< @brief Output value L */
    void *valm;                     /**< @brief Output value M */
    void *valn;                     /**< @brief Output value N */
    void *valo;                     /**< @brief Output value O */
    void *valp;                     /**< @brief Output value P */
    void *valq;                     /**< @brief Output value Q */
    void *valr;                     /**< @brief Output value R */
    void *vals;                     /**< @brief Output value S */
    void *valt;                     /**< @brief Output value T */
    void *valu;                     /**< @brief Output value U */
    void *ovla;                     /**< @brief Old Output A */
    void *ovlb;                     /**< @brief Old Output B */
    void *ovlc;                     /**< @brief Old Output C */
    void *ovld;                     /**< @brief Old Output D */
    void *ovle;                     /**< @brief Old Output E */
    void *ovlf;                     /**< @brief Old Output F */
    void *ovlg;                     /**< @brief Old Output G */
    void *ovlh;                     /**< @brief Old Output H */
    void *ovli;                     /**< @brief Old Output I */
    void *ovlj;                     /**< @brief Old Output J */
    void *ovlk;                     /**< @brief Old Output K */
    void *ovll;                     /**< @brief Old Output L */
    void *ovlm;                     /**< @brief Old Output M */
    void *ovln;                     /**< @brief Old Output N */
    void *ovlo;                     /**< @brief Old Output O */
    void *ovlp;                     /**< @brief Old Output P */
    void *ovlq;                     /**< @brief Old Output Q */
    void *ovlr;                     /**< @brief Old Output R */
    void *ovls;                     /**< @brief Old Output S */
    void *ovlt;                     /**< @brief Old Output T */
    void *ovlu;                     /**< @brief Old Output U */
    epicsEnum16         ftva;       /**< @brief Type of VALA */
    epicsEnum16         ftvb;       /**< @brief Type of VALB */
    epicsEnum16         ftvc;       /**< @brief Type of VALC */
    epicsEnum16         ftvd;       /**< @brief Type of VALD */
    epicsEnum16         ftve;       /**< @brief Type of VALE */
    epicsEnum16         ftvf;       /**< @brief Type of VALF */
    epicsEnum16         ftvg;       /**< @brief Type of VALG */
    epicsEnum16         ftvh;       /**< @brief Type of VALH */
    epicsEnum16         ftvi;       /**< @brief Type of VALI */
    epicsEnum16         ftvj;       /**< @brief Type of VALJ */
    epicsEnum16         ftvk;       /**< @brief Type of VALK */
    epicsEnum16         ftvl;       /**< @brief Type of VALL */
    epicsEnum16         ftvm;       /**< @brief Type of VALM */
    epicsEnum16         ftvn;       /**< @brief Type of VALN */
    epicsEnum16         ftvo;       /**< @brief Type of VALO */
    epicsEnum16         ftvp;       /**< @brief Type of VALP */
    epicsEnum16         ftvq;       /**< @brief Type of VALQ */
    epicsEnum16         ftvr;       /**< @brief Type of VALR */
    epicsEnum16         ftvs;       /**< @brief Type of VALS */
    epicsEnum16         ftvt;       /**< @brief Type of VALT */
    epicsEnum16         ftvu;       /**< @brief Type of VALU */
    epicsUInt32         nova;       /**< @brief Max. elements in VALA */
    epicsUInt32         novb;       /**< @brief Max. elements in VALB */
    epicsUInt32         novc;       /**< @brief Max. elements in VALC */
    epicsUInt32         novd;       /**< @brief Max. elements in VALD */
    epicsUInt32         nove;       /**< @brief Max. elements in VALE */
    epicsUInt32         novf;       /**< @brief Max. elements in VALF */
    epicsUInt32         novg;       /**< @brief Max. elements in VALG */
    epicsUInt32         novh;       /**< @brief Max. elements in VAlH */
    epicsUInt32         novi;       /**< @brief Max. elements in VALI */
    epicsUInt32         novj;       /**< @brief Max. elements in VALJ */
    epicsUInt32         novk;       /**< @brief Max. elements in VALK */
    epicsUInt32         novl;       /**< @brief Max. elements in VALL */
    epicsUInt32         novm;       /**< @brief Max. elements in VALM */
    epicsUInt32         novn;       /**< @brief Max. elements in VALN */
    epicsUInt32         novo;       /**< @brief Max. elements in VALO */
    epicsUInt32         novp;       /**< @brief Max. elements in VALP */
    epicsUInt32         novq;       /**< @brief Max. elements in VALQ */
    epicsUInt32         novr;       /**< @brief Max. elements in VALR */
    epicsUInt32         novs;       /**< @brief Max. elements in VALS */
    epicsUInt32         novt;       /**< @brief Max. elements in VALT */
    epicsUInt32         novu;       /**< @brief Max. elements in VALU */
    epicsUInt32         neva;       /**< @brief Num. elements in VALA */
    epicsUInt32         nevb;       /**< @brief Num. elements in VALB */
    epicsUInt32         nevc;       /**< @brief Num. elements in VALC */
    epicsUInt32         nevd;       /**< @brief Num. elements in VALD */
    epicsUInt32         neve;       /**< @brief Num. elements in VALE */
    epicsUInt32         nevf;       /**< @brief Num. elements in VALF */
    epicsUInt32         nevg;       /**< @brief Num. elements in VALG */
    epicsUInt32         nevh;       /**< @brief Num. elements in VAlH */
    epicsUInt32         nevi;       /**< @brief Num. elements in VALI */
    epicsUInt32         nevj;       /**< @brief Num. elements in VALJ */
    epicsUInt32         nevk;       /**< @brief Num. elements in VALK */
    epicsUInt32         nevl;       /**< @brief Num. elements in VALL */
    epicsUInt32         nevm;       /**< @brief Num. elements in VALM */
    epicsUInt32         nevn;       /**< @brief Num. elements in VALN */
    epicsUInt32         nevo;       /**< @brief Num. elements in VALO */
    epicsUInt32         nevp;       /**< @brief Num. elements in VALP */
    epicsUInt32         nevq;       /**< @brief Num. elements in VALQ */
    epicsUInt32         nevr;       /**< @brief Num. elements in VALR */
    epicsUInt32         nevs;       /**< @brief Num. elements in VALS */
    epicsUInt32         nevt;       /**< @brief Num. elements in VALT */
    epicsUInt32         nevu;       /**< @brief Num. elements in VALU */
    epicsUInt32         onva;       /**< @brief Num. elements in OVLA */
    epicsUInt32         onvb;       /**< @brief Num. elements in OVLB */
    epicsUInt32         onvc;       /**< @brief Num. elements in OVLC */
    epicsUInt32         onvd;       /**< @brief Num. elements in OVLD */
    epicsUInt32         onve;       /**< @brief Num. elements in OVLE */
    epicsUInt32         onvf;       /**< @brief Num. elements in OVLF */
    epicsUInt32         onvg;       /**< @brief Num. elements in OVLG */
    epicsUInt32         onvh;       /**< @brief Num. elements in VAlH */
    epicsUInt32         onvi;       /**< @brief Num. elements in OVLI */
    epicsUInt32         onvj;       /**< @brief Num. elements in OVLJ */
    epicsUInt32         onvk;       /**< @brief Num. elements in OVLK */
    epicsUInt32         onvl;       /**< @brief Num. elements in OVLL */
    epicsUInt32         onvm;       /**< @brief Num. elements in OVLM */
    epicsUInt32         onvn;       /**< @brief Num. elements in OVLN */
    epicsUInt32         onvo;       /**< @brief Num. elements in OVLO */
    epicsUInt32         onvp;       /**< @brief Num. elements in OVLP */
    epicsUInt32         onvq;       /**< @brief Num. elements in OVLQ */
    epicsUInt32         onvr;       /**< @brief Num. elements in OVLR */
    epicsUInt32         onvs;       /**< @brief Num. elements in OVLS */
    epicsUInt32         onvt;       /**< @brief Num. elements in OVLT */
    epicsUInt32         onvu;       /**< @brief Num. elements in OVLU */
} aSubRecord;

typedef enum {
	aSubRecordNAME = 0,
	aSubRecordDESC = 1,
	aSubRecordASG = 2,
	aSubRecordSCAN = 3,
	aSubRecordPINI = 4,
	aSubRecordPHAS = 5,
	aSubRecordEVNT = 6,
	aSubRecordTSE = 7,
	aSubRecordTSEL = 8,
	aSubRecordDTYP = 9,
	aSubRecordDISV = 10,
	aSubRecordDISA = 11,
	aSubRecordSDIS = 12,
	aSubRecordMLOK = 13,
	aSubRecordMLIS = 14,
	aSubRecordBKLNK = 15,
	aSubRecordDISP = 16,
	aSubRecordPROC = 17,
	aSubRecordSTAT = 18,
	aSubRecordSEVR = 19,
	aSubRecordAMSG = 20,
	aSubRecordNSTA = 21,
	aSubRecordNSEV = 22,
	aSubRecordNAMSG = 23,
	aSubRecordACKS = 24,
	aSubRecordACKT = 25,
	aSubRecordDISS = 26,
	aSubRecordLCNT = 27,
	aSubRecordPACT = 28,
	aSubRecordPUTF = 29,
	aSubRecordRPRO = 30,
	aSubRecordASP = 31,
	aSubRecordPPN = 32,
	aSubRecordPPNR = 33,
	aSubRecordSPVT = 34,
	aSubRecordRSET = 35,
	aSubRecordDSET = 36,
	aSubRecordDPVT = 37,
	aSubRecordRDES = 38,
	aSubRecordLSET = 39,
	aSubRecordPRIO = 40,
	aSubRecordTPRO = 41,
	aSubRecordBKPT = 42,
	aSubRecordUDF = 43,
	aSubRecordUDFS = 44,
	aSubRecordTIME = 45,
	aSubRecordUTAG = 46,
	aSubRecordFLNK = 47,
	aSubRecordVAL = 48,
	aSubRecordOVAL = 49,
	aSubRecordINAM = 50,
	aSubRecordLFLG = 51,
	aSubRecordSUBL = 52,
	aSubRecordSNAM = 53,
	aSubRecordONAM = 54,
	aSubRecordSADR = 55,
	aSubRecordCADR = 56,
	aSubRecordBRSV = 57,
	aSubRecordPREC = 58,
	aSubRecordEFLG = 59,
	aSubRecordINPA = 60,
	aSubRecordINPB = 61,
	aSubRecordINPC = 62,
	aSubRecordINPD = 63,
	aSubRecordINPE = 64,
	aSubRecordINPF = 65,
	aSubRecordINPG = 66,
	aSubRecordINPH = 67,
	aSubRecordINPI = 68,
	aSubRecordINPJ = 69,
	aSubRecordINPK = 70,
	aSubRecordINPL = 71,
	aSubRecordINPM = 72,
	aSubRecordINPN = 73,
	aSubRecordINPO = 74,
	aSubRecordINPP = 75,
	aSubRecordINPQ = 76,
	aSubRecordINPR = 77,
	aSubRecordINPS = 78,
	aSubRecordINPT = 79,
	aSubRecordINPU = 80,
	aSubRecordA = 81,
	aSubRecordB = 82,
	aSubRecordC = 83,
	aSubRecordD = 84,
	aSubRecordE = 85,
	aSubRecordF = 86,
	aSubRecordG = 87,
	aSubRecordH = 88,
	aSubRecordI = 89,
	aSubRecordJ = 90,
	aSubRecordK = 91,
	aSubRecordL = 92,
	aSubRecordM = 93,
	aSubRecordN = 94,
	aSubRecordO = 95,
	aSubRecordP = 96,
	aSubRecordQ = 97,
	aSubRecordR = 98,
	aSubRecordS = 99,
	aSubRecordT = 100,
	aSubRecordU = 101,
	aSubRecordFTA = 102,
	aSubRecordFTB = 103,
	aSubRecordFTC = 104,
	aSubRecordFTD = 105,
	aSubRecordFTE = 106,
	aSubRecordFTF = 107,
	aSubRecordFTG = 108,
	aSubRecordFTH = 109,
	aSubRecordFTI = 110,
	aSubRecordFTJ = 111,
	aSubRecordFTK = 112,
	aSubRecordFTL = 113,
	aSubRecordFTM = 114,
	aSubRecordFTN = 115,
	aSubRecordFTO = 116,
	aSubRecordFTP = 117,
	aSubRecordFTQ = 118,
	aSubRecordFTR = 119,
	aSubRecordFTS = 120,
	aSubRecordFTT = 121,
	aSubRecordFTU = 122,
	aSubRecordNOA = 123,
	aSubRecordNOB = 124,
	aSubRecordNOC = 125,
	aSubRecordNOD = 126,
	aSubRecordNOE = 127,
	aSubRecordNOF = 128,
	aSubRecordNOG = 129,
	aSubRecordNOH = 130,
	aSubRecordNOI = 131,
	aSubRecordNOJ = 132,
	aSubRecordNOK = 133,
	aSubRecordNOL = 134,
	aSubRecordNOM = 135,
	aSubRecordNON = 136,
	aSubRecordNOO = 137,
	aSubRecordNOP = 138,
	aSubRecordNOQ = 139,
	aSubRecordNOR = 140,
	aSubRecordNOS = 141,
	aSubRecordNOT = 142,
	aSubRecordNOU = 143,
	aSubRecordNEA = 144,
	aSubRecordNEB = 145,
	aSubRecordNEC = 146,
	aSubRecordNED = 147,
	aSubRecordNEE = 148,
	aSubRecordNEF = 149,
	aSubRecordNEG = 150,
	aSubRecordNEH = 151,
	aSubRecordNEI = 152,
	aSubRecordNEJ = 153,
	aSubRecordNEK = 154,
	aSubRecordNEL = 155,
	aSubRecordNEM = 156,
	aSubRecordNEN = 157,
	aSubRecordNEO = 158,
	aSubRecordNEP = 159,
	aSubRecordNEQ = 160,
	aSubRecordNER = 161,
	aSubRecordNES = 162,
	aSubRecordNET = 163,
	aSubRecordNEU = 164,
	aSubRecordOUTA = 165,
	aSubRecordOUTB = 166,
	aSubRecordOUTC = 167,
	aSubRecordOUTD = 168,
	aSubRecordOUTE = 169,
	aSubRecordOUTF = 170,
	aSubRecordOUTG = 171,
	aSubRecordOUTH = 172,
	aSubRecordOUTI = 173,
	aSubRecordOUTJ = 174,
	aSubRecordOUTK = 175,
	aSubRecordOUTL = 176,
	aSubRecordOUTM = 177,
	aSubRecordOUTN = 178,
	aSubRecordOUTO = 179,
	aSubRecordOUTP = 180,
	aSubRecordOUTQ = 181,
	aSubRecordOUTR = 182,
	aSubRecordOUTS = 183,
	aSubRecordOUTT = 184,
	aSubRecordOUTU = 185,
	aSubRecordVALA = 186,
	aSubRecordVALB = 187,
	aSubRecordVALC = 188,
	aSubRecordVALD = 189,
	aSubRecordVALE = 190,
	aSubRecordVALF = 191,
	aSubRecordVALG = 192,
	aSubRecordVALH = 193,
	aSubRecordVALI = 194,
	aSubRecordVALJ = 195,
	aSubRecordVALK = 196,
	aSubRecordVALL = 197,
	aSubRecordVALM = 198,
	aSubRecordVALN = 199,
	aSubRecordVALO = 200,
	aSubRecordVALP = 201,
	aSubRecordVALQ = 202,
	aSubRecordVALR = 203,
	aSubRecordVALS = 204,
	aSubRecordVALT = 205,
	aSubRecordVALU = 206,
	aSubRecordOVLA = 207,
	aSubRecordOVLB = 208,
	aSubRecordOVLC = 209,
	aSubRecordOVLD = 210,
	aSubRecordOVLE = 211,
	aSubRecordOVLF = 212,
	aSubRecordOVLG = 213,
	aSubRecordOVLH = 214,
	aSubRecordOVLI = 215,
	aSubRecordOVLJ = 216,
	aSubRecordOVLK = 217,
	aSubRecordOVLL = 218,
	aSubRecordOVLM = 219,
	aSubRecordOVLN = 220,
	aSubRecordOVLO = 221,
	aSubRecordOVLP = 222,
	aSubRecordOVLQ = 223,
	aSubRecordOVLR = 224,
	aSubRecordOVLS = 225,
	aSubRecordOVLT = 226,
	aSubRecordOVLU = 227,
	aSubRecordFTVA = 228,
	aSubRecordFTVB = 229,
	aSubRecordFTVC = 230,
	aSubRecordFTVD = 231,
	aSubRecordFTVE = 232,
	aSubRecordFTVF = 233,
	aSubRecordFTVG = 234,
	aSubRecordFTVH = 235,
	aSubRecordFTVI = 236,
	aSubRecordFTVJ = 237,
	aSubRecordFTVK = 238,
	aSubRecordFTVL = 239,
	aSubRecordFTVM = 240,
	aSubRecordFTVN = 241,
	aSubRecordFTVO = 242,
	aSubRecordFTVP = 243,
	aSubRecordFTVQ = 244,
	aSubRecordFTVR = 245,
	aSubRecordFTVS = 246,
	aSubRecordFTVT = 247,
	aSubRecordFTVU = 248,
	aSubRecordNOVA = 249,
	aSubRecordNOVB = 250,
	aSubRecordNOVC = 251,
	aSubRecordNOVD = 252,
	aSubRecordNOVE = 253,
	aSubRecordNOVF = 254,
	aSubRecordNOVG = 255,
	aSubRecordNOVH = 256,
	aSubRecordNOVI = 257,
	aSubRecordNOVJ = 258,
	aSubRecordNOVK = 259,
	aSubRecordNOVL = 260,
	aSubRecordNOVM = 261,
	aSubRecordNOVN = 262,
	aSubRecordNOVO = 263,
	aSubRecordNOVP = 264,
	aSubRecordNOVQ = 265,
	aSubRecordNOVR = 266,
	aSubRecordNOVS = 267,
	aSubRecordNOVT = 268,
	aSubRecordNOVU = 269,
	aSubRecordNEVA = 270,
	aSubRecordNEVB = 271,
	aSubRecordNEVC = 272,
	aSubRecordNEVD = 273,
	aSubRecordNEVE = 274,
	aSubRecordNEVF = 275,
	aSubRecordNEVG = 276,
	aSubRecordNEVH = 277,
	aSubRecordNEVI = 278,
	aSubRecordNEVJ = 279,
	aSubRecordNEVK = 280,
	aSubRecordNEVL = 281,
	aSubRecordNEVM = 282,
	aSubRecordNEVN = 283,
	aSubRecordNEVO = 284,
	aSubRecordNEVP = 285,
	aSubRecordNEVQ = 286,
	aSubRecordNEVR = 287,
	aSubRecordNEVS = 288,
	aSubRecordNEVT = 289,
	aSubRecordNEVU = 290,
	aSubRecordONVA = 291,
	aSubRecordONVB = 292,
	aSubRecordONVC = 293,
	aSubRecordONVD = 294,
	aSubRecordONVE = 295,
	aSubRecordONVF = 296,
	aSubRecordONVG = 297,
	aSubRecordONVH = 298,
	aSubRecordONVI = 299,
	aSubRecordONVJ = 300,
	aSubRecordONVK = 301,
	aSubRecordONVL = 302,
	aSubRecordONVM = 303,
	aSubRecordONVN = 304,
	aSubRecordONVO = 305,
	aSubRecordONVP = 306,
	aSubRecordONVQ = 307,
	aSubRecordONVR = 308,
	aSubRecordONVS = 309,
	aSubRecordONVT = 310,
	aSubRecordONVU = 311
} aSubFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int aSubRecordSizeOffset(dbRecordType *prt)
{
    aSubRecord *prec = 0;

    if (prt->no_fields != 312) {
        cantProceed("IOC build or installation error:\n"
            "    The aSubRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 312.\n",
            prt->no_fields);
    }
    prt->papFldDes[aSubRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[aSubRecordNAME]->offset = (unsigned short)offsetof(aSubRecord, name);
    prt->papFldDes[aSubRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aSubRecordDESC]->offset = (unsigned short)offsetof(aSubRecord, desc);
    prt->papFldDes[aSubRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aSubRecordASG]->offset = (unsigned short)offsetof(aSubRecord, asg);
    prt->papFldDes[aSubRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aSubRecordSCAN]->offset = (unsigned short)offsetof(aSubRecord, scan);
    prt->papFldDes[aSubRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aSubRecordPINI]->offset = (unsigned short)offsetof(aSubRecord, pini);
    prt->papFldDes[aSubRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aSubRecordPHAS]->offset = (unsigned short)offsetof(aSubRecord, phas);
    prt->papFldDes[aSubRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aSubRecordEVNT]->offset = (unsigned short)offsetof(aSubRecord, evnt);
    prt->papFldDes[aSubRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aSubRecordTSE]->offset = (unsigned short)offsetof(aSubRecord, tse);
    prt->papFldDes[aSubRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aSubRecordTSEL]->offset = (unsigned short)offsetof(aSubRecord, tsel);
    prt->papFldDes[aSubRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aSubRecordDTYP]->offset = (unsigned short)offsetof(aSubRecord, dtyp);
    prt->papFldDes[aSubRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aSubRecordDISV]->offset = (unsigned short)offsetof(aSubRecord, disv);
    prt->papFldDes[aSubRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aSubRecordDISA]->offset = (unsigned short)offsetof(aSubRecord, disa);
    prt->papFldDes[aSubRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aSubRecordSDIS]->offset = (unsigned short)offsetof(aSubRecord, sdis);
    prt->papFldDes[aSubRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aSubRecordMLOK]->offset = (unsigned short)offsetof(aSubRecord, mlok);
    prt->papFldDes[aSubRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aSubRecordMLIS]->offset = (unsigned short)offsetof(aSubRecord, mlis);
    prt->papFldDes[aSubRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aSubRecordBKLNK]->offset = (unsigned short)offsetof(aSubRecord, bklnk);
    prt->papFldDes[aSubRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aSubRecordDISP]->offset = (unsigned short)offsetof(aSubRecord, disp);
    prt->papFldDes[aSubRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aSubRecordPROC]->offset = (unsigned short)offsetof(aSubRecord, proc);
    prt->papFldDes[aSubRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aSubRecordSTAT]->offset = (unsigned short)offsetof(aSubRecord, stat);
    prt->papFldDes[aSubRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aSubRecordSEVR]->offset = (unsigned short)offsetof(aSubRecord, sevr);
    prt->papFldDes[aSubRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[aSubRecordAMSG]->offset = (unsigned short)offsetof(aSubRecord, amsg);
    prt->papFldDes[aSubRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aSubRecordNSTA]->offset = (unsigned short)offsetof(aSubRecord, nsta);
    prt->papFldDes[aSubRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aSubRecordNSEV]->offset = (unsigned short)offsetof(aSubRecord, nsev);
    prt->papFldDes[aSubRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[aSubRecordNAMSG]->offset = (unsigned short)offsetof(aSubRecord, namsg);
    prt->papFldDes[aSubRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aSubRecordACKS]->offset = (unsigned short)offsetof(aSubRecord, acks);
    prt->papFldDes[aSubRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aSubRecordACKT]->offset = (unsigned short)offsetof(aSubRecord, ackt);
    prt->papFldDes[aSubRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aSubRecordDISS]->offset = (unsigned short)offsetof(aSubRecord, diss);
    prt->papFldDes[aSubRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aSubRecordLCNT]->offset = (unsigned short)offsetof(aSubRecord, lcnt);
    prt->papFldDes[aSubRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aSubRecordPACT]->offset = (unsigned short)offsetof(aSubRecord, pact);
    prt->papFldDes[aSubRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aSubRecordPUTF]->offset = (unsigned short)offsetof(aSubRecord, putf);
    prt->papFldDes[aSubRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aSubRecordRPRO]->offset = (unsigned short)offsetof(aSubRecord, rpro);
    prt->papFldDes[aSubRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aSubRecordASP]->offset = (unsigned short)offsetof(aSubRecord, asp);
    prt->papFldDes[aSubRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aSubRecordPPN]->offset = (unsigned short)offsetof(aSubRecord, ppn);
    prt->papFldDes[aSubRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aSubRecordPPNR]->offset = (unsigned short)offsetof(aSubRecord, ppnr);
    prt->papFldDes[aSubRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aSubRecordSPVT]->offset = (unsigned short)offsetof(aSubRecord, spvt);
    prt->papFldDes[aSubRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aSubRecordRSET]->offset = (unsigned short)offsetof(aSubRecord, rset);
    prt->papFldDes[aSubRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aSubRecordDSET]->offset = (unsigned short)offsetof(aSubRecord, dset);
    prt->papFldDes[aSubRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aSubRecordDPVT]->offset = (unsigned short)offsetof(aSubRecord, dpvt);
    prt->papFldDes[aSubRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aSubRecordRDES]->offset = (unsigned short)offsetof(aSubRecord, rdes);
    prt->papFldDes[aSubRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aSubRecordLSET]->offset = (unsigned short)offsetof(aSubRecord, lset);
    prt->papFldDes[aSubRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aSubRecordPRIO]->offset = (unsigned short)offsetof(aSubRecord, prio);
    prt->papFldDes[aSubRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aSubRecordTPRO]->offset = (unsigned short)offsetof(aSubRecord, tpro);
    prt->papFldDes[aSubRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aSubRecordBKPT]->offset = (unsigned short)offsetof(aSubRecord, bkpt);
    prt->papFldDes[aSubRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aSubRecordUDF]->offset = (unsigned short)offsetof(aSubRecord, udf);
    prt->papFldDes[aSubRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aSubRecordUDFS]->offset = (unsigned short)offsetof(aSubRecord, udfs);
    prt->papFldDes[aSubRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aSubRecordTIME]->offset = (unsigned short)offsetof(aSubRecord, time);
    prt->papFldDes[aSubRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[aSubRecordUTAG]->offset = (unsigned short)offsetof(aSubRecord, utag);
    prt->papFldDes[aSubRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aSubRecordFLNK]->offset = (unsigned short)offsetof(aSubRecord, flnk);
    prt->papFldDes[aSubRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aSubRecordVAL]->offset = (unsigned short)offsetof(aSubRecord, val);
    prt->papFldDes[aSubRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[aSubRecordOVAL]->offset = (unsigned short)offsetof(aSubRecord, oval);
    prt->papFldDes[aSubRecordINAM]->size = sizeof(prec->inam);
    prt->papFldDes[aSubRecordINAM]->offset = (unsigned short)offsetof(aSubRecord, inam);
    prt->papFldDes[aSubRecordLFLG]->size = sizeof(prec->lflg);
    prt->papFldDes[aSubRecordLFLG]->offset = (unsigned short)offsetof(aSubRecord, lflg);
    prt->papFldDes[aSubRecordSUBL]->size = sizeof(prec->subl);
    prt->papFldDes[aSubRecordSUBL]->offset = (unsigned short)offsetof(aSubRecord, subl);
    prt->papFldDes[aSubRecordSNAM]->size = sizeof(prec->snam);
    prt->papFldDes[aSubRecordSNAM]->offset = (unsigned short)offsetof(aSubRecord, snam);
    prt->papFldDes[aSubRecordONAM]->size = sizeof(prec->onam);
    prt->papFldDes[aSubRecordONAM]->offset = (unsigned short)offsetof(aSubRecord, onam);
    prt->papFldDes[aSubRecordSADR]->size = sizeof(prec->sadr);
    prt->papFldDes[aSubRecordSADR]->offset = (unsigned short)offsetof(aSubRecord, sadr);
    prt->papFldDes[aSubRecordCADR]->size = sizeof(prec->cadr);
    prt->papFldDes[aSubRecordCADR]->offset = (unsigned short)offsetof(aSubRecord, cadr);
    prt->papFldDes[aSubRecordBRSV]->size = sizeof(prec->brsv);
    prt->papFldDes[aSubRecordBRSV]->offset = (unsigned short)offsetof(aSubRecord, brsv);
    prt->papFldDes[aSubRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aSubRecordPREC]->offset = (unsigned short)offsetof(aSubRecord, prec);
    prt->papFldDes[aSubRecordEFLG]->size = sizeof(prec->eflg);
    prt->papFldDes[aSubRecordEFLG]->offset = (unsigned short)offsetof(aSubRecord, eflg);
    prt->papFldDes[aSubRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[aSubRecordINPA]->offset = (unsigned short)offsetof(aSubRecord, inpa);
    prt->papFldDes[aSubRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[aSubRecordINPB]->offset = (unsigned short)offsetof(aSubRecord, inpb);
    prt->papFldDes[aSubRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[aSubRecordINPC]->offset = (unsigned short)offsetof(aSubRecord, inpc);
    prt->papFldDes[aSubRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[aSubRecordINPD]->offset = (unsigned short)offsetof(aSubRecord, inpd);
    prt->papFldDes[aSubRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[aSubRecordINPE]->offset = (unsigned short)offsetof(aSubRecord, inpe);
    prt->papFldDes[aSubRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[aSubRecordINPF]->offset = (unsigned short)offsetof(aSubRecord, inpf);
    prt->papFldDes[aSubRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[aSubRecordINPG]->offset = (unsigned short)offsetof(aSubRecord, inpg);
    prt->papFldDes[aSubRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[aSubRecordINPH]->offset = (unsigned short)offsetof(aSubRecord, inph);
    prt->papFldDes[aSubRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[aSubRecordINPI]->offset = (unsigned short)offsetof(aSubRecord, inpi);
    prt->papFldDes[aSubRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[aSubRecordINPJ]->offset = (unsigned short)offsetof(aSubRecord, inpj);
    prt->papFldDes[aSubRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[aSubRecordINPK]->offset = (unsigned short)offsetof(aSubRecord, inpk);
    prt->papFldDes[aSubRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[aSubRecordINPL]->offset = (unsigned short)offsetof(aSubRecord, inpl);
    prt->papFldDes[aSubRecordINPM]->size = sizeof(prec->inpm);
    prt->papFldDes[aSubRecordINPM]->offset = (unsigned short)offsetof(aSubRecord, inpm);
    prt->papFldDes[aSubRecordINPN]->size = sizeof(prec->inpn);
    prt->papFldDes[aSubRecordINPN]->offset = (unsigned short)offsetof(aSubRecord, inpn);
    prt->papFldDes[aSubRecordINPO]->size = sizeof(prec->inpo);
    prt->papFldDes[aSubRecordINPO]->offset = (unsigned short)offsetof(aSubRecord, inpo);
    prt->papFldDes[aSubRecordINPP]->size = sizeof(prec->inpp);
    prt->papFldDes[aSubRecordINPP]->offset = (unsigned short)offsetof(aSubRecord, inpp);
    prt->papFldDes[aSubRecordINPQ]->size = sizeof(prec->inpq);
    prt->papFldDes[aSubRecordINPQ]->offset = (unsigned short)offsetof(aSubRecord, inpq);
    prt->papFldDes[aSubRecordINPR]->size = sizeof(prec->inpr);
    prt->papFldDes[aSubRecordINPR]->offset = (unsigned short)offsetof(aSubRecord, inpr);
    prt->papFldDes[aSubRecordINPS]->size = sizeof(prec->inps);
    prt->papFldDes[aSubRecordINPS]->offset = (unsigned short)offsetof(aSubRecord, inps);
    prt->papFldDes[aSubRecordINPT]->size = sizeof(prec->inpt);
    prt->papFldDes[aSubRecordINPT]->offset = (unsigned short)offsetof(aSubRecord, inpt);
    prt->papFldDes[aSubRecordINPU]->size = sizeof(prec->inpu);
    prt->papFldDes[aSubRecordINPU]->offset = (unsigned short)offsetof(aSubRecord, inpu);
    prt->papFldDes[aSubRecordA]->size = sizeof(prec->a);
    prt->papFldDes[aSubRecordA]->offset = (unsigned short)offsetof(aSubRecord, a);
    prt->papFldDes[aSubRecordB]->size = sizeof(prec->b);
    prt->papFldDes[aSubRecordB]->offset = (unsigned short)offsetof(aSubRecord, b);
    prt->papFldDes[aSubRecordC]->size = sizeof(prec->c);
    prt->papFldDes[aSubRecordC]->offset = (unsigned short)offsetof(aSubRecord, c);
    prt->papFldDes[aSubRecordD]->size = sizeof(prec->d);
    prt->papFldDes[aSubRecordD]->offset = (unsigned short)offsetof(aSubRecord, d);
    prt->papFldDes[aSubRecordE]->size = sizeof(prec->e);
    prt->papFldDes[aSubRecordE]->offset = (unsigned short)offsetof(aSubRecord, e);
    prt->papFldDes[aSubRecordF]->size = sizeof(prec->f);
    prt->papFldDes[aSubRecordF]->offset = (unsigned short)offsetof(aSubRecord, f);
    prt->papFldDes[aSubRecordG]->size = sizeof(prec->g);
    prt->papFldDes[aSubRecordG]->offset = (unsigned short)offsetof(aSubRecord, g);
    prt->papFldDes[aSubRecordH]->size = sizeof(prec->h);
    prt->papFldDes[aSubRecordH]->offset = (unsigned short)offsetof(aSubRecord, h);
    prt->papFldDes[aSubRecordI]->size = sizeof(prec->i);
    prt->papFldDes[aSubRecordI]->offset = (unsigned short)offsetof(aSubRecord, i);
    prt->papFldDes[aSubRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[aSubRecordJ]->offset = (unsigned short)offsetof(aSubRecord, j);
    prt->papFldDes[aSubRecordK]->size = sizeof(prec->k);
    prt->papFldDes[aSubRecordK]->offset = (unsigned short)offsetof(aSubRecord, k);
    prt->papFldDes[aSubRecordL]->size = sizeof(prec->l);
    prt->papFldDes[aSubRecordL]->offset = (unsigned short)offsetof(aSubRecord, l);
    prt->papFldDes[aSubRecordM]->size = sizeof(prec->m);
    prt->papFldDes[aSubRecordM]->offset = (unsigned short)offsetof(aSubRecord, m);
    prt->papFldDes[aSubRecordN]->size = sizeof(prec->n);
    prt->papFldDes[aSubRecordN]->offset = (unsigned short)offsetof(aSubRecord, n);
    prt->papFldDes[aSubRecordO]->size = sizeof(prec->o);
    prt->papFldDes[aSubRecordO]->offset = (unsigned short)offsetof(aSubRecord, o);
    prt->papFldDes[aSubRecordP]->size = sizeof(prec->p);
    prt->papFldDes[aSubRecordP]->offset = (unsigned short)offsetof(aSubRecord, p);
    prt->papFldDes[aSubRecordQ]->size = sizeof(prec->q);
    prt->papFldDes[aSubRecordQ]->offset = (unsigned short)offsetof(aSubRecord, q);
    prt->papFldDes[aSubRecordR]->size = sizeof(prec->r);
    prt->papFldDes[aSubRecordR]->offset = (unsigned short)offsetof(aSubRecord, r);
    prt->papFldDes[aSubRecordS]->size = sizeof(prec->s);
    prt->papFldDes[aSubRecordS]->offset = (unsigned short)offsetof(aSubRecord, s);
    prt->papFldDes[aSubRecordT]->size = sizeof(prec->t);
    prt->papFldDes[aSubRecordT]->offset = (unsigned short)offsetof(aSubRecord, t);
    prt->papFldDes[aSubRecordU]->size = sizeof(prec->u);
    prt->papFldDes[aSubRecordU]->offset = (unsigned short)offsetof(aSubRecord, u);
    prt->papFldDes[aSubRecordFTA]->size = sizeof(prec->fta);
    prt->papFldDes[aSubRecordFTA]->offset = (unsigned short)offsetof(aSubRecord, fta);
    prt->papFldDes[aSubRecordFTB]->size = sizeof(prec->ftb);
    prt->papFldDes[aSubRecordFTB]->offset = (unsigned short)offsetof(aSubRecord, ftb);
    prt->papFldDes[aSubRecordFTC]->size = sizeof(prec->ftc);
    prt->papFldDes[aSubRecordFTC]->offset = (unsigned short)offsetof(aSubRecord, ftc);
    prt->papFldDes[aSubRecordFTD]->size = sizeof(prec->ftd);
    prt->papFldDes[aSubRecordFTD]->offset = (unsigned short)offsetof(aSubRecord, ftd);
    prt->papFldDes[aSubRecordFTE]->size = sizeof(prec->fte);
    prt->papFldDes[aSubRecordFTE]->offset = (unsigned short)offsetof(aSubRecord, fte);
    prt->papFldDes[aSubRecordFTF]->size = sizeof(prec->ftf);
    prt->papFldDes[aSubRecordFTF]->offset = (unsigned short)offsetof(aSubRecord, ftf);
    prt->papFldDes[aSubRecordFTG]->size = sizeof(prec->ftg);
    prt->papFldDes[aSubRecordFTG]->offset = (unsigned short)offsetof(aSubRecord, ftg);
    prt->papFldDes[aSubRecordFTH]->size = sizeof(prec->fth);
    prt->papFldDes[aSubRecordFTH]->offset = (unsigned short)offsetof(aSubRecord, fth);
    prt->papFldDes[aSubRecordFTI]->size = sizeof(prec->fti);
    prt->papFldDes[aSubRecordFTI]->offset = (unsigned short)offsetof(aSubRecord, fti);
    prt->papFldDes[aSubRecordFTJ]->size = sizeof(prec->ftj);
    prt->papFldDes[aSubRecordFTJ]->offset = (unsigned short)offsetof(aSubRecord, ftj);
    prt->papFldDes[aSubRecordFTK]->size = sizeof(prec->ftk);
    prt->papFldDes[aSubRecordFTK]->offset = (unsigned short)offsetof(aSubRecord, ftk);
    prt->papFldDes[aSubRecordFTL]->size = sizeof(prec->ftl);
    prt->papFldDes[aSubRecordFTL]->offset = (unsigned short)offsetof(aSubRecord, ftl);
    prt->papFldDes[aSubRecordFTM]->size = sizeof(prec->ftm);
    prt->papFldDes[aSubRecordFTM]->offset = (unsigned short)offsetof(aSubRecord, ftm);
    prt->papFldDes[aSubRecordFTN]->size = sizeof(prec->ftn);
    prt->papFldDes[aSubRecordFTN]->offset = (unsigned short)offsetof(aSubRecord, ftn);
    prt->papFldDes[aSubRecordFTO]->size = sizeof(prec->fto);
    prt->papFldDes[aSubRecordFTO]->offset = (unsigned short)offsetof(aSubRecord, fto);
    prt->papFldDes[aSubRecordFTP]->size = sizeof(prec->ftp);
    prt->papFldDes[aSubRecordFTP]->offset = (unsigned short)offsetof(aSubRecord, ftp);
    prt->papFldDes[aSubRecordFTQ]->size = sizeof(prec->ftq);
    prt->papFldDes[aSubRecordFTQ]->offset = (unsigned short)offsetof(aSubRecord, ftq);
    prt->papFldDes[aSubRecordFTR]->size = sizeof(prec->ftr);
    prt->papFldDes[aSubRecordFTR]->offset = (unsigned short)offsetof(aSubRecord, ftr);
    prt->papFldDes[aSubRecordFTS]->size = sizeof(prec->fts);
    prt->papFldDes[aSubRecordFTS]->offset = (unsigned short)offsetof(aSubRecord, fts);
    prt->papFldDes[aSubRecordFTT]->size = sizeof(prec->ftt);
    prt->papFldDes[aSubRecordFTT]->offset = (unsigned short)offsetof(aSubRecord, ftt);
    prt->papFldDes[aSubRecordFTU]->size = sizeof(prec->ftu);
    prt->papFldDes[aSubRecordFTU]->offset = (unsigned short)offsetof(aSubRecord, ftu);
    prt->papFldDes[aSubRecordNOA]->size = sizeof(prec->noa);
    prt->papFldDes[aSubRecordNOA]->offset = (unsigned short)offsetof(aSubRecord, noa);
    prt->papFldDes[aSubRecordNOB]->size = sizeof(prec->nob);
    prt->papFldDes[aSubRecordNOB]->offset = (unsigned short)offsetof(aSubRecord, nob);
    prt->papFldDes[aSubRecordNOC]->size = sizeof(prec->noc);
    prt->papFldDes[aSubRecordNOC]->offset = (unsigned short)offsetof(aSubRecord, noc);
    prt->papFldDes[aSubRecordNOD]->size = sizeof(prec->nod);
    prt->papFldDes[aSubRecordNOD]->offset = (unsigned short)offsetof(aSubRecord, nod);
    prt->papFldDes[aSubRecordNOE]->size = sizeof(prec->noe);
    prt->papFldDes[aSubRecordNOE]->offset = (unsigned short)offsetof(aSubRecord, noe);
    prt->papFldDes[aSubRecordNOF]->size = sizeof(prec->nof);
    prt->papFldDes[aSubRecordNOF]->offset = (unsigned short)offsetof(aSubRecord, nof);
    prt->papFldDes[aSubRecordNOG]->size = sizeof(prec->nog);
    prt->papFldDes[aSubRecordNOG]->offset = (unsigned short)offsetof(aSubRecord, nog);
    prt->papFldDes[aSubRecordNOH]->size = sizeof(prec->noh);
    prt->papFldDes[aSubRecordNOH]->offset = (unsigned short)offsetof(aSubRecord, noh);
    prt->papFldDes[aSubRecordNOI]->size = sizeof(prec->noi);
    prt->papFldDes[aSubRecordNOI]->offset = (unsigned short)offsetof(aSubRecord, noi);
    prt->papFldDes[aSubRecordNOJ]->size = sizeof(prec->noj);
    prt->papFldDes[aSubRecordNOJ]->offset = (unsigned short)offsetof(aSubRecord, noj);
    prt->papFldDes[aSubRecordNOK]->size = sizeof(prec->nok);
    prt->papFldDes[aSubRecordNOK]->offset = (unsigned short)offsetof(aSubRecord, nok);
    prt->papFldDes[aSubRecordNOL]->size = sizeof(prec->nol);
    prt->papFldDes[aSubRecordNOL]->offset = (unsigned short)offsetof(aSubRecord, nol);
    prt->papFldDes[aSubRecordNOM]->size = sizeof(prec->nom);
    prt->papFldDes[aSubRecordNOM]->offset = (unsigned short)offsetof(aSubRecord, nom);
    prt->papFldDes[aSubRecordNON]->size = sizeof(prec->non);
    prt->papFldDes[aSubRecordNON]->offset = (unsigned short)offsetof(aSubRecord, non);
    prt->papFldDes[aSubRecordNOO]->size = sizeof(prec->noo);
    prt->papFldDes[aSubRecordNOO]->offset = (unsigned short)offsetof(aSubRecord, noo);
    prt->papFldDes[aSubRecordNOP]->size = sizeof(prec->nop);
    prt->papFldDes[aSubRecordNOP]->offset = (unsigned short)offsetof(aSubRecord, nop);
    prt->papFldDes[aSubRecordNOQ]->size = sizeof(prec->noq);
    prt->papFldDes[aSubRecordNOQ]->offset = (unsigned short)offsetof(aSubRecord, noq);
    prt->papFldDes[aSubRecordNOR]->size = sizeof(prec->nor);
    prt->papFldDes[aSubRecordNOR]->offset = (unsigned short)offsetof(aSubRecord, nor);
    prt->papFldDes[aSubRecordNOS]->size = sizeof(prec->nos);
    prt->papFldDes[aSubRecordNOS]->offset = (unsigned short)offsetof(aSubRecord, nos);
    prt->papFldDes[aSubRecordNOT]->size = sizeof(prec->NOT);
    prt->papFldDes[aSubRecordNOT]->offset = (unsigned short)offsetof(aSubRecord, NOT);
    prt->papFldDes[aSubRecordNOU]->size = sizeof(prec->nou);
    prt->papFldDes[aSubRecordNOU]->offset = (unsigned short)offsetof(aSubRecord, nou);
    prt->papFldDes[aSubRecordNEA]->size = sizeof(prec->nea);
    prt->papFldDes[aSubRecordNEA]->offset = (unsigned short)offsetof(aSubRecord, nea);
    prt->papFldDes[aSubRecordNEB]->size = sizeof(prec->neb);
    prt->papFldDes[aSubRecordNEB]->offset = (unsigned short)offsetof(aSubRecord, neb);
    prt->papFldDes[aSubRecordNEC]->size = sizeof(prec->nec);
    prt->papFldDes[aSubRecordNEC]->offset = (unsigned short)offsetof(aSubRecord, nec);
    prt->papFldDes[aSubRecordNED]->size = sizeof(prec->ned);
    prt->papFldDes[aSubRecordNED]->offset = (unsigned short)offsetof(aSubRecord, ned);
    prt->papFldDes[aSubRecordNEE]->size = sizeof(prec->nee);
    prt->papFldDes[aSubRecordNEE]->offset = (unsigned short)offsetof(aSubRecord, nee);
    prt->papFldDes[aSubRecordNEF]->size = sizeof(prec->nef);
    prt->papFldDes[aSubRecordNEF]->offset = (unsigned short)offsetof(aSubRecord, nef);
    prt->papFldDes[aSubRecordNEG]->size = sizeof(prec->neg);
    prt->papFldDes[aSubRecordNEG]->offset = (unsigned short)offsetof(aSubRecord, neg);
    prt->papFldDes[aSubRecordNEH]->size = sizeof(prec->neh);
    prt->papFldDes[aSubRecordNEH]->offset = (unsigned short)offsetof(aSubRecord, neh);
    prt->papFldDes[aSubRecordNEI]->size = sizeof(prec->nei);
    prt->papFldDes[aSubRecordNEI]->offset = (unsigned short)offsetof(aSubRecord, nei);
    prt->papFldDes[aSubRecordNEJ]->size = sizeof(prec->nej);
    prt->papFldDes[aSubRecordNEJ]->offset = (unsigned short)offsetof(aSubRecord, nej);
    prt->papFldDes[aSubRecordNEK]->size = sizeof(prec->nek);
    prt->papFldDes[aSubRecordNEK]->offset = (unsigned short)offsetof(aSubRecord, nek);
    prt->papFldDes[aSubRecordNEL]->size = sizeof(prec->nel);
    prt->papFldDes[aSubRecordNEL]->offset = (unsigned short)offsetof(aSubRecord, nel);
    prt->papFldDes[aSubRecordNEM]->size = sizeof(prec->nem);
    prt->papFldDes[aSubRecordNEM]->offset = (unsigned short)offsetof(aSubRecord, nem);
    prt->papFldDes[aSubRecordNEN]->size = sizeof(prec->nen);
    prt->papFldDes[aSubRecordNEN]->offset = (unsigned short)offsetof(aSubRecord, nen);
    prt->papFldDes[aSubRecordNEO]->size = sizeof(prec->neo);
    prt->papFldDes[aSubRecordNEO]->offset = (unsigned short)offsetof(aSubRecord, neo);
    prt->papFldDes[aSubRecordNEP]->size = sizeof(prec->nep);
    prt->papFldDes[aSubRecordNEP]->offset = (unsigned short)offsetof(aSubRecord, nep);
    prt->papFldDes[aSubRecordNEQ]->size = sizeof(prec->neq);
    prt->papFldDes[aSubRecordNEQ]->offset = (unsigned short)offsetof(aSubRecord, neq);
    prt->papFldDes[aSubRecordNER]->size = sizeof(prec->ner);
    prt->papFldDes[aSubRecordNER]->offset = (unsigned short)offsetof(aSubRecord, ner);
    prt->papFldDes[aSubRecordNES]->size = sizeof(prec->nes);
    prt->papFldDes[aSubRecordNES]->offset = (unsigned short)offsetof(aSubRecord, nes);
    prt->papFldDes[aSubRecordNET]->size = sizeof(prec->net);
    prt->papFldDes[aSubRecordNET]->offset = (unsigned short)offsetof(aSubRecord, net);
    prt->papFldDes[aSubRecordNEU]->size = sizeof(prec->neu);
    prt->papFldDes[aSubRecordNEU]->offset = (unsigned short)offsetof(aSubRecord, neu);
    prt->papFldDes[aSubRecordOUTA]->size = sizeof(prec->outa);
    prt->papFldDes[aSubRecordOUTA]->offset = (unsigned short)offsetof(aSubRecord, outa);
    prt->papFldDes[aSubRecordOUTB]->size = sizeof(prec->outb);
    prt->papFldDes[aSubRecordOUTB]->offset = (unsigned short)offsetof(aSubRecord, outb);
    prt->papFldDes[aSubRecordOUTC]->size = sizeof(prec->outc);
    prt->papFldDes[aSubRecordOUTC]->offset = (unsigned short)offsetof(aSubRecord, outc);
    prt->papFldDes[aSubRecordOUTD]->size = sizeof(prec->outd);
    prt->papFldDes[aSubRecordOUTD]->offset = (unsigned short)offsetof(aSubRecord, outd);
    prt->papFldDes[aSubRecordOUTE]->size = sizeof(prec->oute);
    prt->papFldDes[aSubRecordOUTE]->offset = (unsigned short)offsetof(aSubRecord, oute);
    prt->papFldDes[aSubRecordOUTF]->size = sizeof(prec->outf);
    prt->papFldDes[aSubRecordOUTF]->offset = (unsigned short)offsetof(aSubRecord, outf);
    prt->papFldDes[aSubRecordOUTG]->size = sizeof(prec->outg);
    prt->papFldDes[aSubRecordOUTG]->offset = (unsigned short)offsetof(aSubRecord, outg);
    prt->papFldDes[aSubRecordOUTH]->size = sizeof(prec->outh);
    prt->papFldDes[aSubRecordOUTH]->offset = (unsigned short)offsetof(aSubRecord, outh);
    prt->papFldDes[aSubRecordOUTI]->size = sizeof(prec->outi);
    prt->papFldDes[aSubRecordOUTI]->offset = (unsigned short)offsetof(aSubRecord, outi);
    prt->papFldDes[aSubRecordOUTJ]->size = sizeof(prec->outj);
    prt->papFldDes[aSubRecordOUTJ]->offset = (unsigned short)offsetof(aSubRecord, outj);
    prt->papFldDes[aSubRecordOUTK]->size = sizeof(prec->outk);
    prt->papFldDes[aSubRecordOUTK]->offset = (unsigned short)offsetof(aSubRecord, outk);
    prt->papFldDes[aSubRecordOUTL]->size = sizeof(prec->outl);
    prt->papFldDes[aSubRecordOUTL]->offset = (unsigned short)offsetof(aSubRecord, outl);
    prt->papFldDes[aSubRecordOUTM]->size = sizeof(prec->outm);
    prt->papFldDes[aSubRecordOUTM]->offset = (unsigned short)offsetof(aSubRecord, outm);
    prt->papFldDes[aSubRecordOUTN]->size = sizeof(prec->outn);
    prt->papFldDes[aSubRecordOUTN]->offset = (unsigned short)offsetof(aSubRecord, outn);
    prt->papFldDes[aSubRecordOUTO]->size = sizeof(prec->outo);
    prt->papFldDes[aSubRecordOUTO]->offset = (unsigned short)offsetof(aSubRecord, outo);
    prt->papFldDes[aSubRecordOUTP]->size = sizeof(prec->outp);
    prt->papFldDes[aSubRecordOUTP]->offset = (unsigned short)offsetof(aSubRecord, outp);
    prt->papFldDes[aSubRecordOUTQ]->size = sizeof(prec->outq);
    prt->papFldDes[aSubRecordOUTQ]->offset = (unsigned short)offsetof(aSubRecord, outq);
    prt->papFldDes[aSubRecordOUTR]->size = sizeof(prec->outr);
    prt->papFldDes[aSubRecordOUTR]->offset = (unsigned short)offsetof(aSubRecord, outr);
    prt->papFldDes[aSubRecordOUTS]->size = sizeof(prec->outs);
    prt->papFldDes[aSubRecordOUTS]->offset = (unsigned short)offsetof(aSubRecord, outs);
    prt->papFldDes[aSubRecordOUTT]->size = sizeof(prec->outt);
    prt->papFldDes[aSubRecordOUTT]->offset = (unsigned short)offsetof(aSubRecord, outt);
    prt->papFldDes[aSubRecordOUTU]->size = sizeof(prec->outu);
    prt->papFldDes[aSubRecordOUTU]->offset = (unsigned short)offsetof(aSubRecord, outu);
    prt->papFldDes[aSubRecordVALA]->size = sizeof(prec->vala);
    prt->papFldDes[aSubRecordVALA]->offset = (unsigned short)offsetof(aSubRecord, vala);
    prt->papFldDes[aSubRecordVALB]->size = sizeof(prec->valb);
    prt->papFldDes[aSubRecordVALB]->offset = (unsigned short)offsetof(aSubRecord, valb);
    prt->papFldDes[aSubRecordVALC]->size = sizeof(prec->valc);
    prt->papFldDes[aSubRecordVALC]->offset = (unsigned short)offsetof(aSubRecord, valc);
    prt->papFldDes[aSubRecordVALD]->size = sizeof(prec->vald);
    prt->papFldDes[aSubRecordVALD]->offset = (unsigned short)offsetof(aSubRecord, vald);
    prt->papFldDes[aSubRecordVALE]->size = sizeof(prec->vale);
    prt->papFldDes[aSubRecordVALE]->offset = (unsigned short)offsetof(aSubRecord, vale);
    prt->papFldDes[aSubRecordVALF]->size = sizeof(prec->valf);
    prt->papFldDes[aSubRecordVALF]->offset = (unsigned short)offsetof(aSubRecord, valf);
    prt->papFldDes[aSubRecordVALG]->size = sizeof(prec->valg);
    prt->papFldDes[aSubRecordVALG]->offset = (unsigned short)offsetof(aSubRecord, valg);
    prt->papFldDes[aSubRecordVALH]->size = sizeof(prec->valh);
    prt->papFldDes[aSubRecordVALH]->offset = (unsigned short)offsetof(aSubRecord, valh);
    prt->papFldDes[aSubRecordVALI]->size = sizeof(prec->vali);
    prt->papFldDes[aSubRecordVALI]->offset = (unsigned short)offsetof(aSubRecord, vali);
    prt->papFldDes[aSubRecordVALJ]->size = sizeof(prec->valj);
    prt->papFldDes[aSubRecordVALJ]->offset = (unsigned short)offsetof(aSubRecord, valj);
    prt->papFldDes[aSubRecordVALK]->size = sizeof(prec->valk);
    prt->papFldDes[aSubRecordVALK]->offset = (unsigned short)offsetof(aSubRecord, valk);
    prt->papFldDes[aSubRecordVALL]->size = sizeof(prec->vall);
    prt->papFldDes[aSubRecordVALL]->offset = (unsigned short)offsetof(aSubRecord, vall);
    prt->papFldDes[aSubRecordVALM]->size = sizeof(prec->valm);
    prt->papFldDes[aSubRecordVALM]->offset = (unsigned short)offsetof(aSubRecord, valm);
    prt->papFldDes[aSubRecordVALN]->size = sizeof(prec->valn);
    prt->papFldDes[aSubRecordVALN]->offset = (unsigned short)offsetof(aSubRecord, valn);
    prt->papFldDes[aSubRecordVALO]->size = sizeof(prec->valo);
    prt->papFldDes[aSubRecordVALO]->offset = (unsigned short)offsetof(aSubRecord, valo);
    prt->papFldDes[aSubRecordVALP]->size = sizeof(prec->valp);
    prt->papFldDes[aSubRecordVALP]->offset = (unsigned short)offsetof(aSubRecord, valp);
    prt->papFldDes[aSubRecordVALQ]->size = sizeof(prec->valq);
    prt->papFldDes[aSubRecordVALQ]->offset = (unsigned short)offsetof(aSubRecord, valq);
    prt->papFldDes[aSubRecordVALR]->size = sizeof(prec->valr);
    prt->papFldDes[aSubRecordVALR]->offset = (unsigned short)offsetof(aSubRecord, valr);
    prt->papFldDes[aSubRecordVALS]->size = sizeof(prec->vals);
    prt->papFldDes[aSubRecordVALS]->offset = (unsigned short)offsetof(aSubRecord, vals);
    prt->papFldDes[aSubRecordVALT]->size = sizeof(prec->valt);
    prt->papFldDes[aSubRecordVALT]->offset = (unsigned short)offsetof(aSubRecord, valt);
    prt->papFldDes[aSubRecordVALU]->size = sizeof(prec->valu);
    prt->papFldDes[aSubRecordVALU]->offset = (unsigned short)offsetof(aSubRecord, valu);
    prt->papFldDes[aSubRecordOVLA]->size = sizeof(prec->ovla);
    prt->papFldDes[aSubRecordOVLA]->offset = (unsigned short)offsetof(aSubRecord, ovla);
    prt->papFldDes[aSubRecordOVLB]->size = sizeof(prec->ovlb);
    prt->papFldDes[aSubRecordOVLB]->offset = (unsigned short)offsetof(aSubRecord, ovlb);
    prt->papFldDes[aSubRecordOVLC]->size = sizeof(prec->ovlc);
    prt->papFldDes[aSubRecordOVLC]->offset = (unsigned short)offsetof(aSubRecord, ovlc);
    prt->papFldDes[aSubRecordOVLD]->size = sizeof(prec->ovld);
    prt->papFldDes[aSubRecordOVLD]->offset = (unsigned short)offsetof(aSubRecord, ovld);
    prt->papFldDes[aSubRecordOVLE]->size = sizeof(prec->ovle);
    prt->papFldDes[aSubRecordOVLE]->offset = (unsigned short)offsetof(aSubRecord, ovle);
    prt->papFldDes[aSubRecordOVLF]->size = sizeof(prec->ovlf);
    prt->papFldDes[aSubRecordOVLF]->offset = (unsigned short)offsetof(aSubRecord, ovlf);
    prt->papFldDes[aSubRecordOVLG]->size = sizeof(prec->ovlg);
    prt->papFldDes[aSubRecordOVLG]->offset = (unsigned short)offsetof(aSubRecord, ovlg);
    prt->papFldDes[aSubRecordOVLH]->size = sizeof(prec->ovlh);
    prt->papFldDes[aSubRecordOVLH]->offset = (unsigned short)offsetof(aSubRecord, ovlh);
    prt->papFldDes[aSubRecordOVLI]->size = sizeof(prec->ovli);
    prt->papFldDes[aSubRecordOVLI]->offset = (unsigned short)offsetof(aSubRecord, ovli);
    prt->papFldDes[aSubRecordOVLJ]->size = sizeof(prec->ovlj);
    prt->papFldDes[aSubRecordOVLJ]->offset = (unsigned short)offsetof(aSubRecord, ovlj);
    prt->papFldDes[aSubRecordOVLK]->size = sizeof(prec->ovlk);
    prt->papFldDes[aSubRecordOVLK]->offset = (unsigned short)offsetof(aSubRecord, ovlk);
    prt->papFldDes[aSubRecordOVLL]->size = sizeof(prec->ovll);
    prt->papFldDes[aSubRecordOVLL]->offset = (unsigned short)offsetof(aSubRecord, ovll);
    prt->papFldDes[aSubRecordOVLM]->size = sizeof(prec->ovlm);
    prt->papFldDes[aSubRecordOVLM]->offset = (unsigned short)offsetof(aSubRecord, ovlm);
    prt->papFldDes[aSubRecordOVLN]->size = sizeof(prec->ovln);
    prt->papFldDes[aSubRecordOVLN]->offset = (unsigned short)offsetof(aSubRecord, ovln);
    prt->papFldDes[aSubRecordOVLO]->size = sizeof(prec->ovlo);
    prt->papFldDes[aSubRecordOVLO]->offset = (unsigned short)offsetof(aSubRecord, ovlo);
    prt->papFldDes[aSubRecordOVLP]->size = sizeof(prec->ovlp);
    prt->papFldDes[aSubRecordOVLP]->offset = (unsigned short)offsetof(aSubRecord, ovlp);
    prt->papFldDes[aSubRecordOVLQ]->size = sizeof(prec->ovlq);
    prt->papFldDes[aSubRecordOVLQ]->offset = (unsigned short)offsetof(aSubRecord, ovlq);
    prt->papFldDes[aSubRecordOVLR]->size = sizeof(prec->ovlr);
    prt->papFldDes[aSubRecordOVLR]->offset = (unsigned short)offsetof(aSubRecord, ovlr);
    prt->papFldDes[aSubRecordOVLS]->size = sizeof(prec->ovls);
    prt->papFldDes[aSubRecordOVLS]->offset = (unsigned short)offsetof(aSubRecord, ovls);
    prt->papFldDes[aSubRecordOVLT]->size = sizeof(prec->ovlt);
    prt->papFldDes[aSubRecordOVLT]->offset = (unsigned short)offsetof(aSubRecord, ovlt);
    prt->papFldDes[aSubRecordOVLU]->size = sizeof(prec->ovlu);
    prt->papFldDes[aSubRecordOVLU]->offset = (unsigned short)offsetof(aSubRecord, ovlu);
    prt->papFldDes[aSubRecordFTVA]->size = sizeof(prec->ftva);
    prt->papFldDes[aSubRecordFTVA]->offset = (unsigned short)offsetof(aSubRecord, ftva);
    prt->papFldDes[aSubRecordFTVB]->size = sizeof(prec->ftvb);
    prt->papFldDes[aSubRecordFTVB]->offset = (unsigned short)offsetof(aSubRecord, ftvb);
    prt->papFldDes[aSubRecordFTVC]->size = sizeof(prec->ftvc);
    prt->papFldDes[aSubRecordFTVC]->offset = (unsigned short)offsetof(aSubRecord, ftvc);
    prt->papFldDes[aSubRecordFTVD]->size = sizeof(prec->ftvd);
    prt->papFldDes[aSubRecordFTVD]->offset = (unsigned short)offsetof(aSubRecord, ftvd);
    prt->papFldDes[aSubRecordFTVE]->size = sizeof(prec->ftve);
    prt->papFldDes[aSubRecordFTVE]->offset = (unsigned short)offsetof(aSubRecord, ftve);
    prt->papFldDes[aSubRecordFTVF]->size = sizeof(prec->ftvf);
    prt->papFldDes[aSubRecordFTVF]->offset = (unsigned short)offsetof(aSubRecord, ftvf);
    prt->papFldDes[aSubRecordFTVG]->size = sizeof(prec->ftvg);
    prt->papFldDes[aSubRecordFTVG]->offset = (unsigned short)offsetof(aSubRecord, ftvg);
    prt->papFldDes[aSubRecordFTVH]->size = sizeof(prec->ftvh);
    prt->papFldDes[aSubRecordFTVH]->offset = (unsigned short)offsetof(aSubRecord, ftvh);
    prt->papFldDes[aSubRecordFTVI]->size = sizeof(prec->ftvi);
    prt->papFldDes[aSubRecordFTVI]->offset = (unsigned short)offsetof(aSubRecord, ftvi);
    prt->papFldDes[aSubRecordFTVJ]->size = sizeof(prec->ftvj);
    prt->papFldDes[aSubRecordFTVJ]->offset = (unsigned short)offsetof(aSubRecord, ftvj);
    prt->papFldDes[aSubRecordFTVK]->size = sizeof(prec->ftvk);
    prt->papFldDes[aSubRecordFTVK]->offset = (unsigned short)offsetof(aSubRecord, ftvk);
    prt->papFldDes[aSubRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[aSubRecordFTVL]->offset = (unsigned short)offsetof(aSubRecord, ftvl);
    prt->papFldDes[aSubRecordFTVM]->size = sizeof(prec->ftvm);
    prt->papFldDes[aSubRecordFTVM]->offset = (unsigned short)offsetof(aSubRecord, ftvm);
    prt->papFldDes[aSubRecordFTVN]->size = sizeof(prec->ftvn);
    prt->papFldDes[aSubRecordFTVN]->offset = (unsigned short)offsetof(aSubRecord, ftvn);
    prt->papFldDes[aSubRecordFTVO]->size = sizeof(prec->ftvo);
    prt->papFldDes[aSubRecordFTVO]->offset = (unsigned short)offsetof(aSubRecord, ftvo);
    prt->papFldDes[aSubRecordFTVP]->size = sizeof(prec->ftvp);
    prt->papFldDes[aSubRecordFTVP]->offset = (unsigned short)offsetof(aSubRecord, ftvp);
    prt->papFldDes[aSubRecordFTVQ]->size = sizeof(prec->ftvq);
    prt->papFldDes[aSubRecordFTVQ]->offset = (unsigned short)offsetof(aSubRecord, ftvq);
    prt->papFldDes[aSubRecordFTVR]->size = sizeof(prec->ftvr);
    prt->papFldDes[aSubRecordFTVR]->offset = (unsigned short)offsetof(aSubRecord, ftvr);
    prt->papFldDes[aSubRecordFTVS]->size = sizeof(prec->ftvs);
    prt->papFldDes[aSubRecordFTVS]->offset = (unsigned short)offsetof(aSubRecord, ftvs);
    prt->papFldDes[aSubRecordFTVT]->size = sizeof(prec->ftvt);
    prt->papFldDes[aSubRecordFTVT]->offset = (unsigned short)offsetof(aSubRecord, ftvt);
    prt->papFldDes[aSubRecordFTVU]->size = sizeof(prec->ftvu);
    prt->papFldDes[aSubRecordFTVU]->offset = (unsigned short)offsetof(aSubRecord, ftvu);
    prt->papFldDes[aSubRecordNOVA]->size = sizeof(prec->nova);
    prt->papFldDes[aSubRecordNOVA]->offset = (unsigned short)offsetof(aSubRecord, nova);
    prt->papFldDes[aSubRecordNOVB]->size = sizeof(prec->novb);
    prt->papFldDes[aSubRecordNOVB]->offset = (unsigned short)offsetof(aSubRecord, novb);
    prt->papFldDes[aSubRecordNOVC]->size = sizeof(prec->novc);
    prt->papFldDes[aSubRecordNOVC]->offset = (unsigned short)offsetof(aSubRecord, novc);
    prt->papFldDes[aSubRecordNOVD]->size = sizeof(prec->novd);
    prt->papFldDes[aSubRecordNOVD]->offset = (unsigned short)offsetof(aSubRecord, novd);
    prt->papFldDes[aSubRecordNOVE]->size = sizeof(prec->nove);
    prt->papFldDes[aSubRecordNOVE]->offset = (unsigned short)offsetof(aSubRecord, nove);
    prt->papFldDes[aSubRecordNOVF]->size = sizeof(prec->novf);
    prt->papFldDes[aSubRecordNOVF]->offset = (unsigned short)offsetof(aSubRecord, novf);
    prt->papFldDes[aSubRecordNOVG]->size = sizeof(prec->novg);
    prt->papFldDes[aSubRecordNOVG]->offset = (unsigned short)offsetof(aSubRecord, novg);
    prt->papFldDes[aSubRecordNOVH]->size = sizeof(prec->novh);
    prt->papFldDes[aSubRecordNOVH]->offset = (unsigned short)offsetof(aSubRecord, novh);
    prt->papFldDes[aSubRecordNOVI]->size = sizeof(prec->novi);
    prt->papFldDes[aSubRecordNOVI]->offset = (unsigned short)offsetof(aSubRecord, novi);
    prt->papFldDes[aSubRecordNOVJ]->size = sizeof(prec->novj);
    prt->papFldDes[aSubRecordNOVJ]->offset = (unsigned short)offsetof(aSubRecord, novj);
    prt->papFldDes[aSubRecordNOVK]->size = sizeof(prec->novk);
    prt->papFldDes[aSubRecordNOVK]->offset = (unsigned short)offsetof(aSubRecord, novk);
    prt->papFldDes[aSubRecordNOVL]->size = sizeof(prec->novl);
    prt->papFldDes[aSubRecordNOVL]->offset = (unsigned short)offsetof(aSubRecord, novl);
    prt->papFldDes[aSubRecordNOVM]->size = sizeof(prec->novm);
    prt->papFldDes[aSubRecordNOVM]->offset = (unsigned short)offsetof(aSubRecord, novm);
    prt->papFldDes[aSubRecordNOVN]->size = sizeof(prec->novn);
    prt->papFldDes[aSubRecordNOVN]->offset = (unsigned short)offsetof(aSubRecord, novn);
    prt->papFldDes[aSubRecordNOVO]->size = sizeof(prec->novo);
    prt->papFldDes[aSubRecordNOVO]->offset = (unsigned short)offsetof(aSubRecord, novo);
    prt->papFldDes[aSubRecordNOVP]->size = sizeof(prec->novp);
    prt->papFldDes[aSubRecordNOVP]->offset = (unsigned short)offsetof(aSubRecord, novp);
    prt->papFldDes[aSubRecordNOVQ]->size = sizeof(prec->novq);
    prt->papFldDes[aSubRecordNOVQ]->offset = (unsigned short)offsetof(aSubRecord, novq);
    prt->papFldDes[aSubRecordNOVR]->size = sizeof(prec->novr);
    prt->papFldDes[aSubRecordNOVR]->offset = (unsigned short)offsetof(aSubRecord, novr);
    prt->papFldDes[aSubRecordNOVS]->size = sizeof(prec->novs);
    prt->papFldDes[aSubRecordNOVS]->offset = (unsigned short)offsetof(aSubRecord, novs);
    prt->papFldDes[aSubRecordNOVT]->size = sizeof(prec->novt);
    prt->papFldDes[aSubRecordNOVT]->offset = (unsigned short)offsetof(aSubRecord, novt);
    prt->papFldDes[aSubRecordNOVU]->size = sizeof(prec->novu);
    prt->papFldDes[aSubRecordNOVU]->offset = (unsigned short)offsetof(aSubRecord, novu);
    prt->papFldDes[aSubRecordNEVA]->size = sizeof(prec->neva);
    prt->papFldDes[aSubRecordNEVA]->offset = (unsigned short)offsetof(aSubRecord, neva);
    prt->papFldDes[aSubRecordNEVB]->size = sizeof(prec->nevb);
    prt->papFldDes[aSubRecordNEVB]->offset = (unsigned short)offsetof(aSubRecord, nevb);
    prt->papFldDes[aSubRecordNEVC]->size = sizeof(prec->nevc);
    prt->papFldDes[aSubRecordNEVC]->offset = (unsigned short)offsetof(aSubRecord, nevc);
    prt->papFldDes[aSubRecordNEVD]->size = sizeof(prec->nevd);
    prt->papFldDes[aSubRecordNEVD]->offset = (unsigned short)offsetof(aSubRecord, nevd);
    prt->papFldDes[aSubRecordNEVE]->size = sizeof(prec->neve);
    prt->papFldDes[aSubRecordNEVE]->offset = (unsigned short)offsetof(aSubRecord, neve);
    prt->papFldDes[aSubRecordNEVF]->size = sizeof(prec->nevf);
    prt->papFldDes[aSubRecordNEVF]->offset = (unsigned short)offsetof(aSubRecord, nevf);
    prt->papFldDes[aSubRecordNEVG]->size = sizeof(prec->nevg);
    prt->papFldDes[aSubRecordNEVG]->offset = (unsigned short)offsetof(aSubRecord, nevg);
    prt->papFldDes[aSubRecordNEVH]->size = sizeof(prec->nevh);
    prt->papFldDes[aSubRecordNEVH]->offset = (unsigned short)offsetof(aSubRecord, nevh);
    prt->papFldDes[aSubRecordNEVI]->size = sizeof(prec->nevi);
    prt->papFldDes[aSubRecordNEVI]->offset = (unsigned short)offsetof(aSubRecord, nevi);
    prt->papFldDes[aSubRecordNEVJ]->size = sizeof(prec->nevj);
    prt->papFldDes[aSubRecordNEVJ]->offset = (unsigned short)offsetof(aSubRecord, nevj);
    prt->papFldDes[aSubRecordNEVK]->size = sizeof(prec->nevk);
    prt->papFldDes[aSubRecordNEVK]->offset = (unsigned short)offsetof(aSubRecord, nevk);
    prt->papFldDes[aSubRecordNEVL]->size = sizeof(prec->nevl);
    prt->papFldDes[aSubRecordNEVL]->offset = (unsigned short)offsetof(aSubRecord, nevl);
    prt->papFldDes[aSubRecordNEVM]->size = sizeof(prec->nevm);
    prt->papFldDes[aSubRecordNEVM]->offset = (unsigned short)offsetof(aSubRecord, nevm);
    prt->papFldDes[aSubRecordNEVN]->size = sizeof(prec->nevn);
    prt->papFldDes[aSubRecordNEVN]->offset = (unsigned short)offsetof(aSubRecord, nevn);
    prt->papFldDes[aSubRecordNEVO]->size = sizeof(prec->nevo);
    prt->papFldDes[aSubRecordNEVO]->offset = (unsigned short)offsetof(aSubRecord, nevo);
    prt->papFldDes[aSubRecordNEVP]->size = sizeof(prec->nevp);
    prt->papFldDes[aSubRecordNEVP]->offset = (unsigned short)offsetof(aSubRecord, nevp);
    prt->papFldDes[aSubRecordNEVQ]->size = sizeof(prec->nevq);
    prt->papFldDes[aSubRecordNEVQ]->offset = (unsigned short)offsetof(aSubRecord, nevq);
    prt->papFldDes[aSubRecordNEVR]->size = sizeof(prec->nevr);
    prt->papFldDes[aSubRecordNEVR]->offset = (unsigned short)offsetof(aSubRecord, nevr);
    prt->papFldDes[aSubRecordNEVS]->size = sizeof(prec->nevs);
    prt->papFldDes[aSubRecordNEVS]->offset = (unsigned short)offsetof(aSubRecord, nevs);
    prt->papFldDes[aSubRecordNEVT]->size = sizeof(prec->nevt);
    prt->papFldDes[aSubRecordNEVT]->offset = (unsigned short)offsetof(aSubRecord, nevt);
    prt->papFldDes[aSubRecordNEVU]->size = sizeof(prec->nevu);
    prt->papFldDes[aSubRecordNEVU]->offset = (unsigned short)offsetof(aSubRecord, nevu);
    prt->papFldDes[aSubRecordONVA]->size = sizeof(prec->onva);
    prt->papFldDes[aSubRecordONVA]->offset = (unsigned short)offsetof(aSubRecord, onva);
    prt->papFldDes[aSubRecordONVB]->size = sizeof(prec->onvb);
    prt->papFldDes[aSubRecordONVB]->offset = (unsigned short)offsetof(aSubRecord, onvb);
    prt->papFldDes[aSubRecordONVC]->size = sizeof(prec->onvc);
    prt->papFldDes[aSubRecordONVC]->offset = (unsigned short)offsetof(aSubRecord, onvc);
    prt->papFldDes[aSubRecordONVD]->size = sizeof(prec->onvd);
    prt->papFldDes[aSubRecordONVD]->offset = (unsigned short)offsetof(aSubRecord, onvd);
    prt->papFldDes[aSubRecordONVE]->size = sizeof(prec->onve);
    prt->papFldDes[aSubRecordONVE]->offset = (unsigned short)offsetof(aSubRecord, onve);
    prt->papFldDes[aSubRecordONVF]->size = sizeof(prec->onvf);
    prt->papFldDes[aSubRecordONVF]->offset = (unsigned short)offsetof(aSubRecord, onvf);
    prt->papFldDes[aSubRecordONVG]->size = sizeof(prec->onvg);
    prt->papFldDes[aSubRecordONVG]->offset = (unsigned short)offsetof(aSubRecord, onvg);
    prt->papFldDes[aSubRecordONVH]->size = sizeof(prec->onvh);
    prt->papFldDes[aSubRecordONVH]->offset = (unsigned short)offsetof(aSubRecord, onvh);
    prt->papFldDes[aSubRecordONVI]->size = sizeof(prec->onvi);
    prt->papFldDes[aSubRecordONVI]->offset = (unsigned short)offsetof(aSubRecord, onvi);
    prt->papFldDes[aSubRecordONVJ]->size = sizeof(prec->onvj);
    prt->papFldDes[aSubRecordONVJ]->offset = (unsigned short)offsetof(aSubRecord, onvj);
    prt->papFldDes[aSubRecordONVK]->size = sizeof(prec->onvk);
    prt->papFldDes[aSubRecordONVK]->offset = (unsigned short)offsetof(aSubRecord, onvk);
    prt->papFldDes[aSubRecordONVL]->size = sizeof(prec->onvl);
    prt->papFldDes[aSubRecordONVL]->offset = (unsigned short)offsetof(aSubRecord, onvl);
    prt->papFldDes[aSubRecordONVM]->size = sizeof(prec->onvm);
    prt->papFldDes[aSubRecordONVM]->offset = (unsigned short)offsetof(aSubRecord, onvm);
    prt->papFldDes[aSubRecordONVN]->size = sizeof(prec->onvn);
    prt->papFldDes[aSubRecordONVN]->offset = (unsigned short)offsetof(aSubRecord, onvn);
    prt->papFldDes[aSubRecordONVO]->size = sizeof(prec->onvo);
    prt->papFldDes[aSubRecordONVO]->offset = (unsigned short)offsetof(aSubRecord, onvo);
    prt->papFldDes[aSubRecordONVP]->size = sizeof(prec->onvp);
    prt->papFldDes[aSubRecordONVP]->offset = (unsigned short)offsetof(aSubRecord, onvp);
    prt->papFldDes[aSubRecordONVQ]->size = sizeof(prec->onvq);
    prt->papFldDes[aSubRecordONVQ]->offset = (unsigned short)offsetof(aSubRecord, onvq);
    prt->papFldDes[aSubRecordONVR]->size = sizeof(prec->onvr);
    prt->papFldDes[aSubRecordONVR]->offset = (unsigned short)offsetof(aSubRecord, onvr);
    prt->papFldDes[aSubRecordONVS]->size = sizeof(prec->onvs);
    prt->papFldDes[aSubRecordONVS]->offset = (unsigned short)offsetof(aSubRecord, onvs);
    prt->papFldDes[aSubRecordONVT]->size = sizeof(prec->onvt);
    prt->papFldDes[aSubRecordONVT]->offset = (unsigned short)offsetof(aSubRecord, onvt);
    prt->papFldDes[aSubRecordONVU]->size = sizeof(prec->onvu);
    prt->papFldDes[aSubRecordONVU]->offset = (unsigned short)offsetof(aSubRecord, onvu);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aSubRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aSubRecord_H */
