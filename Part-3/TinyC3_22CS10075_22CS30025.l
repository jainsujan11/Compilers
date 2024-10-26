%{
    #include "TinyC3_22CS10075_22CS30025_translator.h"
    #include "TinyC3_22CS10075_22CS30025.tab.h"
    extern YYSTYPE yylval;
    int yylex();
%}


%x SINGLE_LINE_COMM
%x MULTI_LINE_COMM


IDENTIFIER_NONDIGIT     [a-zA-Z_]
DIGIT           [0-9]
IDENTIFIER      {IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*


/*Constants start here*/

CONSTANT_INT    {SIGN}?{DIGIT}+

DIG_SEQ         {DIGIT}+
CONSTANT_FRAC   {SIGN}?{DIG_SEQ}?\.{DIG_SEQ}|{DIG_SEQ}\.
SIGN            [+-]
EXPONENT        [eE]{SIGN}?{DIG_SEQ}
CONSTANT_FLOAT  {CONSTANT_FRAC}{EXPONENT}?|{DIG_SEQ}{EXPONENT}


ESCAPE_SEQUENCE      \\\\|\\['"?banftrv] 
C_CHAR          [^'\\\n]|{ESCAPE_SEQUENCE}



CONSTANT_CHAR   \'{C_CHAR}\'




/*Constants finished here*/

S_CHAR          [^"\\\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQ      {S_CHAR}+
LITERAL         \"{S_CHAR_SEQ}?\"


/* Whitespace recognition */
WHITE_SPACE     [ \t]
NEW_LINE        \n


%%
"auto"                      {return AUTO;}
"restrict"                  {return RESTRICT;}
"unsigned"                  {return UNSIGNED;}
"break"                     {return BREAK;}
"extern"                    {return EXTERN;}
"return"                    {return RETURN;}
"void"                      {return VOID;}
"case"                      {return CASE;}
"float"                     {return FLOAT;}
"short"                     {return SHORT;}
"volatile"                  {return VOLATILE;}
"char"                      {return CHAR;}
"for"                       {return FOR;}
"signed"                    {return SIGNED;}
"while"                     {return WHILE;}
"const"                     {return CONST;}
"goto"                      {return GOTO;}
"sizeof"                    {return SIZEOF;}
"_Bool"                     {return BOOL;}
"continue"                  {return CONTINUE;}
"if"                        {return IF;}
"static"                    {return STATIC;}
"_Complex"                  {return COMPLEX;}
"default"                   {return DEFAULT;}
"inline"                    {return INLINE;}
"struct"                    {return STRUCT;}
"_Imaginary"                {return IMAGINARY;}
"do"                        {return DO;}
"int"                       {return INT;}
"switch"                    {return SWITCH;}
"double"                    {return DOUBLE;}
"long"                      {return LONG;}
"typedef"                   {return TYPEDEF;}
"else"                      {return ELSE;}
"register"                  {return REGISTER;}
"union"                     {return UNION;}

{IDENTIFIER}                {yylval.st_entry = ST->lookup(yytext);return IDENTIFIER;}
{CONSTANT_INT}              {yylval.intval = atoi(yytext);return CONSTANT_INT;}
{CONSTANT_FLOAT}            {yylval.string_type = yytext;return CONSTANT_FLOAT;}
{CONSTANT_CHAR}             {yylval.string_type = yytext;return CONSTANT_CHAR;}
{LITERAL}                   {yylval.string_type = yytext;return LITERAL;}
{WHITE_SPACE}               {}
{NEW_LINE}                  {}

"//"                        {BEGIN(SINGLE_LINE_COMM);}
<SINGLE_LINE_COMM>.         {}
<SINGLE_LINE_COMM>\n        {BEGIN(INITIAL);}
<SINGLE_LINE_COMM><<EOF>>   {BEGIN(INITIAL);}

"/*"                        {BEGIN(MULTI_LINE_COMM);}
<MULTI_LINE_COMM>"*/"       {BEGIN(INITIAL);}
<MULTI_LINE_COMM>.          {}
<MULTI_LINE_COMM>\n         {}

                 
"("              { return OPEN_PARENTHESIS; }
")"              { return CLOSE_PARENTHESIS; }
"{"              { return OPEN_BRACE; }
"}"              { return CLOSE_BRACE; }
"["              { return OPEN_BRACKET; }
"]"              { return CLOSE_BRACKET; }
"+"              { return PLUS; }
"-"              { return MINUS; }
","              { return COMMA; }
"*"              { return STAR; }
"/"              { return SLASH; }
"%"              { return MOD; }
"+="             { return ADD_ASSGN; }
"-="             { return SUB_ASSGN; }
"*="             { return MUL_ASSGN; }
"/="             { return DIV_ASSGN; }
"%="             { return MOD_ASSGN; }
"=="             { return EQUAL; }
"!="             { return NOT_EQUAL; }
"<"              { return LESS; }
">"              { return GREATER; }
"<="             { return LESS_EQUAL; }
">="             { return GREATER_EQUAL; }
"++"             { return INCREMENT; }
"--"             { return DECREMENT; }
"&"              { return B_AND; }
"|"              { return B_OR; }
"&&"             { return L_AND; }
"||"             { return L_OR; }
"^"              { return B_XOR; }
"&="             { return AND_ASSGN; }
"|="             { return OR_ASSGN; }
"^="             { return XOR_ASSGN; }
"<<"             { return L_SHIFT; }
">>"             { return R_SHIFT; }
"<<="            { return L_SHIFT_ASSGN; }
">>="            { return R_SHIFT_ASSGN; }
"="              { return ASSGN; }
"~"              { return TILDE; }
"!"              { return EXCLAM; }
"."              { return DOT; }
"->"             { return POINTER_DEREF; }
":"              { return COLON; }
";"              { return SEMI_COLON; }
"?"              { return QUESTION ; }
.                { printf("ERROR [Line %d] : Invalid token %s\n", yylineno, yytext); return INVALID_TOKEN; }
%%

int yywrap(void) {
    return 1;
}