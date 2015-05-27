#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20120115

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 26 "config-parser.y"
#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "config.h"

int yydebug=0;
void *tmp;        /* Variable to temporarily hold nodes before insertion to list */

#line 85 "config-parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union 
{
        int number;
        char *string;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 41 "config-parser.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define KLINEGEOIP 257
#define NAME 258
#define DESC 259
#define BAN_UNKNOWN 260
#define BLACKLIST 261
#define CHANNEL 262
#define CONNREGEX 263
#define DNS_FDLIMIT 264
#define DNSBL_FROM 265
#define DNSBL_TO 266
#define EXEMPT 267
#define PAISES 268
#define CCTLD 269
#define FD 270
#define INVITE 271
#define IRC 272
#define KLINE 273
#define KEY 274
#define MASK 275
#define MAX_READ 276
#define MODE 277
#define NEGCACHE 278
#define NICK 279
#define NICKSERV 280
#define NUMERICO 281
#define OPM 282
#define OPTIONS 283
#define PASSWORD 284
#define PERFORM 285
#define PIDFILE 286
#define PORT 287
#define PROTOCOL 288
#define PROTOCOLTYPE 289
#define REALNAME 290
#define REPLY 291
#define SCANLOG 292
#define SCANNER 293
#define SENDMAIL 294
#define SERVER 295
#define TARGET_IP 296
#define TARGET_PORT 297
#define TARGET_STRING 298
#define TIMEOUT 299
#define TYPE 300
#define USERNAME 301
#define USER 302
#define VHOST 303
#define NUMBER 304
#define STRING 305
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    1,    1,    1,    3,
    9,    9,    9,   10,   10,   10,   10,   10,   11,   12,
   13,   14,    2,   15,   15,   16,   16,   16,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   16,   16,   16,   32,   17,   18,   20,   23,   21,   22,
   24,   25,   31,   26,   27,   28,   29,   30,   19,   34,
   33,   35,   35,   36,   36,   36,   37,   38,   39,   40,
    5,   41,   41,   42,   42,   42,   43,   44,   45,    6,
   46,   46,   47,   47,   47,   47,   47,   47,   47,   47,
   47,   47,   48,   49,   51,   53,   50,   52,   55,   56,
   54,    4,   57,   57,   57,   58,   58,   58,   58,   58,
   59,   60,   61,   63,   62,   64,   64,   64,   65,   65,
   65,   65,   65,   65,   66,   68,   67,   69,   70,   71,
   71,   71,   72,    7,   73,   73,   73,   74,   74,   75,
    8,   76,   76,   76,   77,   77,   78,
};
static const short yylen[] = {                            2,
    0,    2,    1,    1,    1,    1,    1,    1,    1,    5,
    0,    2,    1,    1,    1,    1,    1,    1,    4,    4,
    4,    4,    5,    2,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,    4,    4,    4,    4,    4,    0,
    6,    2,    1,    1,    1,    1,    4,    4,    4,    0,
    6,    2,    1,    1,    1,    1,    4,    4,    0,    6,
    2,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    4,    4,    4,    4,    4,    4,    4,    4,
    6,    5,    0,    2,    1,    1,    1,    1,    1,    1,
    4,    4,    4,    0,    6,    0,    2,    1,    1,    1,
    1,    1,    1,    1,    4,    4,    4,    4,    5,    0,
    2,    1,    4,    5,    0,    2,    1,    1,    1,    4,
    5,    0,    2,    1,    1,    1,    4,
};
static const short yydefred[] = {                         1,
    0,    0,    0,    0,    0,    0,    2,    3,    4,    5,
    6,    7,    8,    9,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  139,    0,    0,  137,  138,  146,    0,
    0,  144,  145,   43,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   25,   26,   27,   28,   29,   30,   31,   32,   33,
   34,   35,   36,   37,   38,   39,   40,   41,   42,    0,
  110,    0,    0,    0,    0,  105,  106,  107,  108,  109,
    0,   18,    0,    0,    0,    0,    0,   13,   14,   15,
   16,   17,    0,    0,    0,    0,  136,    0,    0,  143,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   24,    0,    0,
    0,    0,    0,  104,    0,    0,    0,    0,    0,    0,
   12,   76,    0,    0,    0,   73,   74,   75,   92,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   82,
   83,   84,   85,   86,   87,   88,   89,   90,   91,    0,
  134,    0,  141,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   23,
    0,    0,    0,    0,  102,    0,    0,    0,    0,    0,
   10,    0,    0,    0,   72,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   81,  140,  147,   44,   45,
   46,   59,   47,   48,   49,   50,   51,   52,   53,   54,
   55,   56,   57,   58,    0,    0,    0,    0,   63,   64,
   65,   66,  111,  112,  113,  124,    0,    0,    0,    0,
    0,    0,  118,  119,  120,  121,  122,  123,   21,   19,
   20,   22,    0,    0,   71,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   80,    0,    0,    0,    0,   62,
    0,    0,    0,    0,    0,    0,  117,   77,   78,   93,
   97,  100,    0,   95,   98,   96,   99,   94,    0,    0,
    0,   61,    0,    0,    0,    0,    0,  132,    0,  115,
    0,   67,   69,   68,  125,  128,  126,    0,    0,  131,
  127,  101,    0,  129,  133,
};
static const short yydgoto[] = {                          1,
    7,    8,    9,   10,   11,   12,   13,   14,   87,   88,
   89,   90,   91,   92,   51,   52,   53,   54,   55,   56,
   57,   58,   59,   60,   61,   62,   63,   64,   65,   66,
   67,   68,   69,   70,  228,  229,  230,  231,  232,   15,
  135,  136,  137,  138,   16,  149,  150,  151,  152,  153,
  154,  155,  156,  157,  158,  159,   75,   76,   77,   78,
   79,   80,   81,  242,  243,  244,  245,  246,  247,  248,
  297,  298,   26,   27,   28,   31,   32,   33,
};
static const short yysindex[] = {                         0,
 -198, -117,  -96,  -77,  -73,  -69,    0,    0,    0,    0,
    0,    0,    0,    0, -297, -281, -252, -239, -248, -208,
 -213,  -57,  -52,    0,  -45, -104,    0,    0,    0,   11,
  -80,    0,    0,    0,   14,   15,   17,   20,   21,   22,
   26,   27,   28,   29,   30,   31,   32,   33,   34,   35,
 -123,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -165,
    0,   37,   38,   39, -124,    0,    0,    0,    0,    0,
 -160,    0,   41,   42,   43,   44, -118,    0,    0,    0,
    0,    0, -237, -236, -199,   48,    0, -197,   50,    0,
 -195, -193, -192, -191, -190, -189, -188, -187, -185, -184,
 -183, -181, -180, -179, -178, -177,   52,    0,   -3, -176,
 -175, -174,   65,    0,   25, -167, -161, -150, -136,  114,
    0,    0,  122,  129, -112,    0,    0,    0,    0,  130,
  133,  135,  136,  138,  139,  140,  141,  142, -111,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  116,
    0,  145,    0,  146,  147,  148,  149,  150,  151,  152,
  153,  154,  155,  156,  157,  158,  159,  160,  161,    0,
 -194,  162,  163,  164,    0, -232,  165,  166,  167,  168,
    0,  -75,  -74,  169,    0,  -72,  -70,  -68,  -60,  -67,
  -65,  -64,  -62,  -61,  173,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  174,  176,  179,  -76,    0,    0,
    0,    0,    0,    0,    0,    0,  182,  184,  185,  124,
  187, -107,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  190,  191,    0,  192,  193,  194,  196,  197,
  198,  199,  200,  201,    0,  -50,  -44,  -43,  204,    0,
  -41,  -39,  -38,  -36,  -35,  207,    0,    0,    0,    0,
    0,    0,  -33,    0,    0,    0,    0,    0,  210,  213,
  214,    0,  215,  216,  217,  218, -125,    0,  219,    0,
  221,    0,    0,    0,    0,    0,    0,  -28,  222,    0,
    0,    0,  223,    0,    0,
};
static const short yyrindex[] = {                         0,
 -258,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  170,  171,   23, -122,
  172,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   23,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   40,    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,  175,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  177,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  202,
    0,    0,    0,    0,    0,  232,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   56,    0,    0,    0,    0,
    0,  178,    0,    0,    0,    0,  137,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  212,    0,    0,
    0,    0,    0,    0,   46,    0,    0,    0,    0,    0,
    0,   -7,    0,  265,    0,    0,  261,    0,
};
#define YYTABLESIZE 313
static const short yytable[] = {                        309,
  123,  117,  103,   24,   22,   17,  130,   34,   35,   36,
   37,   23,  194,  205,   38,   95,   29,  276,  132,  139,
   96,  140,   25,  236,   39,  237,   18,  238,   40,   30,
   41,   42,   43,  141,   79,   44,   45,  133,   46,  142,
  239,   47,   82,   70,   99,   19,   48,   71,  269,   20,
   83,  143,   49,   21,   50,  134,   72,   73,  240,  144,
  145,  146,  147,  225,   84,   93,  148,  241,    2,    3,
   94,   98,   85,    4,  101,  102,  226,  103,   86,  227,
  104,  105,  106,    5,    6,   74,  107,  108,  109,  110,
  111,  112,  113,  114,  115,  116,  119,  120,  121,  122,
  125,  126,  127,  128,  129,  160,  161,  162,  163,  164,
  180,  165,  166,  167,  168,  169,  170,  171,  172,  181,
  173,  174,  175,  185,  176,  177,  178,  179,  182,  183,
  184,   71,   34,   35,   36,   37,  187,   82,  103,   38,
   72,   73,  188,  132,  139,   83,  140,  186,  236,   39,
  237,   24,  238,   40,  189,   41,   42,   43,  141,   84,
   44,   45,  133,   46,  142,  239,   47,   85,  190,   74,
   25,   48,  191,   86,  207,   29,  143,   49,  296,   50,
  134,  225,  192,  240,  144,  145,  146,  147,   30,  193,
  196,  148,  241,  197,  226,  198,  199,  227,  200,  201,
  202,  203,  204,  208,  209,  210,  211,  212,  213,  214,
  215,  216,  217,  218,  219,  220,  221,  222,  223,  224,
  233,  234,  235,  249,  250,  251,  252,  255,  259,  253,
  254,  265,  256,  257,  266,  258,  267,  260,  261,  268,
  262,  263,  271,  264,  272,  273,  274,  275,  278,  279,
  280,  281,  282,  283,  289,  284,  285,  286,  287,  288,
  290,  291,  292,  293,  294,  300,  295,  296,  302,  299,
  301,  303,  304,  305,  306,  307,  313,  311,  308,  312,
  314,  315,  118,  270,   60,  206,  124,  277,  131,  310,
   97,  100,    0,    0,  135,  142,   11,    0,    0,  116,
  114,  130,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  195,
};
static const short yycheck[] = {                        125,
  125,  125,  125,  256,  302,  123,  125,  256,  257,  258,
  259,  293,  125,  125,  263,   61,  256,  125,  256,  256,
  125,  258,  275,  256,  273,  258,  123,  260,  277,  269,
  279,  280,  281,  270,  293,  284,  285,  275,  287,  276,
  273,  290,  256,  302,  125,  123,  295,  256,  125,  123,
  264,  288,  301,  123,  303,  293,  265,  266,  291,  296,
  297,  298,  299,  258,  278,  123,  303,  300,  267,  268,
  123,   61,  286,  272,   61,   61,  271,   61,  292,  274,
   61,   61,   61,  282,  283,  294,   61,   61,   61,   61,
   61,   61,   61,   61,   61,   61,  262,   61,   61,   61,
  261,   61,   61,   61,   61,  305,   59,  305,   59,  305,
   59,  305,  305,  305,  305,  305,  305,  305,  304,  123,
  305,  305,  304,   59,  305,  305,  305,  305,  305,  305,
  305,  256,  256,  257,  258,  259,  304,  256,  261,  263,
  265,  266,  304,  256,  256,  264,  258,  123,  256,  273,
  258,  256,  260,  277,  305,  279,  280,  281,  270,  278,
  284,  285,  275,  287,  276,  273,  290,  286,  305,  294,
  275,  295,   59,  292,   59,  256,  288,  301,  304,  303,
  293,  258,   61,  291,  296,  297,  298,  299,  269,   61,
   61,  303,  300,   61,  271,   61,   61,  274,   61,   61,
   61,   61,   61,   59,   59,   59,   59,   59,   59,   59,
   59,   59,   59,   59,   59,   59,   59,   59,   59,   59,
   59,   59,   59,   59,   59,   59,   59,   59,  289,  305,
  305,   59,  305,  304,   61,  304,   61,  305,  304,   61,
  305,  304,   61,  305,   61,   61,  123,   61,   59,   59,
   59,   59,   59,   58,  305,   59,   59,   59,   59,   59,
  305,  305,   59,  305,  304,   59,  305,  304,   59,  305,
  304,   59,   59,   59,   59,   59,  305,   59,   61,   59,
   59,   59,   51,  228,  262,  149,   75,  242,   87,  297,
   26,   31,   -1,   -1,  125,  125,  125,   -1,   -1,  125,
  261,  125,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  135,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"':'","';'",0,"'='",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KLINEGEOIP",
"NAME","DESC","BAN_UNKNOWN","BLACKLIST","CHANNEL","CONNREGEX","DNS_FDLIMIT",
"DNSBL_FROM","DNSBL_TO","EXEMPT","PAISES","CCTLD","FD","INVITE","IRC","KLINE",
"KEY","MASK","MAX_READ","MODE","NEGCACHE","NICK","NICKSERV","NUMERICO","OPM",
"OPTIONS","PASSWORD","PERFORM","PIDFILE","PORT","PROTOCOL","PROTOCOLTYPE",
"REALNAME","REPLY","SCANLOG","SCANNER","SENDMAIL","SERVER","TARGET_IP",
"TARGET_PORT","TARGET_STRING","TIMEOUT","TYPE","USERNAME","USER","VHOST",
"NUMBER","STRING",
};
static const char *yyrule[] = {
"$accept : config",
"config :",
"config : config config_items",
"config_items : irc_entry",
"config_items : options_entry",
"config_items : opm_entry",
"config_items : user_entry",
"config_items : scanner_entry",
"config_items : exempt_entry",
"config_items : paises_entry",
"options_entry : OPTIONS '{' options_items '}' ';'",
"options_items :",
"options_items : options_items options_item",
"options_items : options_item",
"options_item : options_negcache",
"options_item : options_pidfile",
"options_item : options_dns_fdlimit",
"options_item : options_scanlog",
"options_item : error",
"options_negcache : NEGCACHE '=' NUMBER ';'",
"options_pidfile : PIDFILE '=' STRING ';'",
"options_dns_fdlimit : DNS_FDLIMIT '=' NUMBER ';'",
"options_scanlog : SCANLOG '=' STRING ';'",
"irc_entry : IRC '{' irc_items '}' ';'",
"irc_items : irc_items irc_item",
"irc_items : irc_item",
"irc_item : irc_name",
"irc_item : irc_desc",
"irc_item : irc_connregex",
"irc_item : irc_kline",
"irc_item : irc_nick",
"irc_item : irc_nickserv",
"irc_item : irc_mode",
"irc_item : irc_numerico",
"irc_item : irc_password",
"irc_item : irc_port",
"irc_item : irc_realname",
"irc_item : irc_server",
"irc_item : irc_username",
"irc_item : irc_vhost",
"irc_item : irc_perform",
"irc_item : irc_klinegeoip",
"irc_item : channel_entry",
"irc_item : error",
"irc_klinegeoip : KLINEGEOIP '=' STRING ';'",
"irc_name : NAME '=' STRING ';'",
"irc_desc : DESC '=' STRING ';'",
"irc_kline : KLINE '=' STRING ';'",
"irc_mode : MODE '=' STRING ';'",
"irc_nick : NICK '=' STRING ';'",
"irc_nickserv : NICKSERV '=' STRING ';'",
"irc_numerico : NUMERICO '=' NUMBER ';'",
"irc_password : PASSWORD '=' STRING ';'",
"irc_perform : PERFORM '=' STRING ';'",
"irc_port : PORT '=' NUMBER ';'",
"irc_realname : REALNAME '=' STRING ';'",
"irc_server : SERVER '=' STRING ';'",
"irc_username : USERNAME '=' STRING ';'",
"irc_vhost : VHOST '=' STRING ';'",
"irc_connregex : CONNREGEX '=' STRING ';'",
"$$1 :",
"channel_entry : $$1 CHANNEL '{' channel_items '}' ';'",
"channel_items : channel_items channel_item",
"channel_items : channel_item",
"channel_item : channel_name",
"channel_item : channel_key",
"channel_item : channel_invite",
"channel_name : NAME '=' STRING ';'",
"channel_key : KEY '=' STRING ';'",
"channel_invite : INVITE '=' STRING ';'",
"$$2 :",
"user_entry : $$2 USER '{' user_items '}' ';'",
"user_items : user_items user_item",
"user_items : user_item",
"user_item : user_mask",
"user_item : user_scanner",
"user_item : error",
"user_mask : MASK '=' STRING ';'",
"user_scanner : SCANNER '=' STRING ';'",
"$$3 :",
"scanner_entry : $$3 SCANNER '{' scanner_items '}' ';'",
"scanner_items : scanner_items scanner_item",
"scanner_items : scanner_item",
"scanner_item : scanner_name",
"scanner_item : scanner_vhost",
"scanner_item : scanner_fd",
"scanner_item : scanner_target_ip",
"scanner_item : scanner_target_port",
"scanner_item : scanner_target_string",
"scanner_item : scanner_protocol",
"scanner_item : scanner_timeout",
"scanner_item : scanner_max_read",
"scanner_item : error",
"scanner_name : NAME '=' STRING ';'",
"scanner_vhost : VHOST '=' STRING ';'",
"scanner_target_ip : TARGET_IP '=' STRING ';'",
"scanner_target_string : TARGET_STRING '=' STRING ';'",
"scanner_fd : FD '=' NUMBER ';'",
"scanner_target_port : TARGET_PORT '=' NUMBER ';'",
"scanner_timeout : TIMEOUT '=' NUMBER ';'",
"scanner_max_read : MAX_READ '=' NUMBER ';'",
"scanner_protocol : PROTOCOL '=' PROTOCOLTYPE ':' NUMBER ';'",
"opm_entry : OPM '{' opm_items '}' ';'",
"opm_items :",
"opm_items : opm_items opm_item",
"opm_items : opm_item",
"opm_item : opm_dnsbl_from",
"opm_item : opm_dnsbl_to",
"opm_item : opm_sendmail",
"opm_item : opm_blacklist_entry",
"opm_item : error",
"opm_dnsbl_from : DNSBL_FROM '=' STRING ';'",
"opm_dnsbl_to : DNSBL_TO '=' STRING ';'",
"opm_sendmail : SENDMAIL '=' STRING ';'",
"$$4 :",
"opm_blacklist_entry : $$4 BLACKLIST '{' blacklist_items '}' ';'",
"blacklist_items :",
"blacklist_items : blacklist_items blacklist_item",
"blacklist_items : blacklist_item",
"blacklist_item : blacklist_name",
"blacklist_item : blacklist_type",
"blacklist_item : blacklist_kline",
"blacklist_item : blacklist_ban_unknown",
"blacklist_item : blacklist_reply",
"blacklist_item : error",
"blacklist_name : NAME '=' STRING ';'",
"blacklist_kline : KLINE '=' STRING ';'",
"blacklist_type : TYPE '=' STRING ';'",
"blacklist_ban_unknown : BAN_UNKNOWN '=' NUMBER ';'",
"blacklist_reply : REPLY '{' blacklist_reply_items '}' ';'",
"blacklist_reply_items :",
"blacklist_reply_items : blacklist_reply_items blacklist_reply_item",
"blacklist_reply_items : blacklist_reply_item",
"blacklist_reply_item : NUMBER '=' STRING ';'",
"exempt_entry : EXEMPT '{' exempt_items '}' ';'",
"exempt_items :",
"exempt_items : exempt_items exempt_item",
"exempt_items : exempt_item",
"exempt_item : exempt_mask",
"exempt_item : error",
"exempt_mask : MASK '=' STRING ';'",
"paises_entry : PAISES '{' paises_items '}' ';'",
"paises_items :",
"paises_items : paises_items paises_item",
"paises_items : paises_item",
"paises_item : paises_cctld",
"paises_item : error",
"paises_cctld : CCTLD '=' STRING ';'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
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
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
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

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
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
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 19:
#line 125 "config-parser.y"
	{
   OptionsItem->negcache = yystack.l_mark[-1].number;
}
break;
case 20:
#line 130 "config-parser.y"
	{
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = DupString(yystack.l_mark[-1].string);
}
break;
case 21:
#line 136 "config-parser.y"
	{
   OptionsItem->dns_fdlimit = yystack.l_mark[-1].number;
}
break;
case 22:
#line 141 "config-parser.y"
	{
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = DupString(yystack.l_mark[-1].string);
}
break;
case 44:
#line 173 "config-parser.y"
	{
   MyFree(IRCItem->klinegeoip);
   IRCItem->klinegeoip = DupString(yystack.l_mark[-1].string);
}
break;
case 45:
#line 179 "config-parser.y"
	{
   MyFree(IRCItem->name);
   IRCItem->name = DupString(yystack.l_mark[-1].string);
}
break;
case 46:
#line 185 "config-parser.y"
	{
   MyFree(IRCItem->desc);
   IRCItem->desc = DupString(yystack.l_mark[-1].string);
}
break;
case 47:
#line 191 "config-parser.y"
	{
   MyFree(IRCItem->kline);
   IRCItem->kline = DupString(yystack.l_mark[-1].string);
}
break;
case 48:
#line 197 "config-parser.y"
	{
   MyFree(IRCItem->mode);
   IRCItem->mode = DupString(yystack.l_mark[-1].string);
}
break;
case 49:
#line 203 "config-parser.y"
	{
   MyFree(IRCItem->nick);
   IRCItem->nick = DupString(yystack.l_mark[-1].string);
}
break;
case 50:
#line 209 "config-parser.y"
	{
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = DupString(yystack.l_mark[-1].string);
}
break;
case 51:
#line 215 "config-parser.y"
	{
   IRCItem->numerico = yystack.l_mark[-1].number;
}
break;
case 52:
#line 220 "config-parser.y"
	{
   MyFree(IRCItem->password);
   IRCItem->password = DupString(yystack.l_mark[-1].string);
}
break;
case 53:
#line 226 "config-parser.y"
	{
   node_t *node;
   node = node_create(DupString(yystack.l_mark[-1].string));

   list_add(IRCItem->performs, node);
}
break;
case 54:
#line 234 "config-parser.y"
	{
   IRCItem->port = yystack.l_mark[-1].number;
}
break;
case 55:
#line 239 "config-parser.y"
	{
   MyFree(IRCItem->realname);
   IRCItem->realname = DupString(yystack.l_mark[-1].string);
}
break;
case 56:
#line 245 "config-parser.y"
	{
   MyFree(IRCItem->server);
   IRCItem->server = DupString(yystack.l_mark[-1].string);
}
break;
case 57:
#line 251 "config-parser.y"
	{
   MyFree(IRCItem->username);
   IRCItem->username = DupString(yystack.l_mark[-1].string);
}
break;
case 58:
#line 257 "config-parser.y"
	{
   MyFree(IRCItem->vhost);
   IRCItem->vhost = DupString(yystack.l_mark[-1].string);
}
break;
case 59:
#line 263 "config-parser.y"
	{
   MyFree(IRCItem->connregex);
   IRCItem->connregex = DupString(yystack.l_mark[-1].string);
}
break;
case 60:
#line 272 "config-parser.y"
	{
   node_t *node;
   struct ChannelConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->key = DupString("");
   item->invite = DupString("");

   node = node_create(item);
   list_add(IRCItem->channels, node);

   tmp = (void *) item;
}
break;
case 67:
#line 297 "config-parser.y"
	{
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yystack.l_mark[-1].string);
}
break;
case 68:
#line 305 "config-parser.y"
	{
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = DupString(yystack.l_mark[-1].string);
}
break;
case 69:
#line 313 "config-parser.y"
	{
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = DupString(yystack.l_mark[-1].string);
}
break;
case 70:
#line 323 "config-parser.y"
	{
   node_t *node;
   struct UserConf *item;

   item = MyMalloc(sizeof *item);

   item->masks = list_create();
   item->scanners = list_create();

   node = node_create(item);
   list_add(UserItemList, node);

   tmp = (void *) item; 
}
break;
case 77:
#line 347 "config-parser.y"
	{
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yystack.l_mark[-1].string));

   list_add(item->masks, node);
}
break;
case 78:
#line 357 "config-parser.y"
	{
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yystack.l_mark[-1].string));

   list_add(item->scanners, node);
}
break;
case 79:
#line 369 "config-parser.y"
	{
   node_t *node;
   struct ScannerConf *item, *olditem;

   item = MyMalloc(sizeof *item);

   /* Setup ScannerConf defaults */
   item->name = DupString("undefined");

	if(LIST_SIZE(ScannerItemList) > 0)
	{
	   olditem = ScannerItemList->tail->data;

		item->vhost = DupString(olditem->vhost);
		item->fd = olditem->fd;
		item->target_ip = DupString(olditem->target_ip);
		item->target_port = olditem->target_port;
		item->timeout = olditem->timeout;
		item->max_read = olditem->max_read;

		item->target_string = olditem->target_string;
		item->target_string_created = 0;
	}
	else
	{
	   item->vhost = DupString("0.0.0.0");
      item->fd = 512;
      item->target_ip = DupString("127.0.0.1");
      item->target_port = 6667;
      item->timeout = 30;
      item->max_read = 4096;
		
		item->target_string = list_create();
		item->target_string_created = 1;
	}
	
   item->protocols = list_create();

   node = node_create(item);

   list_add(ScannerItemList, node);
   tmp = (void *) item;
}
break;
case 93:
#line 429 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = DupString(yystack.l_mark[-1].string);
}
break;
case 94:
#line 436 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = DupString(yystack.l_mark[-1].string);
}
break;
case 95:
#line 443 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = DupString(yystack.l_mark[-1].string);
}
break;
case 96:
#line 450 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;

   node_t *node;
   node = node_create(yystack.l_mark[-1].string);

	if(item->target_string_created == 0)
	{
	   item->target_string = list_create();
		item->target_string_created = 1;
	}

   list_add(item->target_string, node);
}
break;
case 97:
#line 466 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = yystack.l_mark[-1].number;
}
break;
case 98:
#line 472 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = yystack.l_mark[-1].number;
}
break;
case 99:
#line 478 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = yystack.l_mark[-1].number;
}
break;
case 100:
#line 484 "config-parser.y"
	{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = yystack.l_mark[-1].number;
}
break;
case 101:
#line 490 "config-parser.y"
	{
   struct ProtocolConf *item;
   struct ScannerConf  *item2;

   node_t *node;
 
   item = MyMalloc(sizeof *item);
   item->type = yystack.l_mark[-3].number;
   item->port = yystack.l_mark[-1].number;

   item2 = (struct ScannerConf *) tmp;

   node = node_create(item);
   list_add(item2->protocols, node);
}
break;
case 111:
#line 521 "config-parser.y"
	{
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = DupString(yystack.l_mark[-1].string);
}
break;
case 112:
#line 527 "config-parser.y"
	{
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = DupString(yystack.l_mark[-1].string);
}
break;
case 113:
#line 533 "config-parser.y"
	{
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = DupString(yystack.l_mark[-1].string);
}
break;
case 114:
#line 541 "config-parser.y"
	{
   node_t *node;
   struct BlacklistConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->kline = DupString("");
   item->ban_unknown = 0;
   item->type = A_BITMASK;
   item->reply = list_create();

   node = node_create(item);
   list_add(OpmItem->blacklists, node);

   tmp = (void *) item;
}
break;
case 125:
#line 571 "config-parser.y"
	{
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yystack.l_mark[-1].string);
}
break;
case 126:
#line 578 "config-parser.y"
	{
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = DupString(yystack.l_mark[-1].string);
}
break;
case 127:
#line 585 "config-parser.y"
	{
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", yystack.l_mark[-1].string) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", yystack.l_mark[-1].string) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
break;
case 128:
#line 596 "config-parser.y"
	{
   struct BlacklistConf *item = tmp;

   item->ban_unknown = yystack.l_mark[-1].number;
}
break;
case 133:
#line 609 "config-parser.y"
	{
   struct BlacklistReplyConf *item;
   struct BlacklistConf *blacklist = tmp;
   node_t *node;

   item = MyMalloc(sizeof *item);

   item->number = yystack.l_mark[-3].number;
   item->type = DupString(yystack.l_mark[-1].string);

   node = node_create(item);
   list_add(blacklist->reply, node);
}
break;
case 140:
#line 636 "config-parser.y"
	{
   node_t *node;
   node = node_create(DupString(yystack.l_mark[-1].string));

   list_add(ExemptItem->masks, node);
}
break;
case 147:
#line 656 "config-parser.y"
	{
   node_t *node;
   node = node_create(DupString(yystack.l_mark[-1].string));

   list_add(CctldItem->cctld, node);
}
break;
#line 1232 "config-parser.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
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
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
