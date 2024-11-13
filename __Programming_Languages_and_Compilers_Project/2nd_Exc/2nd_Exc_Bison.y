%{
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
%}

%define parse.error verbose
%union {
int num; 
char* string;}
%token LAST ACTIVE
%token COLON COMMA OBRACKETS OBRACES CBRACKETS CBRACES
%token GAME_ID GAME_ID_ATTRIBUTE
%token DRAW_ID DRAW_TIME
%token STATUS
%token DRAW_BREAK VISUAL_DRAW
%token PRICE_POINTS	AMOUNT
%token WINNING_NUMBERS LIST
%token BONUS PRIZE_CATEGORIES
%token ID DIVIDENT
%token WINNERS DISTRIBUTED
%token JACKPOT FIXED CATEG_TYPE GAMETYPE MINIMUM_DISTRIBUTED WAGER_STATISTICS COLUMNS 
%token WAGERS 
%token ADDON
%token BOOLEAN
%token STRING
%token INT
%token DOUBLE

%token CONTENT
%token TOTALPAGES
%token TOTALELEMENTS
%token NUMBEROFELEMENTS
%token SORT
%token DIRECTION
%token PROPERTY
%token IGNORECASE
%token NULLHANDLING
%token DESCENDING
%token ASCENDING
%token FIRST
%token SIZE
%token NUMBER



%type <double> DOUBLE
%type <string> STRING
%type <num> INT
%type <boolean> BOOLEAN
%start jsonfile

%%
//root GRAMMAR
jsonfile: OBRACKETS {printf("{\n");} ruleFULLJSON CBRACKETS {printf("}\n");};

ruleFULLJSON: ruleRANGE_RESULT
|ruleLAST_RESULT;


ruleLAST_RESULT: LAST {printf("\"last\"");} COLON {printf(":");} OBRACKETS {printf("{");} ruleLAST_1 CBRACKETS {printf("}");} COMMA {printf(",\n");} ACTIVE {printf("\"active\"");} COLON {printf(":");} OBRACKETS {printf("{");} ruleACTIVE CBRACKETS {printf("}");};

ruleRANGE_RESULT: CONTENT {printf("\"content\"");} COLON {printf(":");} OBRACES {printf("[");}ruleCONTENT_0 CBRACES {printf("]");} COMMA {printf(",\n");} ruleTOTALPAGES COMMA {printf(",\n");} ruleTOTALELEMENTS COMMA {printf(",\n");} ruleLAST COMMA {printf(",\n");} ruleNUMBEROFELEMENTS COMMA {printf(",\n");} SORT  {printf("\"sort\"");} COLON {printf(":");} OBRACES {printf("[");} OBRACKETS {printf("{");} ruleSORT CBRACKETS {printf("}");} CBRACES {printf("]");} COMMA {printf(",\n");} ruleFIRST COMMA {printf(",\n");} ruleSIZE COMMA {printf(",\n");} ruleNUMBER;

ruleCONTENT_0: ruleCONTENT_1 COMMA {printf(",\n");} ruleCONTENT_1 COMMA {printf(",\n");} ruleCONTENT_1 COMMA {printf(",\n");} ruleCONTENT_1 COMMA {printf(",\n");};

ruleCONTENT_1: OBRACKETS ruleCONTENT CBRACKETS;

ruleCONTENT: ruleCONTENT COMMA {printf(",\n");} ruleCONTENT
|ruleGAME_ID
|ruleDRAW_ID
|ruleDRAW_TIME
|ruleSTATUS
|ruleDRAW_BREAK
|ruleVISUAL_DRAW
|rulePRICE_POINTS
|ruleWINNING_NUMS
|rulePRIZE_CATEG
|ruleWAGER_STATS
;

ruleACTIVE: ruleACTIVE COMMA {printf(",\n");} ruleACTIVE
|ruleGAME_ID
|ruleDRAW_ID
|ruleDRAW_TIME
|ruleSTATUS
|ruleDRAW_BREAK
|ruleVISUAL_DRAW
|rulePRICE_POINTS
|rulePRIZE_CATEG
|ruleWAGER_STATS
;

ruleLAST_1: ruleLAST_1 COMMA {printf(",\n");} ruleLAST_1
|ruleGAME_ID
|ruleDRAW_ID
|ruleDRAW_TIME
|ruleSTATUS
|ruleDRAW_BREAK
|ruleVISUAL_DRAW
|rulePRICE_POINTS
|ruleWINNING_NUMS
|rulePRIZE_CATEG
|ruleWAGER_STATS
;

ruleGAME_ID: GAME_ID {printf("\"gameId\"");} COLON {printf(":");} INT {checkGameID(yytext);printf("\%s", yytext);};

ruleDRAW_ID: DRAW_ID {printf("\"drawId\"");} COLON {printf(":");} INT {printf("\%s", yytext);} ;

ruleDRAW_TIME: DRAW_TIME {printf("\"drawTime\"");} COLON {printf(":");} INT {printf("\%s", yytext);};


ruleSTATUS: STATUS {printf("\"status\"");} COLON {printf(":");} ruleSTATUS_2;

ruleSTATUS_2: STRING {printf("\%s", yytext);}
|ACTIVE {printf("\%s", yytext);};


ruleDRAW_BREAK: DRAW_BREAK {printf("\"drawBreak\"");} COLON {printf(":");} INT {printf("\%s", yytext);};

ruleVISUAL_DRAW: VISUAL_DRAW {printf("\"visualDraw\"");} COLON {printf(":");} INT {printf("\%s", yytext);};

rulePRICE_POINTS: PRICE_POINTS {printf("\"pricePoints\"");} COLON {printf(":");} OBRACKETS {printf("{\n");} ruleAMOUNT CBRACKETS {printf("}\n");};

ruleAMOUNT: AMOUNT {printf("\"amount\"");} COLON {printf(":");} DOUBLE {printf("\%s", yytext);};
/*-------------------------------------------------------------*/
ruleWINNING_NUMS: WINNING_NUMBERS {printf("\"winningNumbers\"");} COLON {printf(":");} OBRACKETS {printf("{\n");} ruleLIST COMMA {printf(",\n");}  ruleBONUS CBRACKETS {printf("}\n");};

ruleLIST: LIST {printf("\"list\"");} COLON {printf(":");} OBRACES {printf("[\n");} INT {addNumber(yytext);printf("\%s", yytext);} COMMA {printf(",\n");} INT {addNumber(yytext);printf("\%s", yytext);} COMMA {printf(",\n");} INT {addNumber(yytext);printf("\%s", yytext);} COMMA {printf(",\n");} INT {addNumber(yytext);printf("\%s", yytext);} COMMA {printf(",\n");} INT {addNumber(yytext);printf("\%s", yytext);checkWinningNumbers(winningNums);win_array_index=0;} CBRACES {printf("]\n");};

ruleBONUS: BONUS {printf("\"bonus\"");} COLON {printf(":");} OBRACES {printf("[\n");} INT {printf("\%s", yytext);} CBRACES {printf("]\n");};
/*-------------------------------------------------------------*/
rulePRIZE_CATEG: PRIZE_CATEGORIES {printf("\"prizeCategories\"");} COLON {printf(":");} rulePRIZE_ARRAY;

rulePRIZE_ARRAY: OBRACES {printf("[\n");} ruleFIRST_PRIZE COMMA {printf(",\n");} ruleREST_PRIZES COMMA {printf(",\n");} ruleREST_PRIZES COMMA {printf(",\n");} ruleREST_PRIZES COMMA {printf(",\n");} ruleREST_PRIZES COMMA {printf(",\n");} ruleREST_PRIZES COMMA {printf(",\n");} ruleREST_PRIZES COMMA {printf(",\n");} ruleREST_PRIZES CBRACES {PrizeCatCounter=0; printf("]\n");};

ruleFIRST_PRIZE: OBRACKETS {printf("{\n");} ruleID_1 COMMA {printf(",\n");} ruleDIVIDENT COMMA {printf(",\n");} ruleWINNERS COMMA {printf(",\n");} ruleDISTRIBUTED COMMA {printf(",\n");} ruleJACKPOT COMMA {printf(",\n");} ruleFIXED COMMA {printf(",\n");} ruleCATEG_TYPE COMMA {printf(",\n");} ruleGAMETYPE COMMA {printf(",\n");} ruleMIN_DIS CBRACKETS {printf("}\n");};

ruleREST_PRIZES: OBRACKETS {printf("{\n");} ruleID COMMA {printf(",\n");} ruleDIVIDENT COMMA {printf(",\n");} ruleWINNERS COMMA {printf(",\n");} ruleDISTRIBUTED COMMA {printf(",\n");} ruleJACKPOT COMMA {printf(",\n");} ruleFIXED COMMA {printf(",\n");} ruleCATEG_TYPE COMMA {printf(",\n");} ruleGAMETYPE CBRACKETS {printf("}\n");};

ruleID: ID {incPrizeCatCntr();printf("\"id\"");} COLON {printf(":");} INT {printf("\%s", yytext);};
ruleID_1: ID {incPrizeCatCntr();printf("\"id\"");} COLON {printf(":");} INT {printf("\%s", yytext);};
ruleDIVIDENT: DIVIDENT {printf("\"divident\"");} COLON {printf(":");} DOUBLE {printf("\%s", yytext);}
ruleWINNERS: WINNERS {printf("\"winners\"");} COLON {printf(":");} INT {printf("\%s", yytext);}
ruleDISTRIBUTED: DISTRIBUTED {printf("\"distributed\"");} COLON {printf(":");} DOUBLE {printf("\%s", yytext);}
ruleJACKPOT: JACKPOT {printf("\"jackpot\"");} COLON {printf(":");} DOUBLE {printf("\%s", yytext);}
ruleFIXED: FIXED {printf("\"fixed\"");} COLON {printf(":");} DOUBLE {printf("\%s", yytext);}
ruleCATEG_TYPE: CATEG_TYPE {printf("\"categoryType\"");} COLON {printf(":");} INT {checkCatType(yytext);printf("\%s", yytext);}
ruleGAMETYPE: GAMETYPE {printf("\"gameType\"");} COLON {printf(":");} STRING {printf("\%s", yytext);}
ruleMIN_DIS: MINIMUM_DISTRIBUTED {printf("\"minimumDistributed\"");} COLON {printf(":");} DOUBLE {printf("\%s", yytext);}
/*-------------------------------------------------------------*/
ruleWAGER_STATS: WAGER_STATISTICS {printf("\"wagerStatistics\"");} COLON {printf(":");} OBRACKETS {printf("{\n");} ruleCOLUMNS COMMA {printf(",");} ruleWAGERS COMMA {printf(",");} ruleADDON CBRACKETS {printf("}\n");};

ruleCOLUMNS: COLUMNS {printf("\"columns\"");} COLON {printf(":");} INT {printf("\%s", yytext);};

ruleWAGERS: WAGERS {printf("\"wagers\"");} COLON {printf(":");} INT {printf("\%s", yytext);};

ruleADDON: ADDON {printf("\"addOn\"");} COLON {printf(":");} ruleJSONARRAY

ruleJSONARRAY: ruleEMPTYARRAY
|ruleARRAY;

ruleEMPTYARRAY: OBRACES {printf("[\n");} CBRACES {printf("]\n");};

ruleARRAY: OBRACES {printf("[\n");} ruleCONTEXT CBRACES {printf("]\n");};

ruleCONTEXT: ruleCONTEXT COMMA {printf(",\n");} ruleCONTEXT
|INT {printf("\%s", yytext);}
|STRING {printf("\%s", yytext);}
|DOUBLE {printf("\%s", yytext);}
;

/*--------------------------------------------------------------------------------*/

ruleTOTALPAGES: TOTALPAGES {printf("\"totalPages\"");} COLON {printf(":");} INT {printf("\%s", yytext);};
ruleTOTALELEMENTS: TOTALELEMENTS {printf("\"totalElements\"");} COLON {printf(":");} INT {printf("\%s", yytext);};
ruleLAST: LAST {printf("\"last\"");} COLON {printf(":");} BOOLEAN {printf("\%s", yytext);};
ruleNUMBEROFELEMENTS: NUMBEROFELEMENTS {printf("\"numberOfElements\"");} COLON {printf(":");} INT {printf("\%s", yytext);};


ruleSORT: ruleSORT COMMA {printf(",\n");} ruleSORT
|ruleDIRECTION
|rulePROPERTY
|ruleIGNORECASE
|ruleNULLHANDLING
|ruleDESCENDING
|ruleASCENDING
;
ruleDIRECTION: DIRECTION {printf("\"direction\"");} COLON {printf(":");} STRING {printf("\%s", yytext);};
rulePROPERTY: PROPERTY {printf("\"property\"");} COLON {printf(":");} STRING {printf("\%s", yytext);};
ruleIGNORECASE: IGNORECASE {printf("\"ignoreCase\"");} COLON {printf(":");} BOOLEAN {printf("\%s", yytext);};
ruleNULLHANDLING: NULLHANDLING {printf("\"nullHandling\"");} COLON {printf(":");} STRING {printf("\%s", yytext);};
ruleDESCENDING: DESCENDING {printf("\"descending\"");} COLON {printf(":");} BOOLEAN {printf("\%s", yytext);};
ruleASCENDING: ASCENDING {printf("\"ascending\"");} COLON {printf(":");} BOOLEAN {printf("\%s", yytext);};
/*-------------------------------*/
ruleFIRST: FIRST {printf("\"first\"");} COLON {printf(":");} BOOLEAN {printf("\%s", yytext);};
ruleSIZE: SIZE {printf("\"size\"");} COLON {printf(":");} INT {printf("\%s", yytext);};
ruleNUMBER: NUMBER {printf("\"number\"");} COLON {printf(":");} INT {printf("\%s", yytext);};



%%

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