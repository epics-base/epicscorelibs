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

#ifndef aSubLFLG_NUM_CHOICES
/** @brief Enumerated type from menu aSubLFLG */
typedef enum {
    aSubLFLG_IGNORE                 /**< @brief State string "IGNORE" */,
    aSubLFLG_READ                   /**< @brief State string "READ" */
} aSubLFLG;
/** @brief Number of states defined for menu aSubLFLG */
#define aSubLFLG_NUM_CHOICES 2
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
    prt->papFldDes[aSubRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[aSubRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[aSubRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[aSubRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[aSubRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[aSubRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[aSubRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[aSubRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[aSubRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[aSubRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[aSubRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[aSubRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[aSubRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[aSubRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[aSubRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[aSubRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[aSubRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[aSubRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[aSubRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[aSubRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[aSubRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[aSubRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[aSubRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[aSubRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[aSubRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[aSubRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[aSubRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[aSubRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[aSubRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[aSubRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[aSubRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[aSubRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[aSubRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[aSubRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[aSubRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[aSubRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[aSubRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[aSubRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[aSubRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[aSubRecordAMSG]->size = sizeof(prec->amsg);
    prt->papFldDes[aSubRecordAMSG]->offset = (unsigned short)((char *)&prec->amsg - (char *)prec);
    prt->papFldDes[aSubRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[aSubRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[aSubRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[aSubRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[aSubRecordNAMSG]->size = sizeof(prec->namsg);
    prt->papFldDes[aSubRecordNAMSG]->offset = (unsigned short)((char *)&prec->namsg - (char *)prec);
    prt->papFldDes[aSubRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[aSubRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[aSubRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[aSubRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[aSubRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[aSubRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[aSubRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[aSubRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[aSubRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[aSubRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[aSubRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[aSubRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[aSubRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[aSubRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[aSubRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[aSubRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[aSubRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[aSubRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[aSubRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[aSubRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[aSubRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[aSubRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[aSubRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[aSubRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[aSubRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[aSubRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[aSubRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[aSubRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[aSubRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[aSubRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[aSubRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[aSubRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[aSubRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[aSubRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[aSubRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[aSubRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[aSubRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[aSubRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[aSubRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[aSubRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[aSubRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[aSubRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[aSubRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[aSubRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[aSubRecordUTAG]->size = sizeof(prec->utag);
    prt->papFldDes[aSubRecordUTAG]->offset = (unsigned short)((char *)&prec->utag - (char *)prec);
    prt->papFldDes[aSubRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[aSubRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[aSubRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[aSubRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[aSubRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[aSubRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[aSubRecordINAM]->size = sizeof(prec->inam);
    prt->papFldDes[aSubRecordINAM]->offset = (unsigned short)((char *)&prec->inam - (char *)prec);
    prt->papFldDes[aSubRecordLFLG]->size = sizeof(prec->lflg);
    prt->papFldDes[aSubRecordLFLG]->offset = (unsigned short)((char *)&prec->lflg - (char *)prec);
    prt->papFldDes[aSubRecordSUBL]->size = sizeof(prec->subl);
    prt->papFldDes[aSubRecordSUBL]->offset = (unsigned short)((char *)&prec->subl - (char *)prec);
    prt->papFldDes[aSubRecordSNAM]->size = sizeof(prec->snam);
    prt->papFldDes[aSubRecordSNAM]->offset = (unsigned short)((char *)&prec->snam - (char *)prec);
    prt->papFldDes[aSubRecordONAM]->size = sizeof(prec->onam);
    prt->papFldDes[aSubRecordONAM]->offset = (unsigned short)((char *)&prec->onam - (char *)prec);
    prt->papFldDes[aSubRecordSADR]->size = sizeof(prec->sadr);
    prt->papFldDes[aSubRecordSADR]->offset = (unsigned short)((char *)&prec->sadr - (char *)prec);
    prt->papFldDes[aSubRecordCADR]->size = sizeof(prec->cadr);
    prt->papFldDes[aSubRecordCADR]->offset = (unsigned short)((char *)&prec->cadr - (char *)prec);
    prt->papFldDes[aSubRecordBRSV]->size = sizeof(prec->brsv);
    prt->papFldDes[aSubRecordBRSV]->offset = (unsigned short)((char *)&prec->brsv - (char *)prec);
    prt->papFldDes[aSubRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[aSubRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[aSubRecordEFLG]->size = sizeof(prec->eflg);
    prt->papFldDes[aSubRecordEFLG]->offset = (unsigned short)((char *)&prec->eflg - (char *)prec);
    prt->papFldDes[aSubRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[aSubRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[aSubRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[aSubRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[aSubRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[aSubRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[aSubRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[aSubRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[aSubRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[aSubRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[aSubRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[aSubRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[aSubRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[aSubRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[aSubRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[aSubRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[aSubRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[aSubRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[aSubRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[aSubRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[aSubRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[aSubRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[aSubRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[aSubRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[aSubRecordINPM]->size = sizeof(prec->inpm);
    prt->papFldDes[aSubRecordINPM]->offset = (unsigned short)((char *)&prec->inpm - (char *)prec);
    prt->papFldDes[aSubRecordINPN]->size = sizeof(prec->inpn);
    prt->papFldDes[aSubRecordINPN]->offset = (unsigned short)((char *)&prec->inpn - (char *)prec);
    prt->papFldDes[aSubRecordINPO]->size = sizeof(prec->inpo);
    prt->papFldDes[aSubRecordINPO]->offset = (unsigned short)((char *)&prec->inpo - (char *)prec);
    prt->papFldDes[aSubRecordINPP]->size = sizeof(prec->inpp);
    prt->papFldDes[aSubRecordINPP]->offset = (unsigned short)((char *)&prec->inpp - (char *)prec);
    prt->papFldDes[aSubRecordINPQ]->size = sizeof(prec->inpq);
    prt->papFldDes[aSubRecordINPQ]->offset = (unsigned short)((char *)&prec->inpq - (char *)prec);
    prt->papFldDes[aSubRecordINPR]->size = sizeof(prec->inpr);
    prt->papFldDes[aSubRecordINPR]->offset = (unsigned short)((char *)&prec->inpr - (char *)prec);
    prt->papFldDes[aSubRecordINPS]->size = sizeof(prec->inps);
    prt->papFldDes[aSubRecordINPS]->offset = (unsigned short)((char *)&prec->inps - (char *)prec);
    prt->papFldDes[aSubRecordINPT]->size = sizeof(prec->inpt);
    prt->papFldDes[aSubRecordINPT]->offset = (unsigned short)((char *)&prec->inpt - (char *)prec);
    prt->papFldDes[aSubRecordINPU]->size = sizeof(prec->inpu);
    prt->papFldDes[aSubRecordINPU]->offset = (unsigned short)((char *)&prec->inpu - (char *)prec);
    prt->papFldDes[aSubRecordA]->size = sizeof(prec->a);
    prt->papFldDes[aSubRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[aSubRecordB]->size = sizeof(prec->b);
    prt->papFldDes[aSubRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[aSubRecordC]->size = sizeof(prec->c);
    prt->papFldDes[aSubRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[aSubRecordD]->size = sizeof(prec->d);
    prt->papFldDes[aSubRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[aSubRecordE]->size = sizeof(prec->e);
    prt->papFldDes[aSubRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[aSubRecordF]->size = sizeof(prec->f);
    prt->papFldDes[aSubRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[aSubRecordG]->size = sizeof(prec->g);
    prt->papFldDes[aSubRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[aSubRecordH]->size = sizeof(prec->h);
    prt->papFldDes[aSubRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[aSubRecordI]->size = sizeof(prec->i);
    prt->papFldDes[aSubRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[aSubRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[aSubRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[aSubRecordK]->size = sizeof(prec->k);
    prt->papFldDes[aSubRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[aSubRecordL]->size = sizeof(prec->l);
    prt->papFldDes[aSubRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[aSubRecordM]->size = sizeof(prec->m);
    prt->papFldDes[aSubRecordM]->offset = (unsigned short)((char *)&prec->m - (char *)prec);
    prt->papFldDes[aSubRecordN]->size = sizeof(prec->n);
    prt->papFldDes[aSubRecordN]->offset = (unsigned short)((char *)&prec->n - (char *)prec);
    prt->papFldDes[aSubRecordO]->size = sizeof(prec->o);
    prt->papFldDes[aSubRecordO]->offset = (unsigned short)((char *)&prec->o - (char *)prec);
    prt->papFldDes[aSubRecordP]->size = sizeof(prec->p);
    prt->papFldDes[aSubRecordP]->offset = (unsigned short)((char *)&prec->p - (char *)prec);
    prt->papFldDes[aSubRecordQ]->size = sizeof(prec->q);
    prt->papFldDes[aSubRecordQ]->offset = (unsigned short)((char *)&prec->q - (char *)prec);
    prt->papFldDes[aSubRecordR]->size = sizeof(prec->r);
    prt->papFldDes[aSubRecordR]->offset = (unsigned short)((char *)&prec->r - (char *)prec);
    prt->papFldDes[aSubRecordS]->size = sizeof(prec->s);
    prt->papFldDes[aSubRecordS]->offset = (unsigned short)((char *)&prec->s - (char *)prec);
    prt->papFldDes[aSubRecordT]->size = sizeof(prec->t);
    prt->papFldDes[aSubRecordT]->offset = (unsigned short)((char *)&prec->t - (char *)prec);
    prt->papFldDes[aSubRecordU]->size = sizeof(prec->u);
    prt->papFldDes[aSubRecordU]->offset = (unsigned short)((char *)&prec->u - (char *)prec);
    prt->papFldDes[aSubRecordFTA]->size = sizeof(prec->fta);
    prt->papFldDes[aSubRecordFTA]->offset = (unsigned short)((char *)&prec->fta - (char *)prec);
    prt->papFldDes[aSubRecordFTB]->size = sizeof(prec->ftb);
    prt->papFldDes[aSubRecordFTB]->offset = (unsigned short)((char *)&prec->ftb - (char *)prec);
    prt->papFldDes[aSubRecordFTC]->size = sizeof(prec->ftc);
    prt->papFldDes[aSubRecordFTC]->offset = (unsigned short)((char *)&prec->ftc - (char *)prec);
    prt->papFldDes[aSubRecordFTD]->size = sizeof(prec->ftd);
    prt->papFldDes[aSubRecordFTD]->offset = (unsigned short)((char *)&prec->ftd - (char *)prec);
    prt->papFldDes[aSubRecordFTE]->size = sizeof(prec->fte);
    prt->papFldDes[aSubRecordFTE]->offset = (unsigned short)((char *)&prec->fte - (char *)prec);
    prt->papFldDes[aSubRecordFTF]->size = sizeof(prec->ftf);
    prt->papFldDes[aSubRecordFTF]->offset = (unsigned short)((char *)&prec->ftf - (char *)prec);
    prt->papFldDes[aSubRecordFTG]->size = sizeof(prec->ftg);
    prt->papFldDes[aSubRecordFTG]->offset = (unsigned short)((char *)&prec->ftg - (char *)prec);
    prt->papFldDes[aSubRecordFTH]->size = sizeof(prec->fth);
    prt->papFldDes[aSubRecordFTH]->offset = (unsigned short)((char *)&prec->fth - (char *)prec);
    prt->papFldDes[aSubRecordFTI]->size = sizeof(prec->fti);
    prt->papFldDes[aSubRecordFTI]->offset = (unsigned short)((char *)&prec->fti - (char *)prec);
    prt->papFldDes[aSubRecordFTJ]->size = sizeof(prec->ftj);
    prt->papFldDes[aSubRecordFTJ]->offset = (unsigned short)((char *)&prec->ftj - (char *)prec);
    prt->papFldDes[aSubRecordFTK]->size = sizeof(prec->ftk);
    prt->papFldDes[aSubRecordFTK]->offset = (unsigned short)((char *)&prec->ftk - (char *)prec);
    prt->papFldDes[aSubRecordFTL]->size = sizeof(prec->ftl);
    prt->papFldDes[aSubRecordFTL]->offset = (unsigned short)((char *)&prec->ftl - (char *)prec);
    prt->papFldDes[aSubRecordFTM]->size = sizeof(prec->ftm);
    prt->papFldDes[aSubRecordFTM]->offset = (unsigned short)((char *)&prec->ftm - (char *)prec);
    prt->papFldDes[aSubRecordFTN]->size = sizeof(prec->ftn);
    prt->papFldDes[aSubRecordFTN]->offset = (unsigned short)((char *)&prec->ftn - (char *)prec);
    prt->papFldDes[aSubRecordFTO]->size = sizeof(prec->fto);
    prt->papFldDes[aSubRecordFTO]->offset = (unsigned short)((char *)&prec->fto - (char *)prec);
    prt->papFldDes[aSubRecordFTP]->size = sizeof(prec->ftp);
    prt->papFldDes[aSubRecordFTP]->offset = (unsigned short)((char *)&prec->ftp - (char *)prec);
    prt->papFldDes[aSubRecordFTQ]->size = sizeof(prec->ftq);
    prt->papFldDes[aSubRecordFTQ]->offset = (unsigned short)((char *)&prec->ftq - (char *)prec);
    prt->papFldDes[aSubRecordFTR]->size = sizeof(prec->ftr);
    prt->papFldDes[aSubRecordFTR]->offset = (unsigned short)((char *)&prec->ftr - (char *)prec);
    prt->papFldDes[aSubRecordFTS]->size = sizeof(prec->fts);
    prt->papFldDes[aSubRecordFTS]->offset = (unsigned short)((char *)&prec->fts - (char *)prec);
    prt->papFldDes[aSubRecordFTT]->size = sizeof(prec->ftt);
    prt->papFldDes[aSubRecordFTT]->offset = (unsigned short)((char *)&prec->ftt - (char *)prec);
    prt->papFldDes[aSubRecordFTU]->size = sizeof(prec->ftu);
    prt->papFldDes[aSubRecordFTU]->offset = (unsigned short)((char *)&prec->ftu - (char *)prec);
    prt->papFldDes[aSubRecordNOA]->size = sizeof(prec->noa);
    prt->papFldDes[aSubRecordNOA]->offset = (unsigned short)((char *)&prec->noa - (char *)prec);
    prt->papFldDes[aSubRecordNOB]->size = sizeof(prec->nob);
    prt->papFldDes[aSubRecordNOB]->offset = (unsigned short)((char *)&prec->nob - (char *)prec);
    prt->papFldDes[aSubRecordNOC]->size = sizeof(prec->noc);
    prt->papFldDes[aSubRecordNOC]->offset = (unsigned short)((char *)&prec->noc - (char *)prec);
    prt->papFldDes[aSubRecordNOD]->size = sizeof(prec->nod);
    prt->papFldDes[aSubRecordNOD]->offset = (unsigned short)((char *)&prec->nod - (char *)prec);
    prt->papFldDes[aSubRecordNOE]->size = sizeof(prec->noe);
    prt->papFldDes[aSubRecordNOE]->offset = (unsigned short)((char *)&prec->noe - (char *)prec);
    prt->papFldDes[aSubRecordNOF]->size = sizeof(prec->nof);
    prt->papFldDes[aSubRecordNOF]->offset = (unsigned short)((char *)&prec->nof - (char *)prec);
    prt->papFldDes[aSubRecordNOG]->size = sizeof(prec->nog);
    prt->papFldDes[aSubRecordNOG]->offset = (unsigned short)((char *)&prec->nog - (char *)prec);
    prt->papFldDes[aSubRecordNOH]->size = sizeof(prec->noh);
    prt->papFldDes[aSubRecordNOH]->offset = (unsigned short)((char *)&prec->noh - (char *)prec);
    prt->papFldDes[aSubRecordNOI]->size = sizeof(prec->noi);
    prt->papFldDes[aSubRecordNOI]->offset = (unsigned short)((char *)&prec->noi - (char *)prec);
    prt->papFldDes[aSubRecordNOJ]->size = sizeof(prec->noj);
    prt->papFldDes[aSubRecordNOJ]->offset = (unsigned short)((char *)&prec->noj - (char *)prec);
    prt->papFldDes[aSubRecordNOK]->size = sizeof(prec->nok);
    prt->papFldDes[aSubRecordNOK]->offset = (unsigned short)((char *)&prec->nok - (char *)prec);
    prt->papFldDes[aSubRecordNOL]->size = sizeof(prec->nol);
    prt->papFldDes[aSubRecordNOL]->offset = (unsigned short)((char *)&prec->nol - (char *)prec);
    prt->papFldDes[aSubRecordNOM]->size = sizeof(prec->nom);
    prt->papFldDes[aSubRecordNOM]->offset = (unsigned short)((char *)&prec->nom - (char *)prec);
    prt->papFldDes[aSubRecordNON]->size = sizeof(prec->non);
    prt->papFldDes[aSubRecordNON]->offset = (unsigned short)((char *)&prec->non - (char *)prec);
    prt->papFldDes[aSubRecordNOO]->size = sizeof(prec->noo);
    prt->papFldDes[aSubRecordNOO]->offset = (unsigned short)((char *)&prec->noo - (char *)prec);
    prt->papFldDes[aSubRecordNOP]->size = sizeof(prec->nop);
    prt->papFldDes[aSubRecordNOP]->offset = (unsigned short)((char *)&prec->nop - (char *)prec);
    prt->papFldDes[aSubRecordNOQ]->size = sizeof(prec->noq);
    prt->papFldDes[aSubRecordNOQ]->offset = (unsigned short)((char *)&prec->noq - (char *)prec);
    prt->papFldDes[aSubRecordNOR]->size = sizeof(prec->nor);
    prt->papFldDes[aSubRecordNOR]->offset = (unsigned short)((char *)&prec->nor - (char *)prec);
    prt->papFldDes[aSubRecordNOS]->size = sizeof(prec->nos);
    prt->papFldDes[aSubRecordNOS]->offset = (unsigned short)((char *)&prec->nos - (char *)prec);
    prt->papFldDes[aSubRecordNOT]->size = sizeof(prec->NOT);
    prt->papFldDes[aSubRecordNOT]->offset = (unsigned short)((char *)&prec->NOT - (char *)prec);
    prt->papFldDes[aSubRecordNOU]->size = sizeof(prec->nou);
    prt->papFldDes[aSubRecordNOU]->offset = (unsigned short)((char *)&prec->nou - (char *)prec);
    prt->papFldDes[aSubRecordNEA]->size = sizeof(prec->nea);
    prt->papFldDes[aSubRecordNEA]->offset = (unsigned short)((char *)&prec->nea - (char *)prec);
    prt->papFldDes[aSubRecordNEB]->size = sizeof(prec->neb);
    prt->papFldDes[aSubRecordNEB]->offset = (unsigned short)((char *)&prec->neb - (char *)prec);
    prt->papFldDes[aSubRecordNEC]->size = sizeof(prec->nec);
    prt->papFldDes[aSubRecordNEC]->offset = (unsigned short)((char *)&prec->nec - (char *)prec);
    prt->papFldDes[aSubRecordNED]->size = sizeof(prec->ned);
    prt->papFldDes[aSubRecordNED]->offset = (unsigned short)((char *)&prec->ned - (char *)prec);
    prt->papFldDes[aSubRecordNEE]->size = sizeof(prec->nee);
    prt->papFldDes[aSubRecordNEE]->offset = (unsigned short)((char *)&prec->nee - (char *)prec);
    prt->papFldDes[aSubRecordNEF]->size = sizeof(prec->nef);
    prt->papFldDes[aSubRecordNEF]->offset = (unsigned short)((char *)&prec->nef - (char *)prec);
    prt->papFldDes[aSubRecordNEG]->size = sizeof(prec->neg);
    prt->papFldDes[aSubRecordNEG]->offset = (unsigned short)((char *)&prec->neg - (char *)prec);
    prt->papFldDes[aSubRecordNEH]->size = sizeof(prec->neh);
    prt->papFldDes[aSubRecordNEH]->offset = (unsigned short)((char *)&prec->neh - (char *)prec);
    prt->papFldDes[aSubRecordNEI]->size = sizeof(prec->nei);
    prt->papFldDes[aSubRecordNEI]->offset = (unsigned short)((char *)&prec->nei - (char *)prec);
    prt->papFldDes[aSubRecordNEJ]->size = sizeof(prec->nej);
    prt->papFldDes[aSubRecordNEJ]->offset = (unsigned short)((char *)&prec->nej - (char *)prec);
    prt->papFldDes[aSubRecordNEK]->size = sizeof(prec->nek);
    prt->papFldDes[aSubRecordNEK]->offset = (unsigned short)((char *)&prec->nek - (char *)prec);
    prt->papFldDes[aSubRecordNEL]->size = sizeof(prec->nel);
    prt->papFldDes[aSubRecordNEL]->offset = (unsigned short)((char *)&prec->nel - (char *)prec);
    prt->papFldDes[aSubRecordNEM]->size = sizeof(prec->nem);
    prt->papFldDes[aSubRecordNEM]->offset = (unsigned short)((char *)&prec->nem - (char *)prec);
    prt->papFldDes[aSubRecordNEN]->size = sizeof(prec->nen);
    prt->papFldDes[aSubRecordNEN]->offset = (unsigned short)((char *)&prec->nen - (char *)prec);
    prt->papFldDes[aSubRecordNEO]->size = sizeof(prec->neo);
    prt->papFldDes[aSubRecordNEO]->offset = (unsigned short)((char *)&prec->neo - (char *)prec);
    prt->papFldDes[aSubRecordNEP]->size = sizeof(prec->nep);
    prt->papFldDes[aSubRecordNEP]->offset = (unsigned short)((char *)&prec->nep - (char *)prec);
    prt->papFldDes[aSubRecordNEQ]->size = sizeof(prec->neq);
    prt->papFldDes[aSubRecordNEQ]->offset = (unsigned short)((char *)&prec->neq - (char *)prec);
    prt->papFldDes[aSubRecordNER]->size = sizeof(prec->ner);
    prt->papFldDes[aSubRecordNER]->offset = (unsigned short)((char *)&prec->ner - (char *)prec);
    prt->papFldDes[aSubRecordNES]->size = sizeof(prec->nes);
    prt->papFldDes[aSubRecordNES]->offset = (unsigned short)((char *)&prec->nes - (char *)prec);
    prt->papFldDes[aSubRecordNET]->size = sizeof(prec->net);
    prt->papFldDes[aSubRecordNET]->offset = (unsigned short)((char *)&prec->net - (char *)prec);
    prt->papFldDes[aSubRecordNEU]->size = sizeof(prec->neu);
    prt->papFldDes[aSubRecordNEU]->offset = (unsigned short)((char *)&prec->neu - (char *)prec);
    prt->papFldDes[aSubRecordOUTA]->size = sizeof(prec->outa);
    prt->papFldDes[aSubRecordOUTA]->offset = (unsigned short)((char *)&prec->outa - (char *)prec);
    prt->papFldDes[aSubRecordOUTB]->size = sizeof(prec->outb);
    prt->papFldDes[aSubRecordOUTB]->offset = (unsigned short)((char *)&prec->outb - (char *)prec);
    prt->papFldDes[aSubRecordOUTC]->size = sizeof(prec->outc);
    prt->papFldDes[aSubRecordOUTC]->offset = (unsigned short)((char *)&prec->outc - (char *)prec);
    prt->papFldDes[aSubRecordOUTD]->size = sizeof(prec->outd);
    prt->papFldDes[aSubRecordOUTD]->offset = (unsigned short)((char *)&prec->outd - (char *)prec);
    prt->papFldDes[aSubRecordOUTE]->size = sizeof(prec->oute);
    prt->papFldDes[aSubRecordOUTE]->offset = (unsigned short)((char *)&prec->oute - (char *)prec);
    prt->papFldDes[aSubRecordOUTF]->size = sizeof(prec->outf);
    prt->papFldDes[aSubRecordOUTF]->offset = (unsigned short)((char *)&prec->outf - (char *)prec);
    prt->papFldDes[aSubRecordOUTG]->size = sizeof(prec->outg);
    prt->papFldDes[aSubRecordOUTG]->offset = (unsigned short)((char *)&prec->outg - (char *)prec);
    prt->papFldDes[aSubRecordOUTH]->size = sizeof(prec->outh);
    prt->papFldDes[aSubRecordOUTH]->offset = (unsigned short)((char *)&prec->outh - (char *)prec);
    prt->papFldDes[aSubRecordOUTI]->size = sizeof(prec->outi);
    prt->papFldDes[aSubRecordOUTI]->offset = (unsigned short)((char *)&prec->outi - (char *)prec);
    prt->papFldDes[aSubRecordOUTJ]->size = sizeof(prec->outj);
    prt->papFldDes[aSubRecordOUTJ]->offset = (unsigned short)((char *)&prec->outj - (char *)prec);
    prt->papFldDes[aSubRecordOUTK]->size = sizeof(prec->outk);
    prt->papFldDes[aSubRecordOUTK]->offset = (unsigned short)((char *)&prec->outk - (char *)prec);
    prt->papFldDes[aSubRecordOUTL]->size = sizeof(prec->outl);
    prt->papFldDes[aSubRecordOUTL]->offset = (unsigned short)((char *)&prec->outl - (char *)prec);
    prt->papFldDes[aSubRecordOUTM]->size = sizeof(prec->outm);
    prt->papFldDes[aSubRecordOUTM]->offset = (unsigned short)((char *)&prec->outm - (char *)prec);
    prt->papFldDes[aSubRecordOUTN]->size = sizeof(prec->outn);
    prt->papFldDes[aSubRecordOUTN]->offset = (unsigned short)((char *)&prec->outn - (char *)prec);
    prt->papFldDes[aSubRecordOUTO]->size = sizeof(prec->outo);
    prt->papFldDes[aSubRecordOUTO]->offset = (unsigned short)((char *)&prec->outo - (char *)prec);
    prt->papFldDes[aSubRecordOUTP]->size = sizeof(prec->outp);
    prt->papFldDes[aSubRecordOUTP]->offset = (unsigned short)((char *)&prec->outp - (char *)prec);
    prt->papFldDes[aSubRecordOUTQ]->size = sizeof(prec->outq);
    prt->papFldDes[aSubRecordOUTQ]->offset = (unsigned short)((char *)&prec->outq - (char *)prec);
    prt->papFldDes[aSubRecordOUTR]->size = sizeof(prec->outr);
    prt->papFldDes[aSubRecordOUTR]->offset = (unsigned short)((char *)&prec->outr - (char *)prec);
    prt->papFldDes[aSubRecordOUTS]->size = sizeof(prec->outs);
    prt->papFldDes[aSubRecordOUTS]->offset = (unsigned short)((char *)&prec->outs - (char *)prec);
    prt->papFldDes[aSubRecordOUTT]->size = sizeof(prec->outt);
    prt->papFldDes[aSubRecordOUTT]->offset = (unsigned short)((char *)&prec->outt - (char *)prec);
    prt->papFldDes[aSubRecordOUTU]->size = sizeof(prec->outu);
    prt->papFldDes[aSubRecordOUTU]->offset = (unsigned short)((char *)&prec->outu - (char *)prec);
    prt->papFldDes[aSubRecordVALA]->size = sizeof(prec->vala);
    prt->papFldDes[aSubRecordVALA]->offset = (unsigned short)((char *)&prec->vala - (char *)prec);
    prt->papFldDes[aSubRecordVALB]->size = sizeof(prec->valb);
    prt->papFldDes[aSubRecordVALB]->offset = (unsigned short)((char *)&prec->valb - (char *)prec);
    prt->papFldDes[aSubRecordVALC]->size = sizeof(prec->valc);
    prt->papFldDes[aSubRecordVALC]->offset = (unsigned short)((char *)&prec->valc - (char *)prec);
    prt->papFldDes[aSubRecordVALD]->size = sizeof(prec->vald);
    prt->papFldDes[aSubRecordVALD]->offset = (unsigned short)((char *)&prec->vald - (char *)prec);
    prt->papFldDes[aSubRecordVALE]->size = sizeof(prec->vale);
    prt->papFldDes[aSubRecordVALE]->offset = (unsigned short)((char *)&prec->vale - (char *)prec);
    prt->papFldDes[aSubRecordVALF]->size = sizeof(prec->valf);
    prt->papFldDes[aSubRecordVALF]->offset = (unsigned short)((char *)&prec->valf - (char *)prec);
    prt->papFldDes[aSubRecordVALG]->size = sizeof(prec->valg);
    prt->papFldDes[aSubRecordVALG]->offset = (unsigned short)((char *)&prec->valg - (char *)prec);
    prt->papFldDes[aSubRecordVALH]->size = sizeof(prec->valh);
    prt->papFldDes[aSubRecordVALH]->offset = (unsigned short)((char *)&prec->valh - (char *)prec);
    prt->papFldDes[aSubRecordVALI]->size = sizeof(prec->vali);
    prt->papFldDes[aSubRecordVALI]->offset = (unsigned short)((char *)&prec->vali - (char *)prec);
    prt->papFldDes[aSubRecordVALJ]->size = sizeof(prec->valj);
    prt->papFldDes[aSubRecordVALJ]->offset = (unsigned short)((char *)&prec->valj - (char *)prec);
    prt->papFldDes[aSubRecordVALK]->size = sizeof(prec->valk);
    prt->papFldDes[aSubRecordVALK]->offset = (unsigned short)((char *)&prec->valk - (char *)prec);
    prt->papFldDes[aSubRecordVALL]->size = sizeof(prec->vall);
    prt->papFldDes[aSubRecordVALL]->offset = (unsigned short)((char *)&prec->vall - (char *)prec);
    prt->papFldDes[aSubRecordVALM]->size = sizeof(prec->valm);
    prt->papFldDes[aSubRecordVALM]->offset = (unsigned short)((char *)&prec->valm - (char *)prec);
    prt->papFldDes[aSubRecordVALN]->size = sizeof(prec->valn);
    prt->papFldDes[aSubRecordVALN]->offset = (unsigned short)((char *)&prec->valn - (char *)prec);
    prt->papFldDes[aSubRecordVALO]->size = sizeof(prec->valo);
    prt->papFldDes[aSubRecordVALO]->offset = (unsigned short)((char *)&prec->valo - (char *)prec);
    prt->papFldDes[aSubRecordVALP]->size = sizeof(prec->valp);
    prt->papFldDes[aSubRecordVALP]->offset = (unsigned short)((char *)&prec->valp - (char *)prec);
    prt->papFldDes[aSubRecordVALQ]->size = sizeof(prec->valq);
    prt->papFldDes[aSubRecordVALQ]->offset = (unsigned short)((char *)&prec->valq - (char *)prec);
    prt->papFldDes[aSubRecordVALR]->size = sizeof(prec->valr);
    prt->papFldDes[aSubRecordVALR]->offset = (unsigned short)((char *)&prec->valr - (char *)prec);
    prt->papFldDes[aSubRecordVALS]->size = sizeof(prec->vals);
    prt->papFldDes[aSubRecordVALS]->offset = (unsigned short)((char *)&prec->vals - (char *)prec);
    prt->papFldDes[aSubRecordVALT]->size = sizeof(prec->valt);
    prt->papFldDes[aSubRecordVALT]->offset = (unsigned short)((char *)&prec->valt - (char *)prec);
    prt->papFldDes[aSubRecordVALU]->size = sizeof(prec->valu);
    prt->papFldDes[aSubRecordVALU]->offset = (unsigned short)((char *)&prec->valu - (char *)prec);
    prt->papFldDes[aSubRecordOVLA]->size = sizeof(prec->ovla);
    prt->papFldDes[aSubRecordOVLA]->offset = (unsigned short)((char *)&prec->ovla - (char *)prec);
    prt->papFldDes[aSubRecordOVLB]->size = sizeof(prec->ovlb);
    prt->papFldDes[aSubRecordOVLB]->offset = (unsigned short)((char *)&prec->ovlb - (char *)prec);
    prt->papFldDes[aSubRecordOVLC]->size = sizeof(prec->ovlc);
    prt->papFldDes[aSubRecordOVLC]->offset = (unsigned short)((char *)&prec->ovlc - (char *)prec);
    prt->papFldDes[aSubRecordOVLD]->size = sizeof(prec->ovld);
    prt->papFldDes[aSubRecordOVLD]->offset = (unsigned short)((char *)&prec->ovld - (char *)prec);
    prt->papFldDes[aSubRecordOVLE]->size = sizeof(prec->ovle);
    prt->papFldDes[aSubRecordOVLE]->offset = (unsigned short)((char *)&prec->ovle - (char *)prec);
    prt->papFldDes[aSubRecordOVLF]->size = sizeof(prec->ovlf);
    prt->papFldDes[aSubRecordOVLF]->offset = (unsigned short)((char *)&prec->ovlf - (char *)prec);
    prt->papFldDes[aSubRecordOVLG]->size = sizeof(prec->ovlg);
    prt->papFldDes[aSubRecordOVLG]->offset = (unsigned short)((char *)&prec->ovlg - (char *)prec);
    prt->papFldDes[aSubRecordOVLH]->size = sizeof(prec->ovlh);
    prt->papFldDes[aSubRecordOVLH]->offset = (unsigned short)((char *)&prec->ovlh - (char *)prec);
    prt->papFldDes[aSubRecordOVLI]->size = sizeof(prec->ovli);
    prt->papFldDes[aSubRecordOVLI]->offset = (unsigned short)((char *)&prec->ovli - (char *)prec);
    prt->papFldDes[aSubRecordOVLJ]->size = sizeof(prec->ovlj);
    prt->papFldDes[aSubRecordOVLJ]->offset = (unsigned short)((char *)&prec->ovlj - (char *)prec);
    prt->papFldDes[aSubRecordOVLK]->size = sizeof(prec->ovlk);
    prt->papFldDes[aSubRecordOVLK]->offset = (unsigned short)((char *)&prec->ovlk - (char *)prec);
    prt->papFldDes[aSubRecordOVLL]->size = sizeof(prec->ovll);
    prt->papFldDes[aSubRecordOVLL]->offset = (unsigned short)((char *)&prec->ovll - (char *)prec);
    prt->papFldDes[aSubRecordOVLM]->size = sizeof(prec->ovlm);
    prt->papFldDes[aSubRecordOVLM]->offset = (unsigned short)((char *)&prec->ovlm - (char *)prec);
    prt->papFldDes[aSubRecordOVLN]->size = sizeof(prec->ovln);
    prt->papFldDes[aSubRecordOVLN]->offset = (unsigned short)((char *)&prec->ovln - (char *)prec);
    prt->papFldDes[aSubRecordOVLO]->size = sizeof(prec->ovlo);
    prt->papFldDes[aSubRecordOVLO]->offset = (unsigned short)((char *)&prec->ovlo - (char *)prec);
    prt->papFldDes[aSubRecordOVLP]->size = sizeof(prec->ovlp);
    prt->papFldDes[aSubRecordOVLP]->offset = (unsigned short)((char *)&prec->ovlp - (char *)prec);
    prt->papFldDes[aSubRecordOVLQ]->size = sizeof(prec->ovlq);
    prt->papFldDes[aSubRecordOVLQ]->offset = (unsigned short)((char *)&prec->ovlq - (char *)prec);
    prt->papFldDes[aSubRecordOVLR]->size = sizeof(prec->ovlr);
    prt->papFldDes[aSubRecordOVLR]->offset = (unsigned short)((char *)&prec->ovlr - (char *)prec);
    prt->papFldDes[aSubRecordOVLS]->size = sizeof(prec->ovls);
    prt->papFldDes[aSubRecordOVLS]->offset = (unsigned short)((char *)&prec->ovls - (char *)prec);
    prt->papFldDes[aSubRecordOVLT]->size = sizeof(prec->ovlt);
    prt->papFldDes[aSubRecordOVLT]->offset = (unsigned short)((char *)&prec->ovlt - (char *)prec);
    prt->papFldDes[aSubRecordOVLU]->size = sizeof(prec->ovlu);
    prt->papFldDes[aSubRecordOVLU]->offset = (unsigned short)((char *)&prec->ovlu - (char *)prec);
    prt->papFldDes[aSubRecordFTVA]->size = sizeof(prec->ftva);
    prt->papFldDes[aSubRecordFTVA]->offset = (unsigned short)((char *)&prec->ftva - (char *)prec);
    prt->papFldDes[aSubRecordFTVB]->size = sizeof(prec->ftvb);
    prt->papFldDes[aSubRecordFTVB]->offset = (unsigned short)((char *)&prec->ftvb - (char *)prec);
    prt->papFldDes[aSubRecordFTVC]->size = sizeof(prec->ftvc);
    prt->papFldDes[aSubRecordFTVC]->offset = (unsigned short)((char *)&prec->ftvc - (char *)prec);
    prt->papFldDes[aSubRecordFTVD]->size = sizeof(prec->ftvd);
    prt->papFldDes[aSubRecordFTVD]->offset = (unsigned short)((char *)&prec->ftvd - (char *)prec);
    prt->papFldDes[aSubRecordFTVE]->size = sizeof(prec->ftve);
    prt->papFldDes[aSubRecordFTVE]->offset = (unsigned short)((char *)&prec->ftve - (char *)prec);
    prt->papFldDes[aSubRecordFTVF]->size = sizeof(prec->ftvf);
    prt->papFldDes[aSubRecordFTVF]->offset = (unsigned short)((char *)&prec->ftvf - (char *)prec);
    prt->papFldDes[aSubRecordFTVG]->size = sizeof(prec->ftvg);
    prt->papFldDes[aSubRecordFTVG]->offset = (unsigned short)((char *)&prec->ftvg - (char *)prec);
    prt->papFldDes[aSubRecordFTVH]->size = sizeof(prec->ftvh);
    prt->papFldDes[aSubRecordFTVH]->offset = (unsigned short)((char *)&prec->ftvh - (char *)prec);
    prt->papFldDes[aSubRecordFTVI]->size = sizeof(prec->ftvi);
    prt->papFldDes[aSubRecordFTVI]->offset = (unsigned short)((char *)&prec->ftvi - (char *)prec);
    prt->papFldDes[aSubRecordFTVJ]->size = sizeof(prec->ftvj);
    prt->papFldDes[aSubRecordFTVJ]->offset = (unsigned short)((char *)&prec->ftvj - (char *)prec);
    prt->papFldDes[aSubRecordFTVK]->size = sizeof(prec->ftvk);
    prt->papFldDes[aSubRecordFTVK]->offset = (unsigned short)((char *)&prec->ftvk - (char *)prec);
    prt->papFldDes[aSubRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[aSubRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[aSubRecordFTVM]->size = sizeof(prec->ftvm);
    prt->papFldDes[aSubRecordFTVM]->offset = (unsigned short)((char *)&prec->ftvm - (char *)prec);
    prt->papFldDes[aSubRecordFTVN]->size = sizeof(prec->ftvn);
    prt->papFldDes[aSubRecordFTVN]->offset = (unsigned short)((char *)&prec->ftvn - (char *)prec);
    prt->papFldDes[aSubRecordFTVO]->size = sizeof(prec->ftvo);
    prt->papFldDes[aSubRecordFTVO]->offset = (unsigned short)((char *)&prec->ftvo - (char *)prec);
    prt->papFldDes[aSubRecordFTVP]->size = sizeof(prec->ftvp);
    prt->papFldDes[aSubRecordFTVP]->offset = (unsigned short)((char *)&prec->ftvp - (char *)prec);
    prt->papFldDes[aSubRecordFTVQ]->size = sizeof(prec->ftvq);
    prt->papFldDes[aSubRecordFTVQ]->offset = (unsigned short)((char *)&prec->ftvq - (char *)prec);
    prt->papFldDes[aSubRecordFTVR]->size = sizeof(prec->ftvr);
    prt->papFldDes[aSubRecordFTVR]->offset = (unsigned short)((char *)&prec->ftvr - (char *)prec);
    prt->papFldDes[aSubRecordFTVS]->size = sizeof(prec->ftvs);
    prt->papFldDes[aSubRecordFTVS]->offset = (unsigned short)((char *)&prec->ftvs - (char *)prec);
    prt->papFldDes[aSubRecordFTVT]->size = sizeof(prec->ftvt);
    prt->papFldDes[aSubRecordFTVT]->offset = (unsigned short)((char *)&prec->ftvt - (char *)prec);
    prt->papFldDes[aSubRecordFTVU]->size = sizeof(prec->ftvu);
    prt->papFldDes[aSubRecordFTVU]->offset = (unsigned short)((char *)&prec->ftvu - (char *)prec);
    prt->papFldDes[aSubRecordNOVA]->size = sizeof(prec->nova);
    prt->papFldDes[aSubRecordNOVA]->offset = (unsigned short)((char *)&prec->nova - (char *)prec);
    prt->papFldDes[aSubRecordNOVB]->size = sizeof(prec->novb);
    prt->papFldDes[aSubRecordNOVB]->offset = (unsigned short)((char *)&prec->novb - (char *)prec);
    prt->papFldDes[aSubRecordNOVC]->size = sizeof(prec->novc);
    prt->papFldDes[aSubRecordNOVC]->offset = (unsigned short)((char *)&prec->novc - (char *)prec);
    prt->papFldDes[aSubRecordNOVD]->size = sizeof(prec->novd);
    prt->papFldDes[aSubRecordNOVD]->offset = (unsigned short)((char *)&prec->novd - (char *)prec);
    prt->papFldDes[aSubRecordNOVE]->size = sizeof(prec->nove);
    prt->papFldDes[aSubRecordNOVE]->offset = (unsigned short)((char *)&prec->nove - (char *)prec);
    prt->papFldDes[aSubRecordNOVF]->size = sizeof(prec->novf);
    prt->papFldDes[aSubRecordNOVF]->offset = (unsigned short)((char *)&prec->novf - (char *)prec);
    prt->papFldDes[aSubRecordNOVG]->size = sizeof(prec->novg);
    prt->papFldDes[aSubRecordNOVG]->offset = (unsigned short)((char *)&prec->novg - (char *)prec);
    prt->papFldDes[aSubRecordNOVH]->size = sizeof(prec->novh);
    prt->papFldDes[aSubRecordNOVH]->offset = (unsigned short)((char *)&prec->novh - (char *)prec);
    prt->papFldDes[aSubRecordNOVI]->size = sizeof(prec->novi);
    prt->papFldDes[aSubRecordNOVI]->offset = (unsigned short)((char *)&prec->novi - (char *)prec);
    prt->papFldDes[aSubRecordNOVJ]->size = sizeof(prec->novj);
    prt->papFldDes[aSubRecordNOVJ]->offset = (unsigned short)((char *)&prec->novj - (char *)prec);
    prt->papFldDes[aSubRecordNOVK]->size = sizeof(prec->novk);
    prt->papFldDes[aSubRecordNOVK]->offset = (unsigned short)((char *)&prec->novk - (char *)prec);
    prt->papFldDes[aSubRecordNOVL]->size = sizeof(prec->novl);
    prt->papFldDes[aSubRecordNOVL]->offset = (unsigned short)((char *)&prec->novl - (char *)prec);
    prt->papFldDes[aSubRecordNOVM]->size = sizeof(prec->novm);
    prt->papFldDes[aSubRecordNOVM]->offset = (unsigned short)((char *)&prec->novm - (char *)prec);
    prt->papFldDes[aSubRecordNOVN]->size = sizeof(prec->novn);
    prt->papFldDes[aSubRecordNOVN]->offset = (unsigned short)((char *)&prec->novn - (char *)prec);
    prt->papFldDes[aSubRecordNOVO]->size = sizeof(prec->novo);
    prt->papFldDes[aSubRecordNOVO]->offset = (unsigned short)((char *)&prec->novo - (char *)prec);
    prt->papFldDes[aSubRecordNOVP]->size = sizeof(prec->novp);
    prt->papFldDes[aSubRecordNOVP]->offset = (unsigned short)((char *)&prec->novp - (char *)prec);
    prt->papFldDes[aSubRecordNOVQ]->size = sizeof(prec->novq);
    prt->papFldDes[aSubRecordNOVQ]->offset = (unsigned short)((char *)&prec->novq - (char *)prec);
    prt->papFldDes[aSubRecordNOVR]->size = sizeof(prec->novr);
    prt->papFldDes[aSubRecordNOVR]->offset = (unsigned short)((char *)&prec->novr - (char *)prec);
    prt->papFldDes[aSubRecordNOVS]->size = sizeof(prec->novs);
    prt->papFldDes[aSubRecordNOVS]->offset = (unsigned short)((char *)&prec->novs - (char *)prec);
    prt->papFldDes[aSubRecordNOVT]->size = sizeof(prec->novt);
    prt->papFldDes[aSubRecordNOVT]->offset = (unsigned short)((char *)&prec->novt - (char *)prec);
    prt->papFldDes[aSubRecordNOVU]->size = sizeof(prec->novu);
    prt->papFldDes[aSubRecordNOVU]->offset = (unsigned short)((char *)&prec->novu - (char *)prec);
    prt->papFldDes[aSubRecordNEVA]->size = sizeof(prec->neva);
    prt->papFldDes[aSubRecordNEVA]->offset = (unsigned short)((char *)&prec->neva - (char *)prec);
    prt->papFldDes[aSubRecordNEVB]->size = sizeof(prec->nevb);
    prt->papFldDes[aSubRecordNEVB]->offset = (unsigned short)((char *)&prec->nevb - (char *)prec);
    prt->papFldDes[aSubRecordNEVC]->size = sizeof(prec->nevc);
    prt->papFldDes[aSubRecordNEVC]->offset = (unsigned short)((char *)&prec->nevc - (char *)prec);
    prt->papFldDes[aSubRecordNEVD]->size = sizeof(prec->nevd);
    prt->papFldDes[aSubRecordNEVD]->offset = (unsigned short)((char *)&prec->nevd - (char *)prec);
    prt->papFldDes[aSubRecordNEVE]->size = sizeof(prec->neve);
    prt->papFldDes[aSubRecordNEVE]->offset = (unsigned short)((char *)&prec->neve - (char *)prec);
    prt->papFldDes[aSubRecordNEVF]->size = sizeof(prec->nevf);
    prt->papFldDes[aSubRecordNEVF]->offset = (unsigned short)((char *)&prec->nevf - (char *)prec);
    prt->papFldDes[aSubRecordNEVG]->size = sizeof(prec->nevg);
    prt->papFldDes[aSubRecordNEVG]->offset = (unsigned short)((char *)&prec->nevg - (char *)prec);
    prt->papFldDes[aSubRecordNEVH]->size = sizeof(prec->nevh);
    prt->papFldDes[aSubRecordNEVH]->offset = (unsigned short)((char *)&prec->nevh - (char *)prec);
    prt->papFldDes[aSubRecordNEVI]->size = sizeof(prec->nevi);
    prt->papFldDes[aSubRecordNEVI]->offset = (unsigned short)((char *)&prec->nevi - (char *)prec);
    prt->papFldDes[aSubRecordNEVJ]->size = sizeof(prec->nevj);
    prt->papFldDes[aSubRecordNEVJ]->offset = (unsigned short)((char *)&prec->nevj - (char *)prec);
    prt->papFldDes[aSubRecordNEVK]->size = sizeof(prec->nevk);
    prt->papFldDes[aSubRecordNEVK]->offset = (unsigned short)((char *)&prec->nevk - (char *)prec);
    prt->papFldDes[aSubRecordNEVL]->size = sizeof(prec->nevl);
    prt->papFldDes[aSubRecordNEVL]->offset = (unsigned short)((char *)&prec->nevl - (char *)prec);
    prt->papFldDes[aSubRecordNEVM]->size = sizeof(prec->nevm);
    prt->papFldDes[aSubRecordNEVM]->offset = (unsigned short)((char *)&prec->nevm - (char *)prec);
    prt->papFldDes[aSubRecordNEVN]->size = sizeof(prec->nevn);
    prt->papFldDes[aSubRecordNEVN]->offset = (unsigned short)((char *)&prec->nevn - (char *)prec);
    prt->papFldDes[aSubRecordNEVO]->size = sizeof(prec->nevo);
    prt->papFldDes[aSubRecordNEVO]->offset = (unsigned short)((char *)&prec->nevo - (char *)prec);
    prt->papFldDes[aSubRecordNEVP]->size = sizeof(prec->nevp);
    prt->papFldDes[aSubRecordNEVP]->offset = (unsigned short)((char *)&prec->nevp - (char *)prec);
    prt->papFldDes[aSubRecordNEVQ]->size = sizeof(prec->nevq);
    prt->papFldDes[aSubRecordNEVQ]->offset = (unsigned short)((char *)&prec->nevq - (char *)prec);
    prt->papFldDes[aSubRecordNEVR]->size = sizeof(prec->nevr);
    prt->papFldDes[aSubRecordNEVR]->offset = (unsigned short)((char *)&prec->nevr - (char *)prec);
    prt->papFldDes[aSubRecordNEVS]->size = sizeof(prec->nevs);
    prt->papFldDes[aSubRecordNEVS]->offset = (unsigned short)((char *)&prec->nevs - (char *)prec);
    prt->papFldDes[aSubRecordNEVT]->size = sizeof(prec->nevt);
    prt->papFldDes[aSubRecordNEVT]->offset = (unsigned short)((char *)&prec->nevt - (char *)prec);
    prt->papFldDes[aSubRecordNEVU]->size = sizeof(prec->nevu);
    prt->papFldDes[aSubRecordNEVU]->offset = (unsigned short)((char *)&prec->nevu - (char *)prec);
    prt->papFldDes[aSubRecordONVA]->size = sizeof(prec->onva);
    prt->papFldDes[aSubRecordONVA]->offset = (unsigned short)((char *)&prec->onva - (char *)prec);
    prt->papFldDes[aSubRecordONVB]->size = sizeof(prec->onvb);
    prt->papFldDes[aSubRecordONVB]->offset = (unsigned short)((char *)&prec->onvb - (char *)prec);
    prt->papFldDes[aSubRecordONVC]->size = sizeof(prec->onvc);
    prt->papFldDes[aSubRecordONVC]->offset = (unsigned short)((char *)&prec->onvc - (char *)prec);
    prt->papFldDes[aSubRecordONVD]->size = sizeof(prec->onvd);
    prt->papFldDes[aSubRecordONVD]->offset = (unsigned short)((char *)&prec->onvd - (char *)prec);
    prt->papFldDes[aSubRecordONVE]->size = sizeof(prec->onve);
    prt->papFldDes[aSubRecordONVE]->offset = (unsigned short)((char *)&prec->onve - (char *)prec);
    prt->papFldDes[aSubRecordONVF]->size = sizeof(prec->onvf);
    prt->papFldDes[aSubRecordONVF]->offset = (unsigned short)((char *)&prec->onvf - (char *)prec);
    prt->papFldDes[aSubRecordONVG]->size = sizeof(prec->onvg);
    prt->papFldDes[aSubRecordONVG]->offset = (unsigned short)((char *)&prec->onvg - (char *)prec);
    prt->papFldDes[aSubRecordONVH]->size = sizeof(prec->onvh);
    prt->papFldDes[aSubRecordONVH]->offset = (unsigned short)((char *)&prec->onvh - (char *)prec);
    prt->papFldDes[aSubRecordONVI]->size = sizeof(prec->onvi);
    prt->papFldDes[aSubRecordONVI]->offset = (unsigned short)((char *)&prec->onvi - (char *)prec);
    prt->papFldDes[aSubRecordONVJ]->size = sizeof(prec->onvj);
    prt->papFldDes[aSubRecordONVJ]->offset = (unsigned short)((char *)&prec->onvj - (char *)prec);
    prt->papFldDes[aSubRecordONVK]->size = sizeof(prec->onvk);
    prt->papFldDes[aSubRecordONVK]->offset = (unsigned short)((char *)&prec->onvk - (char *)prec);
    prt->papFldDes[aSubRecordONVL]->size = sizeof(prec->onvl);
    prt->papFldDes[aSubRecordONVL]->offset = (unsigned short)((char *)&prec->onvl - (char *)prec);
    prt->papFldDes[aSubRecordONVM]->size = sizeof(prec->onvm);
    prt->papFldDes[aSubRecordONVM]->offset = (unsigned short)((char *)&prec->onvm - (char *)prec);
    prt->papFldDes[aSubRecordONVN]->size = sizeof(prec->onvn);
    prt->papFldDes[aSubRecordONVN]->offset = (unsigned short)((char *)&prec->onvn - (char *)prec);
    prt->papFldDes[aSubRecordONVO]->size = sizeof(prec->onvo);
    prt->papFldDes[aSubRecordONVO]->offset = (unsigned short)((char *)&prec->onvo - (char *)prec);
    prt->papFldDes[aSubRecordONVP]->size = sizeof(prec->onvp);
    prt->papFldDes[aSubRecordONVP]->offset = (unsigned short)((char *)&prec->onvp - (char *)prec);
    prt->papFldDes[aSubRecordONVQ]->size = sizeof(prec->onvq);
    prt->papFldDes[aSubRecordONVQ]->offset = (unsigned short)((char *)&prec->onvq - (char *)prec);
    prt->papFldDes[aSubRecordONVR]->size = sizeof(prec->onvr);
    prt->papFldDes[aSubRecordONVR]->offset = (unsigned short)((char *)&prec->onvr - (char *)prec);
    prt->papFldDes[aSubRecordONVS]->size = sizeof(prec->onvs);
    prt->papFldDes[aSubRecordONVS]->offset = (unsigned short)((char *)&prec->onvs - (char *)prec);
    prt->papFldDes[aSubRecordONVT]->size = sizeof(prec->onvt);
    prt->papFldDes[aSubRecordONVT]->offset = (unsigned short)((char *)&prec->onvt - (char *)prec);
    prt->papFldDes[aSubRecordONVU]->size = sizeof(prec->onvu);
    prt->papFldDes[aSubRecordONVU]->offset = (unsigned short)((char *)&prec->onvu - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(aSubRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_aSubRecord_H */
