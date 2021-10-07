#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
static int yyparse(void);
#define YYPREFIX "yy"
#line 11 "../dbStatic/dbYacc.y"
static int yyerror();
static int yy_start;
static long pvt_yy_parse(void);
static int yyFailed = 0;
static int yyAbort = 0;
#include "dbLexRoutines.c"
#line 21 "../dbStatic/dbYacc.y"
typedef union
{
    char    *Str;
} YYSTYPE;
#line 22 "dbYacc.tab.c"
#define tokenINCLUDE 257
#define tokenPATH 258
#define tokenADDPATH 259
#define tokenALIAS 260
#define tokenMENU 261
#define tokenCHOICE 262
#define tokenRECORDTYPE 263
#define tokenFIELD 264
#define tokenINFO 265
#define tokenREGISTRAR 266
#define tokenDEVICE 267
#define tokenDRIVER 268
#define tokenLINK 269
#define tokenBREAKTABLE 270
#define tokenRECORD 271
#define tokenGRECORD 272
#define tokenVARIABLE 273
#define tokenFUNCTION 274
#define tokenSTRING 275
#define tokenCDEFS 276
#define jsonNULL 277
#define jsonTRUE 278
#define jsonFALSE 279
#define jsonNUMBER 280
#define jsonSTRING 281
#define jsonBARE 282
#define YYERRCODE 256
static short yylhs[] = {                                        -1,
    0,    0,    9,    9,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,   10,   11,
   12,   13,   14,   15,   30,   30,   31,   31,   16,   17,
   17,   32,   32,   33,   33,   33,   34,   35,   36,   36,
   37,   37,   18,   19,   20,   21,   22,   23,   23,   24,
   25,   38,   38,   38,   39,   28,   26,   27,   27,   27,
   40,   40,   42,   43,   41,   44,   45,   41,   41,   41,
   29,    3,    3,    5,    5,    5,    6,    7,    7,    2,
    2,    4,    4,    8,    8,    8,    1,    1,    1,    1,
    1,    1,    1,
};
static short yylen[] = {                                         2,
    0,    1,    2,    1,    1,    1,    1,    3,    3,    1,
    1,    1,    1,    1,    1,    3,    3,    3,    1,    2,
    2,    2,    3,    3,    2,    1,    6,    1,    3,    2,
    3,    2,    1,    3,    1,    1,    5,    3,    2,    1,
    4,    4,   10,    4,    6,    4,    4,    4,    6,    3,
    3,    3,    2,    1,    1,    5,    5,    0,    2,    3,
    2,    1,    0,    0,    8,    0,    0,    8,    4,    1,
    6,    2,    3,    1,    2,    3,    3,    1,    1,    1,
    1,    2,    3,    1,    2,    3,    1,    1,    1,    1,
    1,    1,    1,
};
static short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    5,    6,
    7,   10,   11,   12,   13,   14,   15,   19,   20,   21,
   22,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    3,    0,
    0,    0,    8,    0,    0,    9,    0,    0,    0,    0,
    0,    0,   16,    0,    0,   17,    0,   18,    0,    0,
    0,   23,    0,   28,    0,   26,   29,    0,   35,   30,
   36,    0,   33,   46,    0,   44,    0,   50,   55,    0,
   54,    0,    0,    0,    0,   59,   70,    0,   62,    0,
   48,    0,   47,    0,    0,   24,   25,    0,    0,   31,
   32,    0,    0,   51,    0,   53,    0,    0,    0,    0,
   60,   61,    0,    0,   71,    0,    0,    0,   34,    0,
   45,   52,   57,    0,    0,    0,   56,   49,    0,    0,
    0,    0,    0,   40,    0,   69,   63,   66,    0,    0,
    0,    0,   38,   39,    0,    0,    0,   27,   37,    0,
    0,    0,   87,   88,   89,   90,   80,   81,    0,    0,
   64,   91,   93,   92,   67,   42,   41,   43,   78,   79,
   72,    0,    0,    0,   82,    0,    0,    0,    0,   73,
    0,    0,    0,   83,   65,   68,   76,   77,   86,
};
static short yydgoto[] = {                                      16,
  186,  172,  173,  174,  182,  183,  184,  187,   17,   18,
   19,   20,   21,   34,   53,   36,   56,   22,   23,   24,
   25,   26,   27,   42,   63,   44,   66,   46,   28,   75,
   76,   82,   83,  109,  129,  143,  144,   90,   91,   98,
   99,  156,  188,  157,  189,
};
static short yysindex[] = {                                   -203,
 -266, -256, -249,  -13,  -12,   -9,   -7,   -5,   -4,   -2,
   -1,    2,    3,    4,    5,    0, -203,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -229, -228,  -73, -226,  -72, -223, -216, -214, -213,
 -202,  -51, -201,  -48, -199,  -48, -198, -197,    0,   35,
   39, -240,    0,   41, -120,    0,   42,   40,   44,   43,
   45, -187,    0,   46, -111,    0,   47,    0,  -23,   48,
 -183,    0,   53,    0,  -93,    0,    0,   54,    0,    0,
    0, -119,    0,    0, -180,    0, -179,    0,    0,  -44,
    0, -178,   58,   59,   60,    0,    0, -102,    0, -174,
    0, -173,    0,   62, -171,    0,    0, -170,  -17,    0,
    0,   63,   67,    0, -187,    0,   68, -165, -164, -163,
    0,    0,   72,   73,    0,   71,   74, -246,    0, -159,
    0,    0,    0,   76,   75,   77,    0,    0, -155, -153,
   83,   84, -114,    0,   81,    0,    0,    0,   85,   86,
 -147, -146,    0,    0, -145,  -83,  -83,    0,    0,   90,
   91,   92,    0,    0,    0,    0,    0,    0, -122,  -89,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    9,   95,   78,    0,   96,   49,   94,  100,    0,
 -257,  -83,  -83,    0,    0,    0,    0,    0,    0,
};
static short yyrindex[] = {                                    143,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  148,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    1,    0,    1,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   25,    0,    0,   79,    0,    0,    0,    0,
   26,    0,   80,    0,    0,    0,    0,    0,    0,
};
static short yygindex[] = {                                      0,
 -144,    0,    0,    0,  -39,    0,    0,  -28,    0,  149,
  -45,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  121,    0,    0,    0,
   93,    0,   88,    0,    0,    0,   28,    0,  -74,    0,
   82,    0,    0,    0,    0,
};
#define YYTABLESIZE 275
static short yytable[] = {                                     115,
   58,  170,  181,  185,   80,  110,   74,  170,   29,   81,
  153,  171,  175,   96,  141,  116,    1,  101,   30,   97,
  102,   73,  121,  179,  180,   31,   32,   33,  142,   74,
   35,  106,   37,  169,   38,   39,   81,   40,   41,  169,
  132,   43,   45,   47,   48,   50,   51,  198,   54,   52,
   55,   57,   97,    1,    2,    3,    4,    5,   58,    6,
   59,   60,    7,    8,    9,   10,   11,   12,   13,   14,
   15,   62,   61,   64,   65,   67,   69,   70,   71,   72,
  114,   77,   84,   85,   86,   88,   87,   89,  103,   92,
  100,  104,  105,  108,  112,  113,  117,  118,  119,  120,
  123,  124,  125,  126,  127,  128,  130,  131,  133,  134,
  135,  136,  137,  138,  139,  145,  146,  140,  147,  149,
  148,  150,  151,  152,  155,  158,  159,  160,  161,  162,
  176,  177,  178,  190,  195,  192,    1,    1,  191,  193,
  196,  194,    1,   78,   78,    1,  141,    2,   93,   74,
   75,  197,   94,   95,    1,   79,   79,   93,  179,  180,
  142,   94,   95,    1,  199,   49,   68,  107,   73,  111,
  154,   84,   85,    0,    0,    0,    0,    0,    0,  122,
    0,    0,    0,    0,    0,    0,    0,  163,  164,  165,
  166,  167,  168,  163,  164,  165,  166,  167,  168,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   89,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   58,   58,   58,
   58,   58,    0,   58,    0,    0,   58,   58,   58,   58,
   58,   58,   58,   58,   58,
};
static short yycheck[] = {                                      44,
    0,   91,  125,   93,  125,  125,   52,   91,  275,   55,
  125,  156,  157,  125,  261,   90,  257,   41,  275,   65,
   44,  262,  125,  281,  282,  275,   40,   40,  275,   75,
   40,  125,   40,  123,   40,   40,   82,   40,   40,  123,
  115,   40,   40,   40,   40,  275,  275,  192,  275,  123,
  123,  275,   98,  257,  258,  259,  260,  261,  275,  263,
  275,  275,  266,  267,  268,  269,  270,  271,  272,  273,
  274,  123,  275,  275,  123,  275,  275,  275,   44,   41,
  125,   41,   41,   44,   41,   41,   44,  275,   41,   44,
   44,  275,   40,   40,  275,  275,  275,   40,   40,   40,
  275,  275,   41,  275,  275,  123,   44,   41,   41,  275,
  275,  275,   41,   41,   44,  275,   41,   44,   44,  275,
   44,  275,   40,   40,   44,   41,   41,  275,  275,  275,
   41,   41,   41,  125,   41,   58,  257,  257,   44,   44,
   41,   93,    0,  264,  264,  257,  261,    0,  260,  125,
  125,  191,  264,  265,  257,  276,  276,  260,  281,  282,
  275,  264,  265,  257,  193,   17,   46,   75,  262,   82,
  143,   93,   93,   -1,   -1,   -1,   -1,   -1,   -1,   98,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  277,  278,  279,
  280,  281,  282,  277,  278,  279,  280,  281,  282,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  275,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,  261,   -1,  263,   -1,   -1,  266,  267,  268,  269,
  270,  271,  272,  273,  274,
};
#define YYFINAL 16
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 282
#if YYDEBUG
static char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,"':'",0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"tokenINCLUDE","tokenPATH","tokenADDPATH","tokenALIAS","tokenMENU",
"tokenCHOICE","tokenRECORDTYPE","tokenFIELD","tokenINFO","tokenREGISTRAR",
"tokenDEVICE","tokenDRIVER","tokenLINK","tokenBREAKTABLE","tokenRECORD",
"tokenGRECORD","tokenVARIABLE","tokenFUNCTION","tokenSTRING","tokenCDEFS",
"jsonNULL","jsonTRUE","jsonFALSE","jsonNUMBER","jsonSTRING","jsonBARE",
};
static char *yyrule[] = {
"$accept : database",
"database :",
"database : database_item_list",
"database_item_list : database_item_list database_item",
"database_item_list : database_item",
"database_item : include",
"database_item : path",
"database_item : addpath",
"database_item : tokenMENU menu_head menu_body",
"database_item : tokenRECORDTYPE recordtype_head recordtype_body",
"database_item : device",
"database_item : driver",
"database_item : link",
"database_item : registrar",
"database_item : function",
"database_item : variable",
"database_item : tokenBREAKTABLE break_head break_body",
"database_item : tokenRECORD record_head record_body",
"database_item : tokenGRECORD grecord_head record_body",
"database_item : alias",
"include : tokenINCLUDE tokenSTRING",
"path : tokenPATH tokenSTRING",
"addpath : tokenADDPATH tokenSTRING",
"menu_head : '(' tokenSTRING ')'",
"menu_body : '{' choice_list '}'",
"choice_list : choice_list choice",
"choice_list : choice",
"choice : tokenCHOICE '(' tokenSTRING ',' tokenSTRING ')'",
"choice : include",
"recordtype_head : '(' tokenSTRING ')'",
"recordtype_body : '{' '}'",
"recordtype_body : '{' recordtype_field_list '}'",
"recordtype_field_list : recordtype_field_list recordtype_field",
"recordtype_field_list : recordtype_field",
"recordtype_field : tokenFIELD recordtype_field_head recordtype_field_body",
"recordtype_field : tokenCDEFS",
"recordtype_field : include",
"recordtype_field_head : '(' tokenSTRING ',' tokenSTRING ')'",
"recordtype_field_body : '{' recordtype_field_item_list '}'",
"recordtype_field_item_list : recordtype_field_item_list recordtype_field_item",
"recordtype_field_item_list : recordtype_field_item",
"recordtype_field_item : tokenSTRING '(' tokenSTRING ')'",
"recordtype_field_item : tokenMENU '(' tokenSTRING ')'",
"device : tokenDEVICE '(' tokenSTRING ',' tokenSTRING ',' tokenSTRING ',' tokenSTRING ')'",
"driver : tokenDRIVER '(' tokenSTRING ')'",
"link : tokenLINK '(' tokenSTRING ',' tokenSTRING ')'",
"registrar : tokenREGISTRAR '(' tokenSTRING ')'",
"function : tokenFUNCTION '(' tokenSTRING ')'",
"variable : tokenVARIABLE '(' tokenSTRING ')'",
"variable : tokenVARIABLE '(' tokenSTRING ',' tokenSTRING ')'",
"break_head : '(' tokenSTRING ')'",
"break_body : '{' break_list '}'",
"break_list : break_list ',' break_item",
"break_list : break_list break_item",
"break_list : break_item",
"break_item : tokenSTRING",
"grecord_head : '(' tokenSTRING ',' tokenSTRING ')'",
"record_head : '(' tokenSTRING ',' tokenSTRING ')'",
"record_body :",
"record_body : '{' '}'",
"record_body : '{' record_field_list '}'",
"record_field_list : record_field_list record_field",
"record_field_list : record_field",
"$$1 :",
"$$2 :",
"record_field : tokenFIELD '(' tokenSTRING ',' $$1 json_value $$2 ')'",
"$$3 :",
"$$4 :",
"record_field : tokenINFO '(' tokenSTRING ',' $$3 json_value $$4 ')'",
"record_field : tokenALIAS '(' tokenSTRING ')'",
"record_field : include",
"alias : tokenALIAS '(' tokenSTRING ',' tokenSTRING ')'",
"json_object : '{' '}'",
"json_object : '{' json_members '}'",
"json_members : json_pair",
"json_members : json_pair ','",
"json_members : json_pair ',' json_members",
"json_pair : json_key ':' json_value",
"json_key : jsonSTRING",
"json_key : jsonBARE",
"json_string : jsonSTRING",
"json_string : jsonBARE",
"json_array : '[' ']'",
"json_array : '[' json_elements ']'",
"json_elements : json_value",
"json_elements : json_value ','",
"json_elements : json_value ',' json_elements",
"json_value : jsonNULL",
"json_value : jsonTRUE",
"json_value : jsonFALSE",
"json_value : jsonNUMBER",
"json_value : json_string",
"json_value : json_array",
"json_value : json_object",
};
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
#if YYDEBUG
static int yydebug;
#endif
static int yynerrs;
static int yyerrflag;
static int yychar;
static short *yyssp;
static YYSTYPE *yyvsp;
static YYSTYPE yyval;
static YYSTYPE yylval;
static short yyss[YYSTACKSIZE];
static YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 366 "../dbStatic/dbYacc.y"

#include "dbLex.c"


static int yyerror(char *str)
{
    if (str)
        epicsPrintf("Error: %s\n", str);
    else
        epicsPrintf("Error");
    if (!yyFailed) {    /* Only print this stuff once */
        epicsPrintf(" at or before '%s'", yytext);
        dbIncludePrint();
        yyFailed = TRUE;
    }
    return(0);
}
static long pvt_yy_parse(void)
{
    static int  FirstFlag = 1;
    long        rtnval;

    if (!FirstFlag) {
        yyAbort = FALSE;
        yyFailed = FALSE;
        yyreset();
        yyrestart(NULL);
    }
    FirstFlag = 0;
    rtnval = yyparse();
    if(rtnval!=0 || yyFailed) return(-1); else return(0);
}
#line 389 "dbYacc.tab.c"
#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
static int
yyparse(void)
{
    int yym, yyn, yystate;
#if YYDEBUG
    char *yys;
    extern char *getenv();

    if ((yys = getenv("YYDEBUG")))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate])) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
    yyerror("syntax error");
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 20:
#line 66 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("include : %s\n",yyvsp[0].Str);
    dbIncludeNew(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 21:
#line 72 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("path : %s\n",yyvsp[0].Str);
    dbPathCmd(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 22:
#line 78 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("addpath : %s\n",yyvsp[0].Str);
    dbAddPathCmd(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 23:
#line 84 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("menu_head %s\n",yyvsp[-1].Str);
    dbMenuHead(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 24:
#line 90 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("menu_body\n");
    dbMenuBody();
}
break;
case 27:
#line 98 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("choice %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbMenuChoice(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 29:
#line 105 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("recordtype_head %s\n",yyvsp[-1].Str);
    dbRecordtypeHead(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 30:
#line 111 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("empty recordtype_body\n");
    dbRecordtypeEmpty();
}
break;
case 31:
#line 116 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("recordtype_body\n");
    dbRecordtypeBody();
}
break;
case 35:
#line 126 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("recordtype_cdef %s", yyvsp[0].Str);
    dbRecordtypeCdef(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 37:
#line 133 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("recordtype_field_head %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbRecordtypeFieldHead(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 41:
#line 144 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("recordtype_field_item %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbRecordtypeFieldItem(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 42:
#line 149 "../dbStatic/dbYacc.y"
{

    if(dbStaticDebug>2) printf("recordtype_field_item %s (%s)\n","menu",yyvsp[-1].Str);
    dbRecordtypeFieldItem("menu",yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 43:
#line 158 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("device %s %s %s %s\n",yyvsp[-7].Str,yyvsp[-5].Str,yyvsp[-3].Str,yyvsp[-1].Str);
    dbDevice(yyvsp[-7].Str,yyvsp[-5].Str,yyvsp[-3].Str,yyvsp[-1].Str);
    dbmfFree(yyvsp[-7].Str); dbmfFree(yyvsp[-5].Str);
    dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 44:
#line 167 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("driver %s\n",yyvsp[-1].Str);
    dbDriver(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 45:
#line 173 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("link %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbLinkType(yyvsp[-3].Str,yyvsp[-1].Str);
    dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 46:
#line 180 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("registrar %s\n",yyvsp[-1].Str);
    dbRegistrar(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 47:
#line 186 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("function %s\n",yyvsp[-1].Str);
    dbFunction(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 48:
#line 192 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("variable %s\n",yyvsp[-1].Str);
    dbVariable(yyvsp[-1].Str,"int"); dbmfFree(yyvsp[-1].Str);
}
break;
case 49:
#line 197 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("variable %s, %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbVariable(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 50:
#line 203 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("break_head %s\n",yyvsp[-1].Str);
    dbBreakHead(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 51:
#line 209 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("break_body\n");
    dbBreakBody();
}
break;
case 55:
#line 219 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("break_item tokenSTRING %s\n",yyvsp[0].Str);
    dbBreakItem(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 56:
#line 226 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("grecord_head %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbRecordHead(yyvsp[-3].Str,yyvsp[-1].Str,1); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 57:
#line 232 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("record_head %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbRecordHead(yyvsp[-3].Str,yyvsp[-1].Str,0); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 58:
#line 238 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("null record_body\n");
    dbRecordBody();
}
break;
case 59:
#line 243 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("empty record_body\n");
    dbRecordBody();
}
break;
case 60:
#line 248 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("record_body\n");
    dbRecordBody();
}
break;
case 63:
#line 257 "../dbStatic/dbYacc.y"
{ BEGIN JSON; }
break;
case 64:
#line 257 "../dbStatic/dbYacc.y"
{ BEGIN INITIAL; }
break;
case 65:
#line 258 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("record_field %s %s\n",yyvsp[-5].Str,yyvsp[-2].Str);
    dbRecordField(yyvsp[-5].Str,yyvsp[-2].Str); dbmfFree(yyvsp[-5].Str); dbmfFree(yyvsp[-2].Str);
}
break;
case 66:
#line 263 "../dbStatic/dbYacc.y"
{ BEGIN JSON; }
break;
case 67:
#line 263 "../dbStatic/dbYacc.y"
{ BEGIN INITIAL; }
break;
case 68:
#line 264 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("record_info %s %s\n",yyvsp[-5].Str,yyvsp[-2].Str);
    dbRecordInfo(yyvsp[-5].Str,yyvsp[-2].Str); dbmfFree(yyvsp[-5].Str); dbmfFree(yyvsp[-2].Str);
}
break;
case 69:
#line 269 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("record_alias %s\n",yyvsp[-1].Str);
    dbRecordAlias(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 71:
#line 276 "../dbStatic/dbYacc.y"
{
    if(dbStaticDebug>2) printf("alias %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
    dbAlias(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 72:
#line 282 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrdup("{}");
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 73:
#line 287 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrcat3("{", yyvsp[-1].Str, "}");
    dbmfFree(yyvsp[-1].Str);
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 76:
#line 296 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrcat3(yyvsp[-2].Str, ",", yyvsp[0].Str);
    dbmfFree(yyvsp[-2].Str); dbmfFree(yyvsp[0].Str);
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 77:
#line 303 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrcat3(yyvsp[-2].Str, ":", yyvsp[0].Str);
    dbmfFree(yyvsp[-2].Str); dbmfFree(yyvsp[0].Str);
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 79:
#line 311 "../dbStatic/dbYacc.y"
{
    /* A key containing any of these characters must be quoted for YAJL */
    if (strcspn(yyvsp[0].Str, "+-.") < strlen(yyvsp[0].Str)) {
        yyval.Str = dbmfStrcat3("\"", yyvsp[0].Str, "\"");
        dbmfFree(yyvsp[0].Str);
    }
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 81:
#line 322 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrcat3("\"", yyvsp[0].Str, "\"");
    dbmfFree(yyvsp[0].Str);
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 82:
#line 329 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrdup("[]");
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 83:
#line 334 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrcat3("[", yyvsp[-1].Str, "]");
    dbmfFree(yyvsp[-1].Str);
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 85:
#line 342 "../dbStatic/dbYacc.y"
{   /* Retain the trailing ',' so link parser can distinguish a
     * 1-element const list from a PV name (commas are illegal)
     */
    yyval.Str = dbmfStrcat3(yyvsp[-1].Str, ",", "");
    dbmfFree(yyvsp[-1].Str);
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 86:
#line 350 "../dbStatic/dbYacc.y"
{
    yyval.Str = dbmfStrcat3(yyvsp[-2].Str, ",", yyvsp[0].Str);
    dbmfFree(yyvsp[-2].Str); dbmfFree(yyvsp[0].Str);
    if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 87:
#line 356 "../dbStatic/dbYacc.y"
{ yyval.Str = dbmfStrdup("null"); }
break;
case 88:
#line 357 "../dbStatic/dbYacc.y"
{ yyval.Str = dbmfStrdup("true"); }
break;
case 89:
#line 358 "../dbStatic/dbYacc.y"
{ yyval.Str = dbmfStrdup("false"); }
break;
#line 861 "dbYacc.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
