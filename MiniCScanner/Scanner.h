/***************************************************************
*      scanner routine for Mini C language                    *
*                                   2003. 3. 10               *
***************************************************************/

#pragma once


#define NO_KEYWORD 14
#define ID_LENGTH 12
#define DOC_BUFFER_SIZE 256

struct tokenType {
	int number;
	union {
		char id[ID_LENGTH];
		int num;
	} value;
};


enum tsymbol {
	tnull = -1,
	tnot, tnotequ, tremainder, tremAssign, tident, tnumber,
	/* 0  1        2           3           4       5                   */
	tand, tlparen, trparen, tmul, tmulAssign, tplus,
	/* 6  7        8        9     10          11                       */
	tinc, taddAssign, tcomma, tminus, tdec, tsubAssign,
	/* 12 13          14      15      16    17                         */
	tdiv, tdivAssign, tsemicolon, tless, tlesse, tassign,
	/* 18 19          20          21     22      23                    */
	tequal, tgreat, tgreate, tlbracket, trbracket, teof, tdelimeter,
	/* 24   25      26       27         28         29    30             */
	//   ...........    word symbols ................................. //
	/* 31   32     33   34    35       36                              */
	tconst, telse, tif, tint, treturn, tvoid,
	/* 37   38       39   40       41    42       43     44     45     */
	twhile, tlbrace, tor, trbrace, tfor, tswitch, tcase, tgoto, tbreak,
	/* 46      47                                                      */
	tcontinue, tdouble, 
};

struct tokenType scanner();
void printToken(struct tokenType token);