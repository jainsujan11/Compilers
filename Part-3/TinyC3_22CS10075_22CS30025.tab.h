/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TINYC3_22CS10075_22CS30025_TAB_H_INCLUDED
# define YY_YY_TINYC3_22CS10075_22CS30025_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    RESTRICT = 259,                /* RESTRICT  */
    UNSIGNED = 260,                /* UNSIGNED  */
    BREAK = 261,                   /* BREAK  */
    EXTERN = 262,                  /* EXTERN  */
    RETURN = 263,                  /* RETURN  */
    VOID = 264,                    /* VOID  */
    CASE = 265,                    /* CASE  */
    FLOAT = 266,                   /* FLOAT  */
    SHORT = 267,                   /* SHORT  */
    VOLATILE = 268,                /* VOLATILE  */
    CHAR = 269,                    /* CHAR  */
    FOR = 270,                     /* FOR  */
    SIGNED = 271,                  /* SIGNED  */
    WHILE = 272,                   /* WHILE  */
    CONST = 273,                   /* CONST  */
    GOTO = 274,                    /* GOTO  */
    SIZEOF = 275,                  /* SIZEOF  */
    BOOL = 276,                    /* BOOL  */
    CONTINUE = 277,                /* CONTINUE  */
    IF = 278,                      /* IF  */
    STATIC = 279,                  /* STATIC  */
    COMPLEX = 280,                 /* COMPLEX  */
    DEFAULT = 281,                 /* DEFAULT  */
    INLINE = 282,                  /* INLINE  */
    STRUCT = 283,                  /* STRUCT  */
    IMAGINARY = 284,               /* IMAGINARY  */
    DO = 285,                      /* DO  */
    INT = 286,                     /* INT  */
    SWITCH = 287,                  /* SWITCH  */
    DOUBLE = 288,                  /* DOUBLE  */
    LONG = 289,                    /* LONG  */
    TYPEDEF = 290,                 /* TYPEDEF  */
    ELSE = 291,                    /* ELSE  */
    REGISTER = 292,                /* REGISTER  */
    UNION = 293,                   /* UNION  */
    INVALID_TOKEN = 294,           /* INVALID_TOKEN  */
    LP = 295,                      /* LP  */
    RP = 296,                      /* RP  */
    SQ_BRACKET_L = 297,            /* SQ_BRACKET_L  */
    SQ_BRACKET_R = 298,            /* SQ_BRACKET_R  */
    CURLY_BRACKET_L = 299,         /* CURLY_BRACKET_L  */
    CURLY_BRACKET_R = 300,         /* CURLY_BRACKET_R  */
    PERIOD = 301,                  /* PERIOD  */
    ARROW = 302,                   /* ARROW  */
    INCREMENT = 303,               /* INCREMENT  */
    DECREMENT = 304,               /* DECREMENT  */
    AMPERSAND = 305,               /* AMPERSAND  */
    ASTERISK = 306,                /* ASTERISK  */
    PLUS = 307,                    /* PLUS  */
    MINUS = 308,                   /* MINUS  */
    TILDE = 309,                   /* TILDE  */
    EXCLAMATION = 310,             /* EXCLAMATION  */
    SLASH = 311,                   /* SLASH  */
    PERCENT = 312,                 /* PERCENT  */
    LEFT_SHIFT = 313,              /* LEFT_SHIFT  */
    RIGHT_SHIFT = 314,             /* RIGHT_SHIFT  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GREATER_THAN = 316,            /* GREATER_THAN  */
    LESS_THAN_EQUAL = 317,         /* LESS_THAN_EQUAL  */
    GREATER_THAN_EQUAL = 318,      /* GREATER_THAN_EQUAL  */
    EQUAL = 319,                   /* EQUAL  */
    NOT_EQUAL = 320,               /* NOT_EQUAL  */
    CARET = 321,                   /* CARET  */
    PIPE = 322,                    /* PIPE  */
    LOGICAL_AND = 323,             /* LOGICAL_AND  */
    LOGICAL_OR = 324,              /* LOGICAL_OR  */
    QUESTION = 325,                /* QUESTION  */
    COLON = 326,                   /* COLON  */
    SEMICOLON = 327,               /* SEMICOLON  */
    ELLIPSIS = 328,                /* ELLIPSIS  */
    ASSIGN = 329,                  /* ASSIGN  */
    MUL_ASSIGN = 330,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 331,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 332,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 333,              /* ADD_ASSIGN  */
    MINUS_ASSIGN = 334,            /* MINUS_ASSIGN  */
    LEFT_SHIFT_ASSIGN = 335,       /* LEFT_SHIFT_ASSIGN  */
    RIGHT_SHIFT_ASSIGN = 336,      /* RIGHT_SHIFT_ASSIGN  */
    AND_ASSIGN = 337,              /* AND_ASSIGN  */
    XOR_ASSIGN = 338,              /* XOR_ASSIGN  */
    OR_ASSIGN = 339,               /* OR_ASSIGN  */
    COMMA = 340,                   /* COMMA  */
    HASH = 341,                    /* HASH  */
    IDENTIFIER = 342,              /* IDENTIFIER  */
    CONSTANT_INT = 343,            /* CONSTANT_INT  */
    LITERAL = 344,                 /* LITERAL  */
    CONSTANT_FLOAT = 345,          /* CONSTANT_FLOAT  */
    CONSTANT_CHAR = 346            /* CONSTANT_CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "TinyC3_22CS10075_22CS30025.y"

	int intval;
	char * string_type;
	Symbol * st_entry;
	Array * ar_entry;
	Next * statement_entry;
	Expression * exp_entry;
	SymbolType * s_type;
	char * u_op;

#line 166 "TinyC3_22CS10075_22CS30025.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TINYC3_22CS10075_22CS30025_TAB_H_INCLUDED  */
