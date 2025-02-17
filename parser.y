%{
#include <stdio.h>
#include <stdlib.h>

int indent = 0;

// Função para imprimir espaços conforme o nível atual
void print_indent() {
    for (int i = 0; i < indent; i++) {
        printf("  ");
    }
}

void yyerror(const char *s);
int yylex(void);
%}

%union {
    char* relop;
    char* strId;
    int num;
    float floatNum;
}

%token <num> NUM
%token <floatNum> FLOAT_NUM
%left PLUS MINUS
%left MULT DIV
%token INT FLOAT VOID IF ELSE WHILE RETURN
%token ASSIGN LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA
%token <strId> ID
%token <relop> RELOP
%token <strId> ARRAY_ID
%token ERROR

%start program

%%

program:
    global_list { print_indent(); printf("program\n"); }
    ;

global_list:
    global { print_indent(); printf("global_list\n"); }
    | global_list global { print_indent(); printf("global_list\n"); }
    ;

global:
      decl_or_func
    | function_call SEMICOLON { print_indent(); printf("global: function_call\n"); }
    | jump_structure { print_indent(); printf("global: jump_structure\n"); }
    | while_structure { print_indent(); printf("global: while_structure\n"); }
    ;

decl_or_func:
    type id_decl decl_or_func_tail
    ;

id_decl:
      ID         { print_indent(); printf("id: %s\n", $1); }
    | ARRAY_ID   { print_indent(); printf("array id: %s\n", $1); }
    ;

decl_or_func_tail:
      SEMICOLON 
          { print_indent(); printf("DECLARATION\n"); }
    | ASSIGN expr SEMICOLON 
          { print_indent(); printf("DECLARATION WITH ATTRIBUTION\n"); }
    | LPAREN parameter_list RPAREN context_block 
          { print_indent(); printf("FUNCTION DECLARATION\n"); }
    ;

type:
    INT { print_indent(); printf("TYPE: INT\n"); }
    | FLOAT { print_indent(); printf("TYPE: FLOAT\n"); }
    | VOID { print_indent(); printf("TYPE: VOID\n"); }
    ;

parameter_list:
      /* empty */ { print_indent(); printf("NO PARAMETERS\n"); }
    | parameter_declaration { print_indent(); printf("PARAMETER LIST\n"); }
    | parameter_list COMMA parameter_declaration { print_indent(); printf("PARAMETER LIST\n"); }
    ;

parameter_declaration:
    type ID { print_indent(); printf("PARAMETER: %s\n", $2); }
    ;

function_call:
    ID LPAREN argument_list RPAREN { print_indent(); printf("FUNCTION CALL: %s\n", $1); }
    ;

argument_list:
      /* empty */ { print_indent(); printf("NO ARGUMENTS\n"); }
    | expr { print_indent(); printf("ARGUMENT\n"); }
    | argument_list COMMA expr { print_indent(); printf("ARGUMENT LIST\n"); }
    ;

// Usamos jump_structure para aceitar tanto if simples quanto if-else
jump_structure:
    if_structure { print_indent(); printf("JUMP STATEMENT (if)\n"); }
    | if_structure else_structure { print_indent(); printf("JUMP STATEMENT (if-else)\n"); }
    ;

if_structure:
    IF condition_block context_block { print_indent(); printf("IF STATEMENT\n"); }
    ;

else_structure:
    ELSE context_block { print_indent(); printf("ELSE STATEMENT\n"); }
    ;

condition_block:
    LPAREN expression print_relop expression RPAREN { print_indent(); printf("IF CONDITION\n"); }
    ;

expr:
    expr PLUS expr { print_indent(); printf("expression = expr + expr\n"); }
    | expr MINUS expr { print_indent(); printf("expression = expr - expr\n"); }
    | expr MULT expr { print_indent(); printf("expression = expr * expr\n"); }
    | expr DIV expr { print_indent(); printf("expression = expr / expr\n"); }
    | expression
    | function_call { print_indent(); printf("expression = function_call\n"); }
    ;

expression:
    print_id
    | print_num
    | print_float
    ;

print_id:
      ID         { print_indent(); printf("expr = ID: %s\n", $1); }
    | ARRAY_ID   { print_indent(); printf("expr = ARRAY_ID: %s\n", $1); }
    ;

print_num:
    NUM { print_indent(); printf("expr = NUM: %d\n", $1); }
    ;

print_relop:
    RELOP { print_indent(); printf("RELOP: %s\n", $1); }
    ;

print_float:
    FLOAT_NUM { print_indent(); printf("expr = FLOAT_NUM: %.2f\n", $1); }
    ;

context_block:
    LBRACE { print_indent(); printf("{\n"); indent++; } block_statement_list_opt RBRACE { indent--; print_indent(); printf("}\n"); }
    ;

block_statement_list_opt:
      /* empty */
    | block_statement_list
    ;

block_statement_list:
      block_statement
    | block_statement_list block_statement
    ;

block_statement:
      decl_or_func    { print_indent(); printf("block_statement (declaration or function)\n"); }
    | attribution     { print_indent(); printf("block_statement (attribution)\n"); }
    | jump_structure  { print_indent(); printf("block_statement (jump)\n"); }
    | while_structure { print_indent(); printf("block_statement (while)\n"); }
    | return_statement { print_indent(); printf("block_statement (return)\n"); }
    | function_call SEMICOLON { print_indent(); printf("block_statement (function_call)\n"); }
    ;

attribution:
      ID ASSIGN expr SEMICOLON { print_indent(); printf("ATTRIBUTION\n"); }
    | ARRAY_ID ASSIGN expr SEMICOLON { print_indent(); printf("ATTRIBUTION\n"); }
    ;

return_statement:
      RETURN expr SEMICOLON { print_indent(); printf("RETURN STATEMENT\n"); }
    | RETURN SEMICOLON { print_indent(); printf("RETURN STATEMENT\n"); }
    ;

while_structure:
    WHILE condition_block context_block { print_indent(); printf("WHILE_STATEMENT\n"); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
