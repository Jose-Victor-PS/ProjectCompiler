%{
#define YYSTYPE char*
#include "y.tab.h"
%}

%%

true { yylval = strdup(yytext); return TRUE; }

false { yylval = strdup(yytext); return FALSE; }

this { yylval = strdup(yytext); return THIS; }

new { yylval = strdup(yytext); return ALLOCATION; }

"(" { yylval = strdup(yytext); return OPEN_PARENTHESIS; }

")" { yylval = strdup(yytext); return CLOSE_PARENTHESIS; }

"[" { yylval = strdup(yytext); return OPEN_BRACKETS; }

"]" { yylval = strdup(yytext); return CLOSE_BRACKETS; }

"{" { yylval = strdup(yytext); return OPEN_SCOPE; }

"}" { yylval = strdup(yytext); return CLOSE_SCOPE; }

"!" { yylval = strdup(yytext); return NEGATION; }

"&&" { yylval = strdup(yytext); return AND; }

"<" { yylval = strdup(yytext); return COMPARE; }

"+" { yylval = strdup(yytext); return PLUS; }

"-" { yylval = strdup(yytext); return MINUS; }

"*" { yylval = strdup(yytext); return STAR; }

"." { yylval = strdup(yytext); return DOT; }

";" { yylval = strdup(yytext); return SEMICOLON; }

"," { yylval = strdup(yytext); return COMMA; }

"=" { yylval = strdup(yytext); return EQUALS; }

int { yylval = strdup(yytext); return INT_TYPE; }

boolean { yylval = strdup(yytext); return BOOLEAN; }

String { yylval = strdup(yytext); return STRING; }

length { yylval = strdup(yytext); return LENGTH; }

if { yylval = strdup(yytext); return IF; }

else { yylval = strdup(yytext); return ELSE; }

while { yylval = strdup(yytext); return WHILE; }

"System.out.println" { yylval = strdup(yytext); return PRINT; }

public { yylval = strdup(yytext); return PUBLIC; }

class { yylval = strdup(yytext); return CLASS; }

static { yylval = strdup(yytext); return STATIC; }

void { yylval = strdup(yytext); return VOID; }

main { yylval = strdup(yytext); return MAIN; }

extends { yylval = strdup(yytext); return EXTENDS; }

return { yylval = strdup(yytext); return RETURN; }

[a-zA-Z][a-zA-Z0-9]* { yylval = strdup(yytext); return IDENTIFIER; }

-?[0-9]+ { yylval = strdup(yytext); return NUMBER; }

[ \t]+   /* ignore whitespace */ ;

"\n" { return EOL; }

%%
