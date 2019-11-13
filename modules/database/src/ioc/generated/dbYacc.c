#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
static int yyparse(void);
#define YYPREFIX "yy"
#line 10 "../dbStatic/dbYacc.y"
static int yyerror();
static int yy_start;
static long pvt_yy_parse(void);
static int yyFailed = 0;
static int yyAbort = 0;
#include "dbLexRoutines.c"
#line 20 "../dbStatic/dbYacc.y"
typedef union
{
    char	*Str;
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
    0,    0,    8,    8,    9,    9,    9,    9,    9,    9,
    9,    9,    9,    9,    9,    9,    9,    9,    9,   10,
   11,   12,   13,   14,   29,   29,   30,   30,   15,   16,
   16,   31,   31,   32,   32,   32,   33,   34,   35,   35,
   36,   36,   17,   18,   19,   20,   21,   22,   22,   23,
   24,   37,   37,   37,   38,   27,   25,   26,   26,   26,
   39,   39,   41,   42,   40,   43,   44,   40,   40,   40,
   28,    2,    2,    4,    4,    4,    5,    7,    7,    3,
    3,    6,    6,    6,    1,    1,    1,    1,    1,    1,
    1,
};
static short yylen[] = {                                         2,
    0,    1,    2,    1,    1,    1,    1,    3,    3,    1,
    1,    1,    1,    1,    1,    3,    3,    3,    1,    2,
    2,    2,    3,    3,    2,    1,    6,    1,    3,    2,
    3,    2,    1,    3,    1,    1,    5,    3,    2,    1,
    4,    4,   10,    4,    6,    4,    4,    4,    6,    3,
    3,    3,    2,    1,    1,    5,    5,    0,    2,    3,
    2,    1,    0,    0,    8,    0,    0,    8,    4,    1,
    6,    2,    3,    1,    2,    3,    3,    1,    1,    2,
    3,    1,    2,    3,    1,    1,    1,    1,    1,    1,
    1,
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
    0,    0,   85,   86,   87,   88,   78,   79,    0,    0,
   64,   91,   90,   89,   67,   42,   41,   43,   72,    0,
    0,    0,   80,    0,    0,    0,    0,   73,    0,    0,
    0,   81,   65,   68,   76,   77,   84,
};
static short yydgoto[] = {                                      16,
  184,  172,  173,  180,  181,  185,  174,   17,   18,   19,
   20,   21,   34,   53,   36,   56,   22,   23,   24,   25,
   26,   27,   42,   63,   44,   66,   46,   28,   75,   76,
   82,   83,  109,  129,  143,  144,   90,   91,   98,   99,
  156,  186,  157,  187,
};
static short yysindex[] = {                                   -209,
 -250, -249, -248,  -12,   -7,   -5,   -4,   -2,   -1,    2,
    3,    4,    5,    7,   15,    0, -209,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -219, -208,  -57, -207,  -54, -205, -204, -203, -202,
 -201,  -48, -199,  -46, -197,  -46, -196, -195,    0,   38,
   42, -238,    0,   43, -120,    0,   44,   45,   46,   47,
   49, -189,    0,   48, -111,    0,   50,    0,  -26,   52,
 -187,    0,   55,    0,  -93,    0,    0,   56,    0,    0,
    0, -119,    0,    0, -178,    0, -177,    0,    0,  -44,
    0, -176,   60,   61,   62,    0,    0, -102,    0, -172,
    0, -171,    0,   64, -169,    0,    0, -168,  -15,    0,
    0,   65,   69,    0, -189,    0,   70, -163, -162, -161,
    0,    0,   74,   75,    0,   73,   76, -244,    0, -157,
    0,    0,    0,   78,   77,   79,    0,    0, -153, -151,
   85,   86, -114,    0,   83,    0,    0,    0,   87,   88,
 -145, -143,    0,    0, -142,  -83,  -83,    0,    0,   90,
   93,   94,    0,    0,    0,    0,    0,    0, -122,  -89,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   11,
   95,   82,    0,   97,   57,  101,  102,    0, -260,  -83,
  -83,    0,    0,    0,    0,    0,    0,
};
static short yyrindex[] = {                                    148,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  151,    0,    0,    0,
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
   27,    0,    0,   72,    0,    0,    0,    0,   41,    0,
   80,    0,    0,    0,    0,    0,    0,
};
static short yygindex[] = {                                      0,
 -144,    0,    0,  -22,    0,  -23, -160,    0,  153,  -45,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  125,    0,    0,    0,   99,
    0,   96,    0,    0,    0,   29,    0,  -74,    0,   81,
    0,    0,    0,    0,
};
#define YYTABLESIZE 275
static short yytable[] = {                                     115,
   58,  170,  179,  183,   80,  110,   74,  170,  182,   81,
  153,  171,  175,   96,  101,  116,  141,  102,    1,   97,
  167,  168,  121,   73,   29,   30,   31,   32,  182,   74,
  142,  106,   33,  169,   35,   37,   81,   38,   39,  169,
  132,   40,   41,   43,   45,  196,   47,    1,    2,    3,
    4,    5,   97,    6,   48,   50,    7,    8,    9,   10,
   11,   12,   13,   14,   15,   52,   51,   54,   55,   57,
   58,   59,   60,   61,   62,   64,   65,   67,   69,   70,
  114,   71,   72,   77,   84,   89,   86,  104,   85,   88,
   87,   92,  103,  100,  105,  108,  112,  113,  117,  118,
  119,  120,  123,  124,  125,  126,  127,  128,  130,  131,
  133,  134,  135,  136,  137,  138,  139,  145,  146,  140,
  147,  149,  148,  150,  151,  152,  155,  158,  159,  160,
  176,  161,  162,  177,  178,  188,    1,    1,  189,  190,
  191,  193,  194,   78,   78,    1,  141,    1,   93,  192,
    2,   74,   94,   95,    1,   79,   79,   93,  167,  168,
  142,   94,   95,    1,   82,   75,  195,  197,   73,   49,
   68,  154,   83,  107,    0,    0,    0,  111,  122,    0,
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
    0,   91,  125,   93,  125,  125,   52,   91,  169,   55,
  125,  156,  157,  125,   41,   90,  261,   44,  257,   65,
  281,  282,  125,  262,  275,  275,  275,   40,  189,   75,
  275,  125,   40,  123,   40,   40,   82,   40,   40,  123,
  115,   40,   40,   40,   40,  190,   40,  257,  258,  259,
  260,  261,   98,  263,   40,  275,  266,  267,  268,  269,
  270,  271,  272,  273,  274,  123,  275,  275,  123,  275,
  275,  275,  275,  275,  123,  275,  123,  275,  275,  275,
  125,   44,   41,   41,   41,  275,   41,  275,   44,   41,
   44,   44,   41,   44,   40,   40,  275,  275,  275,   40,
   40,   40,  275,  275,   41,  275,  275,  123,   44,   41,
   41,  275,  275,  275,   41,   41,   44,  275,   41,   44,
   44,  275,   44,  275,   40,   40,   44,   41,   41,  275,
   41,  275,  275,   41,   41,  125,  257,  257,   44,   58,
   44,   41,   41,  264,  264,  257,  261,    0,  260,   93,
    0,  125,  264,  265,  257,  276,  276,  260,  281,  282,
  275,  264,  265,  257,   93,  125,  189,  191,  262,   17,
   46,  143,   93,   75,   -1,   -1,   -1,   82,   98,   -1,
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
"json_pair : json_string ':' json_value",
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
#line 354 "../dbStatic/dbYacc.y"

#include "dbLex.c"


static int yyerror(char *str)
{
    if (str)
        epicsPrintf("Error: %s\n", str);
    else
        epicsPrintf("Error");
    if (!yyFailed) {    /* Only print this stuff once */
        epicsPrintf(" at or before \"%s\"", yytext);
        dbIncludePrint();
        yyFailed = TRUE;
    }
    return(0);
}
static long pvt_yy_parse(void)
{
    static int	FirstFlag = 1;
    long	rtnval;

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
#line 387 "dbYacc.tab.c"
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
#line 65 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("include : %s\n",yyvsp[0].Str);
	dbIncludeNew(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 21:
#line 71 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("path : %s\n",yyvsp[0].Str);
	dbPathCmd(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 22:
#line 77 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("addpath : %s\n",yyvsp[0].Str);
	dbAddPathCmd(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 23:
#line 83 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("menu_head %s\n",yyvsp[-1].Str);
	dbMenuHead(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 24:
#line 89 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("menu_body\n");
	dbMenuBody();
}
break;
case 27:
#line 97 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("choice %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbMenuChoice(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 29:
#line 104 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("recordtype_head %s\n",yyvsp[-1].Str);
	dbRecordtypeHead(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 30:
#line 110 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("empty recordtype_body\n");
	dbRecordtypeEmpty();
}
break;
case 31:
#line 115 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("recordtype_body\n");
	dbRecordtypeBody();
}
break;
case 35:
#line 125 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("recordtype_cdef %s", yyvsp[0].Str);
	dbRecordtypeCdef(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 37:
#line 132 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("recordtype_field_head %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbRecordtypeFieldHead(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 41:
#line 143 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("recordtype_field_item %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbRecordtypeFieldItem(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 42:
#line 148 "../dbStatic/dbYacc.y"
{

	if(dbStaticDebug>2) printf("recordtype_field_item %s (%s)\n","menu",yyvsp[-1].Str);
	dbRecordtypeFieldItem("menu",yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 43:
#line 157 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("device %s %s %s %s\n",yyvsp[-7].Str,yyvsp[-5].Str,yyvsp[-3].Str,yyvsp[-1].Str);
	dbDevice(yyvsp[-7].Str,yyvsp[-5].Str,yyvsp[-3].Str,yyvsp[-1].Str);
	dbmfFree(yyvsp[-7].Str); dbmfFree(yyvsp[-5].Str);
	dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 44:
#line 166 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("driver %s\n",yyvsp[-1].Str);
	dbDriver(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 45:
#line 172 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("link %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbLinkType(yyvsp[-3].Str,yyvsp[-1].Str);
	dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 46:
#line 179 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("registrar %s\n",yyvsp[-1].Str);
	dbRegistrar(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 47:
#line 185 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("function %s\n",yyvsp[-1].Str);
	dbFunction(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 48:
#line 191 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("variable %s\n",yyvsp[-1].Str);
	dbVariable(yyvsp[-1].Str,"int"); dbmfFree(yyvsp[-1].Str);
}
break;
case 49:
#line 196 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("variable %s, %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbVariable(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 50:
#line 202 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("break_head %s\n",yyvsp[-1].Str);
	dbBreakHead(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 51:
#line 208 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("break_body\n");
	dbBreakBody();
}
break;
case 55:
#line 218 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("break_item tokenSTRING %s\n",yyvsp[0].Str);
	dbBreakItem(yyvsp[0].Str); dbmfFree(yyvsp[0].Str);
}
break;
case 56:
#line 225 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("grecord_head %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbRecordHead(yyvsp[-3].Str,yyvsp[-1].Str,1); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 57:
#line 231 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("record_head %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbRecordHead(yyvsp[-3].Str,yyvsp[-1].Str,0); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 58:
#line 237 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("null record_body\n");
	dbRecordBody();
}
break;
case 59:
#line 242 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("empty record_body\n");
	dbRecordBody();
}
break;
case 60:
#line 247 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("record_body\n");
	dbRecordBody();
}
break;
case 63:
#line 256 "../dbStatic/dbYacc.y"
{ BEGIN JSON; }
break;
case 64:
#line 256 "../dbStatic/dbYacc.y"
{ BEGIN INITIAL; }
break;
case 65:
#line 257 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("record_field %s %s\n",yyvsp[-5].Str,yyvsp[-2].Str);
	dbRecordField(yyvsp[-5].Str,yyvsp[-2].Str); dbmfFree(yyvsp[-5].Str); dbmfFree(yyvsp[-2].Str);
}
break;
case 66:
#line 262 "../dbStatic/dbYacc.y"
{ BEGIN JSON; }
break;
case 67:
#line 262 "../dbStatic/dbYacc.y"
{ BEGIN INITIAL; }
break;
case 68:
#line 263 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("record_info %s %s\n",yyvsp[-5].Str,yyvsp[-2].Str);
	dbRecordInfo(yyvsp[-5].Str,yyvsp[-2].Str); dbmfFree(yyvsp[-5].Str); dbmfFree(yyvsp[-2].Str);
}
break;
case 69:
#line 268 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("record_alias %s\n",yyvsp[-1].Str);
	dbRecordAlias(yyvsp[-1].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 71:
#line 275 "../dbStatic/dbYacc.y"
{
	if(dbStaticDebug>2) printf("alias %s %s\n",yyvsp[-3].Str,yyvsp[-1].Str);
	dbAlias(yyvsp[-3].Str,yyvsp[-1].Str); dbmfFree(yyvsp[-3].Str); dbmfFree(yyvsp[-1].Str);
}
break;
case 72:
#line 281 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrdup("{}");
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 73:
#line 286 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrcat3("{", yyvsp[-1].Str, "}");
	dbmfFree(yyvsp[-1].Str);
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 76:
#line 295 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrcat3(yyvsp[-2].Str, ",", yyvsp[0].Str);
	dbmfFree(yyvsp[-2].Str); dbmfFree(yyvsp[0].Str);
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 77:
#line 302 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrcat3(yyvsp[-2].Str, ":", yyvsp[0].Str);
	dbmfFree(yyvsp[-2].Str); dbmfFree(yyvsp[0].Str);
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 79:
#line 310 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrcat3("\"", yyvsp[0].Str, "\"");
	dbmfFree(yyvsp[0].Str);
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 80:
#line 317 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrdup("[]");
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 81:
#line 322 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrcat3("[", yyvsp[-1].Str, "]");
	dbmfFree(yyvsp[-1].Str);
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 83:
#line 330 "../dbStatic/dbYacc.y"
{	/* Retain the trailing ',' so link parser can distinguish a
	 * 1-element const list from a PV name (commas are illegal)
	 */
	yyval.Str = dbmfStrcat3(yyvsp[-1].Str, ",", "");
	dbmfFree(yyvsp[-1].Str);
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 84:
#line 338 "../dbStatic/dbYacc.y"
{
	yyval.Str = dbmfStrcat3(yyvsp[-2].Str, ",", yyvsp[0].Str);
	dbmfFree(yyvsp[-2].Str); dbmfFree(yyvsp[0].Str);
	if (dbStaticDebug>2) printf("json %s\n", yyval.Str);
}
break;
case 85:
#line 344 "../dbStatic/dbYacc.y"
{ yyval.Str = dbmfStrdup("null"); }
break;
case 86:
#line 345 "../dbStatic/dbYacc.y"
{ yyval.Str = dbmfStrdup("true"); }
break;
case 87:
#line 346 "../dbStatic/dbYacc.y"
{ yyval.Str = dbmfStrdup("false"); }
break;
#line 848 "dbYacc.tab.c"
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
