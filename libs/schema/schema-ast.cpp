/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         AST_parse
#define yylex           AST_lex
#define yyerror         AST_error
#define yydebug         AST_debug
#define yynerrs         AST_nerrs


/* Copy the first part of user declarations.  */
#line 27 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:339  */

    #define YYDEBUG 1

    #include <stdio.h>

    #include "ASTBuilder.hpp"
    using namespace ncbi::SchemaParser;

    #include "schema-ast-tokens.h"

    #define AST_lex NextToken
    static int NextToken ( YYSTYPE * p_token, ParseTreeScanner & p_sb )
    {
        return p_sb . NextToken ( p_token -> tok );
    }

    void AST_error ( void * p_parser, ASTBuilder & p_builder, ParseTreeScanner & p_sb, const char * p_msg )
    {
        p_builder . ReportInternalError ( p_msg );
    }


#line 95 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "schema-ast-tokens.h".  */
#ifndef YY_AST_HOME_BOSHKINS_DEVEL_NCBI_VDB_LIBS_SCHEMA_SCHEMA_AST_TOKENS_H_INCLUDED
# define YY_AST_HOME_BOSHKINS_DEVEL_NCBI_VDB_LIBS_SCHEMA_SCHEMA_AST_TOKENS_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int AST_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END_SOURCE = 0,
    UNRECOGNIZED = 258,
    ELLIPSIS = 259,
    INCREMENT = 260,
    DECIMAL = 261,
    OCTAL = 262,
    HEX = 263,
    FLOAT = 264,
    EXP_FLOAT = 265,
    STRING = 266,
    ESCAPED_STRING = 267,
    IDENTIFIER_1_0 = 268,
    PHYSICAL_IDENTIFIER_1_0 = 269,
    VERSION = 270,
    UNTERM_STRING = 271,
    UNTERM_ESCAPED_STRING = 272,
    VERS_1_0 = 273,
    KW___no_header = 274,
    KW___row_length = 275,
    KW___untyped = 276,
    KW_alias = 277,
    KW_column = 278,
    KW_const = 279,
    KW_control = 280,
    KW_database = 281,
    KW_decode = 282,
    KW_default = 283,
    KW_encode = 284,
    KW_extern = 285,
    KW_false = 286,
    KW_fmtdef = 287,
    KW_function = 288,
    KW_include = 289,
    KW_limit = 290,
    KW_physical = 291,
    KW_read = 292,
    KW_readonly = 293,
    KW_return = 294,
    KW_schema = 295,
    KW_static = 296,
    KW_table = 297,
    KW_template = 298,
    KW_trigger = 299,
    KW_true = 300,
    KW_type = 301,
    KW_typedef = 302,
    KW_typeset = 303,
    KW_validate = 304,
    KW_version = 305,
    KW_view = 306,
    KW_virtual = 307,
    KW_void = 308,
    KW_write = 309,
    PT_ASTLIST = 310,
    PT_PARSE = 311,
    PT_SOURCE = 312,
    PT_VERSION_1_0 = 313,
    PT_VERSION_2 = 314,
    PT_SCHEMA_1_0 = 315,
    PT_INCLUDE = 316,
    PT_TYPEDEF = 317,
    PT_FQN = 318,
    PT_IDENT = 319,
    PT_PHYSIDENT = 320,
    PT_UINT = 321,
    PT_TYPESET = 322,
    PT_TYPESETDEF = 323,
    PT_FORMAT = 324,
    PT_CONST = 325,
    PT_ALIAS = 326,
    PT_EXTERN = 327,
    PT_FUNCTION = 328,
    PT_UNTYPED = 329,
    PT_ROWLENGTH = 330,
    PT_FUNCDECL = 331,
    PT_EMPTY = 332,
    PT_SCHEMASIG = 333,
    PT_SCHEMAFORMAL = 334,
    PT_RETURNTYPE = 335,
    PT_FACTSIG = 336,
    PT_FUNCSIG = 337,
    PT_FUNCPARAMS = 338,
    PT_FORMALPARAM = 339,
    PT_ELLIPSIS = 340,
    PT_FUNCPROLOGUE = 341,
    PT_RETURN = 342,
    PT_PRODSTMT = 343,
    PT_PRODTRIGGER = 344,
    PT_SCHEMA = 345,
    PT_VALIDATE = 346,
    PT_PHYSICAL = 347,
    PT_PHYSPROLOGUE = 348,
    PT_PHYSSTMT = 349,
    PT_PHYSBODYSTMT = 350,
    PT_TABLE = 351,
    PT_TABLEPARENTS = 352,
    PT_TABLEBODY = 353,
    PT_FUNCEXPR = 354,
    PT_FACTPARMS = 355,
    PT_COLUMN = 356,
    PT_COLUMNEXPR = 357,
    PT_COLDECL = 358,
    PT_TYPEDCOL = 359,
    PT_COLSTMT = 360,
    PT_DFLTVIEW = 361,
    PT_PHYSMBR = 362,
    PT_PHYSCOL = 363,
    PT_PHYSCOLDEF = 364,
    PT_COLSCHEMAPARMS = 365,
    PT_COLSCHEMAPARAM = 366,
    PT_COLUNTYPED = 367,
    PT_DATABASE = 368,
    PT_TYPEEXPR = 369,
    PT_DBBODY = 370,
    PT_DBDAD = 371,
    PT_DBMEMBER = 372,
    PT_TBLMEMBER = 373,
    PT_NOHEADER = 374,
    PT_CASTEXPR = 375,
    PT_CONSTVECT = 376,
    PT_NEGATE = 377,
    PT_UNARYPLUS = 378,
    PT_VERSNAME = 379,
    PT_ARRAY = 380,
    PT_PHYSENCREF = 381,
    PT_TYPEDCOLEXPR = 382
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 57 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:355  */

  const Token*  tok;
  AST*          node;
  AST_FQN*      fqn;
  AST_Expr*     expr;
  AST_ParamSig* paramSig;
  bool          boolean;

#line 273 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int AST_parse (AST*& p_ast, ASTBuilder& p_builder, ParseTreeScanner& p_sb);

#endif /* !YY_AST_HOME_BOSHKINS_DEVEL_NCBI_VDB_LIBS_SCHEMA_SCHEMA_AST_TOKENS_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 289 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   819

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  146
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  759

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   382

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     129,   130,   135,   142,   132,   143,     2,   144,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   145,   131,
     139,   138,   140,     2,   128,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   133,     2,   134,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   136,   141,   137,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   254,   254,   255,   259,   260,   261,   265,   269,   273,
     277,   282,   283,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   306,   311,   312,
     316,   317,   321,   325,   326,   330,   335,   336,   340,   341,
     345,   349,   353,   357,   358,   359,   364,   365,   369,   370,
     374,   375,   379,   380,   384,   385,   389,   393,   394,   395,
     396,   397,   401,   405,   406,   410,   411,   415,   416,   420,
     421,   422,   426,   430,   431,   435,   436,   440,   441,   445,
     448,   449,   453,   458,   467,   472,   473,   476,   478,   483,
     484,   488,   490,   492,   494,   501,   506,   507,   511,   512,
     516,   517,   521,   522,   526,   527,   528,   529,   530,   531,
     532,   533,   537,   541,   542,   546,   547,   551,   552,   553,
     557,   558,   562,   564,   565,   569,   570,   571,   575,   576,
     580,   581,   585,   586,   590,   591,   592,   593,   597,   599,
     601,   603,   608,   612,   613,   617,   618,   622,   623,   627,
     628,   633,   637,   638,   641,   642,   646,   647,   648,   649,
     653,   655,   660,   661,   667,   673,   677,   678,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     697,   702,   703,   706,   707,   711,   712,   713,   717,   718,
     722,   723,   727,   728,   732,   733,   737,   738,   739,   743,
     744,   748,   749,   753,   757,   758,   762,   765,   769,   770,
     776,   780,   781,   785,   789,   790,   794
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of source\"", "error", "$undefined", "UNRECOGNIZED", "ELLIPSIS",
  "INCREMENT", "DECIMAL", "OCTAL", "HEX", "FLOAT", "EXP_FLOAT", "STRING",
  "ESCAPED_STRING", "IDENTIFIER_1_0", "PHYSICAL_IDENTIFIER_1_0", "VERSION",
  "UNTERM_STRING", "UNTERM_ESCAPED_STRING", "VERS_1_0", "KW___no_header",
  "KW___row_length", "KW___untyped", "KW_alias", "KW_column", "KW_const",
  "KW_control", "KW_database", "KW_decode", "KW_default", "KW_encode",
  "KW_extern", "KW_false", "KW_fmtdef", "KW_function", "KW_include",
  "KW_limit", "KW_physical", "KW_read", "KW_readonly", "KW_return",
  "KW_schema", "KW_static", "KW_table", "KW_template", "KW_trigger",
  "KW_true", "KW_type", "KW_typedef", "KW_typeset", "KW_validate",
  "KW_version", "KW_view", "KW_virtual", "KW_void", "KW_write",
  "PT_ASTLIST", "PT_PARSE", "PT_SOURCE", "PT_VERSION_1_0", "PT_VERSION_2",
  "PT_SCHEMA_1_0", "PT_INCLUDE", "PT_TYPEDEF", "PT_FQN", "PT_IDENT",
  "PT_PHYSIDENT", "PT_UINT", "PT_TYPESET", "PT_TYPESETDEF", "PT_FORMAT",
  "PT_CONST", "PT_ALIAS", "PT_EXTERN", "PT_FUNCTION", "PT_UNTYPED",
  "PT_ROWLENGTH", "PT_FUNCDECL", "PT_EMPTY", "PT_SCHEMASIG",
  "PT_SCHEMAFORMAL", "PT_RETURNTYPE", "PT_FACTSIG", "PT_FUNCSIG",
  "PT_FUNCPARAMS", "PT_FORMALPARAM", "PT_ELLIPSIS", "PT_FUNCPROLOGUE",
  "PT_RETURN", "PT_PRODSTMT", "PT_PRODTRIGGER", "PT_SCHEMA", "PT_VALIDATE",
  "PT_PHYSICAL", "PT_PHYSPROLOGUE", "PT_PHYSSTMT", "PT_PHYSBODYSTMT",
  "PT_TABLE", "PT_TABLEPARENTS", "PT_TABLEBODY", "PT_FUNCEXPR",
  "PT_FACTPARMS", "PT_COLUMN", "PT_COLUMNEXPR", "PT_COLDECL",
  "PT_TYPEDCOL", "PT_COLSTMT", "PT_DFLTVIEW", "PT_PHYSMBR", "PT_PHYSCOL",
  "PT_PHYSCOLDEF", "PT_COLSCHEMAPARMS", "PT_COLSCHEMAPARAM",
  "PT_COLUNTYPED", "PT_DATABASE", "PT_TYPEEXPR", "PT_DBBODY", "PT_DBDAD",
  "PT_DBMEMBER", "PT_TBLMEMBER", "PT_NOHEADER", "PT_CASTEXPR",
  "PT_CONSTVECT", "PT_NEGATE", "PT_UNARYPLUS", "PT_VERSNAME", "PT_ARRAY",
  "PT_PHYSENCREF", "PT_TYPEDCOLEXPR", "'@'", "'('", "')'", "';'", "','",
  "'['", "']'", "'*'", "'{'", "'}'", "'='", "'<'", "'>'", "'|'", "'+'",
  "'-'", "'/'", "':'", "$accept", "parse", "source", "version_1",
  "version_2", "schema_1", "schema_2", "schema_decls", "schema_decl",
  "typedef", "new_type_names", "typespec", "arrayspec", "dim", "typeset",
  "typeset_spec", "fmtdef", "const", "alias", "function", "func_decl",
  "schema_sig_opt", "schema_formals", "schema_formal", "return_type",
  "fact_sig", "param_sig", "param_signature", "formals_list", "formals",
  "formal", "vararg", "prologue", "script_prologue", "script_stmts",
  "script_stmt", "production", "extern_function", "script", "script_decl",
  "validate", "physical", "phys_return_type", "phys_prologue", "phys_body",
  "phys_body_stmt", "table", "parents_opt", "tbl_parents", "tbl_body",
  "tbl_stmts", "tbl_stmt", "column_decl", "col_modifiers_opt",
  "col_modifiers", "col_modifier", "col_decl", "phys_enc_ref", "typed_col",
  "col_ident", "col_body_opt", "col_body", "col_stmt", "physmbr_decl",
  "phys_coldef", "col_schema_parms_opt", "col_schema_parms",
  "col_schema_parm", "col_schema_value", "database", "opt_dbdad", "dbbody",
  "db_members", "db_member", "template_opt", "include", "cond_expr",
  "cond_chain", "expr", "func_expr", "schema_parts_opt", "schema_parms",
  "schema_parm", "factory_parms_opt", "factory_parms", "func_parms_opt",
  "expr_list", "uint_expr", "float_expr", "string_expr", "const_vect_expr",
  "bool_expr", "negate_expr", "cast_expr", "type_expr", "fqn", "qualnames",
  "ident", "fqn_opt_vers", "fqn_vers", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,    64,    40,
      41,    59,    44,    91,    93,    42,   123,   125,    61,    60,
      62,   124,    43,    45,    47,    58
};
# endif

#define YYPACT_NINF -577

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-577)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   -65,    77,    37,  -577,     3,    41,   194,  -577,   282,
      76,    90,   102,   129,   217,  -577,   213,  -577,   301,   302,
     180,   227,   228,  -577,   266,   315,   203,   252,   254,   255,
     256,   258,   260,   261,   263,   265,   267,   268,   270,  -577,
     143,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,   264,   272,   352,
     341,   350,   368,   377,   380,   375,   373,   367,   359,   374,
     369,   383,  -577,  -577,   283,   284,   401,   353,   353,   353,
      39,   353,   344,   271,    13,   345,   257,   291,   291,  -577,
    -577,   289,   292,   365,   357,   -19,   297,   353,  -577,  -577,
     353,   299,   303,   304,   305,   307,   355,   306,   310,   312,
    -577,   313,    80,   314,    -2,    91,  -577,   382,   318,   319,
     320,   321,   353,   311,   322,  -577,   423,   434,   257,  -577,
     325,   257,  -577,   424,   323,   329,   330,  -577,   291,   353,
    -577,   331,   363,  -577,   334,   349,   337,   -71,    39,   332,
    -577,   339,   338,    56,   340,   353,   353,   387,  -577,   387,
     396,   418,    55,   455,   141,   460,   343,   348,   346,   351,
     356,   465,  -577,   415,   224,  -577,   428,  -577,    18,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,   358,   360,   361,   362,
     364,   366,  -577,   370,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   371,   376,    -8,    -8,   378,   379,
     372,   381,  -577,   384,   387,  -577,   386,   395,   389,   437,
     385,    -8,   388,  -577,   390,   393,   394,    39,   397,  -577,
     398,  -577,   342,   391,   399,   400,   354,   392,   405,   406,
     407,  -577,   141,  -577,   141,   257,   417,  -577,   353,  -577,
     408,   402,   410,   412,  -577,   411,   439,   413,   -30,  -577,
     485,   414,  -577,    39,   416,   419,   420,   421,   444,    -8,
      71,   448,    56,    56,  -577,   422,   425,   431,   431,   387,
     427,   234,  -577,   403,  -577,    75,   152,  -577,    -8,   429,
     426,  -577,   430,   435,   436,  -577,  -577,   235,  -577,  -577,
    -577,  -577,   432,   146,   438,   440,   441,   442,  -577,  -577,
     445,   443,   459,    -8,    47,   433,   417,   353,  -577,   446,
     447,   449,   454,   238,  -577,   207,   450,   195,  -577,  -577,
     451,    39,   134,  -577,   452,   453,    56,    56,  -577,  -577,
     456,   457,   461,  -577,   463,   464,   141,   467,   467,   466,
    -577,   468,   -12,   470,   472,   473,   474,    -8,   476,   477,
     478,   479,   480,   481,  -577,   190,  -577,  -577,   482,   484,
     486,  -577,   186,  -577,   487,  -577,  -577,   239,  -577,  -577,
    -577,   458,   166,   488,  -577,   242,    75,   191,  -577,   475,
    -577,   431,   490,   491,   492,  -577,  -577,   494,   462,   113,
    -577,   469,   489,  -577,  -577,    71,   483,    49,   493,   269,
     532,  -577,  -577,  -577,   189,   189,   496,  -577,  -577,   495,
     497,   134,   499,   498,  -577,   500,  -577,   502,    56,   501,
     504,   505,   353,   443,   544,  -577,  -577,   506,   222,  -577,
     509,   507,   462,   510,   512,   -44,  -577,   515,   467,   467,
    -577,   516,   511,   229,   471,    40,   508,  -577,  -577,   541,
     534,   514,   517,  -577,  -577,   519,    56,   520,   521,  -577,
     522,  -577,   524,   518,   525,   526,   528,   243,  -577,   529,
     530,   462,   222,  -577,    11,   523,  -577,   535,   527,   533,
     293,   537,   531,   542,   536,   538,   540,   471,   543,   353,
      -8,    -8,  -577,  -577,    56,   246,  -577,  -577,  -577,   274,
     545,   546,  -577,    10,  -577,   506,  -577,   575,   222,   547,
     548,   564,   569,   549,   550,   274,   561,   561,  -577,  -577,
    -577,   259,  -577,    -5,  -577,   551,    56,    -6,  -577,   552,
    -577,   539,   467,   467,  -577,   247,  -577,   554,    94,  -577,
    -577,  -577,   555,    39,   570,  -577,   557,   558,  -577,   353,
     562,   563,  -577,  -577,   100,   565,   553,   559,   566,  -577,
     568,   158,   158,    56,   567,   572,   571,   579,  -577,   573,
     574,   576,   577,    56,   556,   578,  -577,  -577,   590,   580,
    -577,  -577,   582,   503,   583,   581,    56,   584,   586,  -577,
     -13,   591,   592,   593,   594,   595,   597,   606,   184,   187,
     598,   600,   601,   602,  -577,   561,   603,   604,  -577,   605,
     617,   623,   607,   145,  -577,  -577,  -577,   638,   560,   146,
      33,    33,  -577,  -577,   608,  -577,   199,  -577,   596,    -8,
     609,   561,   610,  -577,  -577,  -577,   611,  -577,  -577,   613,
     599,   612,   614,  -577,    56,   616,    56,   618,  -577,   202,
    -577,   615,  -577,   619,   561,   620,   146,  -577,   621,  -577,
     624,  -577,   274,   274,  -577,  -577,   134,   174,  -577,   625,
     183,   561,  -577,   626,   640,   628,   630,  -577,   114,   138,
     250,   631,  -577,   622,  -577,   585,   632,   634,   627,  -577,
    -577,   629,   633,   635,  -577,   -48,   637,   639,  -577,   154,
     641,   642,    -8,   636,  -577,    44,  -577,  -577,  -577,   644,
      43,  -577,  -577,  -577,  -577,   646,   647,   146,   232,  -577,
    -577,   353,   643,  -577,  -577,  -577,   648,   649,   650,   651,
     652,   654,  -577,   670,   561,   561,   273,  -577,   655,   660,
     661,   663,   664,   665,   666,  -577,  -577,  -577,  -577
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     2,     0,
       0,     0,     0,     0,     0,    10,     0,     3,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    11,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     5,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     0,    31,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,    42,
       0,     0,    80,     0,     0,     0,     0,    85,     0,     0,
      96,     0,     0,   152,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   210,     0,     0,    28,     0,    39,     0,   199,
     200,   201,   202,   169,   205,   204,     0,     0,     0,     0,
       0,     0,   170,     0,   171,   172,   173,   174,   175,   176,
     177,   179,   168,    41,     0,     0,     0,     0,     0,     0,
       0,     0,   208,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,   151,     0,     0,     0,     0,     0,    34,
       0,    33,     0,   181,     0,     0,     0,     0,     0,     0,
       0,   214,     0,   215,     0,     0,     0,    52,     0,    53,
       0,     0,     0,     0,   216,     0,   100,     0,     0,   211,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,     0,     0,     0,
       0,     0,    48,     0,    86,     0,     0,    84,     0,     0,
       0,   153,     0,     0,     0,    27,    36,     0,    32,   196,
     198,   197,     0,     0,     0,     0,     0,     0,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,    98,     0,     0,     0,   155,   212,
       0,     0,     0,   188,     0,     0,     0,     0,   206,   178,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,   102,   105,     0,     0,
       0,   157,     0,   156,     0,    37,   186,     0,   183,   187,
     185,     0,     0,     0,   194,     0,     0,     0,    45,     0,
      82,     0,     0,     0,     0,    47,   209,     0,     0,     0,
      55,     0,     0,    97,    99,     0,     0,     0,     0,     0,
       0,   101,   103,    95,     0,     0,     0,   159,   158,     0,
       0,     0,     0,     0,   192,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,   163,   162,     0,
       0,     0,     0,   182,   184,     0,     0,     0,     0,   195,
       0,    69,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,    58,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   154,    35,     0,     0,   180,   203,    56,     0,
       0,     0,   213,     0,    62,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     119,     0,   115,     0,   112,     0,     0,     0,   109,     0,
     108,     0,     0,     0,   190,     0,   193,     0,     0,    73,
      76,    70,     0,     0,     0,    64,     0,     0,    60,     0,
       0,     0,    91,    88,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,    74,    83,     0,     0,
      68,    61,     0,     0,     0,     0,     0,     0,     0,   114,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,    65,     0,
       0,     0,     0,     0,   166,    77,    78,     0,     0,     0,
       0,     0,   120,   121,     0,   106,     0,   143,     0,     0,
       0,     0,     0,   160,   161,   189,     0,    72,    66,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   129,     0,
     128,     0,   107,     0,     0,     0,     0,   138,     0,   111,
       0,    94,     0,     0,    87,   167,     0,     0,   123,     0,
       0,     0,   139,     0,     0,     0,     0,    75,     0,     0,
       0,     0,   127,     0,   130,     0,     0,     0,     0,   142,
     140,     0,     0,     0,   124,     0,     0,     0,   141,     0,
       0,     0,     0,     0,   134,     0,   132,   125,   126,     0,
       0,   145,   148,   150,   149,     0,     0,     0,     0,   131,
     133,     0,     0,   146,    92,    93,     0,     0,     0,     0,
       0,     0,   122,     0,     0,     0,     0,   144,     0,     0,
       0,     0,     0,     0,     0,   147,   137,   135,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -577,  -577,  -577,  -577,  -577,   687,  -577,  -577,   588,  -577,
    -577,   -68,  -323,  -577,  -577,  -577,  -577,  -577,  -577,   668,
    -577,  -109,  -577,   308,  -123,  -203,  -254,   120,  -350,  -577,
      69,  -386,   156,   317,  -510,  -522,  -265,  -577,  -577,   656,
    -577,  -577,  -577,  -577,  -577,   335,  -577,  -577,  -577,  -577,
    -577,   347,  -577,  -577,  -577,   171,  -577,  -577,   132,    78,
    -577,  -577,    -9,  -373,   133,  -577,  -577,    -7,     0,  -577,
    -577,  -577,  -577,   409,   404,  -577,  -516,  -577,  -145,  -577,
    -577,    92,   326,  -576,   118,  -577,   316,  -316,  -577,  -577,
    -577,  -577,  -577,  -577,  -260,   -77,  -577,  -334,  -200,   -82
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    14,    15,    16,    22,    40,    41,    42,
     174,   212,    98,   230,    43,   297,    44,    45,    46,    47,
     105,   112,   281,   282,   137,   217,   311,   320,   399,   477,
     478,   443,   342,   343,   548,   549,   550,    48,    49,   108,
      50,    51,   138,   253,   445,   446,    52,   142,   323,   290,
     365,   366,   367,   452,   531,   532,   492,   572,   603,   659,
     695,   715,   716,   496,   577,   639,   720,   721,   722,    53,
     145,   170,   372,   373,   459,    54,   566,   623,   384,   194,
     269,   377,   378,   335,   545,   425,   385,   195,   196,   197,
     198,   199,   200,   201,   213,   202,   147,   660,   242,   243
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      93,    94,    95,    99,   100,   114,   115,   244,   193,   376,
     304,   567,    97,   393,   394,   564,   379,   575,   121,   157,
     123,   257,   159,   124,   312,   292,   586,   179,   180,   181,
     182,   520,   183,   231,   206,   553,   207,     5,   521,   277,
     522,   278,   586,   397,    92,   152,   106,   658,   438,   184,
      92,   444,   479,   657,   348,    92,   164,   713,    92,   172,
     364,     1,   165,   185,     3,   179,   180,   181,   182,   303,
     183,    99,   450,    92,   173,   140,   497,     4,   204,   205,
     175,    92,   498,   714,   186,    99,   485,   184,   324,   107,
     685,   250,   482,   347,     6,   141,   519,   392,   376,   646,
     364,   185,    92,   576,   451,   379,    92,   293,   210,   186,
      92,   113,   120,   346,   488,   489,   113,   187,    92,    92,
      96,   570,   186,   398,   539,   668,   627,   306,   307,   241,
     241,   518,   557,     8,    92,    96,   279,   433,   188,   189,
     190,   191,   523,   391,   241,   448,   192,   495,   683,   713,
      99,   736,   318,   229,   719,   187,   313,   404,   319,   262,
     135,   211,   688,   689,    96,   696,   586,   586,   143,   211,
       9,   283,    96,   732,   729,   714,   188,   189,   190,   191,
      96,   547,   358,   359,   192,   211,    99,   547,   358,   359,
     439,   383,   241,    99,    10,   296,    96,    92,   440,   136,
     186,   547,   358,   359,    26,    27,    17,   144,   580,   581,
      28,   241,    29,    30,    31,    32,    33,    92,   215,    18,
     186,   423,   216,   333,   585,   547,   358,   359,   749,   750,
     595,    19,   457,    34,    35,    36,   241,    99,   693,    37,
     351,    26,    27,   424,   701,   441,   334,    28,   442,    29,
      30,    31,    32,    33,    99,   380,    38,   493,    20,    96,
     694,   637,   601,   375,   494,   719,   458,   737,   702,   738,
      34,    35,    36,    72,    39,   653,    37,    13,   358,   359,
     241,   739,   568,   469,    57,   602,   654,   528,   321,   529,
     322,   360,   361,    38,   638,   358,   359,   530,   362,   439,
     542,   543,   363,   369,   370,   454,   583,   440,   360,   361,
     455,    39,   369,   370,   691,   362,   416,   417,   640,   363,
     411,   528,   430,   529,    58,   641,   371,   431,    99,   432,
     663,   530,    59,   679,   110,   111,    92,   664,   680,   186,
      11,    12,    13,    23,   380,   102,   103,   104,   265,   266,
     267,    24,    25,   376,   226,   473,   227,    55,    56,   544,
     379,   547,   358,   359,   315,   330,   316,   331,   356,   420,
     357,   421,   427,   514,   428,   515,   546,   582,   428,   583,
     703,    60,   421,    61,    62,    63,    76,    64,    77,    65,
      66,   574,    67,   723,    68,    74,    69,    70,    78,    71,
      79,    80,    81,    75,   723,    82,    83,    84,    85,    88,
      86,    87,    91,    89,    90,   113,    92,    33,   109,   116,
     118,   117,   541,   241,   241,   119,   122,   748,   605,   125,
     723,   107,   126,   127,   128,   131,    99,   129,   614,   666,
     132,   133,   134,   139,   155,   554,   146,   148,   149,   153,
     150,   624,   151,   154,   156,   158,    99,   160,   162,   163,
     166,   167,   161,   168,   169,   571,   171,   135,   176,   177,
     203,   178,   208,   209,   214,   218,    99,   220,   224,   225,
     222,   219,   592,   228,   221,   588,   223,   232,   252,   233,
     234,   235,   255,   236,   289,   237,   280,   272,   294,   302,
     239,   238,   247,   305,   354,   240,   429,   245,   246,   675,
     248,   544,   727,   310,   249,   251,   453,   397,   629,   254,
     259,   256,   260,   628,   258,   261,   263,   449,   270,   341,
     268,   392,   264,   271,   273,   274,   275,   276,   284,   286,
     288,   285,   287,   291,   295,   344,   298,   317,   355,   299,
     300,   301,   308,   456,   465,   309,   314,   475,   325,   327,
     472,   332,   241,   326,   444,   328,   329,   500,   336,   337,
     487,   338,   339,   349,   340,   352,   501,   535,   495,   556,
     368,   381,   382,   589,   555,   386,   387,   353,   374,   474,
     476,   388,   389,   609,   390,   615,   395,   422,   396,   380,
     400,   401,   402,   617,   403,   405,   406,   407,   408,   409,
     410,   431,   413,   414,   491,   415,   565,   419,   426,   434,
     636,   435,   436,   437,   350,   447,   462,   466,    73,   345,
     467,   470,   724,   461,   471,   241,   468,   463,   480,   620,
     483,   484,   481,   724,   502,   490,   499,   503,   504,   510,
     506,   507,   508,   509,   740,   511,   512,   513,   560,   516,
     524,   534,   517,   561,   525,   526,   533,   537,   579,   724,
     538,   527,   650,   540,   536,   551,   552,   558,   651,   562,
     563,   576,   578,   584,   597,   587,   559,   590,   591,   573,
     598,   593,   594,   655,   596,   698,   599,   600,   606,   656,
     608,    21,   569,   610,   604,   611,   730,   612,   607,   661,
     618,   619,   412,   733,   625,   616,   626,   613,   622,   621,
     630,   631,   706,   632,   633,   665,   634,   635,   672,   642,
     643,   644,   645,   647,   648,   649,   186,   652,   662,   667,
     669,   673,   670,   671,   674,   676,   751,   464,   678,   682,
     101,   705,   686,   681,   687,   692,   709,   697,   699,   684,
     700,   704,   130,   707,   708,   728,   710,   717,   690,   718,
     711,   725,   726,   731,   677,   712,   734,   735,   742,     0,
     486,   418,   505,   741,   747,     0,   752,   743,   744,   745,
     746,   753,   754,   755,   756,   757,   758,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   460
};

static const yytype_int16 yycheck[] =
{
      77,    78,    79,    80,    81,    87,    88,   207,   153,   332,
     270,   527,    80,   347,   348,   525,   332,    23,    95,   128,
      97,   221,   131,   100,   278,    55,   548,     9,    10,    11,
      12,    20,    14,   178,   157,    25,   159,     0,    27,   242,
      29,   244,   564,    55,    63,   122,    33,    14,   398,    31,
      63,    95,   438,   629,   314,    63,   138,   105,    63,   130,
     325,    56,   139,    45,   129,     9,    10,    11,    12,   269,
      14,   148,    23,    63,   145,    77,    36,     0,   155,   156,
     148,    63,   455,   131,    66,   162,   130,    31,   288,    76,
     666,   214,   442,    46,    57,    97,   482,    64,   421,   615,
     365,    45,    63,   109,    55,   421,    63,   137,    53,    66,
      63,   124,   131,   313,   448,   449,   124,    99,    63,    63,
     125,   126,    66,   135,   497,   641,   139,   272,   273,   206,
     207,   481,   518,   130,    63,   125,   245,   391,   120,   121,
     122,   123,   131,   346,   221,   405,   128,   107,   664,   105,
     227,   727,    77,   135,   111,    99,   279,   357,    83,   227,
      80,   114,   672,   673,   125,   681,   688,   689,    77,   114,
     129,   248,   125,   130,   130,   131,   120,   121,   122,   123,
     125,    87,    88,    89,   128,   114,   263,    87,    88,    89,
      77,   336,   269,   270,     0,   263,   125,    63,    85,   119,
      66,    87,    88,    89,    61,    62,   130,   116,   542,   543,
      67,   288,    69,    70,    71,    72,    73,    63,    77,   129,
      66,    55,    81,    77,   130,    87,    88,    89,   744,   745,
     130,   129,    43,    90,    91,    92,   313,   314,    55,    96,
     317,    61,    62,    77,   130,   132,   100,    67,   135,    69,
      70,    71,    72,    73,   331,   332,   113,    28,   129,   125,
      77,    77,   104,   331,    35,   111,    77,    35,   130,    37,
      90,    91,    92,   130,   131,   130,    96,    60,    88,    89,
     357,    49,    23,   428,    18,   127,   141,    28,   136,    30,
     138,   101,   102,   113,   110,    88,    89,    38,   108,    77,
     500,   501,   112,   117,   118,    36,   132,    85,   101,   102,
      41,   131,   117,   118,   140,   108,   130,   131,   131,   112,
     130,    28,   131,    30,     9,   138,   131,   136,   405,   138,
     131,    38,   129,   131,    77,    78,    63,   138,   136,    66,
      58,    59,    60,   130,   421,    74,    75,    76,     6,     7,
       8,    50,    50,   676,   130,   432,   132,   130,   130,   504,
     676,    87,    88,    89,   130,   130,   132,   132,   130,   130,
     132,   132,   130,   130,   132,   132,   130,   130,   132,   132,
     130,   129,   132,   129,   129,   129,    34,   129,    47,   129,
     129,   536,   129,   709,   129,   131,   129,   129,    48,   129,
      32,    24,    22,   131,   720,    30,    33,    40,    49,    26,
      36,    42,    11,   130,   130,   124,    63,    73,    73,   130,
      55,   129,   499,   500,   501,    68,   129,   743,   573,   130,
     746,    76,   129,   129,   129,   129,   513,   130,   583,   639,
     130,   129,   129,   129,    21,   513,    64,   129,   129,   138,
     130,   596,   131,   131,    20,   130,   533,    33,   129,   129,
     129,    98,   139,   129,   115,   533,   129,    80,   136,   130,
     130,   133,    76,    55,    19,    15,   553,   129,    13,    64,
     129,   138,   559,    55,   138,   553,   130,   129,    93,   129,
     129,   129,    55,   129,    55,   129,    79,   143,    13,    55,
     129,   131,   130,    55,    55,   129,   386,   129,   129,   654,
     129,   656,   712,    82,   130,   129,    23,    55,   600,   130,
     130,   136,   129,   600,   136,   131,   129,    44,   129,    86,
     139,    64,   134,   133,   142,   130,   130,   130,   130,   129,
     129,   139,   130,   130,   130,    86,   130,   144,    94,   130,
     130,   130,   130,    21,    55,   130,   129,    13,   129,   129,
      55,   129,   639,   137,    95,   130,   130,    26,   130,   129,
      55,   130,   130,   140,   129,   129,    42,    35,   107,     4,
     130,   129,   129,    13,   515,   129,   129,   140,   137,   433,
      84,   130,   129,    14,   130,    39,   130,   139,   130,   676,
     130,   129,   129,    13,   130,   129,   129,   129,   129,   129,
     129,   136,   130,   129,   103,   129,    55,   130,   130,   129,
      14,   130,   130,   129,   316,   136,   131,   129,    40,   312,
     130,   130,   709,   137,   130,   712,   134,   140,   129,   136,
     130,   129,   135,   720,   130,   129,   138,   130,   129,   131,
     130,   130,   130,   129,   731,   130,   130,   129,    94,   130,
     137,   130,   132,    94,   129,   138,   129,   129,   129,   746,
     130,   138,    55,   130,   138,   130,   130,   130,    55,   130,
     130,   109,   130,   129,   131,   130,   138,   130,   130,   138,
     131,   129,   129,    55,   129,    55,   130,   129,   131,   139,
     129,    14,   531,   130,   572,   131,   715,   131,   575,   631,
     130,   129,   365,   720,   130,   137,   130,   140,   137,   136,
     129,   129,   137,   130,   130,   129,   131,   130,   129,   131,
     130,   130,   130,   130,   130,   130,    66,   130,   130,   130,
     130,   129,   131,   130,   130,   129,   746,   421,   130,   130,
      82,   129,   131,   138,   130,   130,   129,   131,   130,   139,
     130,   130,   106,   131,   130,   129,   137,   130,   676,   130,
     137,   130,   130,   129,   656,   140,   130,   130,   130,    -1,
     445,   372,   466,   140,   130,    -1,   131,   138,   138,   138,
     138,   131,   131,   130,   130,   130,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   415
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,   147,   129,     0,     0,    57,   148,   130,   129,
       0,    58,    59,    60,   149,   150,   151,   130,   129,   129,
     129,   151,   152,   130,    50,    50,    61,    62,    67,    69,
      70,    71,    72,    73,    90,    91,    92,    96,   113,   131,
     153,   154,   155,   160,   162,   163,   164,   165,   183,   184,
     186,   187,   192,   215,   221,   130,   130,    18,     9,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   154,   131,   131,    34,    47,    48,    32,
      24,    22,    30,    33,    40,    49,    36,    42,    26,   130,
     130,    11,    63,   241,   241,   241,   125,   157,   158,   241,
     241,   165,    74,    75,    76,   166,    33,    76,   185,    73,
      77,    78,   167,   124,   245,   245,   130,   129,    55,    68,
     131,   241,   129,   241,   241,   130,   129,   129,   129,   130,
     185,   129,   130,   129,   129,    80,   119,   170,   188,   129,
      77,    97,   193,    77,   116,   216,    64,   242,   129,   129,
     130,   131,   241,   138,   131,    21,    20,   167,   130,   167,
      33,   139,   129,   129,   245,   241,   129,    98,   129,   115,
     217,   129,   130,   145,   156,   157,   136,   130,   133,     9,
      10,    11,    12,    14,    31,    45,    66,    99,   120,   121,
     122,   123,   128,   224,   225,   233,   234,   235,   236,   237,
     238,   239,   241,   130,   241,   241,   170,   170,    76,    55,
      53,   114,   157,   240,    19,    77,    81,   171,    15,   138,
     129,   138,   129,   130,    13,    64,   130,   132,    55,   135,
     159,   224,   129,   129,   129,   129,   129,   129,   131,   129,
     129,   241,   244,   245,   244,   129,   129,   130,   129,   130,
     170,   129,    93,   189,   130,    55,   136,   244,   136,   130,
     129,   131,   157,   129,   134,     6,     7,     8,   139,   226,
     129,   133,   143,   142,   130,   130,   130,   171,   171,   167,
      79,   168,   169,   241,   130,   139,   129,   130,   129,    55,
     195,   130,    55,   137,    13,   130,   157,   161,   130,   130,
     130,   130,    55,   244,   240,    55,   224,   224,   130,   130,
      82,   172,   172,   170,   129,   130,   132,   144,    77,    83,
     173,   136,   138,   194,   244,   129,   137,   129,   130,   130,
     130,   132,   129,    77,   100,   229,   130,   129,   130,   130,
     129,    86,   178,   179,    86,   179,   244,    46,   240,   140,
     169,   241,   129,   140,    55,    94,   130,   132,    88,    89,
     101,   102,   108,   112,   182,   196,   197,   198,   130,   117,
     118,   131,   218,   219,   137,   157,   158,   227,   228,   233,
     241,   129,   129,   224,   224,   232,   129,   129,   130,   129,
     130,   171,    64,   243,   243,   130,   130,    55,   135,   174,
     130,   129,   129,   130,   244,   129,   129,   129,   129,   129,
     129,   130,   197,   130,   129,   129,   130,   131,   219,   130,
     130,   132,   139,    55,    77,   231,   130,   130,   132,   173,
     131,   136,   138,   172,   129,   130,   130,   129,   174,    77,
      85,   132,   135,   177,    95,   190,   191,   136,   240,    44,
      23,    55,   199,    23,    36,    41,    21,    43,    77,   220,
     220,   137,   131,   140,   228,    55,   129,   130,   134,   224,
     130,   130,    55,   241,   178,    13,    84,   175,   176,   177,
     129,   135,   174,   130,   129,   130,   191,    55,   243,   243,
     129,   103,   202,    28,    35,   107,   209,    36,   209,   138,
      26,    42,   130,   130,   129,   232,   130,   130,   130,   129,
     131,   130,   130,   129,   130,   132,   130,   132,   174,   177,
      20,    27,    29,   131,   137,   129,   138,   138,    28,    30,
      38,   200,   201,   129,   130,    35,   138,   129,   130,   209,
     130,   241,   244,   244,   224,   230,   130,    87,   180,   181,
     182,   130,   130,    25,   157,   176,     4,   177,   130,   138,
      94,    94,   130,   130,   180,    55,   222,   222,    23,   201,
     126,   157,   203,   138,   224,    23,   109,   210,   130,   129,
     243,   243,   130,   132,   129,   130,   181,   130,   157,    13,
     130,   130,   241,   129,   129,   130,   129,   131,   131,   130,
     129,   104,   127,   204,   204,   224,   131,   210,   129,    14,
     130,   131,   131,   140,   224,    39,   137,    13,   130,   129,
     136,   136,   137,   223,   224,   130,   130,   139,   241,   245,
     129,   129,   130,   130,   131,   130,    14,    77,   110,   211,
     131,   138,   131,   130,   130,   130,   222,   130,   130,   130,
      55,    55,   130,   130,   141,    55,   139,   229,    14,   205,
     243,   205,   130,   131,   138,   129,   244,   130,   222,   130,
     131,   130,   129,   129,   130,   224,   129,   230,   130,   131,
     136,   138,   130,   222,   139,   229,   131,   130,   180,   180,
     227,   140,   130,    55,    77,   206,   222,   131,    55,   130,
     130,   130,   130,   130,   130,   129,   137,   131,   130,   129,
     137,   137,   140,   105,   131,   207,   208,   130,   130,   111,
     212,   213,   214,   233,   241,   130,   130,   244,   129,   130,
     208,   129,   130,   213,   130,   130,   229,    35,    37,    49,
     241,   140,   130,   138,   138,   138,   138,   130,   233,   222,
     222,   214,   131,   131,   131,   130,   130,   130,   130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   146,   147,   147,   148,   148,   148,   149,   150,   151,
     152,   153,   153,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   156,   156,
     157,   157,   158,   159,   159,   160,   161,   161,   162,   162,
     163,   164,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   173,   173,   173,
     173,   173,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   178,   179,   180,   180,   181,   181,   182,   182,   183,
     184,   184,   185,   186,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   191,   191,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   197,   197,   197,   197,   197,
     197,   197,   198,   199,   199,   200,   200,   201,   201,   201,
     202,   202,   203,   203,   203,   204,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   208,   208,   209,   209,
     209,   209,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   216,   216,   217,   217,   218,   218,   218,   218,
     219,   219,   220,   220,   221,   222,   223,   223,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     225,   226,   226,   227,   227,   228,   228,   228,   229,   229,
     230,   230,   231,   231,   232,   232,   233,   233,   233,   234,
     234,   235,   235,   236,   237,   237,   238,   239,   240,   240,
     241,   242,   242,   243,   244,   244,   245
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     4,     5,     5,     6,     6,     4,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,    10,     1,     3,
       1,     1,     7,     1,     1,    15,     1,     3,     6,     7,
       9,     7,     5,     7,     7,     9,     1,     9,     1,     3,
       5,     5,     4,     4,     1,     6,     6,     1,     5,     6,
       7,     8,     4,     1,     3,     5,     6,     1,     5,     4,
       6,     1,     9,     1,     2,     6,     1,     8,     8,     5,
       5,     6,     9,    17,     9,     1,     5,    13,     9,     1,
       2,     4,    13,    13,     8,    12,     1,     8,     1,     3,
       0,     4,     1,     2,     1,     1,     8,     9,     5,     5,
       6,     9,     5,     1,     5,     1,     2,     1,     1,     1,
       5,     5,    11,     5,     7,     7,     7,     5,     1,     1,
       1,     4,     1,     2,     1,     7,     7,     7,     6,     7,
       8,     9,     6,     1,     9,     1,     2,     6,     1,     1,
       1,     7,     1,     5,     9,     5,     1,     1,     2,     2,
       8,     8,     1,     1,     5,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       9,     0,     6,     1,     3,     1,     1,     1,     1,     9,
       1,     3,     1,     4,     1,     3,     4,     4,     4,     1,
       1,     1,     1,     9,     1,     1,     5,     7,     1,     6,
       4,     4,     6,     4,     1,     1,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (p_ast, p_builder, p_sb, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, p_ast, p_builder, p_sb); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, AST*& p_ast, ASTBuilder& p_builder, ParseTreeScanner& p_sb)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (p_ast);
  YYUSE (p_builder);
  YYUSE (p_sb);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, AST*& p_ast, ASTBuilder& p_builder, ParseTreeScanner& p_sb)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, p_ast, p_builder, p_sb);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, AST*& p_ast, ASTBuilder& p_builder, ParseTreeScanner& p_sb)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , p_ast, p_builder, p_sb);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, p_ast, p_builder, p_sb); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, AST*& p_ast, ASTBuilder& p_builder, ParseTreeScanner& p_sb)
{
  YYUSE (yyvaluep);
  YYUSE (p_ast);
  YYUSE (p_builder);
  YYUSE (p_sb);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (AST*& p_ast, ASTBuilder& p_builder, ParseTreeScanner& p_sb)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, p_sb);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 254 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { p_ast = new AST ( (yyvsp[-1].tok) ); }
#line 1907 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 255 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { p_ast = (yyvsp[-2].node); }
#line 1913 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 259 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1919 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 260 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1925 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 261 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); dynamic_cast < AST_Schema* > ( (yyval.node) ) -> SetVersion ( (yyvsp[-2].tok) -> GetValue () ); }
#line 1931 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 265 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.tok) = (yyvsp[-5].tok); }
#line 1937 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 269 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.tok) = (yyvsp[-2].tok); }
#line 1943 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 273 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST_Schema ( (yyvsp[-3].tok), (yyvsp[-1].node) ); }
#line 1949 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 277 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST_Schema (); }
#line 1955 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 282 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 1961 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 283 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 1967 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 289 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1973 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 290 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1979 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 291 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1985 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 292 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1991 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 293 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1997 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 294 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2003 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 295 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2009 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 296 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2015 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 297 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2021 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 298 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2027 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 299 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2033 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 300 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2039 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 301 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2045 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 302 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); }
#line 2051 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 307 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . TypeDef ( (yyvsp[-9].tok), (yyvsp[-6].fqn), (yyvsp[-3].node) ); }
#line 2057 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 311 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2063 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 312 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2069 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 316 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].fqn); }
#line 2075 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 317 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2081 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 321 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-6].tok), (yyvsp[-4].fqn), (yyvsp[-2].node) ); }
#line 2087 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 325 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].expr); }
#line 2093 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 326 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( PT_EMPTY ); }
#line 2099 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 331 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . TypeSet ( (yyvsp[-14].tok), (yyvsp[-11].fqn), (yyvsp[-5].node) ); }
#line 2105 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 335 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2111 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 336 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2117 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 340 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . FmtDef ( (yyvsp[-5].tok), (yyvsp[-2].fqn), 0 ); }
#line 2123 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 341 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . FmtDef ( (yyvsp[-6].tok), (yyvsp[-2].fqn), (yyvsp[-3].fqn) ); }
#line 2129 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 345 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . ConstDef ( (yyvsp[-8].tok), (yyvsp[-5].node), (yyvsp[-4].fqn), (yyvsp[-2].expr) ); }
#line 2135 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 349 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . AliasDef ( (yyvsp[-6].tok), (yyvsp[-3].fqn), (yyvsp[-2].fqn) ); }
#line 2141 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 353 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2147 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 357 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . UntypedFunctionDecl ( (yyvsp[-6].tok), (yyvsp[-3].fqn) ); }
#line 2153 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 358 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . RowlenFunctionDecl ( (yyvsp[-6].tok), (yyvsp[-3].fqn) ); }
#line 2159 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 360 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . FunctionDecl ( (yyvsp[-8].tok), false, (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].fqn), (yyvsp[-3].paramSig), (yyvsp[-2].paramSig), (yyvsp[-1].node) ); }
#line 2165 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 364 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2171 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 365 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 2177 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 369 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2183 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 370 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2189 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 374 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-1].fqn) ); }
#line 2195 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 375 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-2].node), (yyvsp[-1].fqn) ); }
#line 2201 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 379 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); }
#line 2207 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 380 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2213 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 384 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = new AST_ParamSig ( (yyvsp[0].tok), 0, 0, false); }
#line 2219 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 385 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = (yyvsp[-2].paramSig); }
#line 2225 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 389 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = (yyvsp[-2].paramSig); }
#line 2231 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 393 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = new AST_ParamSig ( (yyvsp[0].tok), 0, 0, false); }
#line 2237 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 394 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = new AST_ParamSig ( (yyvsp[-4].tok), (yyvsp[-2].node), 0, (yyvsp[-1].boolean) ); }
#line 2243 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 395 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = new AST_ParamSig ( (yyvsp[-5].tok), 0, (yyvsp[-2].node), (yyvsp[-1].boolean) ); }
#line 2249 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 396 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = new AST_ParamSig ( (yyvsp[-6].tok), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].boolean) ); }
#line 2255 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 397 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.paramSig) = new AST_ParamSig ( (yyvsp[-7].tok), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[-1].boolean) ); }
#line 2261 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 401 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2267 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 405 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2273 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 406 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2279 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 410 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST_Formal ( (yyvsp[-4].tok), (yyvsp[-2].node), (yyvsp[-1].tok), false ); }
#line 2285 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 411 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST_Formal ( (yyvsp[-5].tok), (yyvsp[-2].node), (yyvsp[-1].tok), true ); }
#line 2291 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 415 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.boolean) = false; }
#line 2297 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 416 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.boolean) = true; }
#line 2303 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 420 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( PT_EMPTY ); }
#line 2309 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 421 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].fqn); }
#line 2315 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 426 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 2321 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 430 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2327 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 431 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2333 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 435 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-3].tok), (yyvsp[-2].expr) ); }
#line 2339 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 436 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2345 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 440 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-7].tok), (yyvsp[-5].node), (yyvsp[-4].fqn), (yyvsp[-2].expr) ); }
#line 2351 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 441 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-7].tok), (yyvsp[-4].fqn), (yyvsp[-2].expr) ); }
#line 2357 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 445 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2363 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 448 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2369 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 449 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2375 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 454 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . FunctionDecl ( (yyvsp[-8].tok), true, (yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].fqn), (yyvsp[-3].paramSig), (yyvsp[-2].paramSig), (yyvsp[-1].node) ); }
#line 2381 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 463 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . FunctionDecl ( (yyvsp[-16].tok), false, (yyvsp[-8].node), (yyvsp[-7].node), (yyvsp[-6].fqn), (yyvsp[-5].paramSig), (yyvsp[-4].paramSig), (yyvsp[-3].node) ); }
#line 2387 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 468 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . PhysicalDecl ( (yyvsp[-8].tok), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].fqn), (yyvsp[-2].paramSig), (yyvsp[-1].node) ); }
#line 2393 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 472 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2399 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 473 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-1].node) ); }
#line 2405 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 477 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-9].tok), (yyvsp[-4].node) ); }
#line 2411 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 479 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 2417 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 483 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2423 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 484 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2429 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 489 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( PT_EMPTY ); }
#line 2435 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 491 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-10].tok), (yyvsp[-4].node) ) ; }
#line 2441 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 493 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-10].tok), (yyvsp[-4].node) ); }
#line 2447 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 495 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-5].tok), (yyvsp[-3].fqn) ); }
#line 2453 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 502 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . TableDef ( (yyvsp[-11].tok), (yyvsp[-8].fqn), (yyvsp[-7].node), (yyvsp[-3].node) ); }
#line 2459 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 506 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2465 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 507 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2471 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 511 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].fqn) ); }
#line 2477 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 512 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].fqn) ); }
#line 2483 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 516 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( PT_EMPTY ); }
#line 2489 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 517 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2495 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 521 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2501 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 522 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2507 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 526 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2513 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 527 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2519 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 528 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-7].tok), (yyvsp[-2].expr) ); }
#line 2525 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 529 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-8].tok), (yyvsp[-2].expr) ); }
#line 2531 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 530 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-2].tok), (yyvsp[-1].node) ); }
#line 2537 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 531 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-2].tok), (yyvsp[-1].node) ); }
#line 2543 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 532 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-3].tok), (yyvsp[-1].node) ); }
#line 2549 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 533 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-8].tok), (yyvsp[-4].fqn) ); }
#line 2555 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 537 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-2].node), (yyvsp[-1].node) ); }
#line 2561 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 541 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2567 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 542 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2573 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 546 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2579 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 547 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2585 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 551 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2591 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 552 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2597 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 553 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2603 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 557 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-2].node), (yyvsp[-1].node) ); }
#line 2609 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 558 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-2].node), (yyvsp[-1].node) ); }
#line 2615 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 563 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-10].tok), (yyvsp[-5].node), (yyvsp[-2].fqn), (yyvsp[-1].node) ); }
#line 2621 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 564 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-2].fqn), (yyvsp[-1].node) ); }
#line 2627 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 565 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-6].tok), (yyvsp[-4].fqn), (yyvsp[-2].node) ); }
#line 2633 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 569 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    {  (yyval.node) = new AST ( (yyvsp[-6].tok), (yyvsp[-4].node), (yyvsp[-2].node) ); }
#line 2639 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 570 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    {  (yyval.node) = new AST ( (yyvsp[-6].tok), (yyvsp[-4].node), (yyvsp[-2].expr) ); }
#line 2645 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 571 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    {  (yyval.node) = new AST ( (yyvsp[-4].tok), (yyvsp[-2].node) ); }
#line 2651 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 575 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].fqn); }
#line 2657 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 576 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2663 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 580 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); }
#line 2669 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 581 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2675 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 585 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2681 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 586 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2687 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 590 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); }
#line 2693 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 591 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-6].tok), new AST ( (yyvsp[-4].tok) ), (yyvsp[-2].expr) ); }
#line 2699 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 592 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-6].tok), new AST ( (yyvsp[-4].tok) ), (yyvsp[-2].expr) ); }
#line 2705 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 593 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-6].tok), new AST ( (yyvsp[-4].tok) ), (yyvsp[-2].expr) ); }
#line 2711 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 598 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-5].tok), (yyvsp[-3].node), new AST ( (yyvsp[-2].tok) ) ); }
#line 2717 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 600 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-6].tok), (yyvsp[-3].node), new AST ( (yyvsp[-2].tok) ) ); }
#line 2723 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 602 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-7].tok), (yyvsp[-5].node), new AST ( (yyvsp[-4].tok) ), (yyvsp[-2].expr) ); }
#line 2729 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 604 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-8].tok), (yyvsp[-5].node), new AST ( (yyvsp[-4].tok) ), (yyvsp[-2].expr) ); }
#line 2735 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 608 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-5].tok), (yyvsp[-3].node), (yyvsp[-2].fqn), (yyvsp[-1].node) ); }
#line 2741 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 612 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); }
#line 2747 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 613 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 2753 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 617 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2759 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 618 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2765 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 622 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-5].tok), (yyvsp[-3].fqn), (yyvsp[-1].node) ); }
#line 2771 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 623 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2777 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 627 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].fqn); }
#line 2783 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 628 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].expr); }
#line 2789 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 633 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . DatabaseDef ( (yyvsp[-6].tok), (yyvsp[-3].fqn), (yyvsp[-2].node), (yyvsp[-1].node) ); }
#line 2795 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 637 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2801 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 638 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].fqn); }
#line 2807 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 641 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 2813 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 642 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-4].tok) ); }
#line 2819 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 646 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2825 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 647 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); }
#line 2831 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 648 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2837 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 649 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2843 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 654 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-7].tok), (yyvsp[-5].node), (yyvsp[-3].fqn), (yyvsp[-2].fqn) ); }
#line 2849 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 656 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-7].tok), (yyvsp[-5].node), (yyvsp[-3].fqn), (yyvsp[-2].fqn) ); }
#line 2855 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 660 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2861 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 661 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 2867 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 667 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = p_builder . Include ( (yyvsp[-4].tok), (yyvsp[-1].tok) ); }
#line 2873 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 673 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2879 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 677 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].expr) ); }
#line 2885 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 678 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-2].expr); (yyval.expr) -> AddNode ( (yyvsp[0].expr) ); }
#line 2891 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 682 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].fqn) ); }
#line 2897 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 683 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 2903 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 684 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 2909 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 685 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2915 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 686 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2921 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 687 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2927 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 688 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2933 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 689 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2939 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 690 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2945 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 691 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2951 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 692 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2957 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 693 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2963 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 698 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[-8].tok) ); (yyval.expr) -> AddNode ( (yyvsp[-6].node) ); (yyval.expr) -> AddNode ( (yyvsp[-5].fqn) ); (yyval.expr) -> AddNode ( (yyvsp[-4].node) ); (yyval.expr) -> AddNode ( (yyvsp[-2].node) ); }
#line 2969 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 702 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( PT_EMPTY ); }
#line 2975 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 703 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2981 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 706 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2987 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 707 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].node) ); }
#line 2993 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 711 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].fqn); }
#line 2999 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 712 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3005 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 713 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].expr); }
#line 3011 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 717 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 3017 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 718 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 3023 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 722 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].expr) ); }
#line 3029 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 723 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].expr) ); }
#line 3035 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 727 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[0].tok) ); }
#line 3041 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 728 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3047 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 732 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST (); (yyval.node) -> AddNode ( (yyvsp[0].expr) ); }
#line 3053 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 733 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); (yyval.node) -> AddNode ( (yyvsp[0].expr) ); }
#line 3059 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 737 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[-3].tok) ); (yyval.expr) -> AddNode ( (yyvsp[-1].tok) ); }
#line 3065 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 738 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[-3].tok) ); (yyval.expr) -> AddNode ( (yyvsp[-1].tok) ); }
#line 3071 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 739 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[-3].tok) ); (yyval.expr) -> AddNode ( (yyvsp[-1].tok) ); }
#line 3077 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 743 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 3083 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 744 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 3089 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 748 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 3095 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 749 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 3101 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 753 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[-8].tok) ); (yyval.expr) -> AddNode ( (yyvsp[-3].node) ); }
#line 3107 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 757 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 3113 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 758 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[0].tok) ); }
#line 3119 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 762 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[-4].tok) ); (yyval.expr) -> AddNode ( (yyvsp[-1].expr) ); }
#line 3125 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 765 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.expr) = new AST_Expr ( (yyvsp[-6].tok) ); (yyval.expr) -> AddNode ( (yyvsp[-3].node) ); (yyval.expr) -> AddNode ( (yyvsp[-1].expr) ); }
#line 3131 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 769 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3137 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 770 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.node) = new AST ( (yyvsp[-5].tok), (yyvsp[-3].fqn), (yyvsp[-1].fqn) ); }
#line 3143 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 776 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.fqn) = (yyvsp[-1].fqn); }
#line 3149 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 780 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.fqn) = new AST_FQN ( (yyvsp[-3].tok) ); (yyval.fqn) -> AddNode ( (yyvsp[-1].tok) ); }
#line 3155 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 781 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.fqn) = (yyvsp[-5].fqn); (yyval.fqn) -> AddNode ( (yyvsp[-1].tok) ); }
#line 3161 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 785 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.fqn) = new AST_FQN ( (yyvsp[-3].tok) ); (yyval.fqn) -> AddNode ( (yyvsp[-1].tok) ); }
#line 3167 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 789 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.fqn) = (yyvsp[0].fqn); }
#line 3173 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 790 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.fqn) = (yyvsp[0].fqn); }
#line 3179 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 794 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.y" /* yacc.c:1646  */
    { (yyval.fqn) = (yyvsp[-2].fqn); (yyval.fqn) -> SetVersion ( (yyvsp[-1].tok) -> GetValue () ); }
#line 3185 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
    break;


#line 3189 "/home/boshkins/devel/ncbi-vdb/libs/schema/schema-ast.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (p_ast, p_builder, p_sb, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (p_ast, p_builder, p_sb, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval, p_ast, p_builder, p_sb);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp, p_ast, p_builder, p_sb);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (p_ast, p_builder, p_sb, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, p_ast, p_builder, p_sb);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, p_ast, p_builder, p_sb);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
