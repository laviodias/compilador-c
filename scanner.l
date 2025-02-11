%{
#include "parser.tab.h"
%}

%%

[0-9]+      { yylval.num = atoi(yytext); return NUM; }
[ \t\n]     { /* Ignora espaços em branco */ }
[a-zA-Z_][a-zA-Z0-9_]*\[[0-9]+\] {
    yylval.strId = strdup(yytext);
    return ARRAY_ID;
}
"int"       { return INT; }
"float"     { return FLOAT; }
"void"      { return VOID; }
"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"return"    { return RETURN; }
"="         { return ASSIGN; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return MULT; }
"/"         { return DIV; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }
"<"         { yylval.relop = yytext; return RELOP; }
">"         { yylval.relop = yytext; return RELOP; }
">="        { yylval.relop = yytext; return RELOP; }
"<="        { yylval.relop = yytext; return RELOP; }
"!="        { yylval.relop = yytext; return RELOP; }
"=="        { yylval.relop = yytext; return RELOP; }
";"         { return SEMICOLON; }
","         { return COMMA; }
[a-zA-Z]+   { yylval.strId = yytext; return ID; }
.    { printf("\n Caracter(s) invalido(s). \n"); return ERROR; }

%%

int yywrap() {
    return 1;
}