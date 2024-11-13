/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "JSONParser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern int yylex();
extern char* yytext;
extern int yyparse();
extern int line_num;
int errorline;
int errors=0;
int PrizeCatCounter=0;

int winningNums[5]; //Array where winning Numbers are going to be added
int win_array_index=0;

//Error Functions
void incPrizeCatCntr(void); //Add +1 to PrizeCatCounter after each "id" in "PrizeCategories" and break operation if >8
void addNumber(char* n); //Add current winning Number to winningNums[5] array
void checkGameID(char* l); //Function to Check GameID
void checkWinningNumbers(int Array[]); //Function to Check if Winning Numbers are exactly 5 and between 1 and 45
void checkCatType(char* p); //Check if Category Type is 0 or 1

void yyerror(const char* s);

#line 98 "JSONParser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "JSONParser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LAST = 3,                       /* LAST  */
  YYSYMBOL_ACTIVE = 4,                     /* ACTIVE  */
  YYSYMBOL_COLON = 5,                      /* COLON  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_OBRACKETS = 7,                  /* OBRACKETS  */
  YYSYMBOL_OBRACES = 8,                    /* OBRACES  */
  YYSYMBOL_CBRACKETS = 9,                  /* CBRACKETS  */
  YYSYMBOL_CBRACES = 10,                   /* CBRACES  */
  YYSYMBOL_GAME_ID = 11,                   /* GAME_ID  */
  YYSYMBOL_DRAW_ID = 12,                   /* DRAW_ID  */
  YYSYMBOL_DRAW_TIME = 13,                 /* DRAW_TIME  */
  YYSYMBOL_STATUS = 14,                    /* STATUS  */
  YYSYMBOL_DRAW_BREAK = 15,                /* DRAW_BREAK  */
  YYSYMBOL_VISUAL_DRAW = 16,               /* VISUAL_DRAW  */
  YYSYMBOL_PRICE_POINTS = 17,              /* PRICE_POINTS  */
  YYSYMBOL_AMOUNT = 18,                    /* AMOUNT  */
  YYSYMBOL_WINNING_NUMBERS = 19,           /* WINNING_NUMBERS  */
  YYSYMBOL_LIST = 20,                      /* LIST  */
  YYSYMBOL_BONUS = 21,                     /* BONUS  */
  YYSYMBOL_PRIZE_CATEGORIES = 22,          /* PRIZE_CATEGORIES  */
  YYSYMBOL_ID = 23,                        /* ID  */
  YYSYMBOL_DIVIDENT = 24,                  /* DIVIDENT  */
  YYSYMBOL_WINNERS = 25,                   /* WINNERS  */
  YYSYMBOL_DISTRIBUTED = 26,               /* DISTRIBUTED  */
  YYSYMBOL_JACKPOT = 27,                   /* JACKPOT  */
  YYSYMBOL_FIXED = 28,                     /* FIXED  */
  YYSYMBOL_CATEG_TYPE = 29,                /* CATEG_TYPE  */
  YYSYMBOL_GAMETYPE = 30,                  /* GAMETYPE  */
  YYSYMBOL_MINIMUM_DISTRIBUTED = 31,       /* MINIMUM_DISTRIBUTED  */
  YYSYMBOL_WAGER_STATISTICS = 32,          /* WAGER_STATISTICS  */
  YYSYMBOL_COLUMNS = 33,                   /* COLUMNS  */
  YYSYMBOL_WAGERS = 34,                    /* WAGERS  */
  YYSYMBOL_ADDON = 35,                     /* ADDON  */
  YYSYMBOL_BOOLEAN = 36,                   /* BOOLEAN  */
  YYSYMBOL_STRING = 37,                    /* STRING  */
  YYSYMBOL_INT = 38,                       /* INT  */
  YYSYMBOL_DOUBLE = 39,                    /* DOUBLE  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_jsonfile = 41,                  /* jsonfile  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_ruleLAST_RESULT = 43,           /* ruleLAST_RESULT  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_45_3 = 45,                      /* $@3  */
  YYSYMBOL_46_4 = 46,                      /* $@4  */
  YYSYMBOL_47_5 = 47,                      /* $@5  */
  YYSYMBOL_48_6 = 48,                      /* $@6  */
  YYSYMBOL_ruleLAST = 49,                  /* ruleLAST  */
  YYSYMBOL_50_7 = 50,                      /* $@7  */
  YYSYMBOL_ruleGAME_ID = 51,               /* ruleGAME_ID  */
  YYSYMBOL_52_8 = 52,                      /* $@8  */
  YYSYMBOL_53_9 = 53,                      /* $@9  */
  YYSYMBOL_ruleDRAW_ID = 54,               /* ruleDRAW_ID  */
  YYSYMBOL_55_10 = 55,                     /* $@10  */
  YYSYMBOL_56_11 = 56,                     /* $@11  */
  YYSYMBOL_ruleDRAW_TIME = 57,             /* ruleDRAW_TIME  */
  YYSYMBOL_58_12 = 58,                     /* $@12  */
  YYSYMBOL_59_13 = 59,                     /* $@13  */
  YYSYMBOL_ruleSTATUS = 60,                /* ruleSTATUS  */
  YYSYMBOL_61_14 = 61,                     /* $@14  */
  YYSYMBOL_62_15 = 62,                     /* $@15  */
  YYSYMBOL_ruleSTATUS_2 = 63,              /* ruleSTATUS_2  */
  YYSYMBOL_ruleDRAW_BREAK = 64,            /* ruleDRAW_BREAK  */
  YYSYMBOL_65_16 = 65,                     /* $@16  */
  YYSYMBOL_66_17 = 66,                     /* $@17  */
  YYSYMBOL_ruleVISUAL_DRAW = 67,           /* ruleVISUAL_DRAW  */
  YYSYMBOL_68_18 = 68,                     /* $@18  */
  YYSYMBOL_69_19 = 69,                     /* $@19  */
  YYSYMBOL_rulePRICE_POINTS = 70,          /* rulePRICE_POINTS  */
  YYSYMBOL_71_20 = 71,                     /* $@20  */
  YYSYMBOL_72_21 = 72,                     /* $@21  */
  YYSYMBOL_73_22 = 73,                     /* $@22  */
  YYSYMBOL_ruleAMOUNT = 74,                /* ruleAMOUNT  */
  YYSYMBOL_75_23 = 75,                     /* $@23  */
  YYSYMBOL_76_24 = 76,                     /* $@24  */
  YYSYMBOL_ruleWINNING_NUMS = 77,          /* ruleWINNING_NUMS  */
  YYSYMBOL_78_25 = 78,                     /* $@25  */
  YYSYMBOL_79_26 = 79,                     /* $@26  */
  YYSYMBOL_80_27 = 80,                     /* $@27  */
  YYSYMBOL_81_28 = 81,                     /* $@28  */
  YYSYMBOL_ruleLIST = 82,                  /* ruleLIST  */
  YYSYMBOL_83_29 = 83,                     /* $@29  */
  YYSYMBOL_84_30 = 84,                     /* $@30  */
  YYSYMBOL_85_31 = 85,                     /* $@31  */
  YYSYMBOL_86_32 = 86,                     /* $@32  */
  YYSYMBOL_87_33 = 87,                     /* $@33  */
  YYSYMBOL_88_34 = 88,                     /* $@34  */
  YYSYMBOL_89_35 = 89,                     /* $@35  */
  YYSYMBOL_90_36 = 90,                     /* $@36  */
  YYSYMBOL_91_37 = 91,                     /* $@37  */
  YYSYMBOL_92_38 = 92,                     /* $@38  */
  YYSYMBOL_93_39 = 93,                     /* $@39  */
  YYSYMBOL_94_40 = 94,                     /* $@40  */
  YYSYMBOL_ruleBONUS = 95,                 /* ruleBONUS  */
  YYSYMBOL_96_41 = 96,                     /* $@41  */
  YYSYMBOL_97_42 = 97,                     /* $@42  */
  YYSYMBOL_98_43 = 98,                     /* $@43  */
  YYSYMBOL_99_44 = 99,                     /* $@44  */
  YYSYMBOL_rulePRIZE_CATEG = 100,          /* rulePRIZE_CATEG  */
  YYSYMBOL_101_45 = 101,                   /* $@45  */
  YYSYMBOL_102_46 = 102,                   /* $@46  */
  YYSYMBOL_rulePRIZE_ARRAY = 103,          /* rulePRIZE_ARRAY  */
  YYSYMBOL_104_47 = 104,                   /* $@47  */
  YYSYMBOL_105_48 = 105,                   /* $@48  */
  YYSYMBOL_106_49 = 106,                   /* $@49  */
  YYSYMBOL_107_50 = 107,                   /* $@50  */
  YYSYMBOL_108_51 = 108,                   /* $@51  */
  YYSYMBOL_109_52 = 109,                   /* $@52  */
  YYSYMBOL_110_53 = 110,                   /* $@53  */
  YYSYMBOL_111_54 = 111,                   /* $@54  */
  YYSYMBOL_ruleFIRST_PRIZE = 112,          /* ruleFIRST_PRIZE  */
  YYSYMBOL_113_55 = 113,                   /* $@55  */
  YYSYMBOL_114_56 = 114,                   /* $@56  */
  YYSYMBOL_115_57 = 115,                   /* $@57  */
  YYSYMBOL_116_58 = 116,                   /* $@58  */
  YYSYMBOL_117_59 = 117,                   /* $@59  */
  YYSYMBOL_118_60 = 118,                   /* $@60  */
  YYSYMBOL_119_61 = 119,                   /* $@61  */
  YYSYMBOL_120_62 = 120,                   /* $@62  */
  YYSYMBOL_121_63 = 121,                   /* $@63  */
  YYSYMBOL_ruleREST_PRIZES = 122,          /* ruleREST_PRIZES  */
  YYSYMBOL_123_64 = 123,                   /* $@64  */
  YYSYMBOL_124_65 = 124,                   /* $@65  */
  YYSYMBOL_125_66 = 125,                   /* $@66  */
  YYSYMBOL_126_67 = 126,                   /* $@67  */
  YYSYMBOL_127_68 = 127,                   /* $@68  */
  YYSYMBOL_128_69 = 128,                   /* $@69  */
  YYSYMBOL_129_70 = 129,                   /* $@70  */
  YYSYMBOL_130_71 = 130,                   /* $@71  */
  YYSYMBOL_ruleID = 131,                   /* ruleID  */
  YYSYMBOL_132_72 = 132,                   /* $@72  */
  YYSYMBOL_133_73 = 133,                   /* $@73  */
  YYSYMBOL_ruleID_1 = 134,                 /* ruleID_1  */
  YYSYMBOL_135_74 = 135,                   /* $@74  */
  YYSYMBOL_136_75 = 136,                   /* $@75  */
  YYSYMBOL_ruleDIVIDENT = 137,             /* ruleDIVIDENT  */
  YYSYMBOL_138_76 = 138,                   /* $@76  */
  YYSYMBOL_139_77 = 139,                   /* $@77  */
  YYSYMBOL_ruleWINNERS = 140,              /* ruleWINNERS  */
  YYSYMBOL_141_78 = 141,                   /* $@78  */
  YYSYMBOL_142_79 = 142,                   /* $@79  */
  YYSYMBOL_ruleDISTRIBUTED = 143,          /* ruleDISTRIBUTED  */
  YYSYMBOL_144_80 = 144,                   /* $@80  */
  YYSYMBOL_145_81 = 145,                   /* $@81  */
  YYSYMBOL_ruleJACKPOT = 146,              /* ruleJACKPOT  */
  YYSYMBOL_147_82 = 147,                   /* $@82  */
  YYSYMBOL_148_83 = 148,                   /* $@83  */
  YYSYMBOL_ruleFIXED = 149,                /* ruleFIXED  */
  YYSYMBOL_150_84 = 150,                   /* $@84  */
  YYSYMBOL_151_85 = 151,                   /* $@85  */
  YYSYMBOL_ruleCATEG_TYPE = 152,           /* ruleCATEG_TYPE  */
  YYSYMBOL_153_86 = 153,                   /* $@86  */
  YYSYMBOL_154_87 = 154,                   /* $@87  */
  YYSYMBOL_ruleGAMETYPE = 155,             /* ruleGAMETYPE  */
  YYSYMBOL_156_88 = 156,                   /* $@88  */
  YYSYMBOL_157_89 = 157,                   /* $@89  */
  YYSYMBOL_ruleMIN_DIS = 158,              /* ruleMIN_DIS  */
  YYSYMBOL_159_90 = 159,                   /* $@90  */
  YYSYMBOL_160_91 = 160,                   /* $@91  */
  YYSYMBOL_ruleWAGER_STATS = 161,          /* ruleWAGER_STATS  */
  YYSYMBOL_162_92 = 162,                   /* $@92  */
  YYSYMBOL_163_93 = 163,                   /* $@93  */
  YYSYMBOL_164_94 = 164,                   /* $@94  */
  YYSYMBOL_165_95 = 165,                   /* $@95  */
  YYSYMBOL_166_96 = 166,                   /* $@96  */
  YYSYMBOL_ruleCOLUMNS = 167,              /* ruleCOLUMNS  */
  YYSYMBOL_168_97 = 168,                   /* $@97  */
  YYSYMBOL_169_98 = 169,                   /* $@98  */
  YYSYMBOL_ruleWAGERS = 170,               /* ruleWAGERS  */
  YYSYMBOL_171_99 = 171,                   /* $@99  */
  YYSYMBOL_172_100 = 172,                  /* $@100  */
  YYSYMBOL_ruleADDON = 173,                /* ruleADDON  */
  YYSYMBOL_174_101 = 174,                  /* $@101  */
  YYSYMBOL_175_102 = 175,                  /* $@102  */
  YYSYMBOL_ruleJSONARRAY = 176,            /* ruleJSONARRAY  */
  YYSYMBOL_ruleEMPTYARRAY = 177,           /* ruleEMPTYARRAY  */
  YYSYMBOL_178_103 = 178,                  /* $@103  */
  YYSYMBOL_ruleARRAY = 179,                /* ruleARRAY  */
  YYSYMBOL_180_104 = 180,                  /* $@104  */
  YYSYMBOL_ruleCONTEXT = 181,              /* ruleCONTEXT  */
  YYSYMBOL_182_105 = 182,                  /* $@105  */
  YYSYMBOL_ruleACTIVE = 183,               /* ruleACTIVE  */
  YYSYMBOL_184_106 = 184                   /* $@106  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  169
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  314

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    56,    59,    59,    59,    59,    59,    59,
      62,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    75,    75,    75,    77,    77,    77,    79,    79,
      79,    82,    82,    82,    84,    85,    88,    88,    88,    90,
      90,    90,    92,    92,    92,    92,    94,    94,    94,    96,
      96,    96,    96,    96,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,   100,   100,   100,
     100,   100,   102,   102,   102,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   110,   110,   110,   111,   111,   111,   112,
     112,   112,   113,   113,   113,   114,   114,   114,   115,   115,
     115,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     119,   119,   119,   121,   121,   121,   121,   121,   121,   123,
     123,   123,   125,   125,   125,   127,   127,   127,   129,   130,
     132,   132,   134,   134,   136,   136,   137,   138,   139,   143,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LAST", "ACTIVE",
  "COLON", "COMMA", "OBRACKETS", "OBRACES", "CBRACKETS", "CBRACES",
  "GAME_ID", "DRAW_ID", "DRAW_TIME", "STATUS", "DRAW_BREAK", "VISUAL_DRAW",
  "PRICE_POINTS", "AMOUNT", "WINNING_NUMBERS", "LIST", "BONUS",
  "PRIZE_CATEGORIES", "ID", "DIVIDENT", "WINNERS", "DISTRIBUTED",
  "JACKPOT", "FIXED", "CATEG_TYPE", "GAMETYPE", "MINIMUM_DISTRIBUTED",
  "WAGER_STATISTICS", "COLUMNS", "WAGERS", "ADDON", "BOOLEAN", "STRING",
  "INT", "DOUBLE", "$accept", "jsonfile", "$@1", "ruleLAST_RESULT", "$@2",
  "$@3", "$@4", "$@5", "$@6", "ruleLAST", "$@7", "ruleGAME_ID", "$@8",
  "$@9", "ruleDRAW_ID", "$@10", "$@11", "ruleDRAW_TIME", "$@12", "$@13",
  "ruleSTATUS", "$@14", "$@15", "ruleSTATUS_2", "ruleDRAW_BREAK", "$@16",
  "$@17", "ruleVISUAL_DRAW", "$@18", "$@19", "rulePRICE_POINTS", "$@20",
  "$@21", "$@22", "ruleAMOUNT", "$@23", "$@24", "ruleWINNING_NUMS", "$@25",
  "$@26", "$@27", "$@28", "ruleLIST", "$@29", "$@30", "$@31", "$@32",
  "$@33", "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40",
  "ruleBONUS", "$@41", "$@42", "$@43", "$@44", "rulePRIZE_CATEG", "$@45",
  "$@46", "rulePRIZE_ARRAY", "$@47", "$@48", "$@49", "$@50", "$@51",
  "$@52", "$@53", "$@54", "ruleFIRST_PRIZE", "$@55", "$@56", "$@57",
  "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "ruleREST_PRIZES",
  "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "ruleID",
  "$@72", "$@73", "ruleID_1", "$@74", "$@75", "ruleDIVIDENT", "$@76",
  "$@77", "ruleWINNERS", "$@78", "$@79", "ruleDISTRIBUTED", "$@80", "$@81",
  "ruleJACKPOT", "$@82", "$@83", "ruleFIXED", "$@84", "$@85",
  "ruleCATEG_TYPE", "$@86", "$@87", "ruleGAMETYPE", "$@88", "$@89",
  "ruleMIN_DIS", "$@90", "$@91", "ruleWAGER_STATS", "$@92", "$@93", "$@94",
  "$@95", "$@96", "ruleCOLUMNS", "$@97", "$@98", "ruleWAGERS", "$@99",
  "$@100", "ruleADDON", "$@101", "$@102", "ruleJSONARRAY",
  "ruleEMPTYARRAY", "$@103", "ruleARRAY", "$@104", "ruleCONTEXT", "$@105",
  "ruleACTIVE", "$@106", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-151)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,  -158,    26,    28,  -158,  -158,    25,    30,  -158,  -158,
      29,  -158,     1,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,    13,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,    32,    33,    34,    35,    36,    37,
      48,    50,    51,    52,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,     1,    61,    16,    20,
      31,     6,    38,    39,    63,    65,    60,    66,    68,    71,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,    73,    62,    59,    75,    53,  -158,  -158,
      74,  -158,    78,  -158,    81,  -158,    82,    83,    84,  -158,
      86,  -158,    69,  -158,    88,  -158,    49,  -158,  -158,    76,
    -158,    89,    87,  -158,    64,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,    18,    57,    91,  -158,    92,    95,
    -158,  -158,    96,    67,  -158,    97,  -158,  -158,  -158,  -158,
     101,  -158,  -158,    85,    90,  -158,  -158,   102,  -158,    49,
      70,  -158,    72,  -158,   105,  -158,   106,    87,  -158,    79,
     109,  -158,   108,  -158,   112,  -158,   113,  -158,   114,    93,
    -158,   110,   116,  -158,  -158,    98,  -158,    85,  -158,  -158,
     119,  -158,  -158,    94,    99,  -158,   120,   103,   121,    87,
    -158,   104,  -158,  -158,   123,  -158,  -158,  -158,   124,   117,
    -158,   125,  -158,   107,    98,  -158,   126,  -158,  -158,  -158,
     128,  -158,   111,  -158,   131,   133,    87,   130,    -9,  -158,
    -158,   138,  -158,  -158,   139,  -158,  -158,  -158,  -158,    15,
     115,  -158,   127,   107,  -158,  -158,  -158,  -158,   118,  -158,
     140,   141,    87,    -9,   142,  -158,   145,  -158,  -158,   146,
     149,  -158,  -158,   132,   127,  -158,   129,   122,  -158,   150,
     152,    87,  -158,  -158,   154,  -158,  -158,   156,   157,  -158,
     100,   132,  -158,  -158,   134,  -158,   158,   159,    87,   136,
    -158,   161,  -158,  -158,   160,  -158,  -158,   147,   100,  -158,
     162,   137,  -158,   163,   165,  -158,  -158,   171,  -158,  -158,
    -158,   148,   147,   143,  -158,   135,   169,  -158,   176,  -158,
    -158,  -158,   144,  -158
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     4,     0,     0,     3,     5,
       0,     6,     0,    22,    25,    28,    31,    36,    39,    42,
      49,    72,   133,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     7,    23,    26,    29,    32,
      37,    40,    43,    50,    73,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
      24,    27,    30,    35,    34,    33,    38,    41,    44,    51,
      75,    74,   135,     0,     0,     0,     0,     0,     8,    46,
       0,    54,     0,    84,     0,   139,     0,     0,     0,    45,
       0,    52,     0,    76,     0,   136,     0,    47,    55,     0,
     106,     0,     0,   140,     0,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,     0,     0,    67,     0,     0,
      85,    94,     0,     0,   142,     0,   159,     9,    48,    56,
       0,    53,   107,     0,     0,    77,   141,     0,   137,     0,
       0,    68,     0,   109,     0,   103,     0,     0,   143,     0,
     160,    57,     0,   108,     0,    86,     0,    95,     0,     0,
     145,     0,     0,    69,   110,     0,   104,     0,    78,   144,
       0,   138,    58,     0,     0,   112,     0,     0,     0,     0,
     146,     0,    70,   111,     0,    87,   105,    96,     0,     0,
      59,     0,   113,     0,     0,    79,   152,   147,   148,   149,
       0,    71,     0,   115,     0,     0,     0,     0,     0,    60,
     114,     0,    88,    97,     0,   151,   157,   156,   158,     0,
       0,   116,     0,     0,    80,   154,   153,    61,     0,   118,
       0,     0,     0,     0,     0,   117,     0,    89,    98,     0,
     155,    62,   119,     0,     0,    81,     0,     0,   121,     0,
       0,     0,    63,   120,     0,    90,    99,     0,     0,   122,
       0,     0,    82,    64,     0,   124,     0,     0,     0,     0,
     123,     0,    91,   100,     0,    65,   125,     0,     0,    83,
       0,     0,   127,     0,     0,    66,   126,     0,    92,   101,
     128,     0,     0,     0,   130,     0,     0,   129,     0,    93,
     102,   131,     0,   132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   151,
    -158,  -105,  -158,  -158,  -104,  -158,  -158,  -103,  -158,  -158,
    -102,  -158,  -158,  -158,  -101,  -158,  -158,  -100,  -158,  -158,
     -99,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
     -98,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -157,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,   -26,  -158,  -158,
     -36,  -158,  -158,   -51,  -158,  -158,   -70,  -158,  -158,   -86,
    -158,  -158,   -96,  -158,  -158,  -116,  -158,  -158,  -158,  -158,
    -158,   -97,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,   -56,  -158,    40,  -158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     6,     7,    10,    12,    57,    97,    23,
      56,    24,    34,    58,    25,    35,    59,    26,    36,    60,
      27,    37,    61,    75,    28,    38,    62,    29,    39,    63,
      30,    40,    64,    84,    90,    98,   125,    31,    41,    65,
      85,   109,    92,   100,   126,   150,   172,   191,   210,   230,
     244,   256,   268,   279,   290,   128,   140,   162,   183,   201,
      32,    42,    66,    81,    86,   112,   157,   189,   216,   242,
     261,   278,    94,   102,   143,   175,   203,   232,   253,   270,
     287,   301,   132,   144,   177,   204,   233,   254,   271,   288,
     302,   156,   166,   187,   111,   129,   152,   154,   164,   184,
     186,   194,   212,   214,   221,   238,   240,   246,   257,   259,
     264,   274,   276,   281,   291,   293,   297,   303,   305,   308,
     312,    33,    43,    67,    87,   114,   159,    96,   104,   133,
     135,   147,   169,   171,   180,   199,   207,   208,   217,   209,
     218,   229,   243,   124,   149
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     168,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      73,     1,    13,    14,    15,    16,    17,    18,    19,    44,
      20,   235,    45,    21,   136,   236,     4,   137,   226,   227,
     228,     5,   198,    22,     8,     9,    11,    46,    47,    48,
      49,    50,    51,    74,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    52,    70,    53,    54,    55,    71,   224,
      13,    14,    15,    16,    17,    18,    19,    69,    80,    72,
      78,    21,    79,    82,    44,    83,    76,    77,    88,    91,
      89,    22,    93,    99,   101,   249,    95,   103,   105,   107,
     106,   108,   110,   113,   131,   130,   138,   127,   134,   139,
     142,   141,   145,   148,   267,   146,   151,   158,   161,   153,
     163,   165,   167,   155,   170,   136,   173,   174,   176,   181,
     178,   284,   182,   185,   190,   206,   195,   197,   202,   275,
     205,   179,   192,   213,   219,   211,  -150,   222,   193,   223,
     225,   196,   200,   231,   309,   234,   247,   248,   251,   220,
     252,   188,   255,   237,   239,   235,   265,   245,   266,   269,
     258,   263,   272,   273,   282,   283,   286,   262,   215,   298,
     289,   299,   295,   280,   285,   296,   300,   292,   310,   304,
     307,   311,   241,   313,   260,   277,   306,   250,     0,   160,
       0,     0,   294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
     157,   106,   106,   106,   106,   106,   106,   106,   106,   106,
       4,     7,    11,    12,    13,    14,    15,    16,    17,     6,
      19,     6,     9,    22,     6,    10,     0,     9,    37,    38,
      39,     3,   189,    32,     9,     5,     7,     5,     5,     5,
       5,     5,     5,    37,   149,   149,   149,   149,   149,   149,
     149,   149,   149,     5,    38,     5,     5,     5,    38,   216,
      11,    12,    13,    14,    15,    16,    17,     6,     8,    38,
       7,    22,     7,     7,     6,     4,    38,    38,     5,    20,
      18,    32,     7,     9,     6,   242,    33,     6,     6,     5,
       7,     5,    23,     5,     7,     6,    39,    21,    34,     8,
       5,     9,     6,     6,   261,    38,     5,     5,    38,    24,
      38,     6,     6,    23,    35,     6,     8,     5,     5,     9,
       6,   278,     6,    25,     5,     8,     6,     6,     5,    29,
       6,    38,    38,    26,     6,    10,    10,     6,    39,     6,
      10,    38,    38,     5,     9,     6,     6,     6,     6,    38,
       5,   177,     6,    38,    27,     6,     6,    39,     6,     5,
      28,    39,     6,     6,     6,     6,     5,    38,   204,     6,
      10,     6,    10,    39,    38,    38,     5,    30,     9,    31,
      37,     5,   233,    39,   254,   271,   302,   243,    -1,   149,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    41,    42,     0,     3,    43,    44,     9,     5,
      45,     7,    46,    11,    12,    13,    14,    15,    16,    17,
      19,    22,    32,    49,    51,    54,    57,    60,    64,    67,
      70,    77,   100,   161,    52,    55,    58,    61,    65,    68,
      71,    78,   101,   162,     6,     9,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,    50,    47,    53,    56,
      59,    62,    66,    69,    72,    79,   102,   163,    49,     6,
      38,    38,    38,     4,    37,    63,    38,    38,     7,     7,
       8,   103,     7,     4,    73,    80,   104,   164,     5,    18,
      74,    20,    82,     7,   112,    33,   167,    48,    75,     9,
      83,     6,   113,     6,   168,     6,     7,     5,     5,    81,
      23,   134,   105,     5,   165,    51,    54,    57,    60,    64,
      67,    70,   100,   161,   183,    76,    84,    21,    95,   135,
       6,     7,   122,   169,    34,   170,     6,     9,    39,     8,
      96,     9,     5,   114,   123,     6,    38,   171,     6,   184,
      85,     5,   136,    24,   137,    23,   131,   106,     5,   166,
     183,    38,    97,    38,   138,     6,   132,     6,   122,   172,
      35,   173,    86,     8,     5,   115,     5,   124,     6,    38,
     174,     9,     6,    98,   139,    25,   140,   133,   137,   107,
       5,    87,    38,    39,   141,     6,    38,     6,   122,   175,
      38,    99,     5,   116,   125,     6,     8,   176,   177,   179,
      88,    10,   142,    26,   143,   140,   108,   178,   180,     6,
      38,   144,     6,     6,   122,    10,    37,    38,    39,   181,
      89,     5,   117,   126,     6,     6,    10,    38,   145,    27,
     146,   143,   109,   182,    90,    39,   147,     6,     6,   122,
     181,     6,     5,   118,   127,     6,    91,   148,    28,   149,
     146,   110,    38,    39,   150,     6,     6,   122,    92,     5,
     119,   128,     6,     6,   151,    29,   152,   149,   111,    93,
      39,   153,     6,     6,   122,    38,     5,   120,   129,    10,
      94,   154,    30,   155,   152,    10,    38,   156,     6,     6,
       5,   121,   130,   157,    31,   158,   155,    37,   159,     9,
       9,     5,   160,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    42,    41,    44,    45,    46,    47,    48,    43,
      50,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    52,    53,    51,    55,    56,    54,    58,    59,
      57,    61,    62,    60,    63,    63,    65,    66,    64,    68,
      69,    67,    71,    72,    73,    70,    75,    76,    74,    78,
      79,    80,    81,    77,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    82,    96,    97,    98,
      99,    95,   101,   102,   100,   104,   105,   106,   107,   108,
     109,   110,   111,   103,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   112,   123,   124,   125,   126,   127,   128,
     129,   130,   122,   132,   133,   131,   135,   136,   134,   138,
     139,   137,   141,   142,   140,   144,   145,   143,   147,   148,
     146,   150,   151,   149,   153,   154,   152,   156,   157,   155,
     159,   160,   158,   162,   163,   164,   165,   166,   161,   168,
     169,   167,   171,   172,   170,   174,   175,   173,   176,   176,
     178,   177,   180,   179,   182,   181,   181,   181,   181,   184,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     0,     0,     0,     0,    16,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     1,     1,     0,     0,     5,     0,
       0,     5,     0,     0,     0,     8,     0,     0,     5,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     9,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     0,     0,     0,    14,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     1,     1,
       0,     3,     0,     4,     0,     4,     1,     1,     1,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 56 "JSONParser.y"
                    {printf("{\n");}
#line 1765 "JSONParser.tab.c"
    break;

  case 3: /* jsonfile: OBRACKETS $@1 ruleLAST_RESULT CBRACKETS  */
#line 56 "JSONParser.y"
                                                               {printf("}\n");}
#line 1771 "JSONParser.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 59 "JSONParser.y"
                      {printf("\"last\"");}
#line 1777 "JSONParser.tab.c"
    break;

  case 5: /* $@3: %empty  */
#line 59 "JSONParser.y"
                                                  {printf(":");}
#line 1783 "JSONParser.tab.c"
    break;

  case 6: /* $@4: %empty  */
#line 59 "JSONParser.y"
                                                                           {printf("{\n");}
#line 1789 "JSONParser.tab.c"
    break;

  case 7: /* $@5: %empty  */
#line 59 "JSONParser.y"
                                                                                                               {printf("}\n");}
#line 1795 "JSONParser.tab.c"
    break;

  case 8: /* $@6: %empty  */
#line 59 "JSONParser.y"
                                                                                                                                                   {printf(":");}
#line 1801 "JSONParser.tab.c"
    break;

  case 9: /* ruleLAST_RESULT: LAST $@2 COLON $@3 OBRACKETS $@4 ruleLAST CBRACKETS $@5 COMMA ACTIVE COLON $@6 OBRACKETS ruleACTIVE CBRACKETS  */
#line 59 "JSONParser.y"
                                                                                                                                                                                                 {printf("}\n");}
#line 1807 "JSONParser.tab.c"
    break;

  case 10: /* $@7: %empty  */
#line 62 "JSONParser.y"
                         {printf(",\n");}
#line 1813 "JSONParser.tab.c"
    break;

  case 22: /* $@8: %empty  */
#line 75 "JSONParser.y"
                     {printf("\"gameId\"");}
#line 1819 "JSONParser.tab.c"
    break;

  case 23: /* $@9: %empty  */
#line 75 "JSONParser.y"
                                                   {printf(":");}
#line 1825 "JSONParser.tab.c"
    break;

  case 24: /* ruleGAME_ID: GAME_ID $@8 COLON $@9 INT  */
#line 75 "JSONParser.y"
                                                                      {checkGameID(yytext);printf("\%s", yytext);}
#line 1831 "JSONParser.tab.c"
    break;

  case 25: /* $@10: %empty  */
#line 77 "JSONParser.y"
                     {printf("\"drawId\"");}
#line 1837 "JSONParser.tab.c"
    break;

  case 26: /* $@11: %empty  */
#line 77 "JSONParser.y"
                                                   {printf(":");}
#line 1843 "JSONParser.tab.c"
    break;

  case 27: /* ruleDRAW_ID: DRAW_ID $@10 COLON $@11 INT  */
#line 77 "JSONParser.y"
                                                                      {printf("\%s", yytext);}
#line 1849 "JSONParser.tab.c"
    break;

  case 28: /* $@12: %empty  */
#line 79 "JSONParser.y"
                         {printf("\"drawTime\"");}
#line 1855 "JSONParser.tab.c"
    break;

  case 29: /* $@13: %empty  */
#line 79 "JSONParser.y"
                                                         {printf(":");}
#line 1861 "JSONParser.tab.c"
    break;

  case 30: /* ruleDRAW_TIME: DRAW_TIME $@12 COLON $@13 INT  */
#line 79 "JSONParser.y"
                                                                            {printf("\%s", yytext);}
#line 1867 "JSONParser.tab.c"
    break;

  case 31: /* $@14: %empty  */
#line 82 "JSONParser.y"
                   {printf("\"status\"");}
#line 1873 "JSONParser.tab.c"
    break;

  case 32: /* $@15: %empty  */
#line 82 "JSONParser.y"
                                                 {printf(":");}
#line 1879 "JSONParser.tab.c"
    break;

  case 34: /* ruleSTATUS_2: STRING  */
#line 84 "JSONParser.y"
                     {printf("\%s", yytext);}
#line 1885 "JSONParser.tab.c"
    break;

  case 35: /* ruleSTATUS_2: ACTIVE  */
#line 85 "JSONParser.y"
        {printf("\%s", yytext);}
#line 1891 "JSONParser.tab.c"
    break;

  case 36: /* $@16: %empty  */
#line 88 "JSONParser.y"
                           {printf("\"drawBreak\"");}
#line 1897 "JSONParser.tab.c"
    break;

  case 37: /* $@17: %empty  */
#line 88 "JSONParser.y"
                                                            {printf(":");}
#line 1903 "JSONParser.tab.c"
    break;

  case 38: /* ruleDRAW_BREAK: DRAW_BREAK $@16 COLON $@17 INT  */
#line 88 "JSONParser.y"
                                                                               {printf("\%s", yytext);}
#line 1909 "JSONParser.tab.c"
    break;

  case 39: /* $@18: %empty  */
#line 90 "JSONParser.y"
                             {printf("\"visualDraw\"");}
#line 1915 "JSONParser.tab.c"
    break;

  case 40: /* $@19: %empty  */
#line 90 "JSONParser.y"
                                                               {printf(":");}
#line 1921 "JSONParser.tab.c"
    break;

  case 41: /* ruleVISUAL_DRAW: VISUAL_DRAW $@18 COLON $@19 INT  */
#line 90 "JSONParser.y"
                                                                                  {printf("\%s", yytext);}
#line 1927 "JSONParser.tab.c"
    break;

  case 42: /* $@20: %empty  */
#line 92 "JSONParser.y"
                               {printf("\"pricePoints\"");}
#line 1933 "JSONParser.tab.c"
    break;

  case 43: /* $@21: %empty  */
#line 92 "JSONParser.y"
                                                                  {printf(":");}
#line 1939 "JSONParser.tab.c"
    break;

  case 44: /* $@22: %empty  */
#line 92 "JSONParser.y"
                                                                                           {printf("{\n");}
#line 1945 "JSONParser.tab.c"
    break;

  case 45: /* rulePRICE_POINTS: PRICE_POINTS $@20 COLON $@21 OBRACKETS $@22 ruleAMOUNT CBRACKETS  */
#line 92 "JSONParser.y"
                                                                                                                                 {printf("}\n");}
#line 1951 "JSONParser.tab.c"
    break;

  case 46: /* $@23: %empty  */
#line 94 "JSONParser.y"
                   {printf("\"amount\"");}
#line 1957 "JSONParser.tab.c"
    break;

  case 47: /* $@24: %empty  */
#line 94 "JSONParser.y"
                                                 {printf(":");}
#line 1963 "JSONParser.tab.c"
    break;

  case 48: /* ruleAMOUNT: AMOUNT $@23 COLON $@24 DOUBLE  */
#line 94 "JSONParser.y"
                                                                       {printf("\%s", yytext);}
#line 1969 "JSONParser.tab.c"
    break;

  case 49: /* $@25: %empty  */
#line 96 "JSONParser.y"
                                  {printf("\"winningNumbers\"");}
#line 1975 "JSONParser.tab.c"
    break;

  case 50: /* $@26: %empty  */
#line 96 "JSONParser.y"
                                                                        {printf(":");}
#line 1981 "JSONParser.tab.c"
    break;

  case 51: /* $@27: %empty  */
#line 96 "JSONParser.y"
                                                                                                 {printf("{\n");}
#line 1987 "JSONParser.tab.c"
    break;

  case 52: /* $@28: %empty  */
#line 96 "JSONParser.y"
                                                                                                                                 {printf(",\n");}
#line 1993 "JSONParser.tab.c"
    break;

  case 53: /* ruleWINNING_NUMS: WINNING_NUMBERS $@25 COLON $@26 OBRACKETS $@27 ruleLIST COMMA $@28 ruleBONUS CBRACKETS  */
#line 96 "JSONParser.y"
                                                                                                                                                                       {printf("}\n");}
#line 1999 "JSONParser.tab.c"
    break;

  case 54: /* $@29: %empty  */
#line 98 "JSONParser.y"
               {printf("\"list\"");}
#line 2005 "JSONParser.tab.c"
    break;

  case 55: /* $@30: %empty  */
#line 98 "JSONParser.y"
                                           {printf(":");}
#line 2011 "JSONParser.tab.c"
    break;

  case 56: /* $@31: %empty  */
#line 98 "JSONParser.y"
                                                                  {printf("[\n");}
#line 2017 "JSONParser.tab.c"
    break;

  case 57: /* $@32: %empty  */
#line 98 "JSONParser.y"
                                                                                       {addNumber(yytext);printf("\%s", yytext);}
#line 2023 "JSONParser.tab.c"
    break;

  case 58: /* $@33: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                        {printf(",\n");}
#line 2029 "JSONParser.tab.c"
    break;

  case 59: /* $@34: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                                             {addNumber(yytext);printf("\%s", yytext);}
#line 2035 "JSONParser.tab.c"
    break;

  case 60: /* $@35: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                                                                                              {printf(",\n");}
#line 2041 "JSONParser.tab.c"
    break;

  case 61: /* $@36: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                                                                                                                   {addNumber(yytext);printf("\%s", yytext);}
#line 2047 "JSONParser.tab.c"
    break;

  case 62: /* $@37: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                                                                                                                                                                    {printf(",\n");}
#line 2053 "JSONParser.tab.c"
    break;

  case 63: /* $@38: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                                                                                                                                                                                         {addNumber(yytext);printf("\%s", yytext);}
#line 2059 "JSONParser.tab.c"
    break;

  case 64: /* $@39: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                                                                                                                                                                                                                                          {printf(",\n");}
#line 2065 "JSONParser.tab.c"
    break;

  case 65: /* $@40: %empty  */
#line 98 "JSONParser.y"
                                                                                                                                                                                                                                                                                                                                                                               {addNumber(yytext);printf("\%s", yytext);checkWinningNumbers(winningNums);}
#line 2071 "JSONParser.tab.c"
    break;

  case 66: /* ruleLIST: LIST $@29 COLON $@30 OBRACES $@31 INT $@32 COMMA $@33 INT $@34 COMMA $@35 INT $@36 COMMA $@37 INT $@38 COMMA $@39 INT $@40 CBRACES  */
#line 98 "JSONParser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   {printf("]\n");}
#line 2077 "JSONParser.tab.c"
    break;

  case 67: /* $@41: %empty  */
#line 100 "JSONParser.y"
                 {printf("\"bonus\"");}
#line 2083 "JSONParser.tab.c"
    break;

  case 68: /* $@42: %empty  */
#line 100 "JSONParser.y"
                                              {printf(":");}
#line 2089 "JSONParser.tab.c"
    break;

  case 69: /* $@43: %empty  */
#line 100 "JSONParser.y"
                                                                     {printf("[\n");}
#line 2095 "JSONParser.tab.c"
    break;

  case 70: /* $@44: %empty  */
#line 100 "JSONParser.y"
                                                                                          {printf("\%s", yytext);}
#line 2101 "JSONParser.tab.c"
    break;

  case 71: /* ruleBONUS: BONUS $@41 COLON $@42 OBRACES $@43 INT $@44 CBRACES  */
#line 100 "JSONParser.y"
                                                                                                                           {printf("]\n");}
#line 2107 "JSONParser.tab.c"
    break;

  case 72: /* $@45: %empty  */
#line 102 "JSONParser.y"
                                  {printf("\"prizeCategories\"");}
#line 2113 "JSONParser.tab.c"
    break;

  case 73: /* $@46: %empty  */
#line 102 "JSONParser.y"
                                                                         {printf(":");}
#line 2119 "JSONParser.tab.c"
    break;

  case 75: /* $@47: %empty  */
#line 104 "JSONParser.y"
                         {printf("[\n");}
#line 2125 "JSONParser.tab.c"
    break;

  case 76: /* $@48: %empty  */
#line 104 "JSONParser.y"
                                                                {printf(",\n");}
#line 2131 "JSONParser.tab.c"
    break;

  case 77: /* $@49: %empty  */
#line 104 "JSONParser.y"
                                                                                                       {printf(",\n");}
#line 2137 "JSONParser.tab.c"
    break;

  case 78: /* $@50: %empty  */
#line 104 "JSONParser.y"
                                                                                                                                              {printf(",\n");}
#line 2143 "JSONParser.tab.c"
    break;

  case 79: /* $@51: %empty  */
#line 104 "JSONParser.y"
                                                                                                                                                                                     {printf(",\n");}
#line 2149 "JSONParser.tab.c"
    break;

  case 80: /* $@52: %empty  */
#line 104 "JSONParser.y"
                                                                                                                                                                                                                            {printf(",\n");}
#line 2155 "JSONParser.tab.c"
    break;

  case 81: /* $@53: %empty  */
#line 104 "JSONParser.y"
                                                                                                                                                                                                                                                                   {printf(",\n");}
#line 2161 "JSONParser.tab.c"
    break;

  case 82: /* $@54: %empty  */
#line 104 "JSONParser.y"
                                                                                                                                                                                                                                                                                                          {printf(",\n");}
#line 2167 "JSONParser.tab.c"
    break;

  case 83: /* rulePRIZE_ARRAY: OBRACES $@47 ruleFIRST_PRIZE COMMA $@48 ruleREST_PRIZES COMMA $@49 ruleREST_PRIZES COMMA $@50 ruleREST_PRIZES COMMA $@51 ruleREST_PRIZES COMMA $@52 ruleREST_PRIZES COMMA $@53 ruleREST_PRIZES COMMA $@54 ruleREST_PRIZES CBRACES  */
#line 104 "JSONParser.y"
                                                                                                                                                                                                                                                                                                                                                   {PrizeCatCounter=0; printf("]\n");}
#line 2173 "JSONParser.tab.c"
    break;

  case 84: /* $@55: %empty  */
#line 106 "JSONParser.y"
                           {printf("{\n");}
#line 2179 "JSONParser.tab.c"
    break;

  case 85: /* $@56: %empty  */
#line 106 "JSONParser.y"
                                                           {printf(",\n");}
#line 2185 "JSONParser.tab.c"
    break;

  case 86: /* $@57: %empty  */
#line 106 "JSONParser.y"
                                                                                               {printf(",\n");}
#line 2191 "JSONParser.tab.c"
    break;

  case 87: /* $@58: %empty  */
#line 106 "JSONParser.y"
                                                                                                                                  {printf(",\n");}
#line 2197 "JSONParser.tab.c"
    break;

  case 88: /* $@59: %empty  */
#line 106 "JSONParser.y"
                                                                                                                                                                         {printf(",\n");}
#line 2203 "JSONParser.tab.c"
    break;

  case 89: /* $@60: %empty  */
#line 106 "JSONParser.y"
                                                                                                                                                                                                            {printf(",\n");}
#line 2209 "JSONParser.tab.c"
    break;

  case 90: /* $@61: %empty  */
#line 106 "JSONParser.y"
                                                                                                                                                                                                                                             {printf(",\n");}
#line 2215 "JSONParser.tab.c"
    break;

  case 91: /* $@62: %empty  */
#line 106 "JSONParser.y"
                                                                                                                                                                                                                                                                                   {printf(",\n");}
#line 2221 "JSONParser.tab.c"
    break;

  case 92: /* $@63: %empty  */
#line 106 "JSONParser.y"
                                                                                                                                                                                                                                                                                                                       {printf(",\n");}
#line 2227 "JSONParser.tab.c"
    break;

  case 93: /* ruleFIRST_PRIZE: OBRACKETS $@55 ruleID_1 COMMA $@56 ruleDIVIDENT COMMA $@57 ruleWINNERS COMMA $@58 ruleDISTRIBUTED COMMA $@59 ruleJACKPOT COMMA $@60 ruleFIXED COMMA $@61 ruleCATEG_TYPE COMMA $@62 ruleGAMETYPE COMMA $@63 ruleMIN_DIS CBRACKETS  */
#line 106 "JSONParser.y"
                                                                                                                                                                                                                                                                                                                                                              {printf("}\n");}
#line 2233 "JSONParser.tab.c"
    break;

  case 94: /* $@64: %empty  */
#line 108 "JSONParser.y"
                           {printf("{\n");}
#line 2239 "JSONParser.tab.c"
    break;

  case 95: /* $@65: %empty  */
#line 108 "JSONParser.y"
                                                         {printf(",\n");}
#line 2245 "JSONParser.tab.c"
    break;

  case 96: /* $@66: %empty  */
#line 108 "JSONParser.y"
                                                                                             {printf(",\n");}
#line 2251 "JSONParser.tab.c"
    break;

  case 97: /* $@67: %empty  */
#line 108 "JSONParser.y"
                                                                                                                                {printf(",\n");}
#line 2257 "JSONParser.tab.c"
    break;

  case 98: /* $@68: %empty  */
#line 108 "JSONParser.y"
                                                                                                                                                                       {printf(",\n");}
#line 2263 "JSONParser.tab.c"
    break;

  case 99: /* $@69: %empty  */
#line 108 "JSONParser.y"
                                                                                                                                                                                                          {printf(",\n");}
#line 2269 "JSONParser.tab.c"
    break;

  case 100: /* $@70: %empty  */
#line 108 "JSONParser.y"
                                                                                                                                                                                                                                           {printf(",\n");}
#line 2275 "JSONParser.tab.c"
    break;

  case 101: /* $@71: %empty  */
#line 108 "JSONParser.y"
                                                                                                                                                                                                                                                                                 {printf(",\n");}
#line 2281 "JSONParser.tab.c"
    break;

  case 102: /* ruleREST_PRIZES: OBRACKETS $@64 ruleID COMMA $@65 ruleDIVIDENT COMMA $@66 ruleWINNERS COMMA $@67 ruleDISTRIBUTED COMMA $@68 ruleJACKPOT COMMA $@69 ruleFIXED COMMA $@70 ruleCATEG_TYPE COMMA $@71 ruleGAMETYPE CBRACKETS  */
#line 108 "JSONParser.y"
                                                                                                                                                                                                                                                                                                                         {printf("}\n");}
#line 2287 "JSONParser.tab.c"
    break;

  case 103: /* $@72: %empty  */
#line 110 "JSONParser.y"
           {incPrizeCatCntr();printf("\"id\"");}
#line 2293 "JSONParser.tab.c"
    break;

  case 104: /* $@73: %empty  */
#line 110 "JSONParser.y"
                                                       {printf(":");}
#line 2299 "JSONParser.tab.c"
    break;

  case 105: /* ruleID: ID $@72 COLON $@73 INT  */
#line 110 "JSONParser.y"
                                                                          {printf("\%s", yytext);}
#line 2305 "JSONParser.tab.c"
    break;

  case 106: /* $@74: %empty  */
#line 111 "JSONParser.y"
             {incPrizeCatCntr();printf("\"id\"");}
#line 2311 "JSONParser.tab.c"
    break;

  case 107: /* $@75: %empty  */
#line 111 "JSONParser.y"
                                                         {printf(":");}
#line 2317 "JSONParser.tab.c"
    break;

  case 108: /* ruleID_1: ID $@74 COLON $@75 INT  */
#line 111 "JSONParser.y"
                                                                            {printf("\%s", yytext);}
#line 2323 "JSONParser.tab.c"
    break;

  case 109: /* $@76: %empty  */
#line 112 "JSONParser.y"
                       {printf("\"divident\"");}
#line 2329 "JSONParser.tab.c"
    break;

  case 110: /* $@77: %empty  */
#line 112 "JSONParser.y"
                                                       {printf(":");}
#line 2335 "JSONParser.tab.c"
    break;

  case 111: /* ruleDIVIDENT: DIVIDENT $@76 COLON $@77 DOUBLE  */
#line 112 "JSONParser.y"
                                                                             {printf("\%s", yytext);}
#line 2341 "JSONParser.tab.c"
    break;

  case 112: /* $@78: %empty  */
#line 113 "JSONParser.y"
                     {printf("\"winners\"");}
#line 2347 "JSONParser.tab.c"
    break;

  case 113: /* $@79: %empty  */
#line 113 "JSONParser.y"
                                                    {printf(":");}
#line 2353 "JSONParser.tab.c"
    break;

  case 114: /* ruleWINNERS: WINNERS $@78 COLON $@79 INT  */
#line 113 "JSONParser.y"
                                                                       {printf("\%s", yytext);}
#line 2359 "JSONParser.tab.c"
    break;

  case 115: /* $@80: %empty  */
#line 114 "JSONParser.y"
                             {printf("\"distributed\"");}
#line 2365 "JSONParser.tab.c"
    break;

  case 116: /* $@81: %empty  */
#line 114 "JSONParser.y"
                                                                {printf(":");}
#line 2371 "JSONParser.tab.c"
    break;

  case 117: /* ruleDISTRIBUTED: DISTRIBUTED $@80 COLON $@81 DOUBLE  */
#line 114 "JSONParser.y"
                                                                                      {printf("\%s", yytext);}
#line 2377 "JSONParser.tab.c"
    break;

  case 118: /* $@82: %empty  */
#line 115 "JSONParser.y"
                     {printf("\"jackpot\"");}
#line 2383 "JSONParser.tab.c"
    break;

  case 119: /* $@83: %empty  */
#line 115 "JSONParser.y"
                                                    {printf(":");}
#line 2389 "JSONParser.tab.c"
    break;

  case 120: /* ruleJACKPOT: JACKPOT $@82 COLON $@83 DOUBLE  */
#line 115 "JSONParser.y"
                                                                          {printf("\%s", yytext);}
#line 2395 "JSONParser.tab.c"
    break;

  case 121: /* $@84: %empty  */
#line 116 "JSONParser.y"
                 {printf("\"fixed\"");}
#line 2401 "JSONParser.tab.c"
    break;

  case 122: /* $@85: %empty  */
#line 116 "JSONParser.y"
                                              {printf(":");}
#line 2407 "JSONParser.tab.c"
    break;

  case 123: /* ruleFIXED: FIXED $@84 COLON $@85 DOUBLE  */
#line 116 "JSONParser.y"
                                                                    {printf("\%s", yytext);}
#line 2413 "JSONParser.tab.c"
    break;

  case 124: /* $@86: %empty  */
#line 117 "JSONParser.y"
                           {printf("\"categoryType\"");}
#line 2419 "JSONParser.tab.c"
    break;

  case 125: /* $@87: %empty  */
#line 117 "JSONParser.y"
                                                               {printf(":");}
#line 2425 "JSONParser.tab.c"
    break;

  case 126: /* ruleCATEG_TYPE: CATEG_TYPE $@86 COLON $@87 INT  */
#line 117 "JSONParser.y"
                                                                                  {checkCatType(yytext);printf("\%s", yytext);}
#line 2431 "JSONParser.tab.c"
    break;

  case 127: /* $@88: %empty  */
#line 118 "JSONParser.y"
                       {printf("\"gameType\"");}
#line 2437 "JSONParser.tab.c"
    break;

  case 128: /* $@89: %empty  */
#line 118 "JSONParser.y"
                                                       {printf(":");}
#line 2443 "JSONParser.tab.c"
    break;

  case 129: /* ruleGAMETYPE: GAMETYPE $@88 COLON $@89 STRING  */
#line 118 "JSONParser.y"
                                                                             {printf("\%s", yytext);}
#line 2449 "JSONParser.tab.c"
    break;

  case 130: /* $@90: %empty  */
#line 119 "JSONParser.y"
                                 {printf("\"minimumDistributed\"");}
#line 2455 "JSONParser.tab.c"
    break;

  case 131: /* $@91: %empty  */
#line 119 "JSONParser.y"
                                                                           {printf(":");}
#line 2461 "JSONParser.tab.c"
    break;

  case 132: /* ruleMIN_DIS: MINIMUM_DISTRIBUTED $@90 COLON $@91 DOUBLE  */
#line 119 "JSONParser.y"
                                                                                                 {printf("\%s", yytext);}
#line 2467 "JSONParser.tab.c"
    break;

  case 133: /* $@92: %empty  */
#line 121 "JSONParser.y"
                                  {printf("\"wagerStatistics\"");}
#line 2473 "JSONParser.tab.c"
    break;

  case 134: /* $@93: %empty  */
#line 121 "JSONParser.y"
                                                                         {printf(":");}
#line 2479 "JSONParser.tab.c"
    break;

  case 135: /* $@94: %empty  */
#line 121 "JSONParser.y"
                                                                                                  {printf("{\n");}
#line 2485 "JSONParser.tab.c"
    break;

  case 136: /* $@95: %empty  */
#line 121 "JSONParser.y"
                                                                                                                                     {printf(",");}
#line 2491 "JSONParser.tab.c"
    break;

  case 137: /* $@96: %empty  */
#line 121 "JSONParser.y"
                                                                                                                                                                     {printf(",");}
#line 2497 "JSONParser.tab.c"
    break;

  case 138: /* ruleWAGER_STATS: WAGER_STATISTICS $@92 COLON $@93 OBRACKETS $@94 ruleCOLUMNS COMMA $@95 ruleWAGERS COMMA $@96 ruleADDON CBRACKETS  */
#line 121 "JSONParser.y"
                                                                                                                                                                                                        {printf("}\n");}
#line 2503 "JSONParser.tab.c"
    break;

  case 139: /* $@97: %empty  */
#line 123 "JSONParser.y"
                     {printf("\"columns\"");}
#line 2509 "JSONParser.tab.c"
    break;

  case 140: /* $@98: %empty  */
#line 123 "JSONParser.y"
                                                    {printf(":");}
#line 2515 "JSONParser.tab.c"
    break;

  case 141: /* ruleCOLUMNS: COLUMNS $@97 COLON $@98 INT  */
#line 123 "JSONParser.y"
                                                                       {printf("\%s", yytext);}
#line 2521 "JSONParser.tab.c"
    break;

  case 142: /* $@99: %empty  */
#line 125 "JSONParser.y"
                   {printf("\"wagers\"");}
#line 2527 "JSONParser.tab.c"
    break;

  case 143: /* $@100: %empty  */
#line 125 "JSONParser.y"
                                                 {printf(":");}
#line 2533 "JSONParser.tab.c"
    break;

  case 144: /* ruleWAGERS: WAGERS $@99 COLON $@100 INT  */
#line 125 "JSONParser.y"
                                                                    {printf("\%s", yytext);}
#line 2539 "JSONParser.tab.c"
    break;

  case 145: /* $@101: %empty  */
#line 127 "JSONParser.y"
                 {printf("\"addOn\"");}
#line 2545 "JSONParser.tab.c"
    break;

  case 146: /* $@102: %empty  */
#line 127 "JSONParser.y"
                                              {printf(":");}
#line 2551 "JSONParser.tab.c"
    break;

  case 150: /* $@103: %empty  */
#line 132 "JSONParser.y"
                        {printf("[\n");}
#line 2557 "JSONParser.tab.c"
    break;

  case 151: /* ruleEMPTYARRAY: OBRACES $@103 CBRACES  */
#line 132 "JSONParser.y"
                                                 {printf("]\n");}
#line 2563 "JSONParser.tab.c"
    break;

  case 152: /* $@104: %empty  */
#line 134 "JSONParser.y"
                   {printf("[\n");}
#line 2569 "JSONParser.tab.c"
    break;

  case 153: /* ruleARRAY: OBRACES $@104 ruleCONTEXT CBRACES  */
#line 134 "JSONParser.y"
                                                        {printf("]\n");}
#line 2575 "JSONParser.tab.c"
    break;

  case 154: /* $@105: %empty  */
#line 136 "JSONParser.y"
                               {printf(",\n");}
#line 2581 "JSONParser.tab.c"
    break;

  case 156: /* ruleCONTEXT: INT  */
#line 137 "JSONParser.y"
     {printf("\%s", yytext);}
#line 2587 "JSONParser.tab.c"
    break;

  case 157: /* ruleCONTEXT: STRING  */
#line 138 "JSONParser.y"
        {printf("\%s", yytext);}
#line 2593 "JSONParser.tab.c"
    break;

  case 158: /* ruleCONTEXT: DOUBLE  */
#line 139 "JSONParser.y"
        {printf("\%s", yytext);}
#line 2599 "JSONParser.tab.c"
    break;

  case 159: /* $@106: %empty  */
#line 143 "JSONParser.y"
                             {printf(",\n");}
#line 2605 "JSONParser.tab.c"
    break;


#line 2609 "JSONParser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 155 "JSONParser.y"



void incPrizeCatCntr(void)
{
	PrizeCatCounter++;
	if(PrizeCatCounter>8){
		errors++;
		printf("\nError in line %i \nMore than 8 PrizeCategories", line_num);
		exit(EXIT_FAILURE);
	}
}

void addNumber(char* n)
{
	if(win_array_index>4){
		errors++;
		printf("\nError in line %i \nMore than 5 Winning Numbers", line_num);
		exit(EXIT_FAILURE);
	}
	else{
	winningNums[win_array_index]=atoi(n);
	win_array_index++;
	}
}

void checkGameID(char* l)
{
		int gameid;
		gameid=atoi(l);
		printf("GameId=%d\n",gameid);
		if(gameid!=1100&&gameid!=1110&&gameid!=2100&&gameid!=2101&&gameid!=5103&&gameid!=5104&&gameid!=5106){
			errors++;
			printf("\nError in line %i \nWrong GameID", line_num);
			exit(EXIT_FAILURE);
		}
		
}



void checkWinningNumbers(int Array[]){
	int i;
	for(i=0; i<5; i++){
		if(Array[i]<1||Array[i]>45){
		errors++;
		printf("\nError in line %i \nWinning Numbers Bigger than 45 or less than 1", line_num);	
		exit(EXIT_FAILURE);
		}
	}
}

void checkCatType(char* p){
	if(atoi(p)!=0&&atoi(p)!=1){
		errors++;
		printf("\nError in line %i \nIncorrect Category Type", line_num);
		exit(EXIT_FAILURE);
	}
}



int main (int argc, char **argv) {
	FILE *jfile = fopen(argv[1], "r");
	yyin = jfile;
	yyparse();
	if(errors!=0)
	{
		printf("\nError in line %i", errorline);
		exit(EXIT_FAILURE);}
	else
	{
		printf("\n\n\t\t\t\tSuccesful Parse!\n");
		return 0;
	}
	}

void yyerror (const char *s) {fprintf (stderr, "%s\nin line: %d\n", s, line_num);} 
