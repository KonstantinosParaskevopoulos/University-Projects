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
#line 1 "2nd_Exc_Bison.y"

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
void checkWinningNumbers(int winArray[5]); //Function to Check if Winning Numbers are exactly 5 and between 1 and 45
void checkCatType(char* p); //Check if Category Type is 0 or 1

void yyerror(const char* s);

#line 98 "2nd_Exc_Bison.tab.c"

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

#include "2nd_Exc_Bison.tab.h"
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
  YYSYMBOL_GAME_ID_ATTRIBUTE = 12,         /* GAME_ID_ATTRIBUTE  */
  YYSYMBOL_DRAW_ID = 13,                   /* DRAW_ID  */
  YYSYMBOL_DRAW_TIME = 14,                 /* DRAW_TIME  */
  YYSYMBOL_STATUS = 15,                    /* STATUS  */
  YYSYMBOL_DRAW_BREAK = 16,                /* DRAW_BREAK  */
  YYSYMBOL_VISUAL_DRAW = 17,               /* VISUAL_DRAW  */
  YYSYMBOL_PRICE_POINTS = 18,              /* PRICE_POINTS  */
  YYSYMBOL_AMOUNT = 19,                    /* AMOUNT  */
  YYSYMBOL_WINNING_NUMBERS = 20,           /* WINNING_NUMBERS  */
  YYSYMBOL_LIST = 21,                      /* LIST  */
  YYSYMBOL_BONUS = 22,                     /* BONUS  */
  YYSYMBOL_PRIZE_CATEGORIES = 23,          /* PRIZE_CATEGORIES  */
  YYSYMBOL_ID = 24,                        /* ID  */
  YYSYMBOL_DIVIDENT = 25,                  /* DIVIDENT  */
  YYSYMBOL_WINNERS = 26,                   /* WINNERS  */
  YYSYMBOL_DISTRIBUTED = 27,               /* DISTRIBUTED  */
  YYSYMBOL_JACKPOT = 28,                   /* JACKPOT  */
  YYSYMBOL_FIXED = 29,                     /* FIXED  */
  YYSYMBOL_CATEG_TYPE = 30,                /* CATEG_TYPE  */
  YYSYMBOL_GAMETYPE = 31,                  /* GAMETYPE  */
  YYSYMBOL_MINIMUM_DISTRIBUTED = 32,       /* MINIMUM_DISTRIBUTED  */
  YYSYMBOL_WAGER_STATISTICS = 33,          /* WAGER_STATISTICS  */
  YYSYMBOL_COLUMNS = 34,                   /* COLUMNS  */
  YYSYMBOL_WAGERS = 35,                    /* WAGERS  */
  YYSYMBOL_ADDON = 36,                     /* ADDON  */
  YYSYMBOL_BOOLEAN = 37,                   /* BOOLEAN  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_INT = 39,                       /* INT  */
  YYSYMBOL_DOUBLE = 40,                    /* DOUBLE  */
  YYSYMBOL_CONTENT = 41,                   /* CONTENT  */
  YYSYMBOL_TOTALPAGES = 42,                /* TOTALPAGES  */
  YYSYMBOL_TOTALELEMENTS = 43,             /* TOTALELEMENTS  */
  YYSYMBOL_NUMBEROFELEMENTS = 44,          /* NUMBEROFELEMENTS  */
  YYSYMBOL_SORT = 45,                      /* SORT  */
  YYSYMBOL_DIRECTION = 46,                 /* DIRECTION  */
  YYSYMBOL_PROPERTY = 47,                  /* PROPERTY  */
  YYSYMBOL_IGNORECASE = 48,                /* IGNORECASE  */
  YYSYMBOL_NULLHANDLING = 49,              /* NULLHANDLING  */
  YYSYMBOL_DESCENDING = 50,                /* DESCENDING  */
  YYSYMBOL_ASCENDING = 51,                 /* ASCENDING  */
  YYSYMBOL_FIRST = 52,                     /* FIRST  */
  YYSYMBOL_SIZE = 53,                      /* SIZE  */
  YYSYMBOL_NUMBER = 54,                    /* NUMBER  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_jsonfile = 56,                  /* jsonfile  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_ruleFULLJSON = 58,              /* ruleFULLJSON  */
  YYSYMBOL_ruleLAST_RESULT = 59,           /* ruleLAST_RESULT  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_63_5 = 63,                      /* $@5  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_66_8 = 66,                      /* $@8  */
  YYSYMBOL_67_9 = 67,                      /* $@9  */
  YYSYMBOL_ruleRANGE_RESULT = 68,          /* ruleRANGE_RESULT  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_72_13 = 72,                     /* $@13  */
  YYSYMBOL_73_14 = 73,                     /* $@14  */
  YYSYMBOL_74_15 = 74,                     /* $@15  */
  YYSYMBOL_75_16 = 75,                     /* $@16  */
  YYSYMBOL_76_17 = 76,                     /* $@17  */
  YYSYMBOL_77_18 = 77,                     /* $@18  */
  YYSYMBOL_78_19 = 78,                     /* $@19  */
  YYSYMBOL_79_20 = 79,                     /* $@20  */
  YYSYMBOL_80_21 = 80,                     /* $@21  */
  YYSYMBOL_81_22 = 81,                     /* $@22  */
  YYSYMBOL_82_23 = 82,                     /* $@23  */
  YYSYMBOL_83_24 = 83,                     /* $@24  */
  YYSYMBOL_84_25 = 84,                     /* $@25  */
  YYSYMBOL_85_26 = 85,                     /* $@26  */
  YYSYMBOL_86_27 = 86,                     /* $@27  */
  YYSYMBOL_ruleCONTENT_0 = 87,             /* ruleCONTENT_0  */
  YYSYMBOL_88_28 = 88,                     /* $@28  */
  YYSYMBOL_89_29 = 89,                     /* $@29  */
  YYSYMBOL_90_30 = 90,                     /* $@30  */
  YYSYMBOL_ruleCONTENT_1 = 91,             /* ruleCONTENT_1  */
  YYSYMBOL_ruleCONTENT = 92,               /* ruleCONTENT  */
  YYSYMBOL_93_31 = 93,                     /* $@31  */
  YYSYMBOL_ruleACTIVE = 94,                /* ruleACTIVE  */
  YYSYMBOL_95_32 = 95,                     /* $@32  */
  YYSYMBOL_ruleLAST_1 = 96,                /* ruleLAST_1  */
  YYSYMBOL_97_33 = 97,                     /* $@33  */
  YYSYMBOL_ruleGAME_ID = 98,               /* ruleGAME_ID  */
  YYSYMBOL_99_34 = 99,                     /* $@34  */
  YYSYMBOL_100_35 = 100,                   /* $@35  */
  YYSYMBOL_ruleDRAW_ID = 101,              /* ruleDRAW_ID  */
  YYSYMBOL_102_36 = 102,                   /* $@36  */
  YYSYMBOL_103_37 = 103,                   /* $@37  */
  YYSYMBOL_ruleDRAW_TIME = 104,            /* ruleDRAW_TIME  */
  YYSYMBOL_105_38 = 105,                   /* $@38  */
  YYSYMBOL_106_39 = 106,                   /* $@39  */
  YYSYMBOL_ruleSTATUS = 107,               /* ruleSTATUS  */
  YYSYMBOL_108_40 = 108,                   /* $@40  */
  YYSYMBOL_109_41 = 109,                   /* $@41  */
  YYSYMBOL_ruleSTATUS_2 = 110,             /* ruleSTATUS_2  */
  YYSYMBOL_ruleDRAW_BREAK = 111,           /* ruleDRAW_BREAK  */
  YYSYMBOL_112_42 = 112,                   /* $@42  */
  YYSYMBOL_113_43 = 113,                   /* $@43  */
  YYSYMBOL_ruleVISUAL_DRAW = 114,          /* ruleVISUAL_DRAW  */
  YYSYMBOL_115_44 = 115,                   /* $@44  */
  YYSYMBOL_116_45 = 116,                   /* $@45  */
  YYSYMBOL_rulePRICE_POINTS = 117,         /* rulePRICE_POINTS  */
  YYSYMBOL_118_46 = 118,                   /* $@46  */
  YYSYMBOL_119_47 = 119,                   /* $@47  */
  YYSYMBOL_120_48 = 120,                   /* $@48  */
  YYSYMBOL_ruleAMOUNT = 121,               /* ruleAMOUNT  */
  YYSYMBOL_122_49 = 122,                   /* $@49  */
  YYSYMBOL_123_50 = 123,                   /* $@50  */
  YYSYMBOL_ruleWINNING_NUMS = 124,         /* ruleWINNING_NUMS  */
  YYSYMBOL_125_51 = 125,                   /* $@51  */
  YYSYMBOL_126_52 = 126,                   /* $@52  */
  YYSYMBOL_127_53 = 127,                   /* $@53  */
  YYSYMBOL_128_54 = 128,                   /* $@54  */
  YYSYMBOL_ruleLIST = 129,                 /* ruleLIST  */
  YYSYMBOL_130_55 = 130,                   /* $@55  */
  YYSYMBOL_131_56 = 131,                   /* $@56  */
  YYSYMBOL_132_57 = 132,                   /* $@57  */
  YYSYMBOL_133_58 = 133,                   /* $@58  */
  YYSYMBOL_134_59 = 134,                   /* $@59  */
  YYSYMBOL_135_60 = 135,                   /* $@60  */
  YYSYMBOL_136_61 = 136,                   /* $@61  */
  YYSYMBOL_137_62 = 137,                   /* $@62  */
  YYSYMBOL_138_63 = 138,                   /* $@63  */
  YYSYMBOL_139_64 = 139,                   /* $@64  */
  YYSYMBOL_140_65 = 140,                   /* $@65  */
  YYSYMBOL_141_66 = 141,                   /* $@66  */
  YYSYMBOL_ruleBONUS = 142,                /* ruleBONUS  */
  YYSYMBOL_143_67 = 143,                   /* $@67  */
  YYSYMBOL_144_68 = 144,                   /* $@68  */
  YYSYMBOL_145_69 = 145,                   /* $@69  */
  YYSYMBOL_146_70 = 146,                   /* $@70  */
  YYSYMBOL_rulePRIZE_CATEG = 147,          /* rulePRIZE_CATEG  */
  YYSYMBOL_148_71 = 148,                   /* $@71  */
  YYSYMBOL_149_72 = 149,                   /* $@72  */
  YYSYMBOL_rulePRIZE_ARRAY = 150,          /* rulePRIZE_ARRAY  */
  YYSYMBOL_151_73 = 151,                   /* $@73  */
  YYSYMBOL_152_74 = 152,                   /* $@74  */
  YYSYMBOL_153_75 = 153,                   /* $@75  */
  YYSYMBOL_154_76 = 154,                   /* $@76  */
  YYSYMBOL_155_77 = 155,                   /* $@77  */
  YYSYMBOL_156_78 = 156,                   /* $@78  */
  YYSYMBOL_157_79 = 157,                   /* $@79  */
  YYSYMBOL_158_80 = 158,                   /* $@80  */
  YYSYMBOL_ruleFIRST_PRIZE = 159,          /* ruleFIRST_PRIZE  */
  YYSYMBOL_160_81 = 160,                   /* $@81  */
  YYSYMBOL_161_82 = 161,                   /* $@82  */
  YYSYMBOL_162_83 = 162,                   /* $@83  */
  YYSYMBOL_163_84 = 163,                   /* $@84  */
  YYSYMBOL_164_85 = 164,                   /* $@85  */
  YYSYMBOL_165_86 = 165,                   /* $@86  */
  YYSYMBOL_166_87 = 166,                   /* $@87  */
  YYSYMBOL_167_88 = 167,                   /* $@88  */
  YYSYMBOL_168_89 = 168,                   /* $@89  */
  YYSYMBOL_ruleREST_PRIZES = 169,          /* ruleREST_PRIZES  */
  YYSYMBOL_170_90 = 170,                   /* $@90  */
  YYSYMBOL_171_91 = 171,                   /* $@91  */
  YYSYMBOL_172_92 = 172,                   /* $@92  */
  YYSYMBOL_173_93 = 173,                   /* $@93  */
  YYSYMBOL_174_94 = 174,                   /* $@94  */
  YYSYMBOL_175_95 = 175,                   /* $@95  */
  YYSYMBOL_176_96 = 176,                   /* $@96  */
  YYSYMBOL_177_97 = 177,                   /* $@97  */
  YYSYMBOL_ruleID = 178,                   /* ruleID  */
  YYSYMBOL_179_98 = 179,                   /* $@98  */
  YYSYMBOL_180_99 = 180,                   /* $@99  */
  YYSYMBOL_ruleID_1 = 181,                 /* ruleID_1  */
  YYSYMBOL_182_100 = 182,                  /* $@100  */
  YYSYMBOL_183_101 = 183,                  /* $@101  */
  YYSYMBOL_ruleDIVIDENT = 184,             /* ruleDIVIDENT  */
  YYSYMBOL_185_102 = 185,                  /* $@102  */
  YYSYMBOL_186_103 = 186,                  /* $@103  */
  YYSYMBOL_ruleWINNERS = 187,              /* ruleWINNERS  */
  YYSYMBOL_188_104 = 188,                  /* $@104  */
  YYSYMBOL_189_105 = 189,                  /* $@105  */
  YYSYMBOL_ruleDISTRIBUTED = 190,          /* ruleDISTRIBUTED  */
  YYSYMBOL_191_106 = 191,                  /* $@106  */
  YYSYMBOL_192_107 = 192,                  /* $@107  */
  YYSYMBOL_ruleJACKPOT = 193,              /* ruleJACKPOT  */
  YYSYMBOL_194_108 = 194,                  /* $@108  */
  YYSYMBOL_195_109 = 195,                  /* $@109  */
  YYSYMBOL_ruleFIXED = 196,                /* ruleFIXED  */
  YYSYMBOL_197_110 = 197,                  /* $@110  */
  YYSYMBOL_198_111 = 198,                  /* $@111  */
  YYSYMBOL_ruleCATEG_TYPE = 199,           /* ruleCATEG_TYPE  */
  YYSYMBOL_200_112 = 200,                  /* $@112  */
  YYSYMBOL_201_113 = 201,                  /* $@113  */
  YYSYMBOL_ruleGAMETYPE = 202,             /* ruleGAMETYPE  */
  YYSYMBOL_203_114 = 203,                  /* $@114  */
  YYSYMBOL_204_115 = 204,                  /* $@115  */
  YYSYMBOL_ruleMIN_DIS = 205,              /* ruleMIN_DIS  */
  YYSYMBOL_206_116 = 206,                  /* $@116  */
  YYSYMBOL_207_117 = 207,                  /* $@117  */
  YYSYMBOL_ruleWAGER_STATS = 208,          /* ruleWAGER_STATS  */
  YYSYMBOL_209_118 = 209,                  /* $@118  */
  YYSYMBOL_210_119 = 210,                  /* $@119  */
  YYSYMBOL_211_120 = 211,                  /* $@120  */
  YYSYMBOL_212_121 = 212,                  /* $@121  */
  YYSYMBOL_213_122 = 213,                  /* $@122  */
  YYSYMBOL_ruleCOLUMNS = 214,              /* ruleCOLUMNS  */
  YYSYMBOL_215_123 = 215,                  /* $@123  */
  YYSYMBOL_216_124 = 216,                  /* $@124  */
  YYSYMBOL_ruleWAGERS = 217,               /* ruleWAGERS  */
  YYSYMBOL_218_125 = 218,                  /* $@125  */
  YYSYMBOL_219_126 = 219,                  /* $@126  */
  YYSYMBOL_ruleADDON = 220,                /* ruleADDON  */
  YYSYMBOL_221_127 = 221,                  /* $@127  */
  YYSYMBOL_222_128 = 222,                  /* $@128  */
  YYSYMBOL_ruleJSONARRAY = 223,            /* ruleJSONARRAY  */
  YYSYMBOL_ruleEMPTYARRAY = 224,           /* ruleEMPTYARRAY  */
  YYSYMBOL_225_129 = 225,                  /* $@129  */
  YYSYMBOL_ruleARRAY = 226,                /* ruleARRAY  */
  YYSYMBOL_227_130 = 227,                  /* $@130  */
  YYSYMBOL_ruleCONTEXT = 228,              /* ruleCONTEXT  */
  YYSYMBOL_229_131 = 229,                  /* $@131  */
  YYSYMBOL_ruleTOTALPAGES = 230,           /* ruleTOTALPAGES  */
  YYSYMBOL_231_132 = 231,                  /* $@132  */
  YYSYMBOL_232_133 = 232,                  /* $@133  */
  YYSYMBOL_ruleTOTALELEMENTS = 233,        /* ruleTOTALELEMENTS  */
  YYSYMBOL_234_134 = 234,                  /* $@134  */
  YYSYMBOL_235_135 = 235,                  /* $@135  */
  YYSYMBOL_ruleLAST = 236,                 /* ruleLAST  */
  YYSYMBOL_237_136 = 237,                  /* $@136  */
  YYSYMBOL_238_137 = 238,                  /* $@137  */
  YYSYMBOL_ruleNUMBEROFELEMENTS = 239,     /* ruleNUMBEROFELEMENTS  */
  YYSYMBOL_240_138 = 240,                  /* $@138  */
  YYSYMBOL_241_139 = 241,                  /* $@139  */
  YYSYMBOL_ruleSORT = 242,                 /* ruleSORT  */
  YYSYMBOL_243_140 = 243,                  /* $@140  */
  YYSYMBOL_ruleDIRECTION = 244,            /* ruleDIRECTION  */
  YYSYMBOL_245_141 = 245,                  /* $@141  */
  YYSYMBOL_246_142 = 246,                  /* $@142  */
  YYSYMBOL_rulePROPERTY = 247,             /* rulePROPERTY  */
  YYSYMBOL_248_143 = 248,                  /* $@143  */
  YYSYMBOL_249_144 = 249,                  /* $@144  */
  YYSYMBOL_ruleIGNORECASE = 250,           /* ruleIGNORECASE  */
  YYSYMBOL_251_145 = 251,                  /* $@145  */
  YYSYMBOL_252_146 = 252,                  /* $@146  */
  YYSYMBOL_ruleNULLHANDLING = 253,         /* ruleNULLHANDLING  */
  YYSYMBOL_254_147 = 254,                  /* $@147  */
  YYSYMBOL_255_148 = 255,                  /* $@148  */
  YYSYMBOL_ruleDESCENDING = 256,           /* ruleDESCENDING  */
  YYSYMBOL_257_149 = 257,                  /* $@149  */
  YYSYMBOL_258_150 = 258,                  /* $@150  */
  YYSYMBOL_ruleASCENDING = 259,            /* ruleASCENDING  */
  YYSYMBOL_260_151 = 260,                  /* $@151  */
  YYSYMBOL_261_152 = 261,                  /* $@152  */
  YYSYMBOL_ruleFIRST = 262,                /* ruleFIRST  */
  YYSYMBOL_263_153 = 263,                  /* $@153  */
  YYSYMBOL_264_154 = 264,                  /* $@154  */
  YYSYMBOL_ruleSIZE = 265,                 /* ruleSIZE  */
  YYSYMBOL_266_155 = 266,                  /* $@155  */
  YYSYMBOL_267_156 = 267,                  /* $@156  */
  YYSYMBOL_ruleNUMBER = 268,               /* ruleNUMBER  */
  YYSYMBOL_269_157 = 269,                  /* $@157  */
  YYSYMBOL_270_158 = 270                   /* $@158  */
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
#define YYLAST   293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  257
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  465

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    76,    76,    76,    78,    79,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    86,    86,    86,    86,    88,    90,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   103,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   115,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   128,   128,   128,   130,   130,   130,
     132,   132,   132,   135,   135,   135,   137,   138,   141,   141,
     141,   143,   143,   143,   145,   145,   145,   145,   147,   147,
     147,   149,   149,   149,   149,   149,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   153,
     153,   153,   153,   153,   155,   155,   155,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   163,   163,   163,   164,   164,
     164,   165,   165,   165,   166,   166,   166,   167,   167,   167,
     168,   168,   168,   169,   169,   169,   170,   170,   170,   171,
     171,   171,   172,   172,   172,   174,   174,   174,   174,   174,
     174,   176,   176,   176,   178,   178,   178,   180,   180,   180,
     182,   183,   185,   185,   187,   187,   189,   189,   190,   191,
     192,   197,   197,   197,   198,   198,   198,   199,   199,   199,
     200,   200,   200,   203,   203,   204,   205,   206,   207,   208,
     209,   211,   211,   211,   212,   212,   212,   213,   213,   213,
     214,   214,   214,   215,   215,   215,   216,   216,   216,   218,
     218,   218,   219,   219,   219,   220,   220,   220
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
  "GAME_ID", "GAME_ID_ATTRIBUTE", "DRAW_ID", "DRAW_TIME", "STATUS",
  "DRAW_BREAK", "VISUAL_DRAW", "PRICE_POINTS", "AMOUNT", "WINNING_NUMBERS",
  "LIST", "BONUS", "PRIZE_CATEGORIES", "ID", "DIVIDENT", "WINNERS",
  "DISTRIBUTED", "JACKPOT", "FIXED", "CATEG_TYPE", "GAMETYPE",
  "MINIMUM_DISTRIBUTED", "WAGER_STATISTICS", "COLUMNS", "WAGERS", "ADDON",
  "BOOLEAN", "STRING", "INT", "DOUBLE", "CONTENT", "TOTALPAGES",
  "TOTALELEMENTS", "NUMBEROFELEMENTS", "SORT", "DIRECTION", "PROPERTY",
  "IGNORECASE", "NULLHANDLING", "DESCENDING", "ASCENDING", "FIRST", "SIZE",
  "NUMBER", "$accept", "jsonfile", "$@1", "ruleFULLJSON",
  "ruleLAST_RESULT", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "ruleRANGE_RESULT", "$@10", "$@11", "$@12", "$@13", "$@14",
  "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23",
  "$@24", "$@25", "$@26", "$@27", "ruleCONTENT_0", "$@28", "$@29", "$@30",
  "ruleCONTENT_1", "ruleCONTENT", "$@31", "ruleACTIVE", "$@32",
  "ruleLAST_1", "$@33", "ruleGAME_ID", "$@34", "$@35", "ruleDRAW_ID",
  "$@36", "$@37", "ruleDRAW_TIME", "$@38", "$@39", "ruleSTATUS", "$@40",
  "$@41", "ruleSTATUS_2", "ruleDRAW_BREAK", "$@42", "$@43",
  "ruleVISUAL_DRAW", "$@44", "$@45", "rulePRICE_POINTS", "$@46", "$@47",
  "$@48", "ruleAMOUNT", "$@49", "$@50", "ruleWINNING_NUMS", "$@51", "$@52",
  "$@53", "$@54", "ruleLIST", "$@55", "$@56", "$@57", "$@58", "$@59",
  "$@60", "$@61", "$@62", "$@63", "$@64", "$@65", "$@66", "ruleBONUS",
  "$@67", "$@68", "$@69", "$@70", "rulePRIZE_CATEG", "$@71", "$@72",
  "rulePRIZE_ARRAY", "$@73", "$@74", "$@75", "$@76", "$@77", "$@78",
  "$@79", "$@80", "ruleFIRST_PRIZE", "$@81", "$@82", "$@83", "$@84",
  "$@85", "$@86", "$@87", "$@88", "$@89", "ruleREST_PRIZES", "$@90",
  "$@91", "$@92", "$@93", "$@94", "$@95", "$@96", "$@97", "ruleID", "$@98",
  "$@99", "ruleID_1", "$@100", "$@101", "ruleDIVIDENT", "$@102", "$@103",
  "ruleWINNERS", "$@104", "$@105", "ruleDISTRIBUTED", "$@106", "$@107",
  "ruleJACKPOT", "$@108", "$@109", "ruleFIXED", "$@110", "$@111",
  "ruleCATEG_TYPE", "$@112", "$@113", "ruleGAMETYPE", "$@114", "$@115",
  "ruleMIN_DIS", "$@116", "$@117", "ruleWAGER_STATS", "$@118", "$@119",
  "$@120", "$@121", "$@122", "ruleCOLUMNS", "$@123", "$@124", "ruleWAGERS",
  "$@125", "$@126", "ruleADDON", "$@127", "$@128", "ruleJSONARRAY",
  "ruleEMPTYARRAY", "$@129", "ruleARRAY", "$@130", "ruleCONTEXT", "$@131",
  "ruleTOTALPAGES", "$@132", "$@133", "ruleTOTALELEMENTS", "$@134",
  "$@135", "ruleLAST", "$@136", "$@137", "ruleNUMBEROFELEMENTS", "$@138",
  "$@139", "ruleSORT", "$@140", "ruleDIRECTION", "$@141", "$@142",
  "rulePROPERTY", "$@143", "$@144", "ruleIGNORECASE", "$@145", "$@146",
  "ruleNULLHANDLING", "$@147", "$@148", "ruleDESCENDING", "$@149", "$@150",
  "ruleASCENDING", "$@151", "$@152", "ruleFIRST", "$@153", "$@154",
  "ruleSIZE", "$@155", "$@156", "ruleNUMBER", "$@157", "$@158", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-186)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-203)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,  -186,    14,     9,  -186,  -186,  -186,    16,  -186,  -186,
      18,    48,  -186,  -186,  -186,    39,    57,  -186,  -186,     4,
      47,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,    46,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,     4,    66,    67,    70,    72,    73,    74,    75,
      76,    77,    78,    79,    80,  -186,  -186,    61,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
       4,    81,  -186,  -186,    82,    47,    50,    51,    52,     7,
      53,    54,    87,    88,    89,    91,    90,  -186,     4,  -186,
      93,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,    96,    95,    60,  -186,    84,    85,
      98,    83,  -186,  -186,   101,    47,  -186,    99,  -186,   103,
    -186,   104,  -186,   105,   107,   108,  -186,   109,   111,  -186,
     113,  -186,    97,  -186,   114,  -186,  -186,  -186,    71,  -186,
    -186,  -186,   100,  -186,   117,   118,  -186,    92,   119,    94,
    -186,   122,    47,   102,   112,  -186,   115,   124,  -186,  -186,
     125,   106,  -186,   126,  -186,  -186,   129,  -186,   130,  -186,
    -186,   132,  -186,  -186,   116,   120,  -186,  -186,   133,  -186,
      15,  -186,   127,  -186,   121,  -186,   123,  -186,   134,  -186,
     137,   118,  -186,   110,    63,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,   128,  -186,   141,  -186,   131,  -186,
     153,  -186,   154,  -186,   155,   135,  -186,   156,  -186,  -186,
    -186,   158,  -186,   160,  -186,  -186,   138,  -186,   116,  -186,
    -186,   163,  -186,    15,  -186,   136,  -186,   139,   142,  -186,
     164,   140,   165,   118,  -186,   166,   144,  -186,   167,   145,
    -186,  -186,   170,  -186,  -186,  -186,   171,   161,  -186,   178,
    -186,  -186,   175,  -186,   149,   138,  -186,   176,  -186,  -186,
    -186,  -186,   143,   181,  -186,   151,  -186,   185,   186,   118,
     183,    -4,   157,  -186,  -186,  -186,   189,  -186,  -186,   191,
    -186,  -186,  -186,  -186,    41,  -186,   190,   159,  -186,   172,
     149,  -186,  -186,  -186,  -186,  -186,   173,  -186,   193,   204,
     118,    -4,   203,   206,  -186,   209,  -186,  -186,   210,   211,
    -186,  -186,  -186,   192,   172,  -186,   208,   179,   180,  -186,
     213,   216,   118,  -186,  -186,  -186,   218,  -186,  -186,   219,
      -7,   220,  -186,   194,   192,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,    65,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
     187,  -186,   222,   223,   118,   225,   226,   227,   228,   229,
     230,  -186,  -186,   197,  -186,   232,  -186,  -186,   231,  -186,
    -186,  -186,  -186,  -186,  -186,    -7,   233,  -186,  -186,   207,
     194,  -186,   201,   202,   205,   212,   214,   215,   238,  -186,
     235,   217,  -186,   240,   241,  -186,  -186,  -186,  -186,  -186,
    -186,   242,  -186,  -186,   244,  -186,  -186,  -186,  -186,   221,
     207,   224,   234,  -186,   245,   246,  -186,   251,  -186,   253,
    -186,  -186,   254,  -186,  -186,  -186,   236,   237,   243,  -186,
     255,  -186,  -186,   257,  -186,  -186,   239,   247,  -186,  -186,
    -186,   258,  -186,   248,  -186
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     2,     0,     0,     1,     6,    15,     0,     5,     4,
       0,     0,     3,     7,    16,     0,     0,     8,    17,     0,
       0,    74,    77,    80,    83,    88,    91,    94,   101,   124,
     185,     0,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     9,     0,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    18,    34,
      75,    78,    81,    84,    89,    92,    95,   102,   125,   186,
       0,     0,    39,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    10,     0,    19,
       0,    76,    79,    82,    87,    86,    85,    90,    93,    96,
     103,   127,   126,   187,     0,    40,     0,    35,     0,     0,
       0,     0,    11,   211,     0,     0,    98,     0,   106,     0,
     136,     0,   191,     0,     0,     0,    20,     0,     0,    97,
       0,   104,     0,   128,     0,   188,    12,   212,     0,    36,
      99,   107,     0,   158,     0,     0,   192,     0,     0,     0,
     214,     0,     0,     0,     0,   119,     0,     0,   137,   146,
       0,     0,   194,     0,    13,   213,     0,    21,     0,   100,
     108,     0,   105,   159,     0,     0,   129,   193,     0,   189,
       0,   215,     0,    37,     0,   120,     0,   161,     0,   155,
       0,     0,   195,     0,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,   217,     0,   109,     0,   160,
       0,   138,     0,   147,     0,     0,   197,     0,    51,    14,
     216,     0,    22,     0,   121,   162,     0,   156,     0,   130,
     196,     0,   190,     0,   218,     0,   110,     0,     0,   164,
       0,     0,     0,     0,   198,    52,     0,   220,     0,     0,
     122,   163,     0,   139,   157,   148,     0,     0,   219,     0,
      23,   111,     0,   165,     0,     0,   131,   204,   199,   200,
     201,   221,     0,     0,   123,     0,   167,     0,     0,     0,
       0,     0,     0,    24,   112,   166,     0,   140,   149,     0,
     203,   209,   208,   210,     0,   222,     0,     0,   168,     0,
       0,   132,   206,   205,    25,   113,     0,   170,     0,     0,
       0,     0,     0,     0,   169,     0,   141,   150,     0,   207,
      26,   114,   171,     0,     0,   133,     0,     0,     0,   173,
       0,     0,     0,    27,   115,   172,     0,   142,   151,     0,
       0,     0,   174,     0,     0,   134,   231,   234,   237,   240,
     243,   246,     0,   225,   226,   227,   228,   229,   230,   116,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   223,    28,     0,   175,     0,   143,   152,     0,   232,
     235,   238,   241,   244,   247,     0,     0,   117,   177,     0,
       0,   135,     0,     0,     0,     0,     0,     0,   224,    29,
       0,     0,   179,     0,     0,   233,   236,   239,   242,   245,
     248,     0,   118,   178,     0,   144,   153,    30,   180,     0,
       0,     0,     0,   182,     0,     0,   249,     0,   181,     0,
     145,   154,     0,    31,   183,   250,     0,     0,     0,   252,
       0,   184,   251,     0,    32,   253,     0,     0,   255,    33,
     254,     0,   256,     0,   257
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,   -76,   162,  -186,    21,
    -186,   188,  -186,   -42,  -186,  -186,   -41,  -186,  -186,   -40,
    -186,  -186,   -39,  -186,  -186,  -186,   -38,  -186,  -186,   -37,
    -186,  -186,   -36,  -186,  -186,  -186,  -186,  -186,  -186,   -32,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,   -35,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -185,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,    27,
    -186,  -186,    -9,  -186,  -186,   -43,  -186,  -186,   -65,  -186,
    -186,   -84,  -186,  -186,  -129,  -186,  -186,  -157,  -186,  -186,
    -186,  -186,  -186,   -34,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,   -47,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -120,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,     7,     8,    10,    15,    19,    81,   114,
     134,   158,   190,     9,    11,    16,    20,    84,   116,   148,
     192,   245,   282,   306,   322,   336,   350,   396,   421,   431,
     446,   456,    43,    85,   125,   162,    44,    57,    98,   204,
     243,    31,    80,    32,    45,    86,    33,    46,    87,    34,
      47,    88,    35,    48,    89,   106,    36,    49,    90,    37,
      50,    91,    38,    51,    92,   118,   127,   138,   163,    39,
      52,    93,   119,   152,   129,   140,   164,   194,   233,   259,
     283,   307,   323,   337,   351,   383,   410,   166,   181,   218,
     247,   272,    40,    53,    94,   112,   120,   155,   201,   253,
     289,   320,   342,   374,   131,   142,   184,   236,   274,   309,
     333,   353,   399,   429,   170,   185,   238,   275,   310,   334,
     354,   400,   430,   200,   222,   251,   154,   167,   196,   198,
     220,   248,   250,   262,   285,   287,   296,   316,   318,   325,
     338,   340,   346,   370,   372,   385,   411,   413,   424,   432,
     434,   439,   447,    41,    54,    95,   121,   157,   203,   133,
     144,   171,   173,   188,   225,   227,   241,   267,   278,   279,
     290,   280,   291,   304,   321,   124,   135,   159,   161,   176,
     214,   216,   231,   256,   258,   269,   292,   362,   395,   363,
     375,   402,   364,   376,   403,   365,   377,   404,   366,   378,
     405,   367,   379,   406,   368,   380,   407,   437,   442,   448,
     450,   453,   457,   459,   461,   463
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    59,    60,    61,    62,    63,    64,    66,    67,   100,
      65,   104,     5,     1,     4,    21,   224,    22,    23,    24,
      25,    26,    27,    13,    28,    12,    21,    29,    22,    23,
      24,    25,    26,    27,   301,   302,   303,    30,    29,   356,
     357,   358,   359,   360,   361,   105,    17,   312,    30,   137,
       6,   313,    55,    14,    42,    56,    58,    59,    60,    61,
      62,    63,    64,    66,    67,    18,    65,    82,   266,   228,
      83,   381,   229,    69,   382,    70,    68,    71,    72,    73,
      74,    75,    76,    77,    78,    79,   178,    97,    99,   101,
     102,   103,   107,   108,   109,   110,    55,   111,   113,   117,
     122,    82,   123,   126,   299,   130,   128,   136,   139,   141,
     143,   145,   146,   147,   160,   149,   150,   132,   151,   156,
     180,   153,   165,   168,   182,   169,   174,   172,   177,   183,
     215,   186,   189,   175,   191,   328,   193,   195,   202,   234,
     221,   197,   179,   223,   199,   187,   226,   232,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   349,   235,   237,
     217,   239,   219,   244,   249,   242,   246,   230,   254,   277,
     263,   265,   228,   270,   240,   273,   286,   276,   260,   264,
     257,   268,   261,   281,   271,   284,  -202,   294,   293,   388,
     295,   297,   298,   300,   308,   314,   305,   311,   315,   326,
     317,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     327,   330,   331,   324,   332,   343,   335,   312,   344,   347,
     345,   339,   348,   352,   371,   355,   369,   384,   386,   387,
     389,   390,   391,   392,   393,   394,   397,   398,   412,   415,
     416,   401,   417,   409,   381,   422,   425,   426,   427,   428,
     418,   419,   420,   433,   440,   441,   423,   443,   444,   445,
     115,   454,   455,   462,   255,   252,   288,   319,    96,   341,
     373,   414,   438,   435,   329,   408,   436,   451,     0,     0,
     452,     0,     0,     0,     0,     0,   460,   464,     0,   449,
       0,     0,     0,   458
};

static const yytype_int16 yycheck[] =
{
      42,    42,    42,    42,    42,    42,    42,    42,    42,    85,
      42,     4,     3,     7,     0,    11,   201,    13,    14,    15,
      16,    17,    18,     5,    20,     9,    11,    23,    13,    14,
      15,    16,    17,    18,    38,    39,    40,    33,    23,    46,
      47,    48,    49,    50,    51,    38,     7,     6,    33,   125,
      41,    10,     6,     5,     7,     9,    98,    98,    98,    98,
      98,    98,    98,    98,    98,     8,    98,     6,   253,     6,
       9,     6,     9,     6,     9,     5,    10,     5,     5,     5,
       5,     5,     5,     5,     5,     5,   162,     6,     6,    39,
      39,    39,    39,    39,     7,     7,     6,     8,     7,     6,
       4,     6,    42,    19,   289,     7,    21,     6,     9,     6,
       6,     6,     5,     5,    43,     6,     5,    34,     5,     5,
       8,    24,    22,     6,     9,     7,     7,    35,     6,     5,
       3,     6,     6,    39,     5,   320,     6,     5,     5,     8,
       6,    25,    40,     6,    24,    39,    36,     6,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   342,     5,     5,
      39,     6,    39,     5,    26,     9,     6,    39,     5,     8,
       6,     6,     6,     6,    39,     5,    27,     6,    39,    39,
      44,    37,    40,     5,    39,    10,    10,     6,    45,   374,
      39,     6,     6,    10,     5,     5,    39,     6,    39,     6,
      28,   243,   243,   243,   243,   243,   243,   243,   243,   243,
       6,     8,     6,    40,     5,     7,     6,     6,    39,     6,
      40,    29,     6,     5,    30,     6,     6,    40,     6,     6,
       5,     5,     5,     5,     5,     5,    39,     5,    31,    38,
      38,    10,    37,    10,     6,    10,     6,     6,     6,     5,
      38,    37,    37,    32,     9,     9,    39,     6,     5,     5,
      98,     6,     5,     5,   243,   238,   275,   310,    80,   334,
     354,   400,    38,   430,   321,   395,    52,    40,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    39,    39,    -1,    53,
      -1,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    56,    57,     0,     3,    41,    58,    59,    68,
      60,    69,     9,     5,     5,    61,    70,     7,     8,    62,
      71,    11,    13,    14,    15,    16,    17,    18,    20,    23,
      33,    96,    98,   101,   104,   107,   111,   114,   117,   124,
     147,   208,     7,    87,    91,    99,   102,   105,   108,   112,
     115,   118,   125,   148,   209,     6,     9,    92,    98,   101,
     104,   107,   111,   114,   117,   124,   147,   208,    10,     6,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
      97,    63,     6,     9,    72,    88,   100,   103,   106,   109,
     113,   116,   119,   126,   149,   210,    96,     6,    93,     6,
      91,    39,    39,    39,     4,    38,   110,    39,    39,     7,
       7,     8,   150,     7,    64,    92,    73,     6,   120,   127,
     151,   211,     4,    42,   230,    89,    19,   121,    21,   129,
       7,   159,    34,   214,    65,   231,     6,    91,   122,     9,
     130,     6,   160,     6,   215,     6,     5,     5,    74,     6,
       5,     5,   128,    24,   181,   152,     5,   212,    66,   232,
      43,   233,    90,   123,   131,    22,   142,   182,     6,     7,
     169,   216,    35,   217,     7,    39,   234,     6,    91,    40,
       8,   143,     9,     5,   161,   170,     6,    39,   218,     6,
      67,     5,    75,     6,   132,     5,   183,    25,   184,    24,
     178,   153,     5,   213,    94,    98,   101,   104,   107,   111,
     114,   117,   147,   208,   235,     3,   236,    39,   144,    39,
     185,     6,   179,     6,   169,   219,    36,   220,     6,     9,
      39,   237,     6,   133,     8,     5,   162,     5,   171,     6,
      39,   221,     9,    95,     5,    76,     6,   145,   186,    26,
     187,   180,   184,   154,     5,    94,   238,    44,   239,   134,
      39,    40,   188,     6,    39,     6,   169,   222,    37,   240,
       6,    39,   146,     5,   163,   172,     6,     8,   223,   224,
     226,     5,    77,   135,    10,   189,    27,   190,   187,   155,
     225,   227,   241,    45,     6,    39,   191,     6,     6,   169,
      10,    38,    39,    40,   228,    39,    78,   136,     5,   164,
     173,     6,     6,    10,     5,    39,   192,    28,   193,   190,
     156,   229,    79,   137,    40,   194,     6,     6,   169,   228,
       8,     6,     5,   165,   174,     6,    80,   138,   195,    29,
     196,   193,   157,     7,    39,    40,   197,     6,     6,   169,
      81,   139,     5,   166,   175,     6,    46,    47,    48,    49,
      50,    51,   242,   244,   247,   250,   253,   256,   259,     6,
     198,    30,   199,   196,   158,   245,   248,   251,   254,   257,
     260,     6,     9,   140,    40,   200,     6,     6,   169,     5,
       5,     5,     5,     5,     5,   243,    82,    39,     5,   167,
     176,    10,   246,   249,   252,   255,   258,   261,   242,    10,
     141,   201,    31,   202,   199,    38,    38,    37,    38,    37,
      37,    83,    10,    39,   203,     6,     6,     6,     5,   168,
     177,    84,   204,    32,   205,   202,    52,   262,    38,   206,
       9,     9,   263,     6,     5,     5,    85,   207,   264,    53,
     265,    40,    37,   266,     6,     5,    86,   267,    54,   268,
      39,   269,     5,   270,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,    55,    57,    56,    58,    58,    60,    61,    62,    63,
      64,    65,    66,    67,    59,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    68,    88,    89,    90,    87,    91,    93,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    95,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    97,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    99,   100,    98,   102,   103,   101,
     105,   106,   104,   108,   109,   107,   110,   110,   112,   113,
     111,   115,   116,   114,   118,   119,   120,   117,   122,   123,
     121,   125,   126,   127,   128,   124,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   129,   143,
     144,   145,   146,   142,   148,   149,   147,   151,   152,   153,
     154,   155,   156,   157,   158,   150,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   159,   170,   171,   172,   173,
     174,   175,   176,   177,   169,   179,   180,   178,   182,   183,
     181,   185,   186,   184,   188,   189,   187,   191,   192,   190,
     194,   195,   193,   197,   198,   196,   200,   201,   199,   203,
     204,   202,   206,   207,   205,   209,   210,   211,   212,   213,
     208,   215,   216,   214,   218,   219,   217,   221,   222,   220,
     223,   223,   225,   224,   227,   226,   229,   228,   228,   228,
     228,   231,   232,   230,   234,   235,   233,   237,   238,   236,
     240,   241,   239,   243,   242,   242,   242,   242,   242,   242,
     242,   245,   246,   244,   248,   249,   247,   251,   252,   250,
     254,   255,   253,   257,   258,   256,   260,   261,   259,   263,
     264,   262,   266,   267,   265,   269,   270,   268
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     1,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    11,     3,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     1,     1,     0,     0,
       5,     0,     0,     5,     0,     0,     0,     8,     0,     0,
       5,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     9,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     0,     0,     0,
      14,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       1,     1,     0,     3,     0,     4,     0,     4,     1,     1,
       1,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     4,     1,     1,     1,     1,     1,
       1,     0,     0,     5,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     5
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
#line 76 "2nd_Exc_Bison.y"
                    {printf("{\n");}
#line 1970 "2nd_Exc_Bison.tab.c"
    break;

  case 3: /* jsonfile: OBRACKETS $@1 ruleFULLJSON CBRACKETS  */
#line 76 "2nd_Exc_Bison.y"
                                                            {printf("}\n");}
#line 1976 "2nd_Exc_Bison.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 82 "2nd_Exc_Bison.y"
                      {printf("\"last\"");}
#line 1982 "2nd_Exc_Bison.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 82 "2nd_Exc_Bison.y"
                                                  {printf(":");}
#line 1988 "2nd_Exc_Bison.tab.c"
    break;

  case 8: /* $@4: %empty  */
#line 82 "2nd_Exc_Bison.y"
                                                                           {printf("{");}
#line 1994 "2nd_Exc_Bison.tab.c"
    break;

  case 9: /* $@5: %empty  */
#line 82 "2nd_Exc_Bison.y"
                                                                                                               {printf("}");}
#line 2000 "2nd_Exc_Bison.tab.c"
    break;

  case 10: /* $@6: %empty  */
#line 82 "2nd_Exc_Bison.y"
                                                                                                                                    {printf(",\n");}
#line 2006 "2nd_Exc_Bison.tab.c"
    break;

  case 11: /* $@7: %empty  */
#line 82 "2nd_Exc_Bison.y"
                                                                                                                                                            {printf("\"active\"");}
#line 2012 "2nd_Exc_Bison.tab.c"
    break;

  case 12: /* $@8: %empty  */
#line 82 "2nd_Exc_Bison.y"
                                                                                                                                                                                          {printf(":");}
#line 2018 "2nd_Exc_Bison.tab.c"
    break;

  case 13: /* $@9: %empty  */
#line 82 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                   {printf("{");}
#line 2024 "2nd_Exc_Bison.tab.c"
    break;

  case 14: /* ruleLAST_RESULT: LAST $@2 COLON $@3 OBRACKETS $@4 ruleLAST_1 CBRACKETS $@5 COMMA $@6 ACTIVE $@7 COLON $@8 OBRACKETS $@9 ruleACTIVE CBRACKETS  */
#line 82 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                       {printf("}");}
#line 2030 "2nd_Exc_Bison.tab.c"
    break;

  case 15: /* $@10: %empty  */
#line 84 "2nd_Exc_Bison.y"
                          {printf("\"content\"");}
#line 2036 "2nd_Exc_Bison.tab.c"
    break;

  case 16: /* $@11: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                         {printf(":");}
#line 2042 "2nd_Exc_Bison.tab.c"
    break;

  case 17: /* $@12: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                {printf("[");}
#line 2048 "2nd_Exc_Bison.tab.c"
    break;

  case 18: /* $@13: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                    {printf("]");}
#line 2054 "2nd_Exc_Bison.tab.c"
    break;

  case 19: /* $@14: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                         {printf(",\n");}
#line 2060 "2nd_Exc_Bison.tab.c"
    break;

  case 20: /* $@15: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                               {printf(",\n");}
#line 2066 "2nd_Exc_Bison.tab.c"
    break;

  case 21: /* $@16: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                        {printf(",\n");}
#line 2072 "2nd_Exc_Bison.tab.c"
    break;

  case 22: /* $@17: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                        {printf(",\n");}
#line 2078 "2nd_Exc_Bison.tab.c"
    break;

  case 23: /* $@18: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                    {printf(",\n");}
#line 2084 "2nd_Exc_Bison.tab.c"
    break;

  case 24: /* $@19: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                           {printf("\"sort\"");}
#line 2090 "2nd_Exc_Bison.tab.c"
    break;

  case 25: /* $@20: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                       {printf(":");}
#line 2096 "2nd_Exc_Bison.tab.c"
    break;

  case 26: /* $@21: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                              {printf("[");}
#line 2102 "2nd_Exc_Bison.tab.c"
    break;

  case 27: /* $@22: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                       {printf("{");}
#line 2108 "2nd_Exc_Bison.tab.c"
    break;

  case 28: /* $@23: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                         {printf("}");}
#line 2114 "2nd_Exc_Bison.tab.c"
    break;

  case 29: /* $@24: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                {printf("]");}
#line 2120 "2nd_Exc_Bison.tab.c"
    break;

  case 30: /* $@25: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     {printf(",\n");}
#line 2126 "2nd_Exc_Bison.tab.c"
    break;

  case 31: /* $@26: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      {printf(",\n");}
#line 2132 "2nd_Exc_Bison.tab.c"
    break;

  case 32: /* $@27: %empty  */
#line 84 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      {printf(",\n");}
#line 2138 "2nd_Exc_Bison.tab.c"
    break;

  case 34: /* $@28: %empty  */
#line 86 "2nd_Exc_Bison.y"
                                   {printf(",\n");}
#line 2144 "2nd_Exc_Bison.tab.c"
    break;

  case 35: /* $@29: %empty  */
#line 86 "2nd_Exc_Bison.y"
                                                                        {printf(",\n");}
#line 2150 "2nd_Exc_Bison.tab.c"
    break;

  case 36: /* $@30: %empty  */
#line 86 "2nd_Exc_Bison.y"
                                                                                                             {printf(",\n");}
#line 2156 "2nd_Exc_Bison.tab.c"
    break;

  case 37: /* ruleCONTENT_0: ruleCONTENT_1 COMMA $@28 ruleCONTENT_1 COMMA $@29 ruleCONTENT_1 COMMA $@30 ruleCONTENT_1 COMMA  */
#line 86 "2nd_Exc_Bison.y"
                                                                                                                                                  {printf(",\n");}
#line 2162 "2nd_Exc_Bison.tab.c"
    break;

  case 39: /* $@31: %empty  */
#line 90 "2nd_Exc_Bison.y"
                               {printf(",\n");}
#line 2168 "2nd_Exc_Bison.tab.c"
    break;

  case 51: /* $@32: %empty  */
#line 103 "2nd_Exc_Bison.y"
                             {printf(",\n");}
#line 2174 "2nd_Exc_Bison.tab.c"
    break;

  case 62: /* $@33: %empty  */
#line 115 "2nd_Exc_Bison.y"
                             {printf(",\n");}
#line 2180 "2nd_Exc_Bison.tab.c"
    break;

  case 74: /* $@34: %empty  */
#line 128 "2nd_Exc_Bison.y"
                     {printf("\"gameId\"");}
#line 2186 "2nd_Exc_Bison.tab.c"
    break;

  case 75: /* $@35: %empty  */
#line 128 "2nd_Exc_Bison.y"
                                                   {printf(":");}
#line 2192 "2nd_Exc_Bison.tab.c"
    break;

  case 76: /* ruleGAME_ID: GAME_ID $@34 COLON $@35 INT  */
#line 128 "2nd_Exc_Bison.y"
                                                                      {checkGameID(yytext);printf("\%s", yytext);}
#line 2198 "2nd_Exc_Bison.tab.c"
    break;

  case 77: /* $@36: %empty  */
#line 130 "2nd_Exc_Bison.y"
                     {printf("\"drawId\"");}
#line 2204 "2nd_Exc_Bison.tab.c"
    break;

  case 78: /* $@37: %empty  */
#line 130 "2nd_Exc_Bison.y"
                                                   {printf(":");}
#line 2210 "2nd_Exc_Bison.tab.c"
    break;

  case 79: /* ruleDRAW_ID: DRAW_ID $@36 COLON $@37 INT  */
#line 130 "2nd_Exc_Bison.y"
                                                                      {printf("\%s", yytext);}
#line 2216 "2nd_Exc_Bison.tab.c"
    break;

  case 80: /* $@38: %empty  */
#line 132 "2nd_Exc_Bison.y"
                         {printf("\"drawTime\"");}
#line 2222 "2nd_Exc_Bison.tab.c"
    break;

  case 81: /* $@39: %empty  */
#line 132 "2nd_Exc_Bison.y"
                                                         {printf(":");}
#line 2228 "2nd_Exc_Bison.tab.c"
    break;

  case 82: /* ruleDRAW_TIME: DRAW_TIME $@38 COLON $@39 INT  */
#line 132 "2nd_Exc_Bison.y"
                                                                            {printf("\%s", yytext);}
#line 2234 "2nd_Exc_Bison.tab.c"
    break;

  case 83: /* $@40: %empty  */
#line 135 "2nd_Exc_Bison.y"
                   {printf("\"status\"");}
#line 2240 "2nd_Exc_Bison.tab.c"
    break;

  case 84: /* $@41: %empty  */
#line 135 "2nd_Exc_Bison.y"
                                                 {printf(":");}
#line 2246 "2nd_Exc_Bison.tab.c"
    break;

  case 86: /* ruleSTATUS_2: STRING  */
#line 137 "2nd_Exc_Bison.y"
                     {printf("\%s", yytext);}
#line 2252 "2nd_Exc_Bison.tab.c"
    break;

  case 87: /* ruleSTATUS_2: ACTIVE  */
#line 138 "2nd_Exc_Bison.y"
        {printf("\%s", yytext);}
#line 2258 "2nd_Exc_Bison.tab.c"
    break;

  case 88: /* $@42: %empty  */
#line 141 "2nd_Exc_Bison.y"
                           {printf("\"drawBreak\"");}
#line 2264 "2nd_Exc_Bison.tab.c"
    break;

  case 89: /* $@43: %empty  */
#line 141 "2nd_Exc_Bison.y"
                                                            {printf(":");}
#line 2270 "2nd_Exc_Bison.tab.c"
    break;

  case 90: /* ruleDRAW_BREAK: DRAW_BREAK $@42 COLON $@43 INT  */
#line 141 "2nd_Exc_Bison.y"
                                                                               {printf("\%s", yytext);}
#line 2276 "2nd_Exc_Bison.tab.c"
    break;

  case 91: /* $@44: %empty  */
#line 143 "2nd_Exc_Bison.y"
                             {printf("\"visualDraw\"");}
#line 2282 "2nd_Exc_Bison.tab.c"
    break;

  case 92: /* $@45: %empty  */
#line 143 "2nd_Exc_Bison.y"
                                                               {printf(":");}
#line 2288 "2nd_Exc_Bison.tab.c"
    break;

  case 93: /* ruleVISUAL_DRAW: VISUAL_DRAW $@44 COLON $@45 INT  */
#line 143 "2nd_Exc_Bison.y"
                                                                                  {printf("\%s", yytext);}
#line 2294 "2nd_Exc_Bison.tab.c"
    break;

  case 94: /* $@46: %empty  */
#line 145 "2nd_Exc_Bison.y"
                               {printf("\"pricePoints\"");}
#line 2300 "2nd_Exc_Bison.tab.c"
    break;

  case 95: /* $@47: %empty  */
#line 145 "2nd_Exc_Bison.y"
                                                                  {printf(":");}
#line 2306 "2nd_Exc_Bison.tab.c"
    break;

  case 96: /* $@48: %empty  */
#line 145 "2nd_Exc_Bison.y"
                                                                                           {printf("{\n");}
#line 2312 "2nd_Exc_Bison.tab.c"
    break;

  case 97: /* rulePRICE_POINTS: PRICE_POINTS $@46 COLON $@47 OBRACKETS $@48 ruleAMOUNT CBRACKETS  */
#line 145 "2nd_Exc_Bison.y"
                                                                                                                                 {printf("}\n");}
#line 2318 "2nd_Exc_Bison.tab.c"
    break;

  case 98: /* $@49: %empty  */
#line 147 "2nd_Exc_Bison.y"
                   {printf("\"amount\"");}
#line 2324 "2nd_Exc_Bison.tab.c"
    break;

  case 99: /* $@50: %empty  */
#line 147 "2nd_Exc_Bison.y"
                                                 {printf(":");}
#line 2330 "2nd_Exc_Bison.tab.c"
    break;

  case 100: /* ruleAMOUNT: AMOUNT $@49 COLON $@50 DOUBLE  */
#line 147 "2nd_Exc_Bison.y"
                                                                       {printf("\%s", yytext);}
#line 2336 "2nd_Exc_Bison.tab.c"
    break;

  case 101: /* $@51: %empty  */
#line 149 "2nd_Exc_Bison.y"
                                  {printf("\"winningNumbers\"");}
#line 2342 "2nd_Exc_Bison.tab.c"
    break;

  case 102: /* $@52: %empty  */
#line 149 "2nd_Exc_Bison.y"
                                                                        {printf(":");}
#line 2348 "2nd_Exc_Bison.tab.c"
    break;

  case 103: /* $@53: %empty  */
#line 149 "2nd_Exc_Bison.y"
                                                                                                 {printf("{\n");}
#line 2354 "2nd_Exc_Bison.tab.c"
    break;

  case 104: /* $@54: %empty  */
#line 149 "2nd_Exc_Bison.y"
                                                                                                                                 {printf(",\n");}
#line 2360 "2nd_Exc_Bison.tab.c"
    break;

  case 105: /* ruleWINNING_NUMS: WINNING_NUMBERS $@51 COLON $@52 OBRACKETS $@53 ruleLIST COMMA $@54 ruleBONUS CBRACKETS  */
#line 149 "2nd_Exc_Bison.y"
                                                                                                                                                                       {printf("}\n");}
#line 2366 "2nd_Exc_Bison.tab.c"
    break;

  case 106: /* $@55: %empty  */
#line 151 "2nd_Exc_Bison.y"
               {printf("\"list\"");}
#line 2372 "2nd_Exc_Bison.tab.c"
    break;

  case 107: /* $@56: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                           {printf(":");}
#line 2378 "2nd_Exc_Bison.tab.c"
    break;

  case 108: /* $@57: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                  {printf("[\n");}
#line 2384 "2nd_Exc_Bison.tab.c"
    break;

  case 109: /* $@58: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                       {addNumber(yytext);printf("\%s", yytext);}
#line 2390 "2nd_Exc_Bison.tab.c"
    break;

  case 110: /* $@59: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                        {printf(",\n");}
#line 2396 "2nd_Exc_Bison.tab.c"
    break;

  case 111: /* $@60: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                             {addNumber(yytext);printf("\%s", yytext);}
#line 2402 "2nd_Exc_Bison.tab.c"
    break;

  case 112: /* $@61: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                                                                              {printf(",\n");}
#line 2408 "2nd_Exc_Bison.tab.c"
    break;

  case 113: /* $@62: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                   {addNumber(yytext);printf("\%s", yytext);}
#line 2414 "2nd_Exc_Bison.tab.c"
    break;

  case 114: /* $@63: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                    {printf(",\n");}
#line 2420 "2nd_Exc_Bison.tab.c"
    break;

  case 115: /* $@64: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                         {addNumber(yytext);printf("\%s", yytext);}
#line 2426 "2nd_Exc_Bison.tab.c"
    break;

  case 116: /* $@65: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                          {printf(",\n");}
#line 2432 "2nd_Exc_Bison.tab.c"
    break;

  case 117: /* $@66: %empty  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                               {addNumber(yytext);printf("\%s", yytext);checkWinningNumbers(winningNums);win_array_index=0;}
#line 2438 "2nd_Exc_Bison.tab.c"
    break;

  case 118: /* ruleLIST: LIST $@55 COLON $@56 OBRACES $@57 INT $@58 COMMA $@59 INT $@60 COMMA $@61 INT $@62 COMMA $@63 INT $@64 COMMA $@65 INT $@66 CBRACES  */
#line 151 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     {printf("]\n");}
#line 2444 "2nd_Exc_Bison.tab.c"
    break;

  case 119: /* $@67: %empty  */
#line 153 "2nd_Exc_Bison.y"
                 {printf("\"bonus\"");}
#line 2450 "2nd_Exc_Bison.tab.c"
    break;

  case 120: /* $@68: %empty  */
#line 153 "2nd_Exc_Bison.y"
                                              {printf(":");}
#line 2456 "2nd_Exc_Bison.tab.c"
    break;

  case 121: /* $@69: %empty  */
#line 153 "2nd_Exc_Bison.y"
                                                                     {printf("[\n");}
#line 2462 "2nd_Exc_Bison.tab.c"
    break;

  case 122: /* $@70: %empty  */
#line 153 "2nd_Exc_Bison.y"
                                                                                          {printf("\%s", yytext);}
#line 2468 "2nd_Exc_Bison.tab.c"
    break;

  case 123: /* ruleBONUS: BONUS $@67 COLON $@68 OBRACES $@69 INT $@70 CBRACES  */
#line 153 "2nd_Exc_Bison.y"
                                                                                                                           {printf("]\n");}
#line 2474 "2nd_Exc_Bison.tab.c"
    break;

  case 124: /* $@71: %empty  */
#line 155 "2nd_Exc_Bison.y"
                                  {printf("\"prizeCategories\"");}
#line 2480 "2nd_Exc_Bison.tab.c"
    break;

  case 125: /* $@72: %empty  */
#line 155 "2nd_Exc_Bison.y"
                                                                         {printf(":");}
#line 2486 "2nd_Exc_Bison.tab.c"
    break;

  case 127: /* $@73: %empty  */
#line 157 "2nd_Exc_Bison.y"
                         {printf("[\n");}
#line 2492 "2nd_Exc_Bison.tab.c"
    break;

  case 128: /* $@74: %empty  */
#line 157 "2nd_Exc_Bison.y"
                                                                {printf(",\n");}
#line 2498 "2nd_Exc_Bison.tab.c"
    break;

  case 129: /* $@75: %empty  */
#line 157 "2nd_Exc_Bison.y"
                                                                                                       {printf(",\n");}
#line 2504 "2nd_Exc_Bison.tab.c"
    break;

  case 130: /* $@76: %empty  */
#line 157 "2nd_Exc_Bison.y"
                                                                                                                                              {printf(",\n");}
#line 2510 "2nd_Exc_Bison.tab.c"
    break;

  case 131: /* $@77: %empty  */
#line 157 "2nd_Exc_Bison.y"
                                                                                                                                                                                     {printf(",\n");}
#line 2516 "2nd_Exc_Bison.tab.c"
    break;

  case 132: /* $@78: %empty  */
#line 157 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                            {printf(",\n");}
#line 2522 "2nd_Exc_Bison.tab.c"
    break;

  case 133: /* $@79: %empty  */
#line 157 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                   {printf(",\n");}
#line 2528 "2nd_Exc_Bison.tab.c"
    break;

  case 134: /* $@80: %empty  */
#line 157 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                          {printf(",\n");}
#line 2534 "2nd_Exc_Bison.tab.c"
    break;

  case 135: /* rulePRIZE_ARRAY: OBRACES $@73 ruleFIRST_PRIZE COMMA $@74 ruleREST_PRIZES COMMA $@75 ruleREST_PRIZES COMMA $@76 ruleREST_PRIZES COMMA $@77 ruleREST_PRIZES COMMA $@78 ruleREST_PRIZES COMMA $@79 ruleREST_PRIZES COMMA $@80 ruleREST_PRIZES CBRACES  */
#line 157 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                   {PrizeCatCounter=0; printf("]\n");}
#line 2540 "2nd_Exc_Bison.tab.c"
    break;

  case 136: /* $@81: %empty  */
#line 159 "2nd_Exc_Bison.y"
                           {printf("{\n");}
#line 2546 "2nd_Exc_Bison.tab.c"
    break;

  case 137: /* $@82: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                           {printf(",\n");}
#line 2552 "2nd_Exc_Bison.tab.c"
    break;

  case 138: /* $@83: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                                                               {printf(",\n");}
#line 2558 "2nd_Exc_Bison.tab.c"
    break;

  case 139: /* $@84: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                                                                                                  {printf(",\n");}
#line 2564 "2nd_Exc_Bison.tab.c"
    break;

  case 140: /* $@85: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                                                                                                                                         {printf(",\n");}
#line 2570 "2nd_Exc_Bison.tab.c"
    break;

  case 141: /* $@86: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                                                                                                                                                                            {printf(",\n");}
#line 2576 "2nd_Exc_Bison.tab.c"
    break;

  case 142: /* $@87: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                             {printf(",\n");}
#line 2582 "2nd_Exc_Bison.tab.c"
    break;

  case 143: /* $@88: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                   {printf(",\n");}
#line 2588 "2nd_Exc_Bison.tab.c"
    break;

  case 144: /* $@89: %empty  */
#line 159 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                       {printf(",\n");}
#line 2594 "2nd_Exc_Bison.tab.c"
    break;

  case 145: /* ruleFIRST_PRIZE: OBRACKETS $@81 ruleID_1 COMMA $@82 ruleDIVIDENT COMMA $@83 ruleWINNERS COMMA $@84 ruleDISTRIBUTED COMMA $@85 ruleJACKPOT COMMA $@86 ruleFIXED COMMA $@87 ruleCATEG_TYPE COMMA $@88 ruleGAMETYPE COMMA $@89 ruleMIN_DIS CBRACKETS  */
#line 159 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                                                              {printf("}\n");}
#line 2600 "2nd_Exc_Bison.tab.c"
    break;

  case 146: /* $@90: %empty  */
#line 161 "2nd_Exc_Bison.y"
                           {printf("{\n");}
#line 2606 "2nd_Exc_Bison.tab.c"
    break;

  case 147: /* $@91: %empty  */
#line 161 "2nd_Exc_Bison.y"
                                                         {printf(",\n");}
#line 2612 "2nd_Exc_Bison.tab.c"
    break;

  case 148: /* $@92: %empty  */
#line 161 "2nd_Exc_Bison.y"
                                                                                             {printf(",\n");}
#line 2618 "2nd_Exc_Bison.tab.c"
    break;

  case 149: /* $@93: %empty  */
#line 161 "2nd_Exc_Bison.y"
                                                                                                                                {printf(",\n");}
#line 2624 "2nd_Exc_Bison.tab.c"
    break;

  case 150: /* $@94: %empty  */
#line 161 "2nd_Exc_Bison.y"
                                                                                                                                                                       {printf(",\n");}
#line 2630 "2nd_Exc_Bison.tab.c"
    break;

  case 151: /* $@95: %empty  */
#line 161 "2nd_Exc_Bison.y"
                                                                                                                                                                                                          {printf(",\n");}
#line 2636 "2nd_Exc_Bison.tab.c"
    break;

  case 152: /* $@96: %empty  */
#line 161 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                           {printf(",\n");}
#line 2642 "2nd_Exc_Bison.tab.c"
    break;

  case 153: /* $@97: %empty  */
#line 161 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                 {printf(",\n");}
#line 2648 "2nd_Exc_Bison.tab.c"
    break;

  case 154: /* ruleREST_PRIZES: OBRACKETS $@90 ruleID COMMA $@91 ruleDIVIDENT COMMA $@92 ruleWINNERS COMMA $@93 ruleDISTRIBUTED COMMA $@94 ruleJACKPOT COMMA $@95 ruleFIXED COMMA $@96 ruleCATEG_TYPE COMMA $@97 ruleGAMETYPE CBRACKETS  */
#line 161 "2nd_Exc_Bison.y"
                                                                                                                                                                                                                                                                                                                         {printf("}\n");}
#line 2654 "2nd_Exc_Bison.tab.c"
    break;

  case 155: /* $@98: %empty  */
#line 163 "2nd_Exc_Bison.y"
           {incPrizeCatCntr();printf("\"id\"");}
#line 2660 "2nd_Exc_Bison.tab.c"
    break;

  case 156: /* $@99: %empty  */
#line 163 "2nd_Exc_Bison.y"
                                                       {printf(":");}
#line 2666 "2nd_Exc_Bison.tab.c"
    break;

  case 157: /* ruleID: ID $@98 COLON $@99 INT  */
#line 163 "2nd_Exc_Bison.y"
                                                                          {printf("\%s", yytext);}
#line 2672 "2nd_Exc_Bison.tab.c"
    break;

  case 158: /* $@100: %empty  */
#line 164 "2nd_Exc_Bison.y"
             {incPrizeCatCntr();printf("\"id\"");}
#line 2678 "2nd_Exc_Bison.tab.c"
    break;

  case 159: /* $@101: %empty  */
#line 164 "2nd_Exc_Bison.y"
                                                         {printf(":");}
#line 2684 "2nd_Exc_Bison.tab.c"
    break;

  case 160: /* ruleID_1: ID $@100 COLON $@101 INT  */
#line 164 "2nd_Exc_Bison.y"
                                                                            {printf("\%s", yytext);}
#line 2690 "2nd_Exc_Bison.tab.c"
    break;

  case 161: /* $@102: %empty  */
#line 165 "2nd_Exc_Bison.y"
                       {printf("\"divident\"");}
#line 2696 "2nd_Exc_Bison.tab.c"
    break;

  case 162: /* $@103: %empty  */
#line 165 "2nd_Exc_Bison.y"
                                                       {printf(":");}
#line 2702 "2nd_Exc_Bison.tab.c"
    break;

  case 163: /* ruleDIVIDENT: DIVIDENT $@102 COLON $@103 DOUBLE  */
#line 165 "2nd_Exc_Bison.y"
                                                                             {printf("\%s", yytext);}
#line 2708 "2nd_Exc_Bison.tab.c"
    break;

  case 164: /* $@104: %empty  */
#line 166 "2nd_Exc_Bison.y"
                     {printf("\"winners\"");}
#line 2714 "2nd_Exc_Bison.tab.c"
    break;

  case 165: /* $@105: %empty  */
#line 166 "2nd_Exc_Bison.y"
                                                    {printf(":");}
#line 2720 "2nd_Exc_Bison.tab.c"
    break;

  case 166: /* ruleWINNERS: WINNERS $@104 COLON $@105 INT  */
#line 166 "2nd_Exc_Bison.y"
                                                                       {printf("\%s", yytext);}
#line 2726 "2nd_Exc_Bison.tab.c"
    break;

  case 167: /* $@106: %empty  */
#line 167 "2nd_Exc_Bison.y"
                             {printf("\"distributed\"");}
#line 2732 "2nd_Exc_Bison.tab.c"
    break;

  case 168: /* $@107: %empty  */
#line 167 "2nd_Exc_Bison.y"
                                                                {printf(":");}
#line 2738 "2nd_Exc_Bison.tab.c"
    break;

  case 169: /* ruleDISTRIBUTED: DISTRIBUTED $@106 COLON $@107 DOUBLE  */
#line 167 "2nd_Exc_Bison.y"
                                                                                      {printf("\%s", yytext);}
#line 2744 "2nd_Exc_Bison.tab.c"
    break;

  case 170: /* $@108: %empty  */
#line 168 "2nd_Exc_Bison.y"
                     {printf("\"jackpot\"");}
#line 2750 "2nd_Exc_Bison.tab.c"
    break;

  case 171: /* $@109: %empty  */
#line 168 "2nd_Exc_Bison.y"
                                                    {printf(":");}
#line 2756 "2nd_Exc_Bison.tab.c"
    break;

  case 172: /* ruleJACKPOT: JACKPOT $@108 COLON $@109 DOUBLE  */
#line 168 "2nd_Exc_Bison.y"
                                                                          {printf("\%s", yytext);}
#line 2762 "2nd_Exc_Bison.tab.c"
    break;

  case 173: /* $@110: %empty  */
#line 169 "2nd_Exc_Bison.y"
                 {printf("\"fixed\"");}
#line 2768 "2nd_Exc_Bison.tab.c"
    break;

  case 174: /* $@111: %empty  */
#line 169 "2nd_Exc_Bison.y"
                                              {printf(":");}
#line 2774 "2nd_Exc_Bison.tab.c"
    break;

  case 175: /* ruleFIXED: FIXED $@110 COLON $@111 DOUBLE  */
#line 169 "2nd_Exc_Bison.y"
                                                                    {printf("\%s", yytext);}
#line 2780 "2nd_Exc_Bison.tab.c"
    break;

  case 176: /* $@112: %empty  */
#line 170 "2nd_Exc_Bison.y"
                           {printf("\"categoryType\"");}
#line 2786 "2nd_Exc_Bison.tab.c"
    break;

  case 177: /* $@113: %empty  */
#line 170 "2nd_Exc_Bison.y"
                                                               {printf(":");}
#line 2792 "2nd_Exc_Bison.tab.c"
    break;

  case 178: /* ruleCATEG_TYPE: CATEG_TYPE $@112 COLON $@113 INT  */
#line 170 "2nd_Exc_Bison.y"
                                                                                  {checkCatType(yytext);printf("\%s", yytext);}
#line 2798 "2nd_Exc_Bison.tab.c"
    break;

  case 179: /* $@114: %empty  */
#line 171 "2nd_Exc_Bison.y"
                       {printf("\"gameType\"");}
#line 2804 "2nd_Exc_Bison.tab.c"
    break;

  case 180: /* $@115: %empty  */
#line 171 "2nd_Exc_Bison.y"
                                                       {printf(":");}
#line 2810 "2nd_Exc_Bison.tab.c"
    break;

  case 181: /* ruleGAMETYPE: GAMETYPE $@114 COLON $@115 STRING  */
#line 171 "2nd_Exc_Bison.y"
                                                                             {printf("\%s", yytext);}
#line 2816 "2nd_Exc_Bison.tab.c"
    break;

  case 182: /* $@116: %empty  */
#line 172 "2nd_Exc_Bison.y"
                                 {printf("\"minimumDistributed\"");}
#line 2822 "2nd_Exc_Bison.tab.c"
    break;

  case 183: /* $@117: %empty  */
#line 172 "2nd_Exc_Bison.y"
                                                                           {printf(":");}
#line 2828 "2nd_Exc_Bison.tab.c"
    break;

  case 184: /* ruleMIN_DIS: MINIMUM_DISTRIBUTED $@116 COLON $@117 DOUBLE  */
#line 172 "2nd_Exc_Bison.y"
                                                                                                 {printf("\%s", yytext);}
#line 2834 "2nd_Exc_Bison.tab.c"
    break;

  case 185: /* $@118: %empty  */
#line 174 "2nd_Exc_Bison.y"
                                  {printf("\"wagerStatistics\"");}
#line 2840 "2nd_Exc_Bison.tab.c"
    break;

  case 186: /* $@119: %empty  */
#line 174 "2nd_Exc_Bison.y"
                                                                         {printf(":");}
#line 2846 "2nd_Exc_Bison.tab.c"
    break;

  case 187: /* $@120: %empty  */
#line 174 "2nd_Exc_Bison.y"
                                                                                                  {printf("{\n");}
#line 2852 "2nd_Exc_Bison.tab.c"
    break;

  case 188: /* $@121: %empty  */
#line 174 "2nd_Exc_Bison.y"
                                                                                                                                     {printf(",");}
#line 2858 "2nd_Exc_Bison.tab.c"
    break;

  case 189: /* $@122: %empty  */
#line 174 "2nd_Exc_Bison.y"
                                                                                                                                                                     {printf(",");}
#line 2864 "2nd_Exc_Bison.tab.c"
    break;

  case 190: /* ruleWAGER_STATS: WAGER_STATISTICS $@118 COLON $@119 OBRACKETS $@120 ruleCOLUMNS COMMA $@121 ruleWAGERS COMMA $@122 ruleADDON CBRACKETS  */
#line 174 "2nd_Exc_Bison.y"
                                                                                                                                                                                                        {printf("}\n");}
#line 2870 "2nd_Exc_Bison.tab.c"
    break;

  case 191: /* $@123: %empty  */
#line 176 "2nd_Exc_Bison.y"
                     {printf("\"columns\"");}
#line 2876 "2nd_Exc_Bison.tab.c"
    break;

  case 192: /* $@124: %empty  */
#line 176 "2nd_Exc_Bison.y"
                                                    {printf(":");}
#line 2882 "2nd_Exc_Bison.tab.c"
    break;

  case 193: /* ruleCOLUMNS: COLUMNS $@123 COLON $@124 INT  */
#line 176 "2nd_Exc_Bison.y"
                                                                       {printf("\%s", yytext);}
#line 2888 "2nd_Exc_Bison.tab.c"
    break;

  case 194: /* $@125: %empty  */
#line 178 "2nd_Exc_Bison.y"
                   {printf("\"wagers\"");}
#line 2894 "2nd_Exc_Bison.tab.c"
    break;

  case 195: /* $@126: %empty  */
#line 178 "2nd_Exc_Bison.y"
                                                 {printf(":");}
#line 2900 "2nd_Exc_Bison.tab.c"
    break;

  case 196: /* ruleWAGERS: WAGERS $@125 COLON $@126 INT  */
#line 178 "2nd_Exc_Bison.y"
                                                                    {printf("\%s", yytext);}
#line 2906 "2nd_Exc_Bison.tab.c"
    break;

  case 197: /* $@127: %empty  */
#line 180 "2nd_Exc_Bison.y"
                 {printf("\"addOn\"");}
#line 2912 "2nd_Exc_Bison.tab.c"
    break;

  case 198: /* $@128: %empty  */
#line 180 "2nd_Exc_Bison.y"
                                              {printf(":");}
#line 2918 "2nd_Exc_Bison.tab.c"
    break;

  case 202: /* $@129: %empty  */
#line 185 "2nd_Exc_Bison.y"
                        {printf("[\n");}
#line 2924 "2nd_Exc_Bison.tab.c"
    break;

  case 203: /* ruleEMPTYARRAY: OBRACES $@129 CBRACES  */
#line 185 "2nd_Exc_Bison.y"
                                                 {printf("]\n");}
#line 2930 "2nd_Exc_Bison.tab.c"
    break;

  case 204: /* $@130: %empty  */
#line 187 "2nd_Exc_Bison.y"
                   {printf("[\n");}
#line 2936 "2nd_Exc_Bison.tab.c"
    break;

  case 205: /* ruleARRAY: OBRACES $@130 ruleCONTEXT CBRACES  */
#line 187 "2nd_Exc_Bison.y"
                                                        {printf("]\n");}
#line 2942 "2nd_Exc_Bison.tab.c"
    break;

  case 206: /* $@131: %empty  */
#line 189 "2nd_Exc_Bison.y"
                               {printf(",\n");}
#line 2948 "2nd_Exc_Bison.tab.c"
    break;

  case 208: /* ruleCONTEXT: INT  */
#line 190 "2nd_Exc_Bison.y"
     {printf("\%s", yytext);}
#line 2954 "2nd_Exc_Bison.tab.c"
    break;

  case 209: /* ruleCONTEXT: STRING  */
#line 191 "2nd_Exc_Bison.y"
        {printf("\%s", yytext);}
#line 2960 "2nd_Exc_Bison.tab.c"
    break;

  case 210: /* ruleCONTEXT: DOUBLE  */
#line 192 "2nd_Exc_Bison.y"
        {printf("\%s", yytext);}
#line 2966 "2nd_Exc_Bison.tab.c"
    break;

  case 211: /* $@132: %empty  */
#line 197 "2nd_Exc_Bison.y"
                           {printf("\"totalPages\"");}
#line 2972 "2nd_Exc_Bison.tab.c"
    break;

  case 212: /* $@133: %empty  */
#line 197 "2nd_Exc_Bison.y"
                                                             {printf(":");}
#line 2978 "2nd_Exc_Bison.tab.c"
    break;

  case 213: /* ruleTOTALPAGES: TOTALPAGES $@132 COLON $@133 INT  */
#line 197 "2nd_Exc_Bison.y"
                                                                                {printf("\%s", yytext);}
#line 2984 "2nd_Exc_Bison.tab.c"
    break;

  case 214: /* $@134: %empty  */
#line 198 "2nd_Exc_Bison.y"
                                 {printf("\"totalElements\"");}
#line 2990 "2nd_Exc_Bison.tab.c"
    break;

  case 215: /* $@135: %empty  */
#line 198 "2nd_Exc_Bison.y"
                                                                      {printf(":");}
#line 2996 "2nd_Exc_Bison.tab.c"
    break;

  case 216: /* ruleTOTALELEMENTS: TOTALELEMENTS $@134 COLON $@135 INT  */
#line 198 "2nd_Exc_Bison.y"
                                                                                         {printf("\%s", yytext);}
#line 3002 "2nd_Exc_Bison.tab.c"
    break;

  case 217: /* $@136: %empty  */
#line 199 "2nd_Exc_Bison.y"
               {printf("\"last\"");}
#line 3008 "2nd_Exc_Bison.tab.c"
    break;

  case 218: /* $@137: %empty  */
#line 199 "2nd_Exc_Bison.y"
                                           {printf(":");}
#line 3014 "2nd_Exc_Bison.tab.c"
    break;

  case 219: /* ruleLAST: LAST $@136 COLON $@137 BOOLEAN  */
#line 199 "2nd_Exc_Bison.y"
                                                                  {printf("\%s", yytext);}
#line 3020 "2nd_Exc_Bison.tab.c"
    break;

  case 220: /* $@138: %empty  */
#line 200 "2nd_Exc_Bison.y"
                                       {printf("\"numberOfElements\"");}
#line 3026 "2nd_Exc_Bison.tab.c"
    break;

  case 221: /* $@139: %empty  */
#line 200 "2nd_Exc_Bison.y"
                                                                               {printf(":");}
#line 3032 "2nd_Exc_Bison.tab.c"
    break;

  case 222: /* ruleNUMBEROFELEMENTS: NUMBEROFELEMENTS $@138 COLON $@139 INT  */
#line 200 "2nd_Exc_Bison.y"
                                                                                                  {printf("\%s", yytext);}
#line 3038 "2nd_Exc_Bison.tab.c"
    break;

  case 223: /* $@140: %empty  */
#line 203 "2nd_Exc_Bison.y"
                         {printf(",\n");}
#line 3044 "2nd_Exc_Bison.tab.c"
    break;

  case 231: /* $@141: %empty  */
#line 211 "2nd_Exc_Bison.y"
                         {printf("\"direction\"");}
#line 3050 "2nd_Exc_Bison.tab.c"
    break;

  case 232: /* $@142: %empty  */
#line 211 "2nd_Exc_Bison.y"
                                                          {printf(":");}
#line 3056 "2nd_Exc_Bison.tab.c"
    break;

  case 233: /* ruleDIRECTION: DIRECTION $@141 COLON $@142 STRING  */
#line 211 "2nd_Exc_Bison.y"
                                                                                {printf("\%s", yytext);}
#line 3062 "2nd_Exc_Bison.tab.c"
    break;

  case 234: /* $@143: %empty  */
#line 212 "2nd_Exc_Bison.y"
                       {printf("\"property\"");}
#line 3068 "2nd_Exc_Bison.tab.c"
    break;

  case 235: /* $@144: %empty  */
#line 212 "2nd_Exc_Bison.y"
                                                       {printf(":");}
#line 3074 "2nd_Exc_Bison.tab.c"
    break;

  case 236: /* rulePROPERTY: PROPERTY $@143 COLON $@144 STRING  */
#line 212 "2nd_Exc_Bison.y"
                                                                             {printf("\%s", yytext);}
#line 3080 "2nd_Exc_Bison.tab.c"
    break;

  case 237: /* $@145: %empty  */
#line 213 "2nd_Exc_Bison.y"
                           {printf("\"ignoreCase\"");}
#line 3086 "2nd_Exc_Bison.tab.c"
    break;

  case 238: /* $@146: %empty  */
#line 213 "2nd_Exc_Bison.y"
                                                             {printf(":");}
#line 3092 "2nd_Exc_Bison.tab.c"
    break;

  case 239: /* ruleIGNORECASE: IGNORECASE $@145 COLON $@146 BOOLEAN  */
#line 213 "2nd_Exc_Bison.y"
                                                                                    {printf("\%s", yytext);}
#line 3098 "2nd_Exc_Bison.tab.c"
    break;

  case 240: /* $@147: %empty  */
#line 214 "2nd_Exc_Bison.y"
                               {printf("\"nullHandling\"");}
#line 3104 "2nd_Exc_Bison.tab.c"
    break;

  case 241: /* $@148: %empty  */
#line 214 "2nd_Exc_Bison.y"
                                                                   {printf(":");}
#line 3110 "2nd_Exc_Bison.tab.c"
    break;

  case 242: /* ruleNULLHANDLING: NULLHANDLING $@147 COLON $@148 STRING  */
#line 214 "2nd_Exc_Bison.y"
                                                                                         {printf("\%s", yytext);}
#line 3116 "2nd_Exc_Bison.tab.c"
    break;

  case 243: /* $@149: %empty  */
#line 215 "2nd_Exc_Bison.y"
                           {printf("\"descending\"");}
#line 3122 "2nd_Exc_Bison.tab.c"
    break;

  case 244: /* $@150: %empty  */
#line 215 "2nd_Exc_Bison.y"
                                                             {printf(":");}
#line 3128 "2nd_Exc_Bison.tab.c"
    break;

  case 245: /* ruleDESCENDING: DESCENDING $@149 COLON $@150 BOOLEAN  */
#line 215 "2nd_Exc_Bison.y"
                                                                                    {printf("\%s", yytext);}
#line 3134 "2nd_Exc_Bison.tab.c"
    break;

  case 246: /* $@151: %empty  */
#line 216 "2nd_Exc_Bison.y"
                         {printf("\"ascending\"");}
#line 3140 "2nd_Exc_Bison.tab.c"
    break;

  case 247: /* $@152: %empty  */
#line 216 "2nd_Exc_Bison.y"
                                                          {printf(":");}
#line 3146 "2nd_Exc_Bison.tab.c"
    break;

  case 248: /* ruleASCENDING: ASCENDING $@151 COLON $@152 BOOLEAN  */
#line 216 "2nd_Exc_Bison.y"
                                                                                 {printf("\%s", yytext);}
#line 3152 "2nd_Exc_Bison.tab.c"
    break;

  case 249: /* $@153: %empty  */
#line 218 "2nd_Exc_Bison.y"
                 {printf("\"first\"");}
#line 3158 "2nd_Exc_Bison.tab.c"
    break;

  case 250: /* $@154: %empty  */
#line 218 "2nd_Exc_Bison.y"
                                              {printf(":");}
#line 3164 "2nd_Exc_Bison.tab.c"
    break;

  case 251: /* ruleFIRST: FIRST $@153 COLON $@154 BOOLEAN  */
#line 218 "2nd_Exc_Bison.y"
                                                                     {printf("\%s", yytext);}
#line 3170 "2nd_Exc_Bison.tab.c"
    break;

  case 252: /* $@155: %empty  */
#line 219 "2nd_Exc_Bison.y"
               {printf("\"size\"");}
#line 3176 "2nd_Exc_Bison.tab.c"
    break;

  case 253: /* $@156: %empty  */
#line 219 "2nd_Exc_Bison.y"
                                           {printf(":");}
#line 3182 "2nd_Exc_Bison.tab.c"
    break;

  case 254: /* ruleSIZE: SIZE $@155 COLON $@156 INT  */
#line 219 "2nd_Exc_Bison.y"
                                                              {printf("\%s", yytext);}
#line 3188 "2nd_Exc_Bison.tab.c"
    break;

  case 255: /* $@157: %empty  */
#line 220 "2nd_Exc_Bison.y"
                   {printf("\"number\"");}
#line 3194 "2nd_Exc_Bison.tab.c"
    break;

  case 256: /* $@158: %empty  */
#line 220 "2nd_Exc_Bison.y"
                                                 {printf(":");}
#line 3200 "2nd_Exc_Bison.tab.c"
    break;

  case 257: /* ruleNUMBER: NUMBER $@157 COLON $@158 INT  */
#line 220 "2nd_Exc_Bison.y"
                                                                    {printf("\%s", yytext);}
#line 3206 "2nd_Exc_Bison.tab.c"
    break;


#line 3210 "2nd_Exc_Bison.tab.c"

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

#line 224 "2nd_Exc_Bison.y"


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
		printf("\n\n\t\tSuccesful Parse!\n");
		return 0;
	}
	}

void yyerror (const char *s) {fprintf (stderr, "%s\nin line: %d\nlast scanned: %s\n", s, line_num, yytext);} 
