/* Generated by re2c */
#line 1 "default_full.x.re"

#line 5 "default_full.x.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych <= 0xD7FF) goto yy2;
	if (yych <= 0xDBFF) goto yy4;
yy2:
	++YYCURSOR;
yy3:
#line 3 "default_full.x.re"
	{ return FULL; }
#line 17 "default_full.x.c"
yy4:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDBFF) goto yy3;
	if (yych <= 0xDFFF) goto yy2;
	goto yy3;
}
#line 4 "default_full.x.re"

