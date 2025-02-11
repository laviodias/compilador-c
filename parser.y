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

%token INT FLOAT IF ELSE WHILE
%token ASSIGN LPAREN RPAREN LBRACE RBRACE SEMICOLON
%token <strId> ID
%token <relop> RELOP
%token ERROR


%start program

%type <num> print_num
%type <relop> print_relop
%type <strId> print_id

%%
program:
    prog_statement_list { printf("\nprogram\n"); }
    ;

prog_statement_list:
    prog_statement { printf("   prog_statement_list \n"); }
    | prog_statement_list prog_statement { printf("   prog_statement_list \n"); }

prog_statement:
    attribution { printf("\n\t prog_statement\n"); }
    | declaration { printf("\n\t prog_statement\n"); }
    | declaration_with_attribution { printf("\n\t prog_statement\n"); }
    | jump_structure { printf("\n\t prog_statement\n"); }

bloc_statement_list:
    bloc_statement { printf("\t\t      bloc_statement_list \n\n"); }
    | bloc_statement_list bloc_statement { printf("\t\t       bloc_statement_list \n\n"); }

bloc_statement:
    attribution { printf("\n\t\t\tbloc_statement\n"); }
    | declaration { printf("\n\t\t\tbloc_statement\n"); }
    | declaration_with_attribution { printf("\n\t\t\tbloc_statement\n"); }
    | if_structure { printf("\n\t\t\tbloc_statement\n"); }

context_bloc:
    LBRACE bloc_statement_list RBRACE

attribution:
    ID ASSIGN expr SEMICOLON { printf("\t \t \t     ID ASSIGN expression SEMICOLON \n \t \t \t  ATTRIBUTION: \n"); }

declaration:
    INT ID SEMICOLON { printf("\n\t \t \t    INT  ID  SEMICOLON \n \t \t \t   DECLARATION: \n"); }
    | FLOAT ID SEMICOLON { printf("\n\t \t \t    FLOAT  ID  SEMICOLON \n \t \t \t   DECLARATION: \n"); }

declaration_with_attribution:
    INT ID ASSIGN expr SEMICOLON { printf("\n\t \t \t    INT  ID  ASSIGN  expression SEMICOLON \n \t \t \t   DECLARATION_WITH_ATTRIBUTION: \n"); }


condition_bloc:
    LPAREN expression print_relop expression RPAREN { printf("\t\t\t   ( expr  RELOP  expr )     \n \t\t      IF_CONDITION:   \n\n \t\t     LBRACE \n"); }

jump_structure:
    if_structure { printf("\t\t jump_statement \n"); }
    | if_structure else_structure { printf("\t\t jump_statement \n"); }

if_structure:
    IF condition_bloc context_bloc { printf("\t\t     RBRACE \n \t\t   IF_STATEMENTS \n"); }

else_structure:
    ELSE context_bloc { printf("\t\t   ELSE_STATEMENTS \n"); }


expr:
    expr PLUS expr      { printf("\t\t\t\t     expression = expr + expr  \n"); }
    | expr MINUS expr   { printf("\t\t\t\t     expression = expr - expr  \n"); }
    | expr MULT expr    { printf("\t\t\t\t     expression = expr * expr  \n"); }
    | expr DIV expr     { printf("\t\t\t\t     expression = expr / expr  \n"); }
    | expression

expression:
    print_id
    | print_num

print_id:
    ID { printf("\t\t\t\t\t   expr = ID = %s \n", $1); }

print_num:
    NUM { printf("\t\t\t\t\t   expr = NUM = %d \n", $1); }

print_relop:
    RELOP { printf("\t\t\t\t\t   RELOP = %s \n", $1); }

%%

void yyerror(const char *s) {
    fprintf(stderr, " Erro: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
