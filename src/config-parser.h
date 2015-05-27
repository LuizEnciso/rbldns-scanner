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
extern YYSTYPE yylval;
