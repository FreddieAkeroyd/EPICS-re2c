/* Generated by re2c */
#line 1 "calc_004.re"
/* re2c lesson 001_upn_calculator, calc_004, (c) M. Boerger 2006 - 2007 */
#line 20 "calc_004.re"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * tokendup(const char *t, const char *l)
{
	size_t n = l -t + 1;
	char *r = (char*)malloc(n);
	
	memmove(r, t, n-1);
	r[n] = '\0';
	return r;
}

int scan(char *s, int l)
{
	char *p = s;
	char *q = 0;
	char *t;
#define YYCTYPE         char
#define YYCURSOR        p
#define YYLIMIT         (s+l+2)
#define YYMARKER        q
#define YYFILL(n)		{ printf("OOD\n"); return 2; }
	
	for(;;)
	{
		t = p;

#line 36 "calc_004.c"
		{
			YYCTYPE yych;
			if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy2;
			case '+':	goto yy6;
			case '-':	goto yy8;
			case '0':	goto yy10;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy12;
			default:	goto yy4;
			}
yy2:
			++YYCURSOR;
#line 60 "calc_004.re"
			{ printf("EOF\n");	return 0; }
#line 61 "calc_004.c"
yy4:
			++YYCURSOR;
#line 61 "calc_004.re"
			{ printf("ERR\n");	return 1; }
#line 66 "calc_004.c"
yy6:
			++YYCURSOR;
#line 58 "calc_004.re"
			{ printf("+\n");	continue; }
#line 71 "calc_004.c"
yy8:
			++YYCURSOR;
#line 59 "calc_004.re"
			{ printf("+\n");	continue; }
#line 76 "calc_004.c"
yy10:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy14;
			default:	goto yy11;
			}
yy11:
#line 57 "calc_004.re"
			{ t = tokendup(t, p); printf("Num: %s\n", t); free(t); continue; }
#line 95 "calc_004.c"
yy12:
			++YYCURSOR;
			if (YYLIMIT <= YYCURSOR) YYFILL(1);
			yych = *YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy12;
			default:	goto yy11;
			}
yy14:
			++YYCURSOR;
			if (YYLIMIT <= YYCURSOR) YYFILL(1);
			yych = *YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy14;
			default:	goto yy16;
			}
yy16:
#line 56 "calc_004.re"
			{ t = tokendup(t, p); printf("Oct: %s\n", t); free(t); continue; }
#line 133 "calc_004.c"
		}
#line 62 "calc_004.re"

	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		return scan(argv[1], strlen(argv[1]));
	}
	else
	{
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 0;
	}
}
