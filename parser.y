%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *s);
int yylex(void);
%}

%union {
    char* relop;
    char* strId;
    int num;
}

%token <num> NUM
%left PLUS MINUS
%left MULT DIV
%token INT FLOAT VOID IF ELSE WHILE RETURN
%token ASSIGN LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA
%token <strId> ID
%token <relop> RELOP
%token ERROR

%start program

%%

program:
    global_list { printf("program\n"); }
    ;

global_list:
    global { printf("global_list\n"); }
    | global_list global { printf("global_list\n"); }
    ;

global:
    decl_or_func
    | function_call SEMICOLON { printf("global: function_call\n"); }
    | jump_structure { printf("global: jump_structure\n"); }
    ;

/* Fatoração: após "type ID" decide se é declaração ou função */
decl_or_func:
    type ID decl_or_func_tail
    ;

decl_or_func_tail:
      SEMICOLON 
          { printf("DECLARATION\n"); }
    | ASSIGN expr SEMICOLON 
          { printf("DECLARATION WITH ATTRIBUTION\n"); }
    | LPAREN parameter_list RPAREN context_bloc 
          { printf("FUNCTION DECLARATION\n"); }
    ;

/* Reaproveita as regras já existentes */

type:
    INT { printf("TYPE: INT\n"); }
    | FLOAT { printf("TYPE: FLOAT\n"); }
    | VOID { printf("TYPE: VOID\n"); }
    ;

parameter_list:
      /* empty */ { printf("NO PARAMETERS\n"); }
    | parameter_declaration { printf("PARAMETER LIST\n"); }
    | parameter_list COMMA parameter_declaration { printf("PARAMETER LIST\n"); }
    ;

parameter_declaration:
    type ID { printf("PARAMETER: %s\n", $2); }
    ;

function_call:
    ID LPAREN argument_list RPAREN { printf("FUNCTION CALL: %s\n", $1); }
    ;

argument_list:
      /* empty */ { printf("NO ARGUMENTS\n"); }
    | expr { printf("ARGUMENT\n"); }
    | argument_list COMMA expr { printf("ARGUMENT LIST\n"); }
    ;

jump_structure:
    if_structure { printf("JUMP STATEMENT\n"); }
    | if_structure else_structure { printf("JUMP STATEMENT\n"); }
    ;

if_structure:
    IF condition_bloc context_bloc { printf("IF STATEMENT\n"); }
    ;

else_structure:
    ELSE context_bloc { printf("ELSE STATEMENT\n"); }
    ;

condition_bloc:
    LPAREN expression print_relop expression RPAREN { printf("IF CONDITION\n"); }
    ;

expr:
    expr PLUS expr { printf("expression = expr + expr\n"); }
    | expr MINUS expr { printf("expression = expr - expr\n"); }
    | expr MULT expr { printf("expression = expr * expr\n"); }
    | expr DIV expr { printf("expression = expr / expr\n"); }
    | expression
    ;

expression:
    print_id
    | print_num
    ;

print_id:
    ID { printf("expr = ID: %s\n", $1); }
    ;

print_num:
    NUM { printf("expr = NUM: %d\n", $1); }
    ;

print_relop:
    RELOP { printf("RELOP: %s\n", $1); }
    ;

context_bloc:
    LBRACE bloc_statement_list_opt RBRACE
    ;

bloc_statement_list_opt:
      /* empty */
    | bloc_statement_list
    ;

bloc_statement_list:
    bloc_statement { printf("bloc_statement_list\n"); }
    | bloc_statement_list bloc_statement { printf("bloc_statement_list\n"); }
    ;

bloc_statement:
    decl_or_func    { printf("bloc_statement (declaration or function)\n"); }
    | attribution   { printf("bloc_statement (attribution)\n"); }
    | if_structure  { printf("bloc_statement (if)\n"); }
    | return_statement { printf("bloc_statement (return)\n"); }
    ;

attribution:
    ID ASSIGN expr SEMICOLON { printf("ATTRIBUTION\n"); }
    ;

return_statement:
    RETURN expr SEMICOLON { printf("RETURN STATEMENT\n"); }
    | RETURN SEMICOLON { printf("RETURN STATEMENT\n"); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
