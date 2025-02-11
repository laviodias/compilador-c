/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>

int indent = 0;  // Nível de indentação global

// Função para imprimir espaços conforme o nível atual
void print_indent() {
    for (int i = 0; i < indent; i++) {
        printf("  ");  // Dois espaços por nível (ajuste se desejar)
    }
}

void yyerror(const char *s);
int yylex(void);

#line 88 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_FLOAT_NUM = 4,                  /* FLOAT_NUM  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_MULT = 7,                       /* MULT  */
  YYSYMBOL_DIV = 8,                        /* DIV  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_VOID = 11,                      /* VOID  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 16,                    /* ASSIGN  */
  YYSYMBOL_LPAREN = 17,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 18,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 19,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 20,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 21,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 22,                     /* COMMA  */
  YYSYMBOL_ID = 23,                        /* ID  */
  YYSYMBOL_RELOP = 24,                     /* RELOP  */
  YYSYMBOL_ARRAY_ID = 25,                  /* ARRAY_ID  */
  YYSYMBOL_ERROR = 26,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 27,                  /* $accept  */
  YYSYMBOL_program = 28,                   /* program  */
  YYSYMBOL_global_list = 29,               /* global_list  */
  YYSYMBOL_global = 30,                    /* global  */
  YYSYMBOL_decl_or_func = 31,              /* decl_or_func  */
  YYSYMBOL_id_decl = 32,                   /* id_decl  */
  YYSYMBOL_decl_or_func_tail = 33,         /* decl_or_func_tail  */
  YYSYMBOL_type = 34,                      /* type  */
  YYSYMBOL_parameter_list = 35,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 36,     /* parameter_declaration  */
  YYSYMBOL_function_call = 37,             /* function_call  */
  YYSYMBOL_argument_list = 38,             /* argument_list  */
  YYSYMBOL_jump_structure = 39,            /* jump_structure  */
  YYSYMBOL_if_structure = 40,              /* if_structure  */
  YYSYMBOL_else_structure = 41,            /* else_structure  */
  YYSYMBOL_condition_bloc = 42,            /* condition_bloc  */
  YYSYMBOL_expr = 43,                      /* expr  */
  YYSYMBOL_expression = 44,                /* expression  */
  YYSYMBOL_print_id = 45,                  /* print_id  */
  YYSYMBOL_print_num = 46,                 /* print_num  */
  YYSYMBOL_print_relop = 47,               /* print_relop  */
  YYSYMBOL_print_float = 48,               /* print_float  */
  YYSYMBOL_context_bloc = 49,              /* context_bloc  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_bloc_statement_list_opt = 51,   /* bloc_statement_list_opt  */
  YYSYMBOL_bloc_statement_list = 52,       /* bloc_statement_list  */
  YYSYMBOL_bloc_statement = 53,            /* bloc_statement  */
  YYSYMBOL_attribution = 54,               /* attribution  */
  YYSYMBOL_return_statement = 55,          /* return_statement  */
  YYSYMBOL_while_structure = 56            /* while_structure  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  99

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    45,    46,    50,    51,    52,    53,    57,
      61,    62,    66,    68,    70,    75,    76,    77,    81,    82,
      83,    87,    91,    95,    96,    97,   102,   103,   107,   111,
     115,   119,   120,   121,   122,   123,   124,   128,   129,   130,
     134,   135,   139,   143,   147,   151,   151,   154,   156,   160,
     161,   165,   166,   167,   168,   169,   170,   174,   175,   179,
     180,   184
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "FLOAT_NUM",
  "PLUS", "MINUS", "MULT", "DIV", "INT", "FLOAT", "VOID", "IF", "ELSE",
  "WHILE", "RETURN", "ASSIGN", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "SEMICOLON", "COMMA", "ID", "RELOP", "ARRAY_ID", "ERROR", "$accept",
  "program", "global_list", "global", "decl_or_func", "id_decl",
  "decl_or_func_tail", "type", "parameter_list", "parameter_declaration",
  "function_call", "argument_list", "jump_structure", "if_structure",
  "else_structure", "condition_bloc", "expr", "expression", "print_id",
  "print_num", "print_relop", "print_float", "context_bloc", "$@1",
  "bloc_statement_list_opt", "bloc_statement_list", "bloc_statement",
  "attribution", "return_statement", "while_structure", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      72,   -45,   -45,   -45,    -7,    -7,     1,    56,    72,   -45,
     -45,    68,    48,   -45,     9,   -45,    13,    61,    61,    16,
     -45,   -45,   -45,   -45,    73,   -45,    61,   -45,   -45,   -45,
     -45,   -45,    40,   -45,   -45,   -45,   -45,   -45,   -45,     1,
     -45,    22,    91,   -45,    16,    20,   -45,   -45,   -45,   -45,
      13,    43,   -45,    16,    16,    16,    16,    16,    27,    62,
      45,   -45,    70,     2,    33,    86,   -45,    82,   -45,    84,
      43,   -45,   -45,   -45,   -45,    91,    93,    93,   -45,   -45,
     -45,   -45,    61,    20,   -45,   -45,    54,    16,    16,   -45,
     -45,   -45,   -45,   -45,   -45,    66,    71,   -45,   -45
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    15,    16,    17,     0,     0,     0,     0,     2,     3,
       5,     0,     0,     7,    26,     8,     0,     0,     0,    23,
       1,     4,    10,    11,     0,     6,     0,    27,    42,    44,
      40,    41,     0,    37,    38,    39,    45,    28,    61,    40,
      36,     0,    24,    35,     0,    18,    12,     9,    29,    43,
       0,    47,    22,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     0,     0,    51,     0,    53,     0,
      48,    49,    52,    55,    54,    25,    31,    32,    33,    34,
      13,    21,     0,     0,    30,    60,     0,     0,     0,    56,
      46,    50,    14,    20,    59,     0,     0,    57,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -45,    97,   -44,   -45,   -45,   -41,   -45,    23,
       0,   -45,   -27,   -45,   -45,   102,   -42,   -13,   -45,   -45,
     -45,   -45,   -17,   -45,   -45,   -45,    38,   -45,   -45,   -23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,     9,    10,    24,    47,    11,    60,    61,
      40,    41,    13,    14,    27,    17,    42,    43,    33,    34,
      50,    35,    37,    51,    69,    70,    71,    72,    73,    15
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      12,    38,    58,    32,    59,    28,    29,    66,    12,    48,
      16,    75,    76,    77,    78,    79,    28,    29,    19,    28,
      29,    86,    26,    85,    68,    39,    66,    31,    74,     1,
       2,     3,    54,    55,    56,    57,    30,    62,    31,    39,
      52,    31,    59,    68,    53,    95,    96,    74,    80,    87,
      19,    67,     1,     2,     3,     4,    20,     5,    63,    54,
      55,    56,    57,    82,    49,    92,    64,    83,    65,    25,
      67,    54,    55,    56,    57,    94,    54,    55,    56,    57,
      36,     1,     2,     3,     4,    81,     5,    97,    84,    44,
      45,    22,    98,    23,    46,     6,    54,    55,    56,    57,
      56,    57,    88,    89,    90,    21,    93,    18,    91
};

static const yytype_int8 yycheck[] =
{
       0,    18,    44,    16,    45,     3,     4,    51,     8,    26,
      17,    53,    54,    55,    56,    57,     3,     4,    17,     3,
       4,    63,    13,    21,    51,    23,    70,    25,    51,     9,
      10,    11,     5,     6,     7,     8,    23,    50,    25,    23,
      18,    25,    83,    70,    22,    87,    88,    70,    21,    16,
      17,    51,     9,    10,    11,    12,     0,    14,    15,     5,
       6,     7,     8,    18,    24,    82,    23,    22,    25,    21,
      70,     5,     6,     7,     8,    21,     5,     6,     7,     8,
      19,     9,    10,    11,    12,    23,    14,    21,    18,    16,
      17,    23,    21,    25,    21,    23,     5,     6,     7,     8,
       7,     8,    16,    21,    20,     8,    83,     5,    70
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    10,    11,    12,    14,    23,    28,    29,    30,
      31,    34,    37,    39,    40,    56,    17,    42,    42,    17,
       0,    30,    23,    25,    32,    21,    13,    41,     3,     4,
      23,    25,    44,    45,    46,    48,    19,    49,    49,    23,
      37,    38,    43,    44,    16,    17,    21,    33,    49,    24,
      47,    50,    18,    22,     5,     6,     7,     8,    43,    34,
      35,    36,    44,    15,    23,    25,    31,    37,    39,    51,
      52,    53,    54,    55,    56,    43,    43,    43,    43,    43,
      21,    23,    18,    22,    18,    21,    43,    16,    16,    21,
      20,    53,    49,    36,    21,    43,    43,    21,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    27,    28,    29,    29,    30,    30,    30,    30,    31,
      32,    32,    33,    33,    33,    34,    34,    34,    35,    35,
      35,    36,    37,    38,    38,    38,    39,    39,    40,    41,
      42,    43,    43,    43,    43,    43,    43,    44,    44,    44,
      45,    45,    46,    47,    48,    50,    49,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    54,    54,    55,
      55,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     1,     1,     3,
       1,     1,     1,     3,     4,     1,     1,     1,     0,     1,
       3,     2,     4,     0,     1,     3,     1,     2,     3,     2,
       5,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     2,     4,     4,     3,
       2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: global_list  */
#line 41 "parser.y"
                { print_indent(); printf("program\n"); }
#line 1198 "parser.tab.c"
    break;

  case 3: /* global_list: global  */
#line 45 "parser.y"
           { print_indent(); printf("global_list\n"); }
#line 1204 "parser.tab.c"
    break;

  case 4: /* global_list: global_list global  */
#line 46 "parser.y"
                         { print_indent(); printf("global_list\n"); }
#line 1210 "parser.tab.c"
    break;

  case 6: /* global: function_call SEMICOLON  */
#line 51 "parser.y"
                              { print_indent(); printf("global: function_call\n"); }
#line 1216 "parser.tab.c"
    break;

  case 7: /* global: jump_structure  */
#line 52 "parser.y"
                     { print_indent(); printf("global: jump_structure\n"); }
#line 1222 "parser.tab.c"
    break;

  case 8: /* global: while_structure  */
#line 53 "parser.y"
                      { print_indent(); printf("global: while_structure\n"); }
#line 1228 "parser.tab.c"
    break;

  case 10: /* id_decl: ID  */
#line 61 "parser.y"
                 { print_indent(); printf("id: %s\n", (yyvsp[0].strId)); }
#line 1234 "parser.tab.c"
    break;

  case 11: /* id_decl: ARRAY_ID  */
#line 62 "parser.y"
                 { print_indent(); printf("array id: %s\n", (yyvsp[0].strId)); }
#line 1240 "parser.tab.c"
    break;

  case 12: /* decl_or_func_tail: SEMICOLON  */
#line 67 "parser.y"
          { print_indent(); printf("DECLARATION\n"); }
#line 1246 "parser.tab.c"
    break;

  case 13: /* decl_or_func_tail: ASSIGN expr SEMICOLON  */
#line 69 "parser.y"
          { print_indent(); printf("DECLARATION WITH ATTRIBUTION\n"); }
#line 1252 "parser.tab.c"
    break;

  case 14: /* decl_or_func_tail: LPAREN parameter_list RPAREN context_bloc  */
#line 71 "parser.y"
          { print_indent(); printf("FUNCTION DECLARATION\n"); }
#line 1258 "parser.tab.c"
    break;

  case 15: /* type: INT  */
#line 75 "parser.y"
        { print_indent(); printf("TYPE: INT\n"); }
#line 1264 "parser.tab.c"
    break;

  case 16: /* type: FLOAT  */
#line 76 "parser.y"
            { print_indent(); printf("TYPE: FLOAT\n"); }
#line 1270 "parser.tab.c"
    break;

  case 17: /* type: VOID  */
#line 77 "parser.y"
           { print_indent(); printf("TYPE: VOID\n"); }
#line 1276 "parser.tab.c"
    break;

  case 18: /* parameter_list: %empty  */
#line 81 "parser.y"
                  { print_indent(); printf("NO PARAMETERS\n"); }
#line 1282 "parser.tab.c"
    break;

  case 19: /* parameter_list: parameter_declaration  */
#line 82 "parser.y"
                            { print_indent(); printf("PARAMETER LIST\n"); }
#line 1288 "parser.tab.c"
    break;

  case 20: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 83 "parser.y"
                                                 { print_indent(); printf("PARAMETER LIST\n"); }
#line 1294 "parser.tab.c"
    break;

  case 21: /* parameter_declaration: type ID  */
#line 87 "parser.y"
            { print_indent(); printf("PARAMETER: %s\n", (yyvsp[0].strId)); }
#line 1300 "parser.tab.c"
    break;

  case 22: /* function_call: ID LPAREN argument_list RPAREN  */
#line 91 "parser.y"
                                   { print_indent(); printf("FUNCTION CALL: %s\n", (yyvsp[-3].strId)); }
#line 1306 "parser.tab.c"
    break;

  case 23: /* argument_list: %empty  */
#line 95 "parser.y"
                  { print_indent(); printf("NO ARGUMENTS\n"); }
#line 1312 "parser.tab.c"
    break;

  case 24: /* argument_list: expr  */
#line 96 "parser.y"
           { print_indent(); printf("ARGUMENT\n"); }
#line 1318 "parser.tab.c"
    break;

  case 25: /* argument_list: argument_list COMMA expr  */
#line 97 "parser.y"
                               { print_indent(); printf("ARGUMENT LIST\n"); }
#line 1324 "parser.tab.c"
    break;

  case 26: /* jump_structure: if_structure  */
#line 102 "parser.y"
                 { print_indent(); printf("JUMP STATEMENT (if)\n"); }
#line 1330 "parser.tab.c"
    break;

  case 27: /* jump_structure: if_structure else_structure  */
#line 103 "parser.y"
                                  { print_indent(); printf("JUMP STATEMENT (if-else)\n"); }
#line 1336 "parser.tab.c"
    break;

  case 28: /* if_structure: IF condition_bloc context_bloc  */
#line 107 "parser.y"
                                   { print_indent(); printf("IF STATEMENT\n"); }
#line 1342 "parser.tab.c"
    break;

  case 29: /* else_structure: ELSE context_bloc  */
#line 111 "parser.y"
                      { print_indent(); printf("ELSE STATEMENT\n"); }
#line 1348 "parser.tab.c"
    break;

  case 30: /* condition_bloc: LPAREN expression print_relop expression RPAREN  */
#line 115 "parser.y"
                                                    { print_indent(); printf("IF CONDITION\n"); }
#line 1354 "parser.tab.c"
    break;

  case 31: /* expr: expr PLUS expr  */
#line 119 "parser.y"
                   { print_indent(); printf("expression = expr + expr\n"); }
#line 1360 "parser.tab.c"
    break;

  case 32: /* expr: expr MINUS expr  */
#line 120 "parser.y"
                      { print_indent(); printf("expression = expr - expr\n"); }
#line 1366 "parser.tab.c"
    break;

  case 33: /* expr: expr MULT expr  */
#line 121 "parser.y"
                     { print_indent(); printf("expression = expr * expr\n"); }
#line 1372 "parser.tab.c"
    break;

  case 34: /* expr: expr DIV expr  */
#line 122 "parser.y"
                    { print_indent(); printf("expression = expr / expr\n"); }
#line 1378 "parser.tab.c"
    break;

  case 36: /* expr: function_call  */
#line 124 "parser.y"
                    { print_indent(); printf("expression = function_call\n"); }
#line 1384 "parser.tab.c"
    break;

  case 40: /* print_id: ID  */
#line 134 "parser.y"
                 { print_indent(); printf("expr = ID: %s\n", (yyvsp[0].strId)); }
#line 1390 "parser.tab.c"
    break;

  case 41: /* print_id: ARRAY_ID  */
#line 135 "parser.y"
                 { print_indent(); printf("expr = ARRAY_ID: %s\n", (yyvsp[0].strId)); }
#line 1396 "parser.tab.c"
    break;

  case 42: /* print_num: NUM  */
#line 139 "parser.y"
        { print_indent(); printf("expr = NUM: %d\n", (yyvsp[0].num)); }
#line 1402 "parser.tab.c"
    break;

  case 43: /* print_relop: RELOP  */
#line 143 "parser.y"
          { print_indent(); printf("RELOP: %s\n", (yyvsp[0].relop)); }
#line 1408 "parser.tab.c"
    break;

  case 44: /* print_float: FLOAT_NUM  */
#line 147 "parser.y"
              { print_indent(); printf("expr = FLOAT_NUM: %.2f\n", (yyvsp[0].floatNum)); }
#line 1414 "parser.tab.c"
    break;

  case 45: /* $@1: %empty  */
#line 151 "parser.y"
           { print_indent(); printf("{\n"); indent++; }
#line 1420 "parser.tab.c"
    break;

  case 46: /* context_bloc: LBRACE $@1 bloc_statement_list_opt RBRACE  */
#line 151 "parser.y"
                                                                                       { indent--; print_indent(); printf("}\n"); }
#line 1426 "parser.tab.c"
    break;

  case 51: /* bloc_statement: decl_or_func  */
#line 165 "parser.y"
                      { print_indent(); printf("bloc_statement (declaration or function)\n"); }
#line 1432 "parser.tab.c"
    break;

  case 52: /* bloc_statement: attribution  */
#line 166 "parser.y"
                      { print_indent(); printf("bloc_statement (attribution)\n"); }
#line 1438 "parser.tab.c"
    break;

  case 53: /* bloc_statement: jump_structure  */
#line 167 "parser.y"
                      { print_indent(); printf("bloc_statement (jump)\n"); }
#line 1444 "parser.tab.c"
    break;

  case 54: /* bloc_statement: while_structure  */
#line 168 "parser.y"
                      { print_indent(); printf("bloc_statement (while)\n"); }
#line 1450 "parser.tab.c"
    break;

  case 55: /* bloc_statement: return_statement  */
#line 169 "parser.y"
                       { print_indent(); printf("bloc_statement (return)\n"); }
#line 1456 "parser.tab.c"
    break;

  case 56: /* bloc_statement: function_call SEMICOLON  */
#line 170 "parser.y"
                              { print_indent(); printf("bloc_statement (function_call)\n"); }
#line 1462 "parser.tab.c"
    break;

  case 57: /* attribution: ID ASSIGN expr SEMICOLON  */
#line 174 "parser.y"
                               { print_indent(); printf("ATTRIBUTION\n"); }
#line 1468 "parser.tab.c"
    break;

  case 58: /* attribution: ARRAY_ID ASSIGN expr SEMICOLON  */
#line 175 "parser.y"
                                     { print_indent(); printf("ATTRIBUTION\n"); }
#line 1474 "parser.tab.c"
    break;

  case 59: /* return_statement: RETURN expr SEMICOLON  */
#line 179 "parser.y"
                            { print_indent(); printf("RETURN STATEMENT\n"); }
#line 1480 "parser.tab.c"
    break;

  case 60: /* return_statement: RETURN SEMICOLON  */
#line 180 "parser.y"
                       { print_indent(); printf("RETURN STATEMENT\n"); }
#line 1486 "parser.tab.c"
    break;

  case 61: /* while_structure: WHILE condition_bloc context_bloc  */
#line 184 "parser.y"
                                      { print_indent(); printf("WHILE_STATEMENT\n"); }
#line 1492 "parser.tab.c"
    break;


#line 1496 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 187 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}

int main() {
    yyparse();
    return 0;
}
