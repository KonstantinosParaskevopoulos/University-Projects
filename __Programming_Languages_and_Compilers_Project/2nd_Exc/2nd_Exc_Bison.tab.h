/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_2ND_EXC_BISON_TAB_H_INCLUDED
# define YY_YY_2ND_EXC_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LAST = 258,                    /* LAST  */
    ACTIVE = 259,                  /* ACTIVE  */
    COLON = 260,                   /* COLON  */
    COMMA = 261,                   /* COMMA  */
    OBRACKETS = 262,               /* OBRACKETS  */
    OBRACES = 263,                 /* OBRACES  */
    CBRACKETS = 264,               /* CBRACKETS  */
    CBRACES = 265,                 /* CBRACES  */
    GAME_ID = 266,                 /* GAME_ID  */
    GAME_ID_ATTRIBUTE = 267,       /* GAME_ID_ATTRIBUTE  */
    DRAW_ID = 268,                 /* DRAW_ID  */
    DRAW_TIME = 269,               /* DRAW_TIME  */
    STATUS = 270,                  /* STATUS  */
    DRAW_BREAK = 271,              /* DRAW_BREAK  */
    VISUAL_DRAW = 272,             /* VISUAL_DRAW  */
    PRICE_POINTS = 273,            /* PRICE_POINTS  */
    AMOUNT = 274,                  /* AMOUNT  */
    WINNING_NUMBERS = 275,         /* WINNING_NUMBERS  */
    LIST = 276,                    /* LIST  */
    BONUS = 277,                   /* BONUS  */
    PRIZE_CATEGORIES = 278,        /* PRIZE_CATEGORIES  */
    ID = 279,                      /* ID  */
    DIVIDENT = 280,                /* DIVIDENT  */
    WINNERS = 281,                 /* WINNERS  */
    DISTRIBUTED = 282,             /* DISTRIBUTED  */
    JACKPOT = 283,                 /* JACKPOT  */
    FIXED = 284,                   /* FIXED  */
    CATEG_TYPE = 285,              /* CATEG_TYPE  */
    GAMETYPE = 286,                /* GAMETYPE  */
    MINIMUM_DISTRIBUTED = 287,     /* MINIMUM_DISTRIBUTED  */
    WAGER_STATISTICS = 288,        /* WAGER_STATISTICS  */
    COLUMNS = 289,                 /* COLUMNS  */
    WAGERS = 290,                  /* WAGERS  */
    ADDON = 291,                   /* ADDON  */
    BOOLEAN = 292,                 /* BOOLEAN  */
    STRING = 293,                  /* STRING  */
    INT = 294,                     /* INT  */
    DOUBLE = 295,                  /* DOUBLE  */
    CONTENT = 296,                 /* CONTENT  */
    TOTALPAGES = 297,              /* TOTALPAGES  */
    TOTALELEMENTS = 298,           /* TOTALELEMENTS  */
    NUMBEROFELEMENTS = 299,        /* NUMBEROFELEMENTS  */
    SORT = 300,                    /* SORT  */
    DIRECTION = 301,               /* DIRECTION  */
    PROPERTY = 302,                /* PROPERTY  */
    IGNORECASE = 303,              /* IGNORECASE  */
    NULLHANDLING = 304,            /* NULLHANDLING  */
    DESCENDING = 305,              /* DESCENDING  */
    ASCENDING = 306,               /* ASCENDING  */
    FIRST = 307,                   /* FIRST  */
    SIZE = 308,                    /* SIZE  */
    NUMBER = 309                   /* NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "2nd_Exc_Bison.y"

int num; 
char* string;

#line 123 "2nd_Exc_Bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_2ND_EXC_BISON_TAB_H_INCLUDED  */
