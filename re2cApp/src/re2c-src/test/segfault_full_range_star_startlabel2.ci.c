/* Generated by re2c */

{
	YYCTYPE yych;
yy0:
	switch (YYGETCONDITION()) {
	case yycc1: goto yyc_c1;
	}
/* *********************************** */
yyc_c1:
	goto yy1;
yy2:
	++YYCURSOR;
yy1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	goto yy2;
	{}
}

re2c: warning: line 3: unreachable rule in condition 'c1'  [-Wunreachable-rules]
