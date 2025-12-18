#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
static int yyparse(void);
#define YYPREFIX "yy"
#line 11 "../as/asLib.y"
static int yyerror(char *);
static int yy_start;
#include "asLibRoutines.c"
static int yyFailed = FALSE;
static int yyWarned = FALSE;
static int line_num=1;
static UAG *yyUag=NULL;
static HAG *yyHag=NULL;
static ASG *yyAsg=NULL;
static ASGRULE *yyAsgRule=NULL;

static
char* yystrdup(const char *inp) {
    char* ret = strdup(inp);
    if(!ret)
        yyerror("MALLOC");
    return ret;
}

#line 39 "../as/asLib.y"
typedef union
{
    epicsInt64 Int64;
    epicsFloat64 Float64;
    char *Str;
} YYSTYPE;
#line 37 "asLib.tab.c"
#define tokenUAG 257
#define tokenHAG 258
#define tokenASG 259
#define tokenRULE 260
#define tokenCALC 261
#define tokenSTRING 262
#define tokenINT64 263
#define tokenINP 264
#define tokenFLOAT64 265
#define YYERRCODE 256
static short yylhs[] = {                                        -1,
    0,    0,    7,    7,    7,    7,    7,    7,    7,    6,
    6,    6,    6,    1,    1,    1,   14,   14,   14,   15,
   15,   15,   16,   19,   19,   18,   18,   18,   18,   17,
   17,   17,   20,   20,    3,    3,    2,    2,    4,    4,
    5,    5,    8,    9,   21,   21,   22,   10,   11,   23,
   23,   24,   12,   13,   25,   25,   26,   26,   27,   28,
   28,   29,   29,   31,   32,   30,   33,   33,   34,   34,
   34,   34,   35,   35,   37,   36,   36,   38,
};
static short yylen[] = {                                         2,
    2,    1,    3,    2,    3,    2,    3,    2,    1,    1,
    1,    1,    1,    1,    1,    1,    3,    3,    2,    2,
    3,    3,    6,    3,    3,    1,    1,    1,    1,    3,
    3,    3,    2,    1,    3,    2,    1,    1,    3,    2,
    1,    1,    3,    3,    3,    1,    1,    3,    3,    3,
    1,    1,    3,    3,    2,    1,    1,    1,    4,    3,
    2,    5,    3,    3,    1,    3,    2,    1,    4,    4,
    4,    1,    3,    1,    1,    3,    1,    1,
};
static short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    2,    9,    0,    0,    0,
    0,    0,    0,    0,    0,    1,    0,    0,    3,    0,
    0,    5,    0,    0,    7,   10,   11,   14,   15,   12,
   27,   28,   16,   29,   20,   13,   26,    0,    0,    0,
   17,   18,   43,   47,    0,   46,   48,   52,    0,   51,
   53,    0,    0,    0,   56,   57,   58,   21,    0,   22,
    0,    0,    0,   34,    0,    0,    0,    0,   44,    0,
   49,    0,    0,    0,    0,   54,   55,   25,   24,    0,
    0,   31,   38,   32,   33,   37,   45,   50,    0,    0,
    0,   60,    0,    0,   35,    0,    0,   63,    0,    0,
    0,    0,   42,   41,   72,    0,    0,   68,   59,    0,
    0,    0,   64,   65,    0,    0,    0,    0,    0,   66,
   67,   30,   23,   62,   75,    0,   74,   78,    0,   77,
    0,   39,   69,    0,   70,    0,   71,   73,   76,
};
static short yydgoto[] = {                                       5,
   36,   63,   64,  105,  106,   37,    6,    9,   19,   11,
   22,   13,   25,    7,   15,   41,   42,   38,   67,   68,
   45,   46,   49,   50,   54,   55,   56,   57,   74,   92,
   90,  115,  107,  108,  126,  129,  127,  130,
};
static short yysindex[] = {                                   -225,
   -5,    6,   20,   29, -225,    0,    0, -204,  -51, -178,
  -37, -174,  -25,  -41,  -24,    0,   50, -168,    0,   59,
 -161,    0,   61, -236,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -14,   18, -208,
    0,    0,    0,    0,  -38,    0,    0,    0,  -33,    0,
    0,   63,   64,  -96,    0,    0,    0,    0, -182,    0,
 -182,    0,   29,    0,    0,  -32,  -30, -123,    0, -168,
    0, -161, -158,  -17, -155,    0,    0,    0,    0,  -15,
  -13,    0,    0,    0,    0,    0,    0,    0,   65,   22,
 -217,    0,   70, -208,    0, -182, -150,    0, -149,   74,
   75,   76,    0,    0,    0,   29, -115,    0,    0,  -29,
   73,  -28,    0,    0,   77, -143, -142, -141,  -15,    0,
    0,    0,    0,    0,    0,   24,    0,    0,   26,    0,
   81,    0,    0, -143,    0, -142,    0,    0,    0,
};
static short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    1,    0,
    7,    0,   13,    0,   19,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -36,    0,    0,  -35,    0,    0,    0,    0,    0,
    0,    0,    0,  -94,    0,    0,    0,    0,    0, -107,
   25,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -99,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static short yygindex[] = {                                      0,
  -68,    0,   55,    0,    0,  -20,  119,    0,    0,    0,
    0,    0,    0,    0,  -42,    0,  -58,  -23,  -11,    0,
    0,   56,    0,   53,    0,   78,    0,    0,    0,    0,
    0,    0,    0,   21,    0,    0,   -7,   -6,
};
#define YYTABLESIZE 287
static short yytable[] = {                                      35,
    4,   84,   39,   38,   37,   70,    6,   27,   26,  120,
   72,   59,    8,   61,   59,   61,   66,   36,   19,   65,
   80,   95,  104,   52,   30,   40,   58,   53,   76,   59,
   61,    1,    2,    3,    8,   78,    4,   79,  104,  100,
  101,   28,   29,  102,  103,   10,   33,   86,   26,   27,
   28,   29,   30,   62,   32,   33,   34,   17,   60,   12,
  132,   61,   98,  119,  133,   99,  135,  134,   14,  136,
  110,   18,  111,   65,   26,   27,   28,   29,   30,   31,
   32,   33,   34,   20,  112,   21,   69,   23,   27,   26,
   43,   71,   81,   44,   82,  122,  123,   24,   40,   47,
   48,   51,   73,   75,   89,   91,   93,   94,   97,   96,
  109,  113,  114,  116,  117,  118,   59,  124,  125,  128,
  131,  137,   85,   16,   88,   87,  138,  121,    0,  139,
    0,   77,    0,   26,   27,   28,   29,   30,   83,    0,
   33,  100,  101,   28,   29,  102,  103,    0,   33,   36,
   36,   36,   36,   36,   36,    0,   36,   40,   40,   40,
   40,   40,   40,   52,   40,   61,    0,   53,    0,   61,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   26,   27,   28,   29,   30,
   31,   32,   33,   34,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    4,    4,
    0,    0,    4,    6,    6,    6,    0,    0,    6,    8,
    8,    8,    0,    0,    8,   19,   19,   19,    0,    0,
   19,   30,   30,   30,    0,    0,   30,
};
static short yycheck[] = {                                      41,
    0,  125,   14,   40,   40,   44,    0,   44,   44,  125,
   44,   44,    0,   44,   44,   44,   40,  125,    0,   40,
   63,   80,   91,  260,    0,  125,   41,  264,  125,   44,
  125,  257,  258,  259,   40,   59,  262,   61,  107,  257,
  258,  259,  260,  261,  262,   40,  264,   68,  257,  258,
  259,  260,  261,  262,  263,  264,  265,  262,   41,   40,
  119,   44,   41,  106,   41,   44,   41,   44,   40,   44,
   94,  123,   96,   94,  257,  258,  259,  260,  261,  262,
  263,  264,  265,  262,   96,  123,  125,  262,  125,  125,
   41,  125,  125,  262,  125,  125,  125,  123,  123,   41,
  262,   41,   40,   40,  263,  123,  262,  123,   44,  123,
   41,  262,  262,   40,   40,   40,   44,   41,  262,  262,
  262,   41,   68,    5,   72,   70,  134,  107,   -1,  136,
   -1,   54,   -1,  257,  258,  259,  260,  261,  262,   -1,
  264,  257,  258,  259,  260,  261,  262,   -1,  264,  257,
  258,  259,  260,  261,  262,   -1,  264,  257,  258,  259,
  260,  261,  262,  260,  264,  260,   -1,  264,   -1,  264,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,  261,
  262,  263,  264,  265,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
   -1,   -1,  262,  257,  258,  259,   -1,   -1,  262,  257,
  258,  259,   -1,   -1,  262,  257,  258,  259,   -1,   -1,
  262,  257,  258,  259,   -1,   -1,  262,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 265
#if YYDEBUG
static char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"tokenUAG",
"tokenHAG","tokenASG","tokenRULE","tokenCALC","tokenSTRING","tokenINT64",
"tokenINP","tokenFLOAT64",
};
static char *yyrule[] = {
"$accept : asconfig",
"asconfig : asconfig asconfig_item",
"asconfig : asconfig_item",
"asconfig_item : tokenUAG uag_head uag_body",
"asconfig_item : tokenUAG uag_head",
"asconfig_item : tokenHAG hag_head hag_body",
"asconfig_item : tokenHAG hag_head",
"asconfig_item : tokenASG asg_head asg_body",
"asconfig_item : tokenASG asg_head",
"asconfig_item : generic_item",
"keyword : tokenUAG",
"keyword : tokenHAG",
"keyword : tokenCALC",
"keyword : non_rule_keyword",
"non_rule_keyword : tokenASG",
"non_rule_keyword : tokenRULE",
"non_rule_keyword : tokenINP",
"generic_item : tokenSTRING generic_head generic_list_block",
"generic_item : tokenSTRING generic_head generic_block",
"generic_item : tokenSTRING generic_head",
"generic_head : '(' ')'",
"generic_head : '(' generic_element ')'",
"generic_head : '(' generic_list ')'",
"generic_list_block : '{' generic_element '}' '{' generic_list '}'",
"generic_list : generic_list ',' generic_element",
"generic_list : generic_element ',' generic_element",
"generic_element : keyword",
"generic_element : tokenSTRING",
"generic_element : tokenINT64",
"generic_element : tokenFLOAT64",
"generic_block : '{' generic_element '}'",
"generic_block : '{' generic_list '}'",
"generic_block : '{' generic_block_list '}'",
"generic_block_list : generic_block_list generic_block_elem",
"generic_block_list : generic_block_elem",
"generic_block_elem : generic_block_elem_name generic_head generic_block",
"generic_block_elem : generic_block_elem_name generic_head",
"generic_block_elem_name : keyword",
"generic_block_elem_name : tokenSTRING",
"rule_generic_block_elem : rule_generic_block_elem_name generic_head generic_block",
"rule_generic_block_elem : rule_generic_block_elem_name generic_head",
"rule_generic_block_elem_name : non_rule_keyword",
"rule_generic_block_elem_name : tokenSTRING",
"uag_head : '(' tokenSTRING ')'",
"uag_body : '{' uag_user_list '}'",
"uag_user_list : uag_user_list ',' uag_user_list_name",
"uag_user_list : uag_user_list_name",
"uag_user_list_name : tokenSTRING",
"hag_head : '(' tokenSTRING ')'",
"hag_body : '{' hag_host_list '}'",
"hag_host_list : hag_host_list ',' hag_host_list_name",
"hag_host_list : hag_host_list_name",
"hag_host_list_name : tokenSTRING",
"asg_head : '(' tokenSTRING ')'",
"asg_body : '{' asg_body_list '}'",
"asg_body_list : asg_body_list asg_body_item",
"asg_body_list : asg_body_item",
"asg_body_item : inp_config",
"asg_body_item : rule_config",
"inp_config : tokenINP '(' tokenSTRING ')'",
"rule_config : tokenRULE rule_head rule_body",
"rule_config : tokenRULE rule_head",
"rule_head : '(' rule_head_mandatory ',' rule_log_option ')'",
"rule_head : '(' rule_head_mandatory ')'",
"rule_head_mandatory : tokenINT64 ',' tokenSTRING",
"rule_log_option : tokenSTRING",
"rule_body : '{' rule_list '}'",
"rule_list : rule_list rule_list_item",
"rule_list : rule_list_item",
"rule_list_item : tokenUAG '(' rule_uag_list ')'",
"rule_list_item : tokenHAG '(' rule_hag_list ')'",
"rule_list_item : tokenCALC '(' tokenSTRING ')'",
"rule_list_item : rule_generic_block_elem",
"rule_uag_list : rule_uag_list ',' rule_uag_list_name",
"rule_uag_list : rule_uag_list_name",
"rule_uag_list_name : tokenSTRING",
"rule_hag_list : rule_hag_list ',' rule_hag_list_name",
"rule_hag_list : rule_hag_list_name",
"rule_hag_list_name : tokenSTRING",
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
#line 333 "../as/asLib.y"

#include "asLib_lex.c"

static int yyerror(char *str)
{
    if (strlen(str))
        fprintf(stderr, ERL_ERROR " %s at line %d\n", str, line_num);
    else
        fprintf(stderr, ERL_ERROR " at line %d\n", line_num);
    yyFailed = TRUE;
    return 0;
}
static int yywarn(char *str, char *token)
{
    if (!yyWarned && strlen(str) && strlen(token))
        fprintf(stderr, ERL_WARNING " %s at line %d: %s\n", str, line_num, token);
    yyWarned = TRUE;
    return 0;
}
static int myParse(ASINPUTFUNCPTR inputfunction)
{
    static int  FirstFlag = 1;
    int         rtnval;

    my_yyinput = &inputfunction;
    if (!FirstFlag) {
        line_num=1;
        yyFailed = FALSE;
        yyWarned = FALSE;
        yyreset();
        yyrestart(NULL);
    }
    FirstFlag = 0;
    rtnval = yyparse();
    if(rtnval!=0 || yyFailed) return(-1); else return(0);
}
#line 351 "asLib.tab.c"
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
case 10:
#line 69 "../as/asLib.y"
{ yyval.Str = yystrdup("UAG"); }
break;
case 11:
#line 71 "../as/asLib.y"
{ yyval.Str = yystrdup("HAG"); }
break;
case 12:
#line 73 "../as/asLib.y"
{ yyval.Str = yystrdup("CALC"); }
break;
case 14:
#line 78 "../as/asLib.y"
{ yyval.Str = yystrdup("ASG"); }
break;
case 15:
#line 80 "../as/asLib.y"
{ yyval.Str = yystrdup("RULE"); }
break;
case 16:
#line 82 "../as/asLib.y"
{
        if(!!(yyval.Str = yystrdup("INPA")))
            yyval.Str[3] += yyvsp[0].Int64; /* 'A' + input number */
    }
break;
case 17:
#line 89 "../as/asLib.y"
{
        yywarn("Ignoring unsupported TOP LEVEL nested block", yyvsp[-2].Str);
        free(yyvsp[-2].Str);
    }
break;
case 18:
#line 94 "../as/asLib.y"
{
        yywarn("Ignoring unsupported TOP LEVEL block", yyvsp[-2].Str);
        free(yyvsp[-2].Str);
    }
break;
case 19:
#line 99 "../as/asLib.y"
{
        yywarn("Ignoring unsupported TOP LEVEL bare block", yyvsp[-1].Str);
        free(yyvsp[-1].Str);
    }
break;
case 27:
#line 120 "../as/asLib.y"
{
        free(yyvsp[0].Str);
    }
break;
case 33:
#line 133 "../as/asLib.y"
{
        free(yyvsp[0].Str);
    }
break;
case 34:
#line 137 "../as/asLib.y"
{
        free(yyvsp[0].Str);
    }
break;
case 35:
#line 143 "../as/asLib.y"
{
        yyval.Str = yyvsp[-2].Str;
    }
break;
case 36:
#line 147 "../as/asLib.y"
{
        yyval.Str = yyvsp[-1].Str;
    }
break;
case 39:
#line 157 "../as/asLib.y"
{
        yyval.Str = yyvsp[-2].Str;
    }
break;
case 40:
#line 161 "../as/asLib.y"
{
        yyval.Str = yyvsp[-1].Str;
    }
break;
case 43:
#line 171 "../as/asLib.y"
{
        yyUag = asUagAdd(yyvsp[-1].Str);
        if(!yyUag) yyerror("");
        free(yyvsp[-1].Str);
    }
break;
case 44:
#line 179 "../as/asLib.y"
{
         ;
    }
break;
case 47:
#line 189 "../as/asLib.y"
{
        if (asUagAddUser(yyUag,yyvsp[0].Str))
            yyerror("");
        free(yyvsp[0].Str);
    }
break;
case 48:
#line 197 "../as/asLib.y"
{
        yyHag = asHagAdd(yyvsp[-1].Str);
        if(!yyHag) yyerror("");
        free(yyvsp[-1].Str);
    }
break;
case 52:
#line 212 "../as/asLib.y"
{
        if (asHagAddHost(yyHag,yyvsp[0].Str))
            yyerror("");
        free(yyvsp[0].Str);
    }
break;
case 53:
#line 220 "../as/asLib.y"
{
        yyAsg = asAsgAdd(yyvsp[-1].Str);
        if(!yyAsg) yyerror("");
        free(yyvsp[-1].Str);
    }
break;
case 54:
#line 228 "../as/asLib.y"
{
    }
break;
case 59:
#line 238 "../as/asLib.y"
{
        if (asAsgAddInp(yyAsg,yyvsp[-1].Str,(int)yyvsp[-3].Int64))
            yyerror("");
        free(yyvsp[-1].Str);
    }
break;
case 64:
#line 254 "../as/asLib.y"
{
        if (yyvsp[-2].Int64 < 0) {
            char message[60];
            sprintf(message, "RULE: LEVEL must be positive: %lld", yyvsp[-2].Int64);
            yyerror(message);
        } else if((strcmp(yyvsp[0].Str,"NONE")==0)) {
            yyAsgRule = asAsgAddRule(yyAsg,asNOACCESS,(int)yyvsp[-2].Int64);
        } else if((strcmp(yyvsp[0].Str,"READ")==0)) {
            yyAsgRule = asAsgAddRule(yyAsg,asREAD,(int)yyvsp[-2].Int64);
        } else if((strcmp(yyvsp[0].Str,"WRITE")==0)) {
            yyAsgRule = asAsgAddRule(yyAsg,asWRITE,(int)yyvsp[-2].Int64);
        } else {
            yywarn("Ignoring RULE that contains an unsupported keyword", yyvsp[0].Str);
        }
        free(yyvsp[0].Str);
    }
break;
case 65:
#line 273 "../as/asLib.y"
{
        if((strcmp(yyvsp[0].Str,"TRAPWRITE")==0)) {
            long status;
            status = asAsgAddRuleOptions(yyAsgRule,AS_TRAP_WRITE);
            if(status) yyerror("");
        } else if((strcmp(yyvsp[0].Str,"NOTRAPWRITE")!=0)) {
            yyerror("Log options must be TRAPWRITE or NOTRAPWRITE");
        }
        free(yyvsp[0].Str);
    }
break;
case 71:
#line 295 "../as/asLib.y"
{
        if (asAsgRuleCalc(yyAsgRule,yyvsp[-1].Str))
            yyerror("");
        free(yyvsp[-1].Str);
    }
break;
case 72:
#line 301 "../as/asLib.y"
{
        yywarn("Ignoring RULE that contains an unsupported keyword", yyvsp[0].Str);
        free(yyvsp[0].Str);
        if (asAsgRuleDisable(yyAsgRule))
            yyerror("");
    }
break;
case 75:
#line 314 "../as/asLib.y"
{
        if (asAsgRuleUagAdd(yyAsgRule,yyvsp[0].Str))
            yyerror("");
        free(yyvsp[0].Str);
    }
break;
case 78:
#line 326 "../as/asLib.y"
{
        if (asAsgRuleHagAdd(yyAsgRule,yyvsp[0].Str))
            yyerror("");
        free(yyvsp[0].Str);
    }
break;
#line 698 "asLib.tab.c"
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
