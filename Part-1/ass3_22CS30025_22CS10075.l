/* Declarations */
%{
    #define KEYWORD 1
    #define IDENTIFIER 2
    #define CONSTANT 3
    #define STRING_LITERAL 4
    #define PUNCTUATOR 5
    #define SINGLE_LINE_START 6
    #define SINGLE_LINE_END 7
    #define MULTI_LINE_START 8
    #define MULTI_LINE_END 9
%}

%x SINGLE_LINE_COMM
%x MULTI_LINE_COMM

/* Regular Expressions */
KEYWORD         auto|restrict|unsigned|break|extern|return|void|case|float|short|volatile|char|for|signed|while|const|goto|sizeof|_Bool|continue|if|static|_Complex|default|inline|struct|_Imaginary|do|int|switch|double|long|typedef|else|register|union

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

CONSTANT        {CONSTANT_INT}|{CONSTANT_FLOAT}|{CONSTANT_CHAR}

/*Constants finished here*/

S_CHAR          [^"\\\n]|{ESCAPE_SEQUENCE}
S_CHAR_SEQ      {S_CHAR}+
LITERAL         \"{S_CHAR_SEQ}?\"


PUNCTUATOR     "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"

/* Whitespace recognition */
WHITE_SPACE     [ \t\n]

/* Definitions */
%%
{KEYWORD}                   {return KEYWORD;}
{IDENTIFIER}                {return IDENTIFIER;}
{CONSTANT}                  {return CONSTANT;}
{PUNCTUATOR}                {return PUNCTUATOR;}
{LITERAL}                   {return STRING_LITERAL;}
{WHITE_SPACE}               {}


"//"                        {BEGIN(SINGLE_LINE_COMM); return SINGLE_LINE_START;}
<SINGLE_LINE_COMM>.         {}
<SINGLE_LINE_COMM>\n        {BEGIN(INITIAL); return SINGLE_LINE_END;}
<SINGLE_LINE_COMM><<EOF>>   {BEGIN(INITIAL); return SINGLE_LINE_END;}

"/*"                        {BEGIN(MULTI_LINE_COMM); return MULTI_LINE_START;}
<MULTI_LINE_COMM>"*/"       {BEGIN(INITIAL); return MULTI_LINE_END;}
<MULTI_LINE_COMM>.          {}
<MULTI_LINE_COMM>\n         {}

%%

int yywrap(void) {
    return 1;
}