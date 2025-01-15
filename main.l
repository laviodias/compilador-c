%option noyywrap

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIMBOLOS 100

// Tabela de símbolos
char *tabela[MAX_SIMBOLOS];
int contador = 0;

int obter_posicao(const char *id) {
    for (int i = 0; i < contador; i++) {
        if (strcmp(tabela[i], id) == 0) {
            return i;
        }
    }
    tabela[contador] = strdup(id);
    return contador++;
}
%}

DIGITO          [0-9]
ID              [a-zA-Z_][a-zA-Z0-9_]*
INTEIRO         {DIGITO}+
FLUTUANTE       {DIGITO}+"."{DIGITO}*
ESPACO_BRANCO   [ \t]+
NOVA_LINHA      \n

%%


"int"           { printf("<TIPO_INTEIRO>\n"); }
"float"         { printf("<TIPO_FLUTUANTE>\n"); }
"void"          { printf("<TIPO_VOID>\n"); }
"return"        { printf("<RETORNO_FUNCAO>\n"); }

"if"            { printf("<CONDICIONAL_IF>\n"); }
"else"          { printf("<CONDICIONAL_ELSE>\n"); }
"else if"       { printf("<CONDICIONAL_ELSE_IF>\n"); }

"while" {printf("<LOOP_WHILE>\n"); }
"break" {printf("<LOOP_BREAK>\n"); }

"="             { printf("<ATRIBUICAO>\n"); }
"+"             { printf("<ADICAO>\n"); }
"-"             { printf("<SUBTRACAO>\n"); }
"*"             { printf("<MULTIPLICACAO>\n"); }
"/"             { printf("<DIVISAO>\n"); }
"("             { printf("<PARENTESE_ESQ>\n"); }
")"             { printf("<PARENTESE_DIR>\n"); }
"{"             { printf("<CHAVE_ESQ>\n"); }
"}"             { printf("<CHAVE_DIR>\n"); }
"["             { printf("<COLCHETE_ESQ>\n"); }
"]"             { printf("<COLCHETE_DIR>\n"); }
";"             { printf("<PONTO_VIRGULA>\n"); }
","             { printf("<VIRGULA>\n"); }
"."             { printf("<PONTO>\n"); }
"=="            { printf("<OP_IGUALDADE>\n"); }
"!="            { printf("<OP_DIFERENCA>\n"); }
"!"             { printf("<OP_NEGACAO>\n"); }
">="            { printf("<OP_MAIOR_IGUAL>\n"); }
"<="            { printf("<OP_MENOR_IGUAL>\n"); }
">"             { printf("<OP_MAIOR>\n"); }
"<"            { printf("<OP_MENOR>\n"); }

{ID} {
    int posicao = obter_posicao(yytext);
    printf("<ID,%d>\n", posicao);
}
{FLUTUANTE}     { printf("<NUMERO_FLUTUANTE,%s>\n", yytext); }
{INTEIRO}       { printf("<NUMERO_INTEIRO,%s>\n", yytext); }

{ESPACO_BRANCO} { /* Ignorar */ }
{NOVA_LINHA}    { /* Ignorar */ }

.               { printf("Erro Lexico: <%s>\n", yytext); }

%%
int main(int argc, char **argv) {
    yylex();
    
    printf("\nTabela de Simbolos:\n");
    for (int i = 0; i < contador; i++) {
        printf("%d: %s\n", i, tabela[i]);
    }

    for (int i = 0; i < contador; i++) {
        free(tabela[i]);
    }

    return 0;
}
