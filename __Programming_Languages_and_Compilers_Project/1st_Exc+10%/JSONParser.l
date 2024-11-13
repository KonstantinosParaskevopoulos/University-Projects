%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "JSONParser.tab.h"
    
    int line_num=1;


%}


%option yylineno
%option case-insensitive

int			[1-9][0-9]*|0
string		(\\.|[^\"])* 
double      ([1-9][0-9]*|0)"."([0-9][0-9]*|0)
ws 			[ \t\n\r]


%%


:					    {return COLON;}
,					    {return COMMA;}
\{					    {return OBRACKETS;}
\}					    {return CBRACKETS;}
\[					    {return OBRACES;}
\]					    {return CBRACES;}
\"last\"                {return LAST;}
\"active\"              {return ACTIVE;}
\"gameId\"              {return GAME_ID;}
\"drawId\"              {return DRAW_ID;}
\"drawTime\"            {return DRAW_TIME;}
\"status\"              {return STATUS;}
\"drawBreak\"           {return DRAW_BREAK;}
\"visualDraw\"          {return VISUAL_DRAW;}
\"pricePoints\"         {return PRICE_POINTS;}
\"amount\"              {return AMOUNT;}
\"winningNumbers\"      {return WINNING_NUMBERS;}
\"list\"                {return LIST;}
\"bonus\"               {return BONUS;}
\"prizeCategories\"     {return PRIZE_CATEGORIES;}
\"id\"                  {return ID;}
\"divident\"            {return DIVIDENT;}
\"winners\"             {return WINNERS;}
\"distributed\"         {return DISTRIBUTED;}
\"jackpot\"             {return JACKPOT;}
\"fixed\"               {return FIXED;}
\"categoryType\"        {return CATEG_TYPE;}
\"gameType\"            {return GAMETYPE;}
\"minimumDistributed\"  {return MINIMUM_DISTRIBUTED;}
\"wagerStatistics\"     {return WAGER_STATISTICS;}
\"columns\"             {return COLUMNS;}       
\"wagers\"              {return WAGERS;}
\"addOn\"               {return ADDON;}

\"{string}\"		{return STRING;}
{int}				{return INT;}
{double}              {return DOUBLE;}

\n					{++line_num;} 

{ws}				{;}


%%

int yywrap()
{
	return 1;
}