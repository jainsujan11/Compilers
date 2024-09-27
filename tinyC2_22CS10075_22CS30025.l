%{
    #include "y.tab.h"
    void yyerror(const char *s);  
    int yylex();   
%}


/* For bison to get line number */
%option yylineno


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
/*CONSTANT        {CONSTANT_INT}|{CONSTANT_FLOAT}|{CONSTANT_CHAR}*/



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

{IDENTIFIER}                {yylval.sValue = strdup(yytext); return IDENTIFIER;}
{CONSTANT_INT}              {yylval.iValue = atoi(yytext) ;return CONSTANT_INT;}
{CONSTANT_FLOAT}            {yylval.fValue = atof(yytext); return CONSTANT_FLOAT;}
{CONSTANT_CHAR}             {yylval.cValue = *strdup(yytext) ;return CONSTANT_CHAR;}
{LITERAL}                   {yylval.sValue = strdup(yytext) ;return LITERAL;}
{WHITE_SPACE}               {}
{NEW_LINE}                   {printf("\n----------- Parsing Line Number %d -----------\n", yylineno);}

"//"                        {BEGIN(SINGLE_LINE_COMM);}
<SINGLE_LINE_COMM>.         {}
<SINGLE_LINE_COMM>\n        {BEGIN(INITIAL); printf("\n----------- Parsing Line Number %d -----------\n\n\n", yylineno);}
<SINGLE_LINE_COMM><<EOF>>   {BEGIN(INITIAL);}

"/*"                        {BEGIN(MULTI_LINE_COMM);}
<MULTI_LINE_COMM>"*/"       {BEGIN(INITIAL);}
<MULTI_LINE_COMM>.          {}
<MULTI_LINE_COMM>\n         {printf("\n----------- Parsing Line Number %d -----------\n\n\n", yylineno);}

"("                         {return PARANTHESIS_OPEN;}
")"                         {return PARANTHESIS_CLOSE;}
"["                         {return SQ_BRACKET_OPEN;}
"]"                         {return SQ_BRACKET_CLOSE;}
"{"                         {return CURLY_BRACKET_OPEN;}
"}"                         {return CURLY_BRACKET_CLOSE;}
"."                         {return PERIOD;}
"->"                        {return ARROW;}
"++"                        {return INCREMENT;}
"--"                        {return DECREMENT;}
","                         {return COMMA;}
"&"                         {return AMPERSAND;}
"*"                         {return ASTERISK;}
"+"                         {return PLUS;}
"-"                         {return MINUS;}
"~"                         {return TILDE;}
"!"                         {return EXCLAMATION;}
"/"                         {return SLASH;}
"%"                         {return PERCENT;}
"<<"                        {return LEFT_SHIFT;}
">>"                        {return RIGHT_SHIFT;}
"<"                         {return LESS_THAN;}
">"                         {return GREATER_THAN;}
"<="                        {return LESS_THAN_EQUAL;}
">="                        {return GREATER_THAN_EQUAL;}
"=="                        {return EQUAL;}
"!="                        {return NOT_EQUAL;}
"^"                         {return CARET;}
"|"                         {return PIPE;}
"&&"                        {return LOGICAL_AND;}
"||"                        {return LOGICAL_OR;}
"?"                         {return QUESTION;}
":"                         {return COLON;}
";"                         {return SEMICOLON;}
"..."                       {return ELLIPSIS;}
"="                         {return ASSIGN;}
"*="                        {return MULTIPLY_ASSIGN;}
"/="                        {return DIVIDE_ASSIGN;}
"%="                        {return MOD_ASSIGN;}
"+="                        {return ADD_ASSIGN;}
"-="                        {return MINUS_ASSIGN;}
"<<="                       {return LEFT_SHIFT_ASSIGN;}
">>="                       {return RIGHT_SHIFT_ASSIGN;}
"&="                        {return AND_ASSIGN;}
"^="                        {return XOR_ASSIGN;}
"|="                        {return OR_ASSIGN;}
"#"                         {return HASH;}
.                           { printf("ERROR [Line %d] : Invalid token %s\n", yylineno, yytext); return INVALID_TOKEN; }

%%


int yywrap(void) {
    return 1;
}