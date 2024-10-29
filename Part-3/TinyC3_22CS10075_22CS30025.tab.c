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
#line 1 "TinyC3_22CS10075_22CS30025.y"

	#define YYDEBUG 1
	#include <stdio.h>
	#include "TinyC3_22CS10075_22CS30025_translator.h"
	using namespace std;

	extern "C" int yylex();
	void yyerror(string s);
	extern vector<Label> label_table; // The collection of all label vectors
	extern string variable_type;      // Global variable which controls the type of the most recent identifier

#line 83 "TinyC3_22CS10075_22CS30025.tab.c"

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

#include "TinyC3_22CS10075_22CS30025.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_RESTRICT = 4,                   /* RESTRICT  */
  YYSYMBOL_UNSIGNED = 5,                   /* UNSIGNED  */
  YYSYMBOL_BREAK = 6,                      /* BREAK  */
  YYSYMBOL_EXTERN = 7,                     /* EXTERN  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_CASE = 10,                      /* CASE  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_SHORT = 12,                     /* SHORT  */
  YYSYMBOL_VOLATILE = 13,                  /* VOLATILE  */
  YYSYMBOL_CHAR = 14,                      /* CHAR  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_SIGNED = 16,                    /* SIGNED  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_CONST = 18,                     /* CONST  */
  YYSYMBOL_GOTO = 19,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 20,                    /* SIZEOF  */
  YYSYMBOL_BOOL = 21,                      /* BOOL  */
  YYSYMBOL_CONTINUE = 22,                  /* CONTINUE  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_STATIC = 24,                    /* STATIC  */
  YYSYMBOL_COMPLEX = 25,                   /* COMPLEX  */
  YYSYMBOL_DEFAULT = 26,                   /* DEFAULT  */
  YYSYMBOL_INLINE = 27,                    /* INLINE  */
  YYSYMBOL_STRUCT = 28,                    /* STRUCT  */
  YYSYMBOL_IMAGINARY = 29,                 /* IMAGINARY  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_INT = 31,                       /* INT  */
  YYSYMBOL_SWITCH = 32,                    /* SWITCH  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_LONG = 34,                      /* LONG  */
  YYSYMBOL_TYPEDEF = 35,                   /* TYPEDEF  */
  YYSYMBOL_ELSE = 36,                      /* ELSE  */
  YYSYMBOL_REGISTER = 37,                  /* REGISTER  */
  YYSYMBOL_UNION = 38,                     /* UNION  */
  YYSYMBOL_INVALID_TOKEN = 39,             /* INVALID_TOKEN  */
  YYSYMBOL_LP = 40,                        /* LP  */
  YYSYMBOL_RP = 41,                        /* RP  */
  YYSYMBOL_SQ_BRACKET_L = 42,              /* SQ_BRACKET_L  */
  YYSYMBOL_SQ_BRACKET_R = 43,              /* SQ_BRACKET_R  */
  YYSYMBOL_CURLY_BRACKET_L = 44,           /* CURLY_BRACKET_L  */
  YYSYMBOL_CURLY_BRACKET_R = 45,           /* CURLY_BRACKET_R  */
  YYSYMBOL_PERIOD = 46,                    /* PERIOD  */
  YYSYMBOL_ARROW = 47,                     /* ARROW  */
  YYSYMBOL_INCREMENT = 48,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 49,                 /* DECREMENT  */
  YYSYMBOL_AMPERSAND = 50,                 /* AMPERSAND  */
  YYSYMBOL_ASTERISK = 51,                  /* ASTERISK  */
  YYSYMBOL_PLUS = 52,                      /* PLUS  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_TILDE = 54,                     /* TILDE  */
  YYSYMBOL_EXCLAMATION = 55,               /* EXCLAMATION  */
  YYSYMBOL_SLASH = 56,                     /* SLASH  */
  YYSYMBOL_PERCENT = 57,                   /* PERCENT  */
  YYSYMBOL_LEFT_SHIFT = 58,                /* LEFT_SHIFT  */
  YYSYMBOL_RIGHT_SHIFT = 59,               /* RIGHT_SHIFT  */
  YYSYMBOL_LESS_THAN = 60,                 /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 61,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN_EQUAL = 62,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 63,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_EQUAL = 64,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 65,                 /* NOT_EQUAL  */
  YYSYMBOL_CARET = 66,                     /* CARET  */
  YYSYMBOL_PIPE = 67,                      /* PIPE  */
  YYSYMBOL_LOGICAL_AND = 68,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 69,                /* LOGICAL_OR  */
  YYSYMBOL_QUESTION = 70,                  /* QUESTION  */
  YYSYMBOL_COLON = 71,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 72,                 /* SEMICOLON  */
  YYSYMBOL_ELLIPSIS = 73,                  /* ELLIPSIS  */
  YYSYMBOL_ASSIGN = 74,                    /* ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 75,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 76,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 77,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 78,                /* ADD_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 79,              /* MINUS_ASSIGN  */
  YYSYMBOL_LEFT_SHIFT_ASSIGN = 80,         /* LEFT_SHIFT_ASSIGN  */
  YYSYMBOL_RIGHT_SHIFT_ASSIGN = 81,        /* RIGHT_SHIFT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 82,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 83,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 84,                 /* OR_ASSIGN  */
  YYSYMBOL_COMMA = 85,                     /* COMMA  */
  YYSYMBOL_HASH = 86,                      /* HASH  */
  YYSYMBOL_IDENTIFIER = 87,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT_INT = 88,              /* CONSTANT_INT  */
  YYSYMBOL_LITERAL = 89,                   /* LITERAL  */
  YYSYMBOL_CONSTANT_FLOAT = 90,            /* CONSTANT_FLOAT  */
  YYSYMBOL_CONSTANT_CHAR = 91,             /* CONSTANT_CHAR  */
  YYSYMBOL_92_then_ = 92,                  /* "then"  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_M = 94,                         /* M  */
  YYSYMBOL_N = 95,                         /* N  */
  YYSYMBOL_X = 96,                         /* X  */
  YYSYMBOL_blocktable = 97,                /* blocktable  */
  YYSYMBOL_changetable = 98,               /* changetable  */
  YYSYMBOL_primary_expression = 99,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 100,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 101, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 102, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 103,         /* unary_expression  */
  YYSYMBOL_unary_operator = 104,           /* unary_operator  */
  YYSYMBOL_cast_expression = 105,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 106, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 107,      /* additive_expression  */
  YYSYMBOL_shift_expression = 108,         /* shift_expression  */
  YYSYMBOL_relational_expression = 109,    /* relational_expression  */
  YYSYMBOL_equality_expression = 110,      /* equality_expression  */
  YYSYMBOL_and_expression = 111,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 112,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 113,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 114,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 115,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 116,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 117,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 118,      /* assignment_operator  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_constant_expression = 120,      /* constant_expression  */
  YYSYMBOL_declaration = 121,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 122,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 123, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 124,     /* init_declarator_list  */
  YYSYMBOL_init_declarator_list_opt = 125, /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator = 126,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 127,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 128,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 129, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 130, /* specifier_qualifier_list_opt  */
  YYSYMBOL_type_qualifier = 131,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 132,       /* function_specifier  */
  YYSYMBOL_declarator = 133,               /* declarator  */
  YYSYMBOL_direct_declarator = 134,        /* direct_declarator  */
  YYSYMBOL_pointer = 135,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 136,      /* type_qualifier_list  */
  YYSYMBOL_type_qualifier_list_opt = 137,  /* type_qualifier_list_opt  */
  YYSYMBOL_parameter_type_list = 138,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 139,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 140,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 141,          /* identifier_list  */
  YYSYMBOL_type_name = 142,                /* type_name  */
  YYSYMBOL_initializer = 143,              /* initializer  */
  YYSYMBOL_initializer_list = 144,         /* initializer_list  */
  YYSYMBOL_designation = 145,              /* designation  */
  YYSYMBOL_designation_opt = 146,          /* designation_opt  */
  YYSYMBOL_designator_list = 147,          /* designator_list  */
  YYSYMBOL_designator = 148,               /* designator  */
  YYSYMBOL_statement = 149,                /* statement  */
  YYSYMBOL_labeled_statement = 150,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 151,       /* compound_statement  */
  YYSYMBOL_block_item_list = 152,          /* block_item_list  */
  YYSYMBOL_block_item_list_opt = 153,      /* block_item_list_opt  */
  YYSYMBOL_block_item = 154,               /* block_item  */
  YYSYMBOL_expression_statement = 155,     /* expression_statement  */
  YYSYMBOL_selection_statement = 156,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 157,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 158,           /* jump_statement  */
  YYSYMBOL_translation_unit = 159,         /* translation_unit  */
  YYSYMBOL_external_declaration = 160,     /* external_declaration  */
  YYSYMBOL_function_definition = 161,      /* function_definition  */
  YYSYMBOL_declaration_list = 162,         /* declaration_list  */
  YYSYMBOL_declaration_list_opt = 163      /* declaration_list_opt  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  363

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   347


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    99,    99,   108,   118,   135,   151,   167,   174,   181,
     188,   195,   204,   210,   218,   243,   252,   254,   256,   265,
     274,   276,   281,   285,   291,   297,   305,   310,   316,   323,
     359,   361,   364,   367,   370,   373,   376,   379,   383,   390,
     406,   421,   435,   449,   465,   470,   485,   501,   506,   521,
     534,   539,   557,   574,   591,   610,   615,   634,   655,   660,
     678,   683,   701,   704,   721,   726,   740,   745,   758,   763,
     784,   789,   823,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,   837,   842,   846,   852,   856,   857,   858,
     859,   862,   863,   866,   868,   872,   873,   876,   878,   885,
     886,   887,   888,   891,   894,   897,   900,   903,   904,   905,
     906,   907,   908,   909,   910,   913,   915,   919,   920,   924,
     925,   926,   929,   932,   940,   948,   956,   959,   960,   965,
     997,  1028,  1029,  1030,  1031,  1034,  1048,  1062,  1066,  1071,
    1079,  1080,  1083,  1084,  1087,  1088,  1091,  1092,  1095,  1099,
    1102,  1103,  1106,  1109,  1114,  1116,  1119,  1120,  1123,  1126,
    1127,  1130,  1131,  1134,  1135,  1140,  1141,  1144,  1149,  1150,
    1151,  1154,  1170,  1172,  1176,  1186,  1190,  1198,  1202,  1208,
    1211,  1216,  1218,  1222,  1233,  1245,  1250,  1266,  1276,  1289,
    1303,  1307,  1309,  1311,  1313,  1318,  1328,  1329,  1332,  1333,
    1336,  1347,  1348,  1351,  1352
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
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "RESTRICT",
  "UNSIGNED", "BREAK", "EXTERN", "RETURN", "VOID", "CASE", "FLOAT",
  "SHORT", "VOLATILE", "CHAR", "FOR", "SIGNED", "WHILE", "CONST", "GOTO",
  "SIZEOF", "BOOL", "CONTINUE", "IF", "STATIC", "COMPLEX", "DEFAULT",
  "INLINE", "STRUCT", "IMAGINARY", "DO", "INT", "SWITCH", "DOUBLE", "LONG",
  "TYPEDEF", "ELSE", "REGISTER", "UNION", "INVALID_TOKEN", "LP", "RP",
  "SQ_BRACKET_L", "SQ_BRACKET_R", "CURLY_BRACKET_L", "CURLY_BRACKET_R",
  "PERIOD", "ARROW", "INCREMENT", "DECREMENT", "AMPERSAND", "ASTERISK",
  "PLUS", "MINUS", "TILDE", "EXCLAMATION", "SLASH", "PERCENT",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_THAN", "GREATER_THAN",
  "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL", "EQUAL", "NOT_EQUAL", "CARET",
  "PIPE", "LOGICAL_AND", "LOGICAL_OR", "QUESTION", "COLON", "SEMICOLON",
  "ELLIPSIS", "ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "MINUS_ASSIGN", "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "HASH", "IDENTIFIER",
  "CONSTANT_INT", "LITERAL", "CONSTANT_FLOAT", "CONSTANT_CHAR", "\"then\"",
  "$accept", "M", "N", "X", "blocktable", "changetable",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list", "init_declarator_list_opt", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "type_qualifier_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designation_opt", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item_list_opt", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", "declaration_list_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-293)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-204)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1101,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,   -32,  1101,  1101,  1101,  1101,  1066,  -293,  -293,
     -32,   118,  -293,   -62,   -56,  -293,   202,    10,   -27,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,    12,  -293,   118,   -11,
     -32,  -293,   658,  -293,   -32,  1101,  -293,   -43,   477,    10,
    -293,  -293,  -293,  -293,    30,   813,   458,    27,   832,   832,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,   108,   352,   857,  -293,    -9,    89,   128,   110,
     117,    50,    69,    70,    76,   122,  -293,  -293,  -293,  -293,
      95,  -293,  1031,   -10,   556,  -293,   103,   106,   537,   458,
    -293,  -293,    -8,   333,  -293,   333,   111,   857,    87,   -13,
    -293,   658,    64,  -293,   458,  -293,  -293,   857,   857,   102,
     116,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,   857,  -293,  -293,   857,   857,   857,
     857,   857,   857,   857,   857,   857,   857,   857,   857,   857,
     857,   857,   857,  -293,  -293,   140,  -293,  -293,  -293,   -32,
     135,   113,  -293,  -293,   121,   150,   556,  -293,  -293,  -293,
     174,   176,   183,  -293,   857,  -293,  -293,  -293,   714,  -293,
     189,  -293,  -293,    88,  -293,  -293,  -293,   193,   196,   155,
    -293,    -2,  -293,  -293,  -293,  -293,  -293,  -293,    -9,    -9,
      89,    89,   128,   128,   128,   128,   110,   110,   117,    50,
      69,   857,   857,  -293,  -293,  -293,  -293,   946,  -293,  -293,
     204,  -293,  -293,   210,  -293,    27,  -293,  -293,  -293,   658,
     210,  -293,   857,  -293,    70,    76,   857,   281,  -293,  -293,
    -293,    26,  -293,  -293,   163,   184,   735,   857,   215,   218,
     172,   188,   221,   192,  -293,   224,  -293,   195,   -61,  -293,
    -293,  -293,  -293,   222,   223,  -293,  -293,  -293,  -293,  -293,
    -293,   123,   198,  -293,  -293,   -26,   199,  -293,  -293,   201,
    -293,   857,   642,   642,   857,  -293,  -293,   281,  -293,  -293,
    -293,  -293,   642,  -293,  -293,  -293,    -4,  -293,  -293,    -3,
     642,  -293,   857,  -293,   370,  -293,  -293,   257,   642,  -293,
    -293,  -293,  -293,   857,   642,   235,  -293,   760,   760,    23,
    -293,   857,  -293,  -293,  -293,   241,    29,   760,   857,   642,
    -293,   206,   -61,  -293,   163,  -293,   642,  -293,   239,   857,
     240,  -293,  -293,   163,  -293,   642,   268,   642,  -293,  -293,
    -293,   642,  -293
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   101,   120,   111,    99,   103,   106,   108,   121,   104,
     110,   119,   112,   100,   113,   122,   114,   105,   109,   107,
     102,   199,    95,    91,    91,    91,    91,     0,   196,   198,
       0,   142,   125,    96,     0,    93,    97,   124,     0,    92,
      87,    88,    89,    90,     1,   197,     0,   140,   143,   138,
       0,    86,     0,   201,    95,   204,     6,     6,     0,   123,
     126,   141,   139,    94,    97,     0,     0,   159,     0,     0,
      32,    33,    34,    35,    36,    37,     7,     8,    11,     9,
      10,    13,    26,    38,     0,    40,    44,    47,    50,    55,
      58,    60,    62,    64,    66,    68,    70,   153,    98,   202,
       0,   150,     0,     0,     0,   130,    33,     0,     0,     0,
      30,    83,     0,   117,   152,   117,     0,     0,     0,     0,
     160,     0,     0,   161,     0,    27,    28,    23,     0,     0,
       0,    18,    19,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,     0,    38,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     2,     0,     4,   200,   136,   149,
       0,   144,   146,   137,     0,     0,     0,   134,   129,   128,
      33,     0,     0,    12,     0,   118,   115,   116,     0,    85,
       0,   164,   154,   159,   156,   158,   162,     0,     0,    22,
      24,     0,    16,    17,    71,    41,    42,    43,    45,    46,
      48,    49,    51,    52,    53,    54,    56,    57,    59,    61,
      63,     0,     0,     2,     5,   148,   135,     0,   151,   132,
       0,   133,   127,    31,    84,   159,    39,   163,   155,     0,
       0,    15,     0,    14,    65,    67,     0,   177,   145,   147,
     131,     0,   157,    25,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,   182,     7,     0,   179,
     180,   165,   166,     2,     0,   175,   167,   168,   169,   170,
      20,   159,     0,   193,   195,     0,     0,     4,     4,     0,
     192,     0,     0,     0,     0,     2,   181,     0,   174,    21,
       2,   194,     0,     5,     5,   191,     0,   173,     2,     0,
       0,   176,     0,   172,     0,     2,     2,     0,     0,   171,
      69,     2,     2,     0,     0,     0,   185,     0,     0,     0,
       3,     0,     2,     2,     2,   183,     0,     0,     0,     0,
       2,     0,     3,     2,     3,   186,     0,   187,     0,     0,
       0,   184,     2,     3,     2,     0,     0,     0,   189,     2,
     188,     0,   190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -155,  -229,   -92,  -103,   225,  -293,  -293,  -293,  -293,
     -63,  -293,   -69,    71,    90,    96,    86,   156,   158,   160,
      99,   101,  -293,  -110,    -1,  -293,   -66,    60,   -35,     3,
     138,  -293,  -293,   274,  -293,   -48,    14,   211,     8,  -293,
     -18,   289,   279,   -41,  -293,  -293,  -293,   112,  -293,   -75,
    -111,   105,  -293,  -179,  -293,   219,   676,  -293,   243,  -293,
    -293,    51,  -292,  -293,  -293,  -293,  -293,   323,  -293,  -293,
    -293
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   221,   165,   224,   247,   100,    81,    82,   198,   199,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,   111,   144,   268,   190,    21,    54,
      40,    33,    34,    35,    23,    24,   114,   186,    25,    26,
      64,    37,    38,    48,    49,   170,   171,   172,   103,   116,
      98,   119,   120,   121,   122,   123,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,    27,    28,    29,    55,
      56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,    53,   110,    22,    36,   125,   126,   189,    30,   222,
     194,   296,    46,    30,   239,   146,    51,   108,   113,    31,
      99,   145,   322,    50,   184,   282,    39,    39,    39,    39,
      22,   173,   192,   183,   182,   332,   333,   316,   318,    47,
      31,   243,   147,   112,   101,   343,   301,   148,   149,   197,
      57,    97,    58,    60,   145,    32,    61,   107,   112,   184,
      32,   113,   201,   176,   334,   113,    47,   113,   246,   117,
     341,   280,   193,   118,   115,   174,   113,   184,   205,   206,
     207,   184,   184,   184,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     160,   335,   239,   175,    52,   169,   117,   181,   184,   293,
     118,   281,    47,   348,   184,   350,    61,   115,   297,   236,
      97,   115,     2,   115,   356,   145,   200,   185,   252,   185,
     117,     8,   115,   238,   118,   161,    11,   162,   195,   166,
     310,   150,   151,   204,   163,   312,   177,   189,   127,   178,
     128,   225,   188,   317,   129,   130,   131,   132,   145,   145,
     323,   324,    41,    42,    43,   117,   327,   328,   299,   118,
     154,   155,   156,   157,   191,   230,   226,   337,   338,   339,
     254,   158,   159,   234,    61,   346,   152,   153,   349,   202,
     285,   164,    -3,   229,   145,   303,   304,   355,   227,   357,
     314,   315,   320,   203,   361,     1,     2,     3,   228,     4,
     223,     5,   269,     6,     7,     8,     9,   231,    10,   232,
      11,   208,   209,    12,   233,   306,    13,    14,   309,    15,
     169,    16,   237,    17,   240,    18,    19,   241,    97,    20,
     242,   253,   210,   211,   216,   217,  -203,   250,   184,   145,
     212,   213,   214,   215,   235,   287,   283,   329,   288,   289,
     290,   291,   269,   292,   294,   336,   295,  -178,   298,   300,
     302,   342,   344,   305,   325,   331,    52,   340,   347,   321,
     352,   354,   102,   353,     1,     2,     3,   255,     4,   256,
       5,   257,     6,     7,     8,     9,   258,    10,   259,    11,
     260,    65,    12,   261,   262,    13,    14,   263,    15,   359,
      16,   264,    17,   265,    18,    19,   218,   286,    20,   219,
     244,    66,   220,   245,    63,   166,   187,    59,    62,    68,
      69,    70,    71,    72,    73,    74,    75,     2,     3,   249,
     251,   196,     5,   167,     6,     7,     8,     9,   311,    10,
      45,    11,     0,   266,    12,     0,     0,     0,    14,     0,
       0,     0,    16,     0,    17,     0,    18,    19,   267,    77,
      78,    79,    80,     1,     2,     3,     0,     4,     0,     5,
       0,     6,     7,     8,     9,     0,    10,     0,    11,     0,
      65,    12,     0,     0,    13,    14,     0,    15,     0,    16,
       0,    17,     0,    18,    19,     0,     0,    20,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,     2,     3,     0,     0,     0,     5,     0,     6,
       7,     8,     9,     0,    10,     0,    11,     0,    65,    12,
       0,     2,     0,    14,     0,     0,     0,    16,     0,    17,
       8,    18,    19,     0,     0,    11,     0,    65,    66,     0,
       0,   104,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,     0,     0,     0,    66,     0,     0,
     105,     0,     0,     0,     0,    68,    69,    70,   106,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,    76,    77,    78,    79,    80,
       8,     0,     0,     0,     0,    11,     0,    65,     0,     0,
       2,     0,     0,     0,    76,    77,    78,    79,    80,     8,
       0,     0,     0,     0,    11,     0,    65,    66,     0,     0,
     179,     0,     0,     0,     0,    68,    69,    70,   180,    72,
      73,    74,    75,     0,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,   255,     0,
     256,     0,   257,     0,     0,     0,     0,   258,     0,   259,
       0,   260,    65,     0,   261,   262,     0,     0,   263,     0,
       0,     0,   264,     0,   265,     0,     0,     0,    65,     0,
       0,     0,    66,     0,     0,     0,   166,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    66,     0,
       0,     0,    67,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,   266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
      77,    78,    79,    80,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
       0,     0,     0,     0,    66,    65,     0,     0,   235,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
       0,     0,     0,     0,     0,    66,     0,     0,     0,     0,
      65,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    76,    77,    78,    79,    80,     0,   284,    68,    69,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,   266,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,    65,   109,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,   124,     0,     0,     0,     0,    65,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
      76,    77,    78,    79,    80,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    77,    78,    79,    80,     1,
       2,     3,     0,     4,     0,     5,     0,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,   307,   308,
      13,    14,     0,    15,     0,    16,     0,    17,   313,    18,
      19,     0,     0,    20,     0,     0,   319,     0,     0,     0,
       0,     0,     0,     0,   326,     0,     0,     0,     0,     0,
     330,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   345,     0,     0,     0,   248,
       0,     0,   351,     0,     0,     0,     0,     0,     0,     0,
       0,   358,     0,   360,     1,     2,     3,   362,     4,     0,
       5,     0,     6,     7,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,    13,    14,     0,    15,     0,
      16,     0,    17,     0,    18,    19,    44,     0,    20,     1,
       2,     3,   168,     4,     0,     5,     0,     6,     7,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
      13,    14,     0,    15,     0,    16,     0,    17,     0,    18,
      19,     0,     0,    20,     1,     2,     3,     0,     4,     0,
       5,     0,     6,     7,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,    13,    14,     0,    15,     0,
      16,     0,    17,     0,    18,    19,     0,     0,    20
};

static const yytype_int16 yycheck[] =
{
      66,    36,    65,     0,    22,    68,    69,   117,    40,   164,
     121,    72,    30,    40,   193,    84,    72,    58,    66,    51,
      55,    84,   314,    85,    85,   254,    23,    24,    25,    26,
      27,    41,    45,    41,   109,   327,   328,    41,    41,    31,
      51,    43,    51,   109,    87,   337,    72,    56,    57,   124,
      40,    52,    42,    41,   117,    87,    48,    58,   124,    85,
      87,   109,   128,   104,    41,   113,    58,   115,   223,    42,
      41,    45,    85,    46,    66,    85,   124,    85,   147,   148,
     149,    85,    85,    85,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      50,   330,   281,   104,    74,   102,    42,   108,    85,   264,
      46,    85,   104,   342,    85,   344,   108,   109,   273,   188,
     121,   113,     4,   115,   353,   188,   127,   113,   239,   115,
      42,    13,   124,    45,    46,    66,    18,    67,    74,    44,
     295,    52,    53,   144,    68,   300,    43,   257,    40,    43,
      42,   169,    41,   308,    46,    47,    48,    49,   221,   222,
     315,   316,    24,    25,    26,    42,   321,   322,    45,    46,
      60,    61,    62,    63,    87,   176,    41,   332,   333,   334,
     246,    64,    65,   184,   176,   340,    58,    59,   343,    87,
     256,    69,    70,    43,   257,   287,   288,   352,    85,   354,
     303,   304,   312,    87,   359,     3,     4,     5,    87,     7,
      70,     9,   247,    11,    12,    13,    14,    43,    16,    43,
      18,   150,   151,    21,    41,   291,    24,    25,   294,    27,
     227,    29,    43,    31,    41,    33,    34,    41,   239,    37,
      85,   242,   152,   153,   158,   159,    44,    43,    85,   312,
     154,   155,   156,   157,    44,    40,    72,   323,    40,    87,
      72,    40,   297,    71,    40,   331,    71,    45,    45,    71,
      71,   337,   338,    72,    17,    40,    74,    36,    72,   314,
      41,    41,    57,   349,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    41,
      29,    30,    31,    32,    33,    34,   160,   257,    37,   161,
     221,    40,   162,   222,    50,    44,   115,    38,    49,    48,
      49,    50,    51,    52,    53,    54,    55,     4,     5,   227,
     235,   122,     9,   100,    11,    12,    13,    14,   297,    16,
      27,    18,    -1,    72,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    87,    88,
      89,    90,    91,     3,     4,     5,    -1,     7,    -1,     9,
      -1,    11,    12,    13,    14,    -1,    16,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    -1,    27,    -1,    29,
      -1,    31,    -1,    33,    34,    -1,    -1,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,    13,    14,    -1,    16,    -1,    18,    -1,    20,    21,
      -1,     4,    -1,    25,    -1,    -1,    -1,    29,    -1,    31,
      13,    33,    34,    -1,    -1,    18,    -1,    20,    40,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      13,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
       4,    -1,    -1,    -1,    87,    88,    89,    90,    91,    13,
      -1,    -1,    -1,    -1,    18,    -1,    20,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,     6,    -1,
       8,    -1,    10,    -1,    -1,    -1,    -1,    15,    -1,    17,
      -1,    19,    20,    -1,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    40,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    40,    20,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    87,    88,    89,    90,    91,    -1,    72,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    72,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    20,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      87,    88,    89,    90,    91,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,     3,
       4,     5,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      14,    -1,    16,    -1,    18,    -1,    -1,    21,   292,   293,
      24,    25,    -1,    27,    -1,    29,    -1,    31,   302,    33,
      34,    -1,    -1,    37,    -1,    -1,   310,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,    -1,    -1,
     324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,    73,
      -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,   357,     3,     4,     5,   361,     7,    -1,
       9,    -1,    11,    12,    13,    14,    -1,    16,    -1,    18,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    34,     0,    -1,    37,     3,
       4,     5,    41,     7,    -1,     9,    -1,    11,    12,    13,
      14,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    -1,
       9,    -1,    11,    12,    13,    14,    -1,    16,    -1,    18,
      -1,    -1,    21,    -1,    -1,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    34,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     9,    11,    12,    13,    14,
      16,    18,    21,    24,    25,    27,    29,    31,    33,    34,
      37,   121,   122,   127,   128,   131,   132,   159,   160,   161,
      40,    51,    87,   124,   125,   126,   133,   134,   135,   122,
     123,   123,   123,   123,     0,   160,   133,   131,   136,   137,
      85,    72,    74,   121,   122,   162,   163,    40,    42,   134,
      41,   131,   135,   126,   133,    20,    40,    44,    48,    49,
      50,    51,    52,    53,    54,    55,    87,    88,    89,    90,
      91,    99,   100,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   143,   121,
      98,    87,    98,   141,    24,    43,    51,   117,   136,    40,
     103,   117,   119,   128,   129,   131,   142,    42,    46,   144,
     145,   146,   147,   148,    40,   103,   103,    40,    42,    46,
      47,    48,    49,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   118,   103,   105,    51,    56,    57,
      52,    53,    58,    59,    60,    61,    62,    63,    64,    65,
      50,    66,    67,    68,    69,    95,    44,   151,    41,   122,
     138,   139,   140,    41,    85,   117,   136,    43,    43,    43,
      51,   117,   142,    41,    85,   129,   130,   130,    41,   116,
     120,    87,    45,    85,   143,    74,   148,   142,   101,   102,
     117,   119,    87,    87,   117,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   109,   109,   110,   111,
     112,    94,    94,    70,    96,   133,    41,    85,    87,    43,
     117,    43,    43,    41,   117,    44,   105,    43,    45,   146,
      41,    41,    85,    43,   113,   114,    94,    97,    73,   140,
      43,   144,   143,   117,   119,     6,     8,    10,    15,    17,
      19,    22,    23,    26,    30,    32,    72,    87,   119,   121,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
      45,    85,    95,    72,    72,   119,   120,    40,    40,    87,
      72,    40,    71,    94,    40,    71,    72,    94,    45,    45,
      71,    72,    71,    96,    96,    72,   119,   149,   149,   119,
      94,   154,    94,   149,    97,    97,    41,    94,    41,   149,
     116,   121,   155,    94,    94,    17,   149,    94,    94,   119,
     149,    40,   155,   155,    41,    95,   119,    94,    94,    94,
      36,    41,   119,   155,   119,   149,    94,    72,    95,    94,
      95,   149,    41,   119,    41,    94,    95,    94,   149,    41,
     149,    94,   149
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   106,   106,   107,   107,   107,   108,   108,   108,
     109,   109,   109,   109,   109,   110,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   120,   121,   122,   122,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   143,   143,   143,   144,   144,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   156,   156,   156,   157,   157,   157,   157,
     157,   158,   158,   158,   158,   158,   159,   159,   160,   160,
     161,   162,   162,   163,   163
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     3,     3,     2,     2,
       6,     7,     1,     0,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     4,     1,     4,     1,     9,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     2,     2,     2,
       2,     0,     1,     1,     3,     0,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     5,     4,     4,
       3,     6,     5,     5,     4,     5,     4,     4,     2,     3,
       1,     2,     0,     1,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     4,     2,     0,
       1,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     5,     1,     3,     0,     1,     1,
       1,     2,     1,     7,    10,     5,     9,     9,    13,    13,
      15,     3,     2,     2,     3,     2,     1,     2,     1,     1,
       5,     1,     2,     0,     1
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
  case 2: /* M: %empty  */
#line 100 "TinyC3_22CS10075_22CS30025.y"
{
	// M is used for backpatching in conditional
	// and control constructs, it stores the address of the
	// next quad which will then be backpatched to the constructs
	(yyval.intval) = nextinstr();
}
#line 1678 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 3: /* N: %empty  */
#line 109 "TinyC3_22CS10075_22CS30025.y"
{
	// N is used as a fallthrough guard
	// It inserts a goto statement and stores the index
	// of the next goto
	(yyval.statement_entry) = new Next();
	(yyval.statement_entry)->nextlist = makelist(nextinstr());
	emit("goto", "");
}
#line 1691 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 4: /* X: %empty  */
#line 119 "TinyC3_22CS10075_22CS30025.y"
{
		// Change the current symbol pointer
		// Used in statements involving nested blocks
	string name = ST->name+".$"+to_string(table_count); // give name for nested table
	table_count++; // increment the table count
	Symbol* s = ST->lookup(name); // lookup the table for new entry
	s->nested_table = new Symboltable(name);
		STS.add(s->nested_table);
	s->nested_table->parent = ST;
	s->name = name;
	s->type = new SymbolType("block");
		s->size = 0;
	curr_symbol = s;
}
#line 1710 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 5: /* blocktable: %empty  */
#line 136 "TinyC3_22CS10075_22CS30025.y"
                {
				if(curr_symbol->nested_table==nullptr) 
				{
					Symboltable *_new = new Symboltable("");
					_new->parent = ST;
					STS.add(_new);
					updateSymbolTable(_new); // Function symbol table doesn't already exist
				}
				else 
				{
					updateSymbolTable(curr_symbol->nested_table); // Function symbol table already exists	
					emit("label", ST->name);
				}   
		}
#line 1729 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 6: /* changetable: %empty  */
#line 152 "TinyC3_22CS10075_22CS30025.y"
                {
				if(curr_symbol->nested_table==nullptr) 
				{
					Symboltable *_new = new Symboltable("");
					_new->parent = ST;
					STS.add(_new);
					updateSymbolTable(_new); // Function symbol table doesn't already exist
				}
				else 
				{
					updateSymbolTable(curr_symbol->nested_table); // Function symbol table already exists	
					emit("func", ST->name);
				}
		}
#line 1748 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 7: /* primary_expression: IDENTIFIER  */
#line 168 "TinyC3_22CS10075_22CS30025.y"
                                {     
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->loc = (yyvsp[0].st_entry);
					(yyval.exp_entry)->type = "int";
				}
#line 1758 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 8: /* primary_expression: CONSTANT_INT  */
#line 175 "TinyC3_22CS10075_22CS30025.y"
                                { 
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
					(yyval.exp_entry)->loc->initial_value = conv_int2string((yyvsp[0].intval));
					emit("=",(yyval.exp_entry)->loc->name, (yyval.exp_entry)->loc->initial_value);
				}
#line 1769 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 9: /* primary_expression: CONSTANT_FLOAT  */
#line 182 "TinyC3_22CS10075_22CS30025.y"
                                {
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("float"));
					(yyval.exp_entry)->loc->initial_value = string((yyvsp[0].string_type));
					emit("=", (yyval.exp_entry)->loc->name, (yyval.exp_entry)->loc->initial_value);
				}
#line 1780 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 10: /* primary_expression: CONSTANT_CHAR  */
#line 189 "TinyC3_22CS10075_22CS30025.y"
                                {
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("char"));
					(yyval.exp_entry)->loc->initial_value = string((yyvsp[0].string_type));
					emit("=", (yyval.exp_entry)->loc->name, (yyval.exp_entry)->loc->initial_value);
				}
#line 1791 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 11: /* primary_expression: LITERAL  */
#line 196 "TinyC3_22CS10075_22CS30025.y"
                                { 
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("ptr"));
					(yyval.exp_entry)->loc->type->next = new SymbolType("char");
					(yyval.exp_entry)->loc->initial_value = (yyvsp[0].string_type);
					emit("=", (yyval.exp_entry)->loc->name, (yyval.exp_entry)->loc->initial_value);
				}
#line 1803 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 12: /* primary_expression: LP expression RP  */
#line 205 "TinyC3_22CS10075_22CS30025.y"
                                { 
					(yyval.exp_entry) = (yyvsp[-1].exp_entry);
				}
#line 1811 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 13: /* postfix_expression: primary_expression  */
#line 211 "TinyC3_22CS10075_22CS30025.y"
                                { 
					(yyval.ar_entry) = new Array();
					(yyval.ar_entry)->array = (yyvsp[0].exp_entry)->loc;
					(yyval.ar_entry)->loc = (yyvsp[0].exp_entry)->loc;
					(yyval.ar_entry)->type = (yyvsp[0].exp_entry)->loc->type;                        
				}
#line 1822 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression SQ_BRACKET_L expression SQ_BRACKET_R  */
#line 219 "TinyC3_22CS10075_22CS30025.y"
                                {
					(yyval.ar_entry) = new Array();
					(yyval.ar_entry)->type = (yyvsp[-3].ar_entry)->type->next;    // 
					(yyval.ar_entry)->array = (yyvsp[-3].ar_entry)->array;        // 
					(yyval.ar_entry)->loc = ST->gentemp(new SymbolType("int"));
					// Check if we have nested array
					(yyval.ar_entry)->variety = "arr";
					if ((yyvsp[-3].ar_entry)->variety == "arr") {
							Symbol * t = ST->gentemp(new SymbolType("int"));
							// Multiply by the size
							int t_size = (yyval.ar_entry)->type->getSize();
							emit("*", t->name, (yyvsp[-1].exp_entry)->loc->name, conv_int2string(t_size));
							// Add to the previous size
							emit("+", (yyval.ar_entry)->loc->name, (yyvsp[-3].ar_entry)->loc->name, t->name);
					}
					// No nested array, directly compute size
					else {
							Symbol * t = ST->gentemp(new SymbolType("int"));
							int t_size = (yyval.ar_entry)->type->getSize();
							emit("*", (yyval.ar_entry)->loc->name, (yyvsp[-1].exp_entry)->loc->name, conv_int2string(t_size));
					}

				}
#line 1850 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression LP argument_expression_list_opt RP  */
#line 244 "TinyC3_22CS10075_22CS30025.y"
                                {
					// Function call
					(yyval.ar_entry) = new Array();
					(yyval.ar_entry)->array = ST->gentemp((yyvsp[-3].ar_entry)->type);
					// call function_name and send in the number of parameters ($3)
					emit("call", (yyval.ar_entry)->array->name, (yyvsp[-3].ar_entry)->array->name, conv_int2string((yyvsp[-1].intval)));
				}
#line 1862 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 16: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 252 "TinyC3_22CS10075_22CS30025.y"
                                                                       { }
#line 1868 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 17: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 254 "TinyC3_22CS10075_22CS30025.y"
                                                                      { }
#line 1874 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 18: /* postfix_expression: postfix_expression INCREMENT  */
#line 257 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// First store the value in a temporary and then increment by 1
					(yyval.ar_entry) = new Array();
					(yyval.ar_entry)->array = ST->gentemp((yyvsp[-1].ar_entry)->array->type);
					emit("=", (yyval.ar_entry)->array->name, (yyvsp[-1].ar_entry)->array->name);
					emit("+", (yyvsp[-1].ar_entry)->array->name, (yyvsp[-1].ar_entry)->array->name, "1");
				}
#line 1886 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 19: /* postfix_expression: postfix_expression DECREMENT  */
#line 266 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// First store the value in a temporary and then decrement by 1
					(yyval.ar_entry) = new Array();
					(yyval.ar_entry)->array = ST->gentemp((yyvsp[-1].ar_entry)->array->type);
					emit("=", (yyval.ar_entry)->array->name, (yyvsp[-1].ar_entry)->array->name);
					emit("-", (yyvsp[-1].ar_entry)->array->name, (yyvsp[-1].ar_entry)->array->name, "1");
				}
#line 1898 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 20: /* postfix_expression: LP type_name RP CURLY_BRACKET_L initializer_list CURLY_BRACKET_R  */
#line 274 "TinyC3_22CS10075_22CS30025.y"
                                                                                                   { }
#line 1904 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 21: /* postfix_expression: LP type_name RP CURLY_BRACKET_L initializer_list COMMA CURLY_BRACKET_R  */
#line 276 "TinyC3_22CS10075_22CS30025.y"
                                                                                                         { }
#line 1910 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 22: /* argument_expression_list_opt: argument_expression_list  */
#line 282 "TinyC3_22CS10075_22CS30025.y"
                                                {
								(yyval.intval) = (yyvsp[0].intval);     // Equal to number of params in list
						}
#line 1918 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 23: /* argument_expression_list_opt: %empty  */
#line 286 "TinyC3_22CS10075_22CS30025.y"
                                                {
								(yyval.intval) = 0;      // No parameters
						}
#line 1926 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 24: /* argument_expression_list: assignment_expression  */
#line 292 "TinyC3_22CS10075_22CS30025.y"
                                        { 
							(yyval.intval) = 1;          // One argument param parameter_name
							emit("param", (yyvsp[0].exp_entry)->loc->name);
					}
#line 1935 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 25: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 298 "TinyC3_22CS10075_22CS30025.y"
                                        { 
							// Many emissions of params
							(yyval.intval) = (yyvsp[-2].intval) + 1;
							emit("param", (yyvsp[0].exp_entry)->loc->name); // Emit the name of the assignment_expression    
					}
#line 1945 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 26: /* unary_expression: postfix_expression  */
#line 306 "TinyC3_22CS10075_22CS30025.y"
                        { 
					(yyval.ar_entry) = (yyvsp[0].ar_entry);      // Equate both the expressions
			}
#line 1953 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 27: /* unary_expression: INCREMENT unary_expression  */
#line 311 "TinyC3_22CS10075_22CS30025.y"
                        { // Add 1 to the expression and then make them equal
					emit("+", (yyvsp[0].ar_entry)->loc->name, (yyvsp[0].ar_entry)->loc->name, "1");
					(yyval.ar_entry) = (yyvsp[0].ar_entry);
			}
#line 1962 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 28: /* unary_expression: DECREMENT unary_expression  */
#line 317 "TinyC3_22CS10075_22CS30025.y"
                        {
					// Subtract 1 and then make them equal
					emit("-", (yyvsp[0].ar_entry)->loc->name, (yyvsp[0].ar_entry)->loc->name, "1");
					(yyval.ar_entry) = (yyvsp[0].ar_entry);
			}
#line 1972 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 29: /* unary_expression: unary_operator cast_expression  */
#line 324 "TinyC3_22CS10075_22CS30025.y"
                        {
					// Checking all the unary operators one by 1
					(yyval.ar_entry) = new Array();
					// Check first character
					switch ((yyvsp[-1].u_op)[0]) {
					case '&':   // Generation of pointer
								// The new temp has type ptr(type of $2)
								(yyval.ar_entry)->array = ST->gentemp(new SymbolType("ptr"));
								(yyval.ar_entry)->array->type->next = (yyvsp[0].ar_entry)->array->type;
								emit("=&", (yyval.ar_entry)->array->name, (yyvsp[0].ar_entry)->array->name);
								break;
					case '*':   // Pointer array
								(yyval.ar_entry)->loc = ST->gentemp((yyvsp[0].ar_entry)->array->type->next);
								(yyval.ar_entry)->array = (yyvsp[0].ar_entry)->array;
								emit("=*", (yyval.ar_entry)->loc->name, (yyvsp[0].ar_entry)->array->name);
								(yyval.ar_entry)->variety = "ptr";
								break;
					case '+':   // Unary +, expression copy
								(yyval.ar_entry) = (yyvsp[0].ar_entry);
								break;
					case '-':   // Unary -, create a temporary of same type
								(yyval.ar_entry)->array = ST->gentemp(new SymbolType((yyvsp[0].ar_entry)->array->type->name));
								emit("uminus", (yyval.ar_entry)->array->name, (yyvsp[0].ar_entry)->array->name);
								break;
					case '~':   // Bitwise NOT, handled in a similar manner
								(yyval.ar_entry)->array = ST->gentemp(new SymbolType((yyvsp[0].ar_entry)->array->type->name));
								emit("~", (yyval.ar_entry)->array->name, (yyvsp[0].ar_entry)->array->name);
								break;
					case '!':   // Logical NOT, generate new temporary of same type
								(yyval.ar_entry)->array = ST->gentemp(new SymbolType((yyvsp[0].ar_entry)->array->type->name));
								emit("!", (yyval.ar_entry)->array->name, (yyvsp[0].ar_entry)->array->name);
								break;
					}             
			}
#line 2011 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 30: /* unary_expression: SIZEOF unary_expression  */
#line 359 "TinyC3_22CS10075_22CS30025.y"
                                                  { }
#line 2017 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 31: /* unary_expression: SIZEOF LP type_name RP  */
#line 361 "TinyC3_22CS10075_22CS30025.y"
                                                 { }
#line 2023 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 32: /* unary_operator: AMPERSAND  */
#line 365 "TinyC3_22CS10075_22CS30025.y"
                        { (yyval.u_op) = (char *)("&"); }
#line 2029 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 33: /* unary_operator: ASTERISK  */
#line 368 "TinyC3_22CS10075_22CS30025.y"
                        { (yyval.u_op) = (char *)("*"); }
#line 2035 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 34: /* unary_operator: PLUS  */
#line 371 "TinyC3_22CS10075_22CS30025.y"
                        { (yyval.u_op) = (char *)("+"); }
#line 2041 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 35: /* unary_operator: MINUS  */
#line 374 "TinyC3_22CS10075_22CS30025.y"
                        { (yyval.u_op) = (char *)("-"); }
#line 2047 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 36: /* unary_operator: TILDE  */
#line 377 "TinyC3_22CS10075_22CS30025.y"
                        { (yyval.u_op) = (char *)("~"); }
#line 2053 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 37: /* unary_operator: EXCLAMATION  */
#line 380 "TinyC3_22CS10075_22CS30025.y"
                        { (yyval.u_op) = (char *)("!"); }
#line 2059 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 38: /* cast_expression: unary_expression  */
#line 384 "TinyC3_22CS10075_22CS30025.y"
                        { 
				
				(yyval.ar_entry) = (yyvsp[0].ar_entry); // Simply equate in the case of unary expression
			}
#line 2068 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 39: /* cast_expression: LP type_name RP cast_expression  */
#line 391 "TinyC3_22CS10075_22CS30025.y"
                        { 
					// If Cast type is given, generate a symbol of 
					// new type
					(yyval.ar_entry) = new Array();
					// use pair<Symbol *, bool> convert(Symbol *s, std::string type) this function
					pair<Symbol *, bool> c = convert((yyvsp[0].ar_entry)->array, variable_type);
					if (c.second) {
						(yyval.ar_entry)->array = c.first;
					}
					else {
						yyerror("AssignmentError: Conversion between incompatible types");
					}
			}
#line 2086 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 40: /* multiplicative_expression: cast_expression  */
#line 407 "TinyC3_22CS10075_22CS30025.y"
                                                { 
							(yyval.exp_entry) = new Expression();
							if ((yyvsp[0].ar_entry)->variety == "arr") {
								(yyval.exp_entry)->loc = ST->gentemp((yyvsp[0].ar_entry)->loc->type);
								emit("=[]", (yyval.exp_entry)->loc->name, (yyvsp[0].ar_entry)->array->name, (yyvsp[0].ar_entry)->loc->name);
							}
							else if ((yyvsp[0].ar_entry)->variety == "ptr") {
								(yyval.exp_entry)->loc = (yyvsp[0].ar_entry)->loc;
							}     
							else {
								(yyval.exp_entry)->loc = (yyvsp[0].ar_entry)->array;
							}
						}
#line 2104 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 41: /* multiplicative_expression: multiplicative_expression ASTERISK cast_expression  */
#line 422 "TinyC3_22CS10075_22CS30025.y"
                                                { 
							if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].ar_entry)->array)) {
								cout << "TypeError: Multiplication between inconvertible types\n";
							}
							else {
								// Types have already been changed
								// New temporary for the product
								(yyval.exp_entry) = new Expression();
								(yyval.exp_entry)->loc = ST->gentemp((yyvsp[-2].exp_entry)->loc->type);
								emit("*", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].ar_entry)->array->name);
							}
						}
#line 2121 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 42: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 436 "TinyC3_22CS10075_22CS30025.y"
                                                { 
							if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].ar_entry)->array)) {
								cout << "TypeError: Division between inconvertible types\n";
							}
							else {
								// Types have already been changed
								// New temporary for the quotient
								(yyval.exp_entry) = new Expression();
								(yyval.exp_entry)->loc = ST->gentemp((yyvsp[-2].exp_entry)->loc->type);
								emit("/", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].ar_entry)->array->name);
							}
						}
#line 2138 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 43: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 450 "TinyC3_22CS10075_22CS30025.y"
                                                { 
							if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].ar_entry)->array)) {
								cout << "TypeError: Division between inconvertible types\n";
							}
							else {
								// Types have already been changed
								// New temporary for the remainder
								(yyval.exp_entry) = new Expression();
								(yyval.exp_entry)->loc = ST->gentemp((yyvsp[-2].exp_entry)->loc->type);
								emit("%", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].ar_entry)->array->name);
							}      
						}
#line 2155 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 44: /* additive_expression: multiplicative_expression  */
#line 466 "TinyC3_22CS10075_22CS30025.y"
                                { 
					(yyval.exp_entry) = (yyvsp[0].exp_entry); // Simply equate expressions 
				}
#line 2163 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 45: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 471 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// Type checking and conversion first
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							cout << "TypeError: Addition between inconvertible types\n";
					}
					else {
							// Types have already been changed
							// New temporary for the sum
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp((yyvsp[-2].exp_entry)->loc->type);
							emit("+", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);
					}
				}
#line 2181 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 46: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 486 "TinyC3_22CS10075_22CS30025.y"
                                { 
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							cout << "TypeError: Subtraction between inconvertible types\n";
					}
					else {
							// Types have already been changed
							// New temporary for the sum
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp((yyvsp[-2].exp_entry)->loc->type);
							emit("-", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);
					}
				}
#line 2198 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 47: /* shift_expression: additive_expression  */
#line 502 "TinyC3_22CS10075_22CS30025.y"
                        { 
					(yyval.exp_entry) = (yyvsp[0].exp_entry); // Equate the expressions
			}
#line 2206 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 48: /* shift_expression: shift_expression LEFT_SHIFT additive_expression  */
#line 507 "TinyC3_22CS10075_22CS30025.y"
                        { 
					// In shift (x << i),x and i must be integers
					// the $3 must be of integer type
					if (!((yyvsp[0].exp_entry)->loc->type->name == "int" && (yyvsp[-2].exp_entry)->loc->type->name == "int")) {
					cout << "TypeError: Bits to shift should be integers\n";
					}
					// Else shift and generate temporary
					else {
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
					emit("<<", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);      
					}
			}
#line 2224 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 49: /* shift_expression: shift_expression RIGHT_SHIFT additive_expression  */
#line 522 "TinyC3_22CS10075_22CS30025.y"
                        { // Similar to left shift 
					if (!((yyvsp[0].exp_entry)->loc->type->name == "int" && (yyvsp[-2].exp_entry)->loc->type->name == "int")) {
					cout << "TypeError: Bits to shift should be integers\n";
					}
					else {
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
					emit("<<", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);      
					}
			}
#line 2239 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 50: /* relational_expression: shift_expression  */
#line 535 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					(yyval.exp_entry) = (yyvsp[0].exp_entry); // Equate 
					}
#line 2247 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 51: /* relational_expression: relational_expression LESS_THAN shift_expression  */
#line 540 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					// Again compare symbol types
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							yyerror(string("TypeError: Comparison between incompatible types"));
					}
					else {
							
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
							(yyval.exp_entry)->type = "bool";     // New expression of type bool
							(yyval.exp_entry)->truelist = makelist(nextinstr()); // the instr numbers of true path
							(yyval.exp_entry)->falselist = makelist(nextinstr() + 1); // the instr numbers of false path 
							emit("<", "", (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name); // If a < b, goto ... (backpatched later)
							emit("goto", ""); // goto ... (backpatched later)
					}
					}
#line 2268 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 52: /* relational_expression: relational_expression GREATER_THAN shift_expression  */
#line 558 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					// Compare Symbol Types
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							yyerror(string("TypeError: Comparison between incompatible types"));
					}
					else {
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
							(yyval.exp_entry)->type = "bool";     // New expression of type bool
							(yyval.exp_entry)->truelist = makelist(nextinstr()); // the instr numbers of true path
							(yyval.exp_entry)->falselist = makelist(nextinstr() + 1); // the instr numbers of false path 
							emit(">", "", (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name); // If a > b, goto ... (backpatched later)
							emit("goto", ""); // goto ... (backpatched later)
					}
					}
#line 2288 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 53: /* relational_expression: relational_expression LESS_THAN_EQUAL shift_expression  */
#line 575 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					// Compare Symbol Types
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							yyerror(string("TypeError: Comparison between incompatible types"));
					}
					else {
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
							(yyval.exp_entry)->type = "bool";     // New expression of type bool
							(yyval.exp_entry)->truelist = makelist(nextinstr()); // the instr numbers of true path
							(yyval.exp_entry)->falselist = makelist(nextinstr() + 1); // the instr numbers of false path 
							emit("<=", "", (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name); // If a <= b, goto ... (backpatched later)
							emit("goto", ""); // goto ... (backpatched later)
					}
					}
#line 2308 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 54: /* relational_expression: relational_expression GREATER_THAN_EQUAL shift_expression  */
#line 592 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					// Compare Symbol Types
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							yyerror(string("TypeError: Comparison between incompatible types"));
					}
					else {
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
							(yyval.exp_entry)->type = "bool";     // New expression of type bool
							(yyval.exp_entry)->truelist = makelist(nextinstr()); // the instr numbers of true path
							(yyval.exp_entry)->falselist = makelist(nextinstr() + 1); // the instr numbers of false path 
							emit(">=", "", (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name); // If a > b, goto ... (backpatched later)
							emit("goto", ""); // goto ... (backpatched later)
					}
					}
#line 2328 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 55: /* equality_expression: relational_expression  */
#line 611 "TinyC3_22CS10075_22CS30025.y"
                                {    
					(yyval.exp_entry) = (yyvsp[0].exp_entry); 
				}
#line 2336 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 56: /* equality_expression: equality_expression EQUAL relational_expression  */
#line 616 "TinyC3_22CS10075_22CS30025.y"
                                { 
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							yyerror(string("TypeError: Comparison between incompatible types"));
					}
					else {
							// Implicit conversion between bool and int types
							conv_bool2int(*(yyvsp[-2].exp_entry));
							conv_bool2int(*(yyvsp[0].exp_entry));
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
							(yyval.exp_entry)->type = "bool";     // New expression of type bool
							(yyval.exp_entry)->truelist = makelist(nextinstr()); // the instr numbers of true path
							(yyval.exp_entry)->falselist = makelist(nextinstr() + 1); // the instr numbers of false path 
							emit("==", "", (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name); // If a > b, goto ... (backpatched later)
							emit("goto", ""); // goto ... (backpatched later)
					}
				}
#line 2358 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 57: /* equality_expression: equality_expression NOT_EQUAL relational_expression  */
#line 635 "TinyC3_22CS10075_22CS30025.y"
                                { 
					if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
							yyerror(string("TypeError: Comparison between incompatible types"));
					}
					else {
							// Implicit conversion between bool and int types
							conv_bool2int(*(yyvsp[-2].exp_entry));
							conv_bool2int(*(yyvsp[0].exp_entry));
							(yyval.exp_entry) = new Expression();
							(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
							(yyval.exp_entry)->type = "bool";     // New expression of type bool
							(yyval.exp_entry)->truelist = makelist(nextinstr()); // the instr numbers of true path
							(yyval.exp_entry)->falselist = makelist(nextinstr() + 1); // the instr numbers of false path 
							emit("!=", "", (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name); // If a > b, goto ... (backpatched later)
							emit("goto", ""); // goto ... (backpatched later)
					}
				}
#line 2380 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 58: /* and_expression: equality_expression  */
#line 656 "TinyC3_22CS10075_22CS30025.y"
                        { 
				(yyval.exp_entry) = (yyvsp[0].exp_entry); 
			}
#line 2388 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 59: /* and_expression: and_expression AMPERSAND equality_expression  */
#line 661 "TinyC3_22CS10075_22CS30025.y"
                        { 
				// compatibility
				if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
					yyerror(string("TypeError: Bitwise AND between incompatible types"));
				}
				else {
					// Implicit conversion between bool and int types after checking
					conv_bool2int(*(yyvsp[-2].exp_entry));
					conv_bool2int(*(yyvsp[0].exp_entry));
					(yyval.exp_entry) = new Expression();
					(yyval.exp_entry)->type = "int";      // AND will give int type expression
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
					emit("&", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);
				}                  
			}
#line 2408 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 60: /* exclusive_or_expression: and_expression  */
#line 679 "TinyC3_22CS10075_22CS30025.y"
                                        {     
							(yyval.exp_entry) = (yyvsp[0].exp_entry); 
					}
#line 2416 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 61: /* exclusive_or_expression: exclusive_or_expression CARET and_expression  */
#line 684 "TinyC3_22CS10075_22CS30025.y"
                                        { 
						// compatibility
							if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
								yyerror("TypeError: Bitwise XOR between incompatible types");
							}
							else {
								// Implicit conversion between bool and int types after checking
								conv_bool2int(*(yyvsp[-2].exp_entry));
								conv_bool2int(*(yyvsp[0].exp_entry));
								(yyval.exp_entry) = new Expression();
								(yyval.exp_entry)->type = "int"; // XOR will give int type expression
								(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
								emit("^", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);
							}   
					}
#line 2436 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 62: /* inclusive_or_expression: exclusive_or_expression  */
#line 702 "TinyC3_22CS10075_22CS30025.y"
                                        { (yyval.exp_entry) = (yyvsp[0].exp_entry); }
#line 2442 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 63: /* inclusive_or_expression: inclusive_or_expression PIPE exclusive_or_expression  */
#line 705 "TinyC3_22CS10075_22CS30025.y"
                                        { 
							if (!compare((yyvsp[-2].exp_entry)->loc, (yyvsp[0].exp_entry)->loc)) {
								yyerror("TypeError: Bitwise XOR between incompatible types");
							}
							else {
								// Implicit conversion between bool and int types after checking
								conv_bool2int(*(yyvsp[-2].exp_entry));
								conv_bool2int(*(yyvsp[0].exp_entry));
								(yyval.exp_entry) = new Expression();
								(yyval.exp_entry)->type = "int";      // OR will give int type expression
								(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
								emit("|", (yyval.exp_entry)->loc->name, (yyvsp[-2].exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);
							}
					}
#line 2461 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 64: /* logical_and_expression: inclusive_or_expression  */
#line 722 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					(yyval.exp_entry) = (yyvsp[0].exp_entry);
					}
#line 2469 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 65: /* logical_and_expression: logical_and_expression LOGICAL_AND M inclusive_or_expression  */
#line 727 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					conv_int2bool(*(yyvsp[-3].exp_entry));                                  //convert logical_and_expression to bool
					conv_int2bool(*(yyvsp[0].exp_entry));                                  //convert inclusive_or_expression int to bool	
					(yyval.exp_entry) = new Expression();                         
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
					(yyval.exp_entry)->type = "bool";                                     // Expression type is bool
					backpatch((yyvsp[-3].exp_entry)->truelist, (yyvsp[-1].intval));                           //if $1 is true, we move to the next instruction and add a backpatch
					(yyval.exp_entry)->truelist = (yyvsp[0].exp_entry)->truelist;                           //The expression AND is true if the next expression is also true
					(yyval.exp_entry)->falselist = merge((yyvsp[-3].exp_entry)->falselist, (yyvsp[0].exp_entry)->falselist);   //If either $1 or $t4 are false, then AND is false => merge the falselists
					}
#line 2484 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 66: /* logical_or_expression: logical_and_expression  */
#line 741 "TinyC3_22CS10075_22CS30025.y"
                                        { (yyval.exp_entry) = (yyvsp[0].exp_entry); 

					}
#line 2492 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 67: /* logical_or_expression: logical_or_expression LOGICAL_OR M logical_and_expression  */
#line 746 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					conv_int2bool(*(yyvsp[-3].exp_entry));                                  // convert logical_and_expression to bool
					conv_int2bool(*(yyvsp[0].exp_entry));                                  // convert inclusive_or_expression int to bool	
					(yyval.exp_entry) = new Expression();               
					(yyval.exp_entry)->loc = ST->gentemp(new SymbolType("int"));
					(yyval.exp_entry)->type = "bool";                                     // Expression type is bool
					backpatch((yyvsp[-3].exp_entry)->falselist, (yyvsp[-1].intval));                          //if $1 is false, we move to the next instruction and add a backpatch
					(yyval.exp_entry)->falselist = (yyvsp[0].exp_entry)->falselist;                         //The expression OR is false if the next expression is also false
					(yyval.exp_entry)->truelist = merge((yyvsp[-3].exp_entry)->truelist, (yyvsp[0].exp_entry)->truelist);   //If either $1 or $t4 are false, then AND is false => merge the falselists  
					}
#line 2507 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 68: /* conditional_expression: logical_or_expression  */
#line 759 "TinyC3_22CS10075_22CS30025.y"
                                        { 
						(yyval.exp_entry) = (yyvsp[0].exp_entry); 
					}
#line 2515 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 69: /* conditional_expression: logical_or_expression N QUESTION M expression N COLON M conditional_expression  */
#line 764 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					// E1 N1 ? M1 E2 N2 : M2 E3
					(yyval.exp_entry) = new Expression();                        
					(yyval.exp_entry)->loc = ST->gentemp((yyvsp[-4].exp_entry)->loc->type);     // Type same as E2
					emit("=", (yyval.exp_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);  // Equal to second expression
					vector <int> l = makelist(nextinstr());
					emit("goto", "");                         // prevent fallthrough
					backpatch((yyvsp[-3].statement_entry)->nextlist, nextinstr());     // After N2, go out
					emit("=", (yyval.exp_entry)->loc->name, (yyvsp[-4].exp_entry)->loc->name);  // Equal to first expression
					vector <int> m = makelist(nextinstr());
					l = merge(l, m);
					emit("goto", "");                         // prevent fallthrough
					backpatch((yyvsp[-7].statement_entry)->nextlist, nextinstr());     // Goto the end from 2
					conv_int2bool(*(yyvsp[-8].exp_entry));                  // Conversion of $1 to bool to test
					backpatch((yyvsp[-8].exp_entry)->truelist, (yyvsp[-5].intval));        // If $1 is true, goto expression
					backpatch((yyvsp[-8].exp_entry)->falselist, (yyvsp[-1].intval));       // If $1 is false, goto conditional_expression
					backpatch(l, nextinstr());                        
					}
#line 2538 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 70: /* assignment_expression: conditional_expression  */
#line 785 "TinyC3_22CS10075_22CS30025.y"
                                        {
					(yyval.exp_entry) = (yyvsp[0].exp_entry);
					}
#line 2546 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 71: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 790 "TinyC3_22CS10075_22CS30025.y"
                                        { 
					if ((yyvsp[-2].ar_entry)->variety == "arr") {
							// Check for conversion and then emit
							pair<Symbol *, bool> c = convert((yyvsp[0].exp_entry)->loc, (yyvsp[-2].ar_entry)->type->name);
							if (c.second) {
								(yyvsp[0].exp_entry)->loc = c.first;
								emit("[]=", (yyvsp[-2].ar_entry)->array->name, (yyvsp[-2].ar_entry)->loc->name, (yyvsp[0].exp_entry)->loc->name);	
							}
							else {
								// Error
								yyerror("AssignmentError: Conversion between incompatible types (ARRAY)");
							}

					}
					else if ((yyvsp[-2].ar_entry)->variety == "ptr") {
							emit("*=", (yyvsp[-2].ar_entry)->array->name, (yyvsp[0].exp_entry)->loc->name); // For pointer types simply emit
					}
					else {
							// Check if conversion is possible and convert
							pair<Symbol *, bool> c = convert((yyvsp[0].exp_entry)->loc, (yyvsp[-2].ar_entry)->type->name);
							if (c.second) {
								(yyvsp[0].exp_entry)->loc = c.first;
								emit("=", (yyvsp[-2].ar_entry)->array->name, (yyvsp[0].exp_entry)->loc->name);
							}
							else {
								yyerror("AssignmentError: Conversion between incompatible types");
							}
					}

					(yyval.exp_entry) = (yyvsp[0].exp_entry);
					}
#line 2582 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 72: /* assignment_operator: ASSIGN  */
#line 824 "TinyC3_22CS10075_22CS30025.y"
                                { /* Already handled assign in the assignment_expression_section */}
#line 2588 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 73: /* assignment_operator: MUL_ASSIGN  */
#line 825 "TinyC3_22CS10075_22CS30025.y"
                                              { }
#line 2594 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 74: /* assignment_operator: DIV_ASSIGN  */
#line 826 "TinyC3_22CS10075_22CS30025.y"
                                             { }
#line 2600 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 75: /* assignment_operator: MOD_ASSIGN  */
#line 827 "TinyC3_22CS10075_22CS30025.y"
                                             { }
#line 2606 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 76: /* assignment_operator: ADD_ASSIGN  */
#line 828 "TinyC3_22CS10075_22CS30025.y"
                                             { }
#line 2612 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 77: /* assignment_operator: MINUS_ASSIGN  */
#line 829 "TinyC3_22CS10075_22CS30025.y"
                                                { }
#line 2618 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 78: /* assignment_operator: LEFT_SHIFT_ASSIGN  */
#line 830 "TinyC3_22CS10075_22CS30025.y"
                                                    { }
#line 2624 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 79: /* assignment_operator: RIGHT_SHIFT_ASSIGN  */
#line 831 "TinyC3_22CS10075_22CS30025.y"
                                                     { }
#line 2630 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 80: /* assignment_operator: AND_ASSIGN  */
#line 832 "TinyC3_22CS10075_22CS30025.y"
                                             { }
#line 2636 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 81: /* assignment_operator: XOR_ASSIGN  */
#line 833 "TinyC3_22CS10075_22CS30025.y"
                                             { }
#line 2642 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 82: /* assignment_operator: OR_ASSIGN  */
#line 834 "TinyC3_22CS10075_22CS30025.y"
                                            { }
#line 2648 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 83: /* expression: assignment_expression  */
#line 838 "TinyC3_22CS10075_22CS30025.y"
                { 
		(yyval.exp_entry) = (yyvsp[0].exp_entry); 
		}
#line 2656 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 84: /* expression: expression COMMA assignment_expression  */
#line 843 "TinyC3_22CS10075_22CS30025.y"
                {    }
#line 2662 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 85: /* constant_expression: conditional_expression  */
#line 847 "TinyC3_22CS10075_22CS30025.y"
                                { (yyval.exp_entry) = (yyvsp[0].exp_entry); }
#line 2668 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 86: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 853 "TinyC3_22CS10075_22CS30025.y"
                {    }
#line 2674 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 856 "TinyC3_22CS10075_22CS30025.y"
                                                                           { }
#line 2680 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 857 "TinyC3_22CS10075_22CS30025.y"
                                                                                    {  }
#line 2686 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 858 "TinyC3_22CS10075_22CS30025.y"
                                                                                    {  }
#line 2692 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 90: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 859 "TinyC3_22CS10075_22CS30025.y"
                                                                                        {  }
#line 2698 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: %empty  */
#line 862 "TinyC3_22CS10075_22CS30025.y"
                                   { }
#line 2704 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 92: /* declaration_specifiers_opt: declaration_specifiers  */
#line 863 "TinyC3_22CS10075_22CS30025.y"
                                                                         { }
#line 2710 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator  */
#line 867 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 2716 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 869 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 2722 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 95: /* init_declarator_list_opt: %empty  */
#line 872 "TinyC3_22CS10075_22CS30025.y"
                                 { }
#line 2728 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 96: /* init_declarator_list_opt: init_declarator_list  */
#line 873 "TinyC3_22CS10075_22CS30025.y"
                                                               { }
#line 2734 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 97: /* init_declarator: declarator  */
#line 877 "TinyC3_22CS10075_22CS30025.y"
                        { (yyval.st_entry) = (yyvsp[0].st_entry); }
#line 2740 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 98: /* init_declarator: declarator ASSIGN initializer  */
#line 879 "TinyC3_22CS10075_22CS30025.y"
                        { 
				(yyvsp[-2].st_entry)->initial_value = (yyvsp[0].st_entry)->initial_value;    // Make initial values equal
				emit("=", (yyvsp[-2].st_entry)->name, (yyvsp[0].st_entry)->name);            // Emit equivaluence
			}
#line 2749 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 99: /* storage_class_specifier: EXTERN  */
#line 885 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 2755 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 100: /* storage_class_specifier: STATIC  */
#line 886 "TinyC3_22CS10075_22CS30025.y"
                                                 { }
#line 2761 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 101: /* storage_class_specifier: AUTO  */
#line 887 "TinyC3_22CS10075_22CS30025.y"
                                               { }
#line 2767 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 102: /* storage_class_specifier: REGISTER  */
#line 888 "TinyC3_22CS10075_22CS30025.y"
                                                   { }
#line 2773 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 103: /* type_specifier: VOID  */
#line 892 "TinyC3_22CS10075_22CS30025.y"
                        { variable_type = string("void"); }
#line 2779 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 104: /* type_specifier: CHAR  */
#line 895 "TinyC3_22CS10075_22CS30025.y"
                        { variable_type = string("char"); }
#line 2785 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 105: /* type_specifier: INT  */
#line 898 "TinyC3_22CS10075_22CS30025.y"
                        { variable_type = string("int"); }
#line 2791 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 106: /* type_specifier: FLOAT  */
#line 901 "TinyC3_22CS10075_22CS30025.y"
                        { variable_type = string("float");}
#line 2797 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 107: /* type_specifier: LONG  */
#line 903 "TinyC3_22CS10075_22CS30025.y"
                               { }
#line 2803 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 108: /* type_specifier: SHORT  */
#line 904 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 2809 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 109: /* type_specifier: DOUBLE  */
#line 905 "TinyC3_22CS10075_22CS30025.y"
                                 { }
#line 2815 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 110: /* type_specifier: SIGNED  */
#line 906 "TinyC3_22CS10075_22CS30025.y"
                                 { }
#line 2821 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 111: /* type_specifier: UNSIGNED  */
#line 907 "TinyC3_22CS10075_22CS30025.y"
                                   { }
#line 2827 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 112: /* type_specifier: BOOL  */
#line 908 "TinyC3_22CS10075_22CS30025.y"
                               { }
#line 2833 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 113: /* type_specifier: COMPLEX  */
#line 909 "TinyC3_22CS10075_22CS30025.y"
                                  { }
#line 2839 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 114: /* type_specifier: IMAGINARY  */
#line 910 "TinyC3_22CS10075_22CS30025.y"
                                    { }
#line 2845 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 914 "TinyC3_22CS10075_22CS30025.y"
                                        { }
#line 2851 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 916 "TinyC3_22CS10075_22CS30025.y"
                                        { }
#line 2857 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: %empty  */
#line 919 "TinyC3_22CS10075_22CS30025.y"
                                     { }
#line 2863 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 118: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 920 "TinyC3_22CS10075_22CS30025.y"
                                                                           { }
#line 2869 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 119: /* type_qualifier: CONST  */
#line 924 "TinyC3_22CS10075_22CS30025.y"
                      { }
#line 2875 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 120: /* type_qualifier: RESTRICT  */
#line 925 "TinyC3_22CS10075_22CS30025.y"
                                   { }
#line 2881 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 121: /* type_qualifier: VOLATILE  */
#line 926 "TinyC3_22CS10075_22CS30025.y"
                                   { }
#line 2887 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 122: /* function_specifier: INLINE  */
#line 929 "TinyC3_22CS10075_22CS30025.y"
                           { }
#line 2893 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 123: /* declarator: pointer direct_declarator  */
#line 933 "TinyC3_22CS10075_22CS30025.y"
                {       
			SymbolType *t1 = (yyvsp[-1].s_type);            // Get the type of the pointer
			while (t1->next != nullptr) t1 = t1->next; // Reach the leaf
			t1->next = (yyvsp[0].st_entry)->type;            // Type of the declarator added to leaf
			(yyvsp[0].st_entry)->update(t1);            // Update the symbol with the new type
			(yyval.st_entry) = (yyvsp[0].st_entry);
		}
#line 2905 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 124: /* declarator: direct_declarator  */
#line 941 "TinyC3_22CS10075_22CS30025.y"
                {
			// Copy everything
			(yyval.st_entry) = (yyvsp[0].st_entry);
		}
#line 2914 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 125: /* direct_declarator: IDENTIFIER  */
#line 949 "TinyC3_22CS10075_22CS30025.y"
                                {     
					(yyvsp[0].st_entry)->update(new SymbolType(variable_type));
					(yyval.st_entry) = (yyvsp[0].st_entry);
					// Current Symbol Pointer?
					curr_symbol = (yyval.st_entry);
				}
#line 2925 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 126: /* direct_declarator: LP declarator RP  */
#line 957 "TinyC3_22CS10075_22CS30025.y"
                                { (yyval.st_entry) = (yyvsp[-1].st_entry); }
#line 2931 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 127: /* direct_declarator: direct_declarator SQ_BRACKET_L type_qualifier_list assignment_expression SQ_BRACKET_R  */
#line 959 "TinyC3_22CS10075_22CS30025.y"
                                                                                                                        { }
#line 2937 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 128: /* direct_declarator: direct_declarator SQ_BRACKET_L type_qualifier_list SQ_BRACKET_R  */
#line 961 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// This extra projection has been added to handle _opt in assignment_expression
				}
#line 2945 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 129: /* direct_declarator: direct_declarator SQ_BRACKET_L assignment_expression SQ_BRACKET_R  */
#line 966 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// This extra projection has been added to handle _opt in type_qualifier_list 
					SymbolType * t1 = (yyvsp[-3].st_entry)->type;
					if (t1->name == "ptr" || t1->next == nullptr) {
							// Create new array type
							SymbolType * s = new SymbolType("arr");
							s->next = t1;
							// Get the size of the array;
							int c_size = conv_string2int((yyvsp[-1].exp_entry)->loc->initial_value);
							s->size = c_size;
							// Update the type in the symbol table
							(yyvsp[-3].st_entry)->update(s);
							(yyval.st_entry) = (yyvsp[-3].st_entry);
					}
					else {
							// Type is already an array type
							SymbolType *prev = nullptr;
							while (t1->next != nullptr) {
								prev = t1;
								t1 = t1->next;
							}
							// Creation of new array type symbol
							SymbolType *p = t1;
							t1 = new SymbolType("arr");
							t1->size = conv_string2int((yyvsp[-1].exp_entry)->loc->initial_value);
							t1->next = p;
							prev->next = t1;
							(yyvsp[-3].st_entry)->update((yyvsp[-3].st_entry)->type);
							(yyval.st_entry) = (yyvsp[-3].st_entry);
					}              
				}
#line 2981 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 130: /* direct_declarator: direct_declarator SQ_BRACKET_L SQ_BRACKET_R  */
#line 998 "TinyC3_22CS10075_22CS30025.y"
                                {
					// When both type_qualifier_list_opt and assignment_expression_opt are epsilon transitions
					SymbolType * t1 = (yyvsp[-2].st_entry)->type;     
					if (t1->name == "ptr" || t1->next == nullptr)  {
							// Create new array type
							SymbolType * s = new SymbolType("arr");
							s->next = t1;
							// Put size = 0;
							s->size = 0;
							// Update the type in the symbol table
							(yyvsp[-2].st_entry)->update(s);
							(yyval.st_entry) = (yyvsp[-2].st_entry);
					}
					else {
							// Type is already an array type
							SymbolType *prev = nullptr;
							while (t1->next != nullptr) {
								prev = t1;
								t1 = t1->next;
							}
							// Creation of new array type symbol
							SymbolType *p = t1;
							t1 = new SymbolType("arr");
							t1->size = 0;
							t1->next = p;
							prev->next = t1;
							(yyvsp[-2].st_entry)->update((yyvsp[-2].st_entry)->type);
							(yyval.st_entry) = (yyvsp[-2].st_entry);
					}
				}
#line 3016 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 131: /* direct_declarator: direct_declarator SQ_BRACKET_L STATIC type_qualifier_list assignment_expression SQ_BRACKET_R  */
#line 1028 "TinyC3_22CS10075_22CS30025.y"
                                                                                                                               { }
#line 3022 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 132: /* direct_declarator: direct_declarator SQ_BRACKET_L STATIC assignment_expression SQ_BRACKET_R  */
#line 1029 "TinyC3_22CS10075_22CS30025.y"
                                                                                                   {	}
#line 3028 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 133: /* direct_declarator: direct_declarator SQ_BRACKET_L type_qualifier_list ASTERISK SQ_BRACKET_R  */
#line 1030 "TinyC3_22CS10075_22CS30025.y"
                                                                                                           { }
#line 3034 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 134: /* direct_declarator: direct_declarator SQ_BRACKET_L ASTERISK SQ_BRACKET_R  */
#line 1032 "TinyC3_22CS10075_22CS30025.y"
                                { /* This extra projection has been added to handle _opt in type_qualifier_list */}
#line 3040 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 135: /* direct_declarator: direct_declarator LP changetable parameter_type_list RP  */
#line 1035 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// Function Call and location with parameters
					ST->name = (yyvsp[-4].st_entry)->name;
				//      if ($1->type->name != "void") {
				//            Symbol *val = ST->lookup("return");
				//            val->update($1->type);
				//      }
					(yyvsp[-4].st_entry)->nested_table = ST;
					ST->parent = STS.global();
					ST = STS.global();
					curr_symbol = (yyval.st_entry);

				}
#line 3058 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator LP changetable RP  */
#line 1049 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// Function Call and location with no parameters
					ST->name = (yyvsp[-3].st_entry)->name;
				//      if ($1->type->name != "void") {
				//            Symbol *val = ST->lookup("return");
				//            val->update($1->type);
				//      }
					(yyvsp[-3].st_entry)->nested_table = ST;
					ST->parent = STS.global();
					ST = STS.global();
					curr_symbol = (yyval.st_entry);
				}
#line 3075 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator LP identifier_list RP  */
#line 1063 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 3081 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 138: /* pointer: ASTERISK type_qualifier_list_opt  */
#line 1067 "TinyC3_22CS10075_22CS30025.y"
        {    // Create new pointer
		(yyval.s_type) = new SymbolType("ptr"); 
	}
#line 3089 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 139: /* pointer: ASTERISK type_qualifier_list_opt pointer  */
#line 1072 "TinyC3_22CS10075_22CS30025.y"
        { 
		// Pointer of pointer
		(yyval.s_type) = new SymbolType("ptr");
		(yyval.s_type)->next = (yyvsp[0].s_type);
	}
#line 3099 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 140: /* type_qualifier_list: type_qualifier  */
#line 1079 "TinyC3_22CS10075_22CS30025.y"
                                    { }
#line 3105 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 141: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1080 "TinyC3_22CS10075_22CS30025.y"
                                                                     { }
#line 3111 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 142: /* type_qualifier_list_opt: %empty  */
#line 1083 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 3117 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 143: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1084 "TinyC3_22CS10075_22CS30025.y"
                                                              { }
#line 3123 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 144: /* parameter_type_list: parameter_list  */
#line 1087 "TinyC3_22CS10075_22CS30025.y"
                                    { }
#line 3129 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 145: /* parameter_type_list: parameter_list COMMA ELLIPSIS  */
#line 1088 "TinyC3_22CS10075_22CS30025.y"
                                                                { }
#line 3135 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 146: /* parameter_list: parameter_declaration  */
#line 1091 "TinyC3_22CS10075_22CS30025.y"
                                      { }
#line 3141 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 147: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1092 "TinyC3_22CS10075_22CS30025.y"
                                                                     { }
#line 3147 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 148: /* parameter_declaration: declaration_specifiers declarator  */
#line 1095 "TinyC3_22CS10075_22CS30025.y"
                                                         {
					(yyvsp[0].st_entry)->scope = "parameter";
					}
#line 3155 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 149: /* parameter_declaration: declaration_specifiers  */
#line 1099 "TinyC3_22CS10075_22CS30025.y"
                                                                 { }
#line 3161 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 150: /* identifier_list: IDENTIFIER  */
#line 1102 "TinyC3_22CS10075_22CS30025.y"
                            { }
#line 3167 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 151: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1103 "TinyC3_22CS10075_22CS30025.y"
                                                           { }
#line 3173 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 152: /* type_name: specifier_qualifier_list  */
#line 1106 "TinyC3_22CS10075_22CS30025.y"
                                    { }
#line 3179 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 153: /* initializer: assignment_expression  */
#line 1110 "TinyC3_22CS10075_22CS30025.y"
                { 
				(yyval.st_entry) = (yyvsp[0].exp_entry)->loc;      // Assignment
		}
#line 3187 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 154: /* initializer: CURLY_BRACKET_L initializer_list CURLY_BRACKET_R  */
#line 1114 "TinyC3_22CS10075_22CS30025.y"
                                                                   { }
#line 3193 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 155: /* initializer: CURLY_BRACKET_L initializer_list COMMA CURLY_BRACKET_R  */
#line 1116 "TinyC3_22CS10075_22CS30025.y"
                                                                         { }
#line 3199 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 156: /* initializer_list: designation_opt initializer  */
#line 1119 "TinyC3_22CS10075_22CS30025.y"
                                              { }
#line 3205 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 157: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1120 "TinyC3_22CS10075_22CS30025.y"
                                                                             { }
#line 3211 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 158: /* designation: designator_list ASSIGN  */
#line 1123 "TinyC3_22CS10075_22CS30025.y"
                                    { }
#line 3217 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 159: /* designation_opt: %empty  */
#line 1126 "TinyC3_22CS10075_22CS30025.y"
                        { }
#line 3223 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 160: /* designation_opt: designation  */
#line 1127 "TinyC3_22CS10075_22CS30025.y"
                                      { }
#line 3229 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 161: /* designator_list: designator  */
#line 1130 "TinyC3_22CS10075_22CS30025.y"
                            { }
#line 3235 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 162: /* designator_list: designator_list designator  */
#line 1131 "TinyC3_22CS10075_22CS30025.y"
                                                     { }
#line 3241 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 163: /* designator: SQ_BRACKET_L constant_expression SQ_BRACKET_R  */
#line 1134 "TinyC3_22CS10075_22CS30025.y"
                                                          { }
#line 3247 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 164: /* designator: PERIOD IDENTIFIER  */
#line 1135 "TinyC3_22CS10075_22CS30025.y"
                                    { }
#line 3253 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 165: /* statement: labeled_statement  */
#line 1140 "TinyC3_22CS10075_22CS30025.y"
                             { (yyval.statement_entry) = (yyvsp[0].statement_entry); }
#line 3259 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 166: /* statement: compound_statement  */
#line 1141 "TinyC3_22CS10075_22CS30025.y"
                                     { 
			(yyval.statement_entry) = (yyvsp[0].statement_entry); 
		}
#line 3267 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 167: /* statement: expression_statement  */
#line 1145 "TinyC3_22CS10075_22CS30025.y"
                { 
		(yyval.statement_entry) = new Next();
		(yyval.statement_entry)->nextlist = (yyvsp[0].exp_entry)->nextlist; // New Expression with same nextlist
		}
#line 3276 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 168: /* statement: selection_statement  */
#line 1149 "TinyC3_22CS10075_22CS30025.y"
                                      { (yyval.statement_entry) = (yyvsp[0].statement_entry); }
#line 3282 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 169: /* statement: iteration_statement  */
#line 1150 "TinyC3_22CS10075_22CS30025.y"
                                      { (yyval.statement_entry) = (yyvsp[0].statement_entry); }
#line 3288 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 170: /* statement: jump_statement  */
#line 1151 "TinyC3_22CS10075_22CS30025.y"
                                 { (yyval.statement_entry) = (yyvsp[0].statement_entry); }
#line 3294 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 171: /* labeled_statement: IDENTIFIER COLON M statement  */
#line 1155 "TinyC3_22CS10075_22CS30025.y"
                                { 
					(yyval.statement_entry) = (yyvsp[0].statement_entry);
					Label *l = find_label((yyvsp[-3].st_entry)->name);
					if (l != nullptr) {
							l->addr = (yyvsp[-1].intval);
							backpatch(l->nextlist,l->addr);
					}
					else {
							l = new Label((yyvsp[-3].st_entry)->name);
							l->addr = nextinstr();
							l->nextlist = makelist((yyvsp[-1].intval));
							label_table.push_back(*l);
					}
				}
#line 3313 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 172: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1171 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 3319 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 173: /* labeled_statement: DEFAULT COLON statement  */
#line 1173 "TinyC3_22CS10075_22CS30025.y"
                                { }
#line 3325 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 174: /* compound_statement: CURLY_BRACKET_L X blocktable block_item_list_opt CURLY_BRACKET_R  */
#line 1177 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// Copy the block item list
					(yyval.statement_entry) = (yyvsp[-1].statement_entry);
					// Set symbol table back to original
					updateSymbolTable(ST->parent);
				}
#line 3336 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 175: /* block_item_list: block_item  */
#line 1187 "TinyC3_22CS10075_22CS30025.y"
                        { 
				(yyval.statement_entry) = (yyvsp[0].statement_entry);
			}
#line 3344 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 176: /* block_item_list: block_item_list M block_item  */
#line 1191 "TinyC3_22CS10075_22CS30025.y"
                        { 
				(yyval.statement_entry) = (yyvsp[0].statement_entry);
				backpatch((yyvsp[-2].statement_entry)->nextlist, (yyvsp[-1].intval));  // Move to block_item after block_item_list
			}
#line 3353 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 177: /* block_item_list_opt: %empty  */
#line 1199 "TinyC3_22CS10075_22CS30025.y"
                                        {
					(yyval.statement_entry) = new Next();
					}
#line 3361 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 178: /* block_item_list_opt: block_item_list  */
#line 1203 "TinyC3_22CS10075_22CS30025.y"
                                        {
					(yyval.statement_entry) = (yyvsp[0].statement_entry);
					}
#line 3369 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 179: /* block_item: declaration  */
#line 1209 "TinyC3_22CS10075_22CS30025.y"
                { (yyval.statement_entry) = new Next(); }
#line 3375 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 180: /* block_item: statement  */
#line 1212 "TinyC3_22CS10075_22CS30025.y"
                { (yyval.statement_entry) = (yyvsp[0].statement_entry); }
#line 3381 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 181: /* expression_statement: expression SEMICOLON  */
#line 1217 "TinyC3_22CS10075_22CS30025.y"
                                { (yyval.exp_entry) = (yyvsp[-1].exp_entry); }
#line 3387 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 182: /* expression_statement: SEMICOLON  */
#line 1219 "TinyC3_22CS10075_22CS30025.y"
                                { (yyval.exp_entry) = new Expression(); }
#line 3393 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 183: /* selection_statement: IF LP expression RP M statement N  */
#line 1223 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// If without else
					// If (B) M1 statement N2
					conv_int2bool(*(yyvsp[-4].exp_entry));       // Convert this to a boolean expression b
					(yyval.statement_entry) = new Next();        // New statement
					backpatch((yyvsp[-4].exp_entry)->truelist, (yyvsp[-2].intval));  // Backpatch this with M1, to go inside the statement
					vector <int> tx = merge((yyvsp[-4].exp_entry)->falselist, (yyvsp[-1].statement_entry)->nextlist); // merge false condition of expression, nextlist of statement and N (out of the if statement)
					(yyval.statement_entry)->nextlist = merge(tx, (yyvsp[0].statement_entry)->nextlist);
				}
#line 3407 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 184: /* selection_statement: IF LP expression RP M statement N ELSE M statement  */
#line 1234 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// If with else
					// If (B) M1 S1 N1 else M2 S2
					conv_int2bool(*(yyvsp[-7].exp_entry));      // Convert Expression to Boolean B
					(yyval.statement_entry) = new Next();  
					backpatch((yyvsp[-7].exp_entry)->truelist, (yyvsp[-5].intval));  // Go inside S1
					backpatch((yyvsp[-7].exp_entry)->falselist, (yyvsp[-1].intval)); // Go inside S2
					vector <int> temp = merge((yyvsp[-4].statement_entry)->nextlist, (yyvsp[-3].statement_entry)->nextlist); // Merge nextlists of S1 and N1 and S2
					(yyval.statement_entry)->nextlist = merge(temp, (yyvsp[0].statement_entry)->nextlist);      
				}
#line 3422 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 185: /* selection_statement: SWITCH LP expression RP statement  */
#line 1246 "TinyC3_22CS10075_22CS30025.y"
                                { /* Not supported */ }
#line 3428 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 186: /* iteration_statement: WHILE LP X blocktable M expression RP M statement  */
#line 1251 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// X creates the separate symbol table
					// blocktable changes to the nested symbol table
					// while M1 (B) M2 S1
					(yyval.statement_entry) = new Next();
					conv_int2bool(*(yyvsp[-3].exp_entry));      // Convert expression to boolean
					backpatch((yyvsp[-3].exp_entry)->truelist, (yyvsp[-1].intval));  // Enter the while loop if statment is true
					backpatch((yyvsp[0].statement_entry)->nextlist, (yyvsp[-4].intval)); // Go back to M1 after block execution
					(yyval.statement_entry)->nextlist = (yyvsp[-3].exp_entry)->falselist; // Move out when expression false
					// Emit
					emit("goto", conv_int2string((yyvsp[-4].intval)));
					// Change to the parent table
					ST = ST->parent;
				}
#line 3447 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 187: /* iteration_statement: DO M statement M WHILE LP expression RP SEMICOLON  */
#line 1267 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// do M1 while M2 (B1);
					(yyval.statement_entry) = new Next();
					conv_int2bool(*(yyvsp[-2].exp_entry));        // Make B1 from expression
					backpatch((yyvsp[-2].exp_entry)->truelist, (yyvsp[-7].intval)); // Goto M1 if B1 is true
					backpatch((yyvsp[-6].statement_entry)->nextlist, (yyvsp[-5].intval)); // Goto M2 if do executed
					(yyval.statement_entry)->nextlist = (yyvsp[-2].exp_entry)->falselist; // Exit to the falselist of expression
				}
#line 3460 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 188: /* iteration_statement: FOR LP X blocktable expression_statement M expression_statement M expression N RP M statement  */
#line 1277 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// for M1 (E1; M1 E2; M2 E3 N) M3 S 
					(yyval.statement_entry) = new Next();
					conv_int2bool(*(yyvsp[-6].exp_entry));      // Convert E2 to Boolean B (Condition Checking)
					backpatch((yyvsp[-6].exp_entry)->truelist, (yyvsp[-1].intval)); // If B is true, go to M3 (statement)
					backpatch((yyvsp[-3].statement_entry)->nextlist, (yyvsp[-7].intval)); // After N go back to M1
					backpatch((yyvsp[0].statement_entry)->nextlist, (yyvsp[-5].intval)); // After S, go back to increment step (M2)
					emit ("goto", conv_int2string((yyvsp[-5].intval)));  // goto M2 (prevent fall through)
					(yyval.statement_entry)->nextlist = (yyvsp[-6].exp_entry)->falselist; // Move out of the loop when B is false
					ST = ST->parent;
				}
#line 3476 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 189: /* iteration_statement: FOR LP X blocktable declaration M expression_statement M expression N RP M statement  */
#line 1290 "TinyC3_22CS10075_22CS30025.y"
                                { 
					// for M1 (E1; M1 E2; M2 E3 N) M3 S 
					// Repeat the same as above. 
					(yyval.statement_entry) = new Next();
					conv_int2bool(*(yyvsp[-6].exp_entry));      // Convert E2 to Boolean B (Condition Checking)
					backpatch((yyvsp[-6].exp_entry)->truelist, (yyvsp[-1].intval)); // If B is true, go to M3 (statement)
					backpatch((yyvsp[-3].statement_entry)->nextlist, (yyvsp[-7].intval)); // After N go back to M1
					backpatch((yyvsp[0].statement_entry)->nextlist, (yyvsp[-5].intval)); // After S, go back to increment step (M2)
					emit ("goto", conv_int2string((yyvsp[-5].intval)));  // goto M2 (prevent fall through)
					(yyval.statement_entry)->nextlist = (yyvsp[-6].exp_entry)->falselist; // Move out of the loop when B is false
					ST = ST->parent;
				}
#line 3493 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 190: /* iteration_statement: FOR LP X blocktable declaration M expression_statement M expression_statement M expression N RP M statement  */
#line 1304 "TinyC3_22CS10075_22CS30025.y"
                                { /* Not supported */ }
#line 3499 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 191: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1307 "TinyC3_22CS10075_22CS30025.y"
                                          { }
#line 3505 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 192: /* jump_statement: CONTINUE SEMICOLON  */
#line 1309 "TinyC3_22CS10075_22CS30025.y"
                                             { }
#line 3511 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 193: /* jump_statement: BREAK SEMICOLON  */
#line 1311 "TinyC3_22CS10075_22CS30025.y"
                                          { }
#line 3517 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 194: /* jump_statement: RETURN expression SEMICOLON  */
#line 1314 "TinyC3_22CS10075_22CS30025.y"
                        { 
				(yyval.statement_entry) = new Next();
				emit("return", (yyvsp[-1].exp_entry)->loc->name); // Emit return (from function call)
			}
#line 3526 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 195: /* jump_statement: RETURN SEMICOLON  */
#line 1319 "TinyC3_22CS10075_22CS30025.y"
                        {
				(yyval.statement_entry) = new Next();
				emit("return", "");
			}
#line 3535 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 196: /* translation_unit: external_declaration  */
#line 1328 "TinyC3_22CS10075_22CS30025.y"
                                       {  }
#line 3541 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 197: /* translation_unit: translation_unit external_declaration  */
#line 1329 "TinyC3_22CS10075_22CS30025.y"
                                                                { }
#line 3547 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 198: /* external_declaration: function_definition  */
#line 1332 "TinyC3_22CS10075_22CS30025.y"
                                          { }
#line 3553 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 199: /* external_declaration: declaration  */
#line 1333 "TinyC3_22CS10075_22CS30025.y"
                                              { }
#line 3559 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 200: /* function_definition: declaration_specifiers declarator declaration_list_opt changetable compound_statement  */
#line 1337 "TinyC3_22CS10075_22CS30025.y"
                                { 
					emit("funcend", ST->name);
					(yyvsp[-3].st_entry)->type = new SymbolType("func");
					ST->parent = STS.global();
					table_count = 0;
					updateSymbolTable(STS.global());
				}
#line 3571 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 201: /* declaration_list: declaration  */
#line 1347 "TinyC3_22CS10075_22CS30025.y"
                              { }
#line 3577 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 202: /* declaration_list: declaration_list declaration  */
#line 1348 "TinyC3_22CS10075_22CS30025.y"
                                                       { }
#line 3583 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 203: /* declaration_list_opt: %empty  */
#line 1351 "TinyC3_22CS10075_22CS30025.y"
                             { }
#line 3589 "TinyC3_22CS10075_22CS30025.tab.c"
    break;

  case 204: /* declaration_list_opt: declaration_list  */
#line 1352 "TinyC3_22CS10075_22CS30025.y"
                                                   { }
#line 3595 "TinyC3_22CS10075_22CS30025.tab.c"
    break;


#line 3599 "TinyC3_22CS10075_22CS30025.tab.c"

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

#line 1356 "TinyC3_22CS10075_22CS30025.y"


void yyerror(string s)
{
	cout << s << "\n";
	return;
}
