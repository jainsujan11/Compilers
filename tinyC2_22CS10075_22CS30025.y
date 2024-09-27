%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "header.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    extern TreeNode *root;
    void yyerror(char *s);
    // TreeNode* createNode(char *);
    // void addChild(TreeNode*, TreeNode*);
    // void printParseTree(TreeNode*, int);
%}

%union {
    struct TreeNode *node;
    int iValue;
    float fValue;
    char cValue;
    char *sValue;
}

%token AUTO RESTRICT UNSIGNED BREAK EXTERN RETURN VOID CASE FLOAT SHORT VOLATILE CHAR FOR SIGNED WHILE CONST GOTO SIZEOF BOOL CONTINUE IF STATIC COMPLEX DEFAULT INLINE STRUCT IMAGINARY DO INT SWITCH DOUBLE LONG TYPEDEF ELSE REGISTER UNION INVALID_TOKEN

%token PARANTHESIS_OPEN PARANTHESIS_CLOSE SQ_BRACKET_OPEN SQ_BRACKET_CLOSE CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE
%token PERIOD ARROW INCREMENT DECREMENT AMPERSAND ASTERISK PLUS MINUS TILDE EXCLAMATION SLASH PERCENT
%token LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_THAN_EQUAL GREATER_THAN_EQUAL EQUAL NOT_EQUAL CARET PIPE
%token LOGICAL_AND LOGICAL_OR QUESTION COLON SEMICOLON ELLIPSIS
%token ASSIGN MULTIPLY_ASSIGN DIVIDE_ASSIGN MOD_ASSIGN PLUS_ASSIGN MINUS_ASSIGN LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN AND_ASSIGN ADD_ASSIGN XOR_ASSIGN OR_ASSIGN COMMA HASH

%token <sValue> IDENTIFIER
%token <iValue> CONSTANT_INT
%token <fValue> CONSTANT_FLOAT
%token <cValue> CONSTANT_CHAR
%token <sValue> LITERAL

%type <node> augmented_start translation_unit external_declaration function_definition declaration_list_opt declaration_list
%type <node> declaration_specifiers declaration init_declarator_list_opt init_declarator_list init_declarator
%type <node> constant primary_expression postfix_expression argument_expression_list_opt argument_expression_list
%type <node> unary_expression unary_operator cast_expression multiplicative_expression additive_expression
%type <node> shift_expression relational_expression equality_expression AND_expression
%type <node> exclusive_OR_expression inclusive_OR_expression logical_AND_expression logical_OR_expression
%type <node> conditional_expression assignment_expression assignment_operator expression constant_expression
%type <node> type_name specifier_qualifier_list specifier_qualifier_list_opt type_specifier storage_class_specifier function_specifier
%type <node> pointer_opt direct_declarator block_item_list block_item compound_statement block_item_list_opt
%type <node> initializer initializer_list designation_opt designation designator_list designator
%type <node> statement labeled_statement selection_statement iteration_statement jump_statement
%type <node> identifier_list_opt parameter_type_list parameter_list parameter_declaration identifier_list pointer type_qualifier_list_opt
%type <node> expression_statement expression_opt declaration_specifiers_opt type_qualifier declarator assignment_expression_opt type_qualifier_list

%nonassoc PARANTHESIS_CLOSE
%nonassoc ELSE

%start augmented_start

%%

constant:
    CONSTANT_INT {
        char buffer[20];
        sprintf(buffer, "%d", $1); 
        $$ = createNode("constant");
        TreeNode *valueNode = createNode(buffer); 
        addChild($$, valueNode);
    }
    | CONSTANT_FLOAT {
        char buffer[20];
        sprintf(buffer, "%f", $1); 
        $$ = createNode("constant");
        TreeNode *valueNode = createNode(buffer); 
        addChild($$, valueNode);
    }
    | CONSTANT_CHAR {
        char buffer[20];
        sprintf(buffer, "%c", $1); 
        $$ = createNode("constant");
        TreeNode *valueNode = createNode(buffer); 
        addChild($$, valueNode);
    }
    ;

primary_expression:
    IDENTIFIER {
        $$ = createNode("primary_expression");
        TreeNode *valueNode = createNode($1); 
        addChild($$, valueNode);
    }
    | constant {
        $$ = createNode("primary_expression");
        addChild($$, $1);
    }
    | LITERAL {
        $$ = createNode("primary_expression");
        TreeNode *valueNode = createNode($1); 
        addChild($$, valueNode);
    }
    | PARANTHESIS_OPEN expression PARANTHESIS_CLOSE {
        $$ = createNode("primary_expression");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, openPar);
        addChild($$, $2);
        addChild($$, closePar);
    }
    ;

postfix_expression:
    primary_expression {
        $$ = createNode("postfix_expression");
        addChild($$, $1);
    }
    | postfix_expression SQ_BRACKET_OPEN expression SQ_BRACKET_CLOSE {
        $$ = createNode("postfix_expression");
        TreeNode *openSq = createNode("[");
        TreeNode *closeSq = createNode("]");
        addChild($$, $1);
        addChild($$, openSq);
        addChild($$, $3);
        addChild($$, closeSq);
    }
    | postfix_expression PARANTHESIS_OPEN argument_expression_list_opt PARANTHESIS_CLOSE {
        $$ = createNode("postfix_expression");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, $1);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
    }
    | postfix_expression PERIOD IDENTIFIER {
        $$ = createNode("postfix_expression");
        TreeNode *period = createNode(".");
        TreeNode *identifier = createNode($3);
        addChild($$, $1);
        addChild($$, period);
        addChild($$, identifier);
    }
    | postfix_expression ARROW IDENTIFIER {
        $$ = createNode("postfix_expression");
        TreeNode *arrow = createNode("->");
        TreeNode *identifier = createNode($3);
        addChild($$, $1);
        addChild($$, arrow);
        addChild($$, identifier);
    }
    | postfix_expression INCREMENT {
        $$ = createNode("postfix_expression");
        TreeNode *increment = createNode("++");
        addChild($$, $1);
        addChild($$, increment);
    }
    | postfix_expression DECREMENT {
        $$ = createNode("postfix_expression");
        TreeNode *decrement = createNode("--");
        addChild($$, $1);
        addChild($$, decrement);
    }
    ;

argument_expression_list_opt:
    argument_expression_list {
        $$ = createNode("argument_expression_list_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("argument_expression_list_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

argument_expression_list:
    assignment_expression {
        $$ = createNode("argument_expression_list");
        addChild($$, $1);
    }
    | argument_expression_list COMMA assignment_expression {
        $$ = createNode("argument_expression_list");
        TreeNode *comma = createNode(",");
        addChild($$, $1);
        addChild($$, comma);
        addChild($$, $3);
    }
    ;

unary_expression:
    postfix_expression {
        $$ = createNode("unary_expression");
        addChild($$, $1);
    }
    | INCREMENT unary_expression {
        $$ = createNode("unary_expression");
        TreeNode *increment = createNode("++");
        addChild($$, increment);
        addChild($$, $2);
    }
    | DECREMENT unary_expression {
        $$ = createNode("unary_expression");
        TreeNode *decrement = createNode("--");
        addChild($$, decrement);
        addChild($$, $2);
    }
    | unary_operator cast_expression {
        $$ = createNode("unary_expression");
        addChild($$, $1);
        addChild($$, $2);
    }
    | SIZEOF unary_expression {
        $$ = createNode("unary_expression");
        TreeNode *sizeOf = createNode("sizeof");
        addChild($$, sizeOf);
        addChild($$, $2);
    }
    | SIZEOF PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE {
        $$ = createNode("unary_expression");
        TreeNode *sizeOf = createNode("sizeof");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, sizeOf);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
    }
    ;

unary_operator:
    AMPERSAND {
        $$ = createNode("unary_operator");
        TreeNode *ampersand = createNode("&");
        addChild($$, ampersand);
    }
    | ASTERISK {
        $$ = createNode("unary_operator");
        TreeNode *asterisk = createNode("*");
        addChild($$, asterisk);
    }
    | PLUS {
        $$ = createNode("unary_operator");
        TreeNode *plus = createNode("+");
        addChild($$, plus);
    }
    | MINUS {
        $$ = createNode("unary_operator");
        TreeNode *minus = createNode("-");
        addChild($$, minus);
    }
    | TILDE {
        $$ = createNode("unary_operator");
        TreeNode *tilde = createNode("~");
        addChild($$, tilde);
    }
    | EXCLAMATION {
        $$ = createNode("unary_operator");
        TreeNode *exclamation = createNode("!");
        addChild($$, exclamation);
    }
    ;

cast_expression:
    unary_expression {
        $$ = createNode("cast_expression");
        addChild($$, $1);
    }
    | PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE cast_expression {
        $$ = createNode("cast_expression");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, openPar);
        addChild($$, $2);
        addChild($$, closePar);
        addChild($$, $4);
    }
    ;

multiplicative_expression:
    cast_expression {
        $$ = createNode("multiplicative_expression");
        addChild($$, $1);
    }
    | multiplicative_expression ASTERISK cast_expression {
        $$ = createNode("multiplicative_expression");
        TreeNode *asterisk = createNode("*");
        addChild($$, $1);
        addChild($$, asterisk);
        addChild($$, $3);
    }
    | multiplicative_expression SLASH cast_expression {
        $$ = createNode("multiplicative_expression");
        TreeNode *slash = createNode("/");
        addChild($$, $1);
        addChild($$, slash);
        addChild($$, $3);
    }
    | multiplicative_expression PERCENT cast_expression {
        $$ = createNode("multiplicative_expression");
        TreeNode *percent = createNode("%");
        addChild($$, $1);
        addChild($$, percent);
        addChild($$, $3);
    }
    ;

additive_expression:
    multiplicative_expression {
        $$ = createNode("additive_expression");
        addChild($$, $1);
    }
    | additive_expression PLUS multiplicative_expression {
        $$ = createNode("additive_expression");
        TreeNode *plus = createNode("+");
        addChild($$, $1);
        addChild($$, plus);
        addChild($$, $3);
    }
    | additive_expression MINUS multiplicative_expression {
        $$ = createNode("additive_expression");
        TreeNode *minus = createNode("-");
        addChild($$, $1);
        addChild($$, minus);
        addChild($$, $3);
    }
    ;

shift_expression:
    additive_expression {
        $$ = createNode("shift_expression");
        addChild($$, $1);
    }
    | shift_expression LEFT_SHIFT additive_expression {
        $$ = createNode("shift_expression");
        TreeNode *leftShift = createNode("<<");
        addChild($$, $1);
        addChild($$, leftShift);
        addChild($$, $3);
    }
    | shift_expression RIGHT_SHIFT additive_expression {
        $$ = createNode("shift_expression");
        TreeNode *rightShift = createNode(">>");
        addChild($$, $1);
        addChild($$, rightShift);
        addChild($$, $3);
    }
    ;

relational_expression:
    shift_expression {
        $$ = createNode("relational_expression");
        addChild($$, $1);
    }
    | relational_expression LESS_THAN shift_expression {
        $$ = createNode("relational_expression");
        TreeNode *lessThan = createNode("<");
        addChild($$, $1);
        addChild($$, lessThan);
        addChild($$, $3);
    }
    | relational_expression GREATER_THAN shift_expression {
        $$ = createNode("relational_expression");
        TreeNode *greaterThan = createNode(">");
        addChild($$, $1);
        addChild($$, greaterThan);
        addChild($$, $3);
    }
    | relational_expression LESS_THAN_EQUAL shift_expression {
        $$ = createNode("relational_expression");
        TreeNode *lessThanEqual = createNode("<=");
        addChild($$, $1);
        addChild($$, lessThanEqual);
        addChild($$, $3);
    }
    | relational_expression GREATER_THAN_EQUAL shift_expression {
        $$ = createNode("relational_expression");
        TreeNode *greaterThanEqual = createNode(">=");
        addChild($$, $1);
        addChild($$, greaterThanEqual);
        addChild($$, $3);
    }
    ;

equality_expression:
    relational_expression {
        $$ = createNode("equality_expression");
        addChild($$, $1);
    }
    | equality_expression EQUAL relational_expression {
        $$ = createNode("equality_expression");
        TreeNode *equal = createNode("==");
        addChild($$, $1);
        addChild($$, equal);
        addChild($$, $3);
    }
    | equality_expression NOT_EQUAL relational_expression {
        $$ = createNode("equality_expression");
        TreeNode *notEqual = createNode("!=");
        addChild($$, $1);
        addChild($$, notEqual);
        addChild($$, $3);
    }
    ;

AND_expression:
    equality_expression {
        $$ = createNode("AND_expression");
        addChild($$, $1);
    }
    | AND_expression AMPERSAND equality_expression {
        $$ = createNode("AND_expression");
        TreeNode *ampersand = createNode("&");
        addChild($$, $1);
        addChild($$, ampersand);
        addChild($$, $3);
    }
    ;

exclusive_OR_expression:
    AND_expression {
        $$ = createNode("exclusive_OR_expression");
        addChild($$, $1);
    }
    | exclusive_OR_expression CARET AND_expression {
        $$ = createNode("exclusive_OR_expression");
        TreeNode *caret = createNode("^");
        addChild($$, $1);
        addChild($$, caret);
        addChild($$, $3);
    }
    ;

inclusive_OR_expression:
    exclusive_OR_expression {
        $$ = createNode("inclusive_OR_expression");
        addChild($$, $1);
    }
    | inclusive_OR_expression PIPE exclusive_OR_expression {
        $$ = createNode("inclusive_OR_expression");
        TreeNode *pipe = createNode("|");
        addChild($$, $1);
        addChild($$, pipe);
        addChild($$, $3);
    }
    ;

logical_AND_expression:
    inclusive_OR_expression {
        $$ = createNode("logical_AND_expression");
        addChild($$, $1);
    }
    | logical_AND_expression LOGICAL_AND inclusive_OR_expression {
        $$ = createNode("logical_AND_expression");
        TreeNode *logicalAnd = createNode("&&");
        addChild($$, $1);
        addChild($$, logicalAnd);
        addChild($$, $3);
    }
    ;

logical_OR_expression:
    logical_AND_expression {
        $$ = createNode("logical_OR_expression");
        addChild($$, $1);
    }
    | logical_OR_expression LOGICAL_OR logical_AND_expression {
        $$ = createNode("logical_OR_expression");
        TreeNode *logicalOr = createNode("||");
        addChild($$, $1);
        addChild($$, logicalOr);
        addChild($$, $3);
    }
    ;

conditional_expression:
    logical_OR_expression {
        $$ = createNode("conditional_expression");
        addChild($$, $1);
    }
    | logical_OR_expression QUESTION expression COLON conditional_expression {
        $$ = createNode("conditional_expression");
        TreeNode *question = createNode("?");
        TreeNode *colon = createNode(":");
        addChild($$, $1);
        addChild($$, question);
        addChild($$, $3);
        addChild($$, colon);
        addChild($$, $5);
    }
    ;

assignment_expression:
    conditional_expression {
        $$ = createNode("assignment_expression");
        addChild($$, $1);
    }
    | unary_expression assignment_operator assignment_expression {
        $$ = createNode("assignment_expression");
        addChild($$, $1);
        addChild($$, $2);
        addChild($$, $3);
    }
    ;

assignment_operator:
    ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *assign = createNode("=");
        addChild($$, assign);
    }
    | MULTIPLY_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *multiplyAssign = createNode("*=");
        addChild($$, multiplyAssign);
    }
    | DIVIDE_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *divideAssign = createNode("/=");
        addChild($$, divideAssign);
    }
    | MOD_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *modAssign = createNode("%=");
        addChild($$, modAssign);
    }
    | PLUS_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *plusAssign = createNode("+=");
        addChild($$, plusAssign);
    }
    | MINUS_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *minusAssign = createNode("-=");
        addChild($$, minusAssign);
    }
    | LEFT_SHIFT_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *leftShiftAssign = createNode("<<=");
        addChild($$, leftShiftAssign);
    }
    | RIGHT_SHIFT_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *rightShiftAssign = createNode(">>=");
        addChild($$, rightShiftAssign);
    }
    | AND_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *andAssign = createNode("&=");
        addChild($$, andAssign);
    }
    | XOR_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *xorAssign = createNode("^=");
        addChild($$, xorAssign);
    }
    | OR_ASSIGN {
        $$ = createNode("assignment_operator");
        TreeNode *orAssign = createNode("|=");
        addChild($$, orAssign);
    }
    ;

expression:
    assignment_expression {
        $$ = createNode("expression");
        addChild($$, $1);
    }
    | expression COMMA assignment_expression {
        $$ = createNode("expression");
        TreeNode *comma = createNode(",");
        addChild($$, $1);
        addChild($$, comma);
        addChild($$, $3);
    }
    ;

constant_expression:
    conditional_expression {
        $$ = createNode("constant_expression");
        addChild($$, $1);
    }
    ;

declaration:
    declaration_specifiers init_declarator_list_opt SEMICOLON {
        $$ = createNode("declaration");
        TreeNode *semicolon = createNode(";");
        addChild($$, $1);
        addChild($$, $2);
        addChild($$, semicolon);
    }
    ;

init_declarator_list_opt:
    init_declarator_list {
        $$ = createNode("init_declarator_list_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("init_declarator_list_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

declaration_specifiers:
    storage_class_specifier declaration_specifiers_opt {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    | type_specifier declaration_specifiers_opt {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    | type_qualifier declaration_specifiers_opt {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    | function_specifier declaration_specifiers_opt {
        $$ = createNode("declaration_specifiers");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

declaration_specifiers_opt:
    declaration_specifiers {
        $$ = createNode("declaration_specifiers_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("declaration_specifiers_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

init_declarator_list:
    init_declarator_list COMMA init_declarator {
        $$ = createNode("init_declarator_list");
        TreeNode *comma = createNode(",");
        addChild($$, $1);
        addChild($$, comma);
        addChild($$, $3);
    }
    | init_declarator {
        $$ = createNode("init_declarator_list");
        addChild($$, $1);
    }
    ;

init_declarator:
    declarator {
        $$ = createNode("init_declarator");
        addChild($$, $1);
    }
    | declarator ASSIGN initializer {
        $$ = createNode("init_declarator");
        TreeNode *assign = createNode("=");
        addChild($$, $1);
        addChild($$, assign);
        addChild($$, $3);
    }
    ;

storage_class_specifier:
    EXTERN {
        $$ = createNode("storage_class_specifier");
        TreeNode *externNode = createNode("extern");
        addChild($$, externNode);
    }
    | STATIC {
        $$ = createNode("storage_class_specifier");
        TreeNode *staticNode = createNode("static");
        addChild($$, staticNode);
    }
    | AUTO {
        $$ = createNode("storage_class_specifier");
        TreeNode *autoNode = createNode("auto");
        addChild($$, autoNode);
    }
    | REGISTER {
        $$ = createNode("storage_class_specifier");
        TreeNode *registerNode = createNode("register");
        addChild($$, registerNode);
    }
    ;

type_specifier:
    VOID {
        $$ = createNode("type_specifier");
        TreeNode *voidNode = createNode("void");
        addChild($$, voidNode);
    }
    | CHAR {
        $$ = createNode("type_specifier");
        TreeNode *charNode = createNode("char");
        addChild($$, charNode);
    }
    | SHORT {
        $$ = createNode("type_specifier");
        TreeNode *shortNode = createNode("short");
        addChild($$, shortNode);
    }
    | INT {
        $$ = createNode("type_specifier");
        TreeNode *intNode = createNode("int");
        addChild($$, intNode);
    }
    | LONG {
        $$ = createNode("type_specifier");
        TreeNode *longNode = createNode("long");
        addChild($$, longNode);
    }
    | FLOAT {
        $$ = createNode("type_specifier");
        TreeNode *floatNode = createNode("float");
        addChild($$, floatNode);
    }
    | DOUBLE {
        $$ = createNode("type_specifier");
        TreeNode *doubleNode = createNode("double");
        addChild($$, doubleNode);
    }
    | SIGNED {
        $$ = createNode("type_specifier");
        TreeNode *signedNode = createNode("signed");
        addChild($$, signedNode);
    }
    | UNSIGNED {
        $$ = createNode("type_specifier");
        TreeNode *unsignedNode = createNode("unsigned");
        addChild($$, unsignedNode);
    }
    | BOOL {
        $$ = createNode("type_specifier");
        TreeNode *boolNode = createNode("_Bool");
        addChild($$, boolNode);
    }
    | COMPLEX {
        $$ = createNode("type_specifier");
        TreeNode *complexNode = createNode("_Complex");
        addChild($$, complexNode);
    }
    | IMAGINARY {
        $$ = createNode("type_specifier");
        TreeNode *imaginaryNode = createNode("_Imaginary");
        addChild($$, imaginaryNode);
    }
    ;

specifier_qualifier_list:
    type_specifier specifier_qualifier_list_opt {
        $$ = createNode("specifier_qualifier_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    | type_qualifier specifier_qualifier_list_opt {
        $$ = createNode("specifier_qualifier_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

specifier_qualifier_list_opt:
    specifier_qualifier_list {
        $$ = createNode("specifier_qualifier_list_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("specifier_qualifier_list_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

type_qualifier:
    CONST {
        $$ = createNode("type_qualifier");
        TreeNode *constNode = createNode("const");
        addChild($$, constNode);
    }
    | RESTRICT {
        $$ = createNode("type_qualifier");
        TreeNode *restrictNode = createNode("restrict");
        addChild($$, restrictNode);
    }
    | VOLATILE {
        $$ = createNode("type_qualifier");
        TreeNode *volatileNode = createNode("volatile");
        addChild($$, volatileNode);
    }
    ;

function_specifier:
    INLINE {
        $$ = createNode("function_specifier");
        TreeNode *inlineNode = createNode("inline");
        addChild($$, inlineNode);
    }
    ;

declarator:
    pointer_opt direct_declarator {
        $$ = createNode("declarator");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

pointer_opt:
    pointer {
        $$ = createNode("pointer_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("pointer_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

direct_declarator:
    IDENTIFIER {
        $$ = createNode("direct_declarator");
        TreeNode *idNode = createNode($1);
        addChild($$, idNode);
    }
    | PARANTHESIS_OPEN declarator PARANTHESIS_CLOSE {
        $$ = createNode("direct_declarator");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, openPar);
        addChild($$, $2);
        addChild($$, closePar);
    }
    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt assignment_expression_opt SQ_BRACKET_CLOSE {
        $$ = createNode("direct_declarator");
        TreeNode *openSq = createNode("[");
        TreeNode *closeSq = createNode("]");
        addChild($$, $1);
        addChild($$, openSq);
        addChild($$, $3);
        addChild($$, $4);
        addChild($$, closeSq);
    }
    | direct_declarator SQ_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQ_BRACKET_CLOSE {
        $$ = createNode("direct_declarator");
        TreeNode *openSq = createNode("[");
        TreeNode *closeSq = createNode("]");
        TreeNode *staticNode = createNode("static");
        addChild($$, $1);
        addChild($$, openSq);
        addChild($$, staticNode);
        addChild($$, $4);
        addChild($$, $5);
        addChild($$, closeSq);
    }
    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQ_BRACKET_CLOSE {
        $$ = createNode("direct_declarator");
        TreeNode *openSq = createNode("[");
        TreeNode *closeSq = createNode("]");
        TreeNode *staticNode = createNode("static");
        addChild($$, $1);
        addChild($$, openSq);
        addChild($$, $3);
        addChild($$, staticNode);
        addChild($$, $5);
        addChild($$, closeSq);
    }
    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt ASTERISK SQ_BRACKET_CLOSE {
        $$ = createNode("direct_declarator");
        TreeNode *openSq = createNode("[");
        TreeNode *closeSq = createNode("]");
        TreeNode *asterisk = createNode("*");
        addChild($$, $1);
        addChild($$, openSq);
        addChild($$, $3);
        addChild($$, asterisk);
        addChild($$, closeSq);
    }
    | direct_declarator PARANTHESIS_OPEN parameter_type_list PARANTHESIS_CLOSE {
        $$ = createNode("direct_declarator");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, $1);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
    }
    | direct_declarator PARANTHESIS_OPEN identifier_list_opt PARANTHESIS_CLOSE {
        $$ = createNode("direct_declarator");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, $1);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
    }
    ;

type_qualifier_list_opt:
    type_qualifier_list {
        $$ = createNode("type_qualifier_list_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("type_qualifier_list_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

assignment_expression_opt:
    assignment_expression {
        $$ = createNode("assignment_expression_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("assignment_expression_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

identifier_list_opt:
    identifier_list {
        $$ = createNode("identifier_list_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("identifier_list_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

pointer:
    ASTERISK type_qualifier_list_opt {
        $$ = createNode("pointer");
        TreeNode *asterisk = createNode("*");
        addChild($$, asterisk);
        addChild($$, $2);
    }
    | ASTERISK type_qualifier_list_opt pointer {
        $$ = createNode("pointer");
        TreeNode *asterisk = createNode("*");
        addChild($$, asterisk);
        addChild($$, $2);
        addChild($$, $3);
    }
    ;

type_qualifier_list:
    type_qualifier {
        $$ = createNode("type_qualifier_list");
        addChild($$, $1);
    }
    | type_qualifier_list type_qualifier {
        $$ = createNode("type_qualifier_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

parameter_type_list:
    parameter_list {
        $$ = createNode("parameter_type_list");
        addChild($$, $1);
    }
    | parameter_list COMMA ELLIPSIS {
        $$ = createNode("parameter_type_list");
        TreeNode *comma = createNode(",");
        TreeNode *ellipsis = createNode("...");
        addChild($$, $1);
        addChild($$, comma);
        addChild($$, ellipsis);
    }
    ;

parameter_list:
    parameter_declaration {
        $$ = createNode("parameter_list");
        addChild($$, $1);
    }
    | parameter_list COMMA parameter_declaration {
        $$ = createNode("parameter_list");
        TreeNode *comma = createNode(",");
        addChild($$, $1);
        addChild($$, comma);
        addChild($$, $3);
    }
    ;

parameter_declaration:
    declaration_specifiers declarator {
        $$ = createNode("parameter_declaration");
        addChild($$, $1);
        addChild($$, $2);
    }
    | declaration_specifiers {
        $$ = createNode("parameter_declaration");
        addChild($$, $1);
    }
    ;

identifier_list:
    IDENTIFIER {
        $$ = createNode("identifier_list");
        TreeNode *idNode = createNode($1);
        addChild($$, idNode);
    }
    | identifier_list COMMA IDENTIFIER {
        $$ = createNode("identifier_list");
        TreeNode *comma = createNode(",");
        TreeNode *idNode = createNode($3);
        addChild($$, $1);
        addChild($$, comma);
        addChild($$, idNode);
    }
    ;

type_name:
    specifier_qualifier_list {
        $$ = createNode("type_name");
        addChild($$, $1);
    }
    ;

initializer:
    assignment_expression {
        $$ = createNode("initializer");
        addChild($$, $1);
    }
    | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE {
        $$ = createNode("initializer");
        TreeNode *openBrace = createNode("{");
        TreeNode *closeBrace = createNode("}");
        addChild($$, openBrace);
        addChild($$, $2);
        addChild($$, closeBrace);
    }
    | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {
        $$ = createNode("initializer");
        TreeNode *openBrace = createNode("{");
        TreeNode *closeBrace = createNode("}");
        TreeNode *comma = createNode(",");
        addChild($$, openBrace);
        addChild($$, $2);
        addChild($$, comma);
        addChild($$, closeBrace);
    }
    ;

initializer_list:
    designation_opt initializer {
        $$ = createNode("initializer_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    | initializer_list COMMA designation_opt initializer {
        $$ = createNode("initializer_list");
        TreeNode *comma = createNode(",");
        addChild($$, $1);
        addChild($$, comma);
        addChild($$, $3);
        addChild($$, $4);
    }
    ;

designation_opt:
    designation {
        $$ = createNode("designation_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("designation_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

designation:
    designator_list ASSIGN {
        $$ = createNode("designation");
        TreeNode *assign = createNode("=");
        addChild($$, $1);
        addChild($$, assign);
    }
    ;

designator_list:
    designator {
        $$ = createNode("designator_list");
        addChild($$, $1);
    }
    | designator_list designator {
        $$ = createNode("designator_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

designator:
    SQ_BRACKET_OPEN constant_expression SQ_BRACKET_CLOSE {
        $$ = createNode("designator");
        TreeNode *openSq = createNode("[");
        TreeNode *closeSq = createNode("]");
        addChild($$, openSq);
        addChild($$, $2);
        addChild($$, closeSq);
    }
    | PERIOD IDENTIFIER {
        $$ = createNode("designator");
        TreeNode *period = createNode(".");
        TreeNode *identifier = createNode($2);
        addChild($$, period);
        addChild($$, identifier);
    }
    ;

statement:
    labeled_statement {
        $$ = createNode("statement");
        addChild($$, $1);
    }
    | compound_statement {
        $$ = createNode("statement");
        addChild($$, $1);
    }
    | expression_statement {
        $$ = createNode("statement");
        addChild($$, $1);
    }
    | selection_statement {
        $$ = createNode("statement");
        addChild($$, $1);
    }
    | iteration_statement {
        $$ = createNode("statement");
        addChild($$, $1);
    }
    | jump_statement {
        $$ = createNode("statement");
        addChild($$, $1);
    }
    ;

labeled_statement:
    IDENTIFIER COLON statement {
        $$ = createNode("labeled_statement");
        TreeNode *colon = createNode(":");
        TreeNode *idNode = createNode($1);
        addChild($$, idNode);
        addChild($$, colon);
        addChild($$, $3);
    }
    | CASE constant_expression COLON statement {
        $$ = createNode("labeled_statement");
        TreeNode *caseNode = createNode("case");
        TreeNode *colon = createNode(":");
        addChild($$, caseNode);
        addChild($$, $2);
        addChild($$, colon);
        addChild($$, $4);
    }
    | DEFAULT COLON statement {
        $$ = createNode("labeled_statement");
        TreeNode *defaultNode = createNode("default");
        TreeNode *colon = createNode(":");
        addChild($$, defaultNode);
        addChild($$, colon);
        addChild($$, $3);
    }
    ;

compound_statement:
    CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE {
        $$ = createNode("compound_statement");
        TreeNode *openBrace = createNode("{");
        TreeNode *closeBrace = createNode("}");
        addChild($$, openBrace);
        addChild($$, $2);
        addChild($$, closeBrace);
    }
    ;

block_item_list_opt:
    block_item_list {
        $$ = createNode("block_item_list_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("block_item_list_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

block_item_list:
    block_item {
        $$ = createNode("block_item_list");
        addChild($$, $1);
    }
    | block_item_list block_item {
        $$ = createNode("block_item_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;

block_item:
    declaration {
        $$ = createNode("block_item");
        addChild($$, $1);
    }
    | statement {
        $$ = createNode("block_item");
        addChild($$, $1);
    }
    ;

expression_statement:
    expression_opt SEMICOLON {
        $$ = createNode("expression_statement");
        TreeNode *semicolon = createNode(";");
        addChild($$, $1);
        addChild($$, semicolon);
    }
    ;

expression_opt:
    expression {
        $$ = createNode("expression_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("expression_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

selection_statement:
    IF PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {
        $$ = createNode("selection_statement");
        TreeNode *ifNode = createNode("if");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, ifNode);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
        addChild($$, $5);
    }
    | IF PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement ELSE statement {
        $$ = createNode("selection_statement");
        TreeNode *ifNode = createNode("if");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        TreeNode *elseNode = createNode("else");
        addChild($$, ifNode);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
        addChild($$, $5);
        addChild($$, elseNode);
        addChild($$, $7);
    }
    | SWITCH PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {
        $$ = createNode("selection_statement");
        TreeNode *switchNode = createNode("switch");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, switchNode);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
        addChild($$, $5);
    }
    ;

iteration_statement:
    WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {
        $$ = createNode("iteration_statement");
        TreeNode *whileNode = createNode("while");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        addChild($$, whileNode);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, closePar);
        addChild($$, $5);
    }
    | DO statement WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE SEMICOLON {
        $$ = createNode("iteration_statement");
        TreeNode *doNode = createNode("do");
        TreeNode *whileNode = createNode("while");
        TreeNode *openPar = createNode("(");
        TreeNode *closePar = createNode(")");
        TreeNode *semicolon = createNode(";");
        addChild($$, doNode);
        addChild($$, $2);
        addChild($$, whileNode);
        addChild($$, openPar);
        addChild($$, $5);
        addChild($$, closePar);
        addChild($$, semicolon);
    }
    | FOR PARANTHESIS_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt PARANTHESIS_CLOSE statement {
        $$ = createNode("iteration_statement");
        TreeNode *forNode = createNode("for");
        TreeNode *openPar = createNode("(");
        TreeNode *semicolon1 = createNode(";");
        TreeNode *semicolon2 = createNode(";");
        TreeNode *closePar = createNode(")");
        addChild($$, forNode);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, semicolon1);
        addChild($$, $5);
        addChild($$, semicolon2);
        addChild($$, $7);
        addChild($$, closePar);
        addChild($$, $9);
    }
    | FOR PARANTHESIS_OPEN declaration expression_opt SEMICOLON expression_opt PARANTHESIS_CLOSE statement {
        $$ = createNode("iteration_statement");
        TreeNode *forNode = createNode("for");
        TreeNode *openPar = createNode("(");
        TreeNode *semicolon = createNode(";");
        TreeNode *closePar = createNode(")");
        addChild($$, forNode);
        addChild($$, openPar);
        addChild($$, $3);
        addChild($$, $4);
        addChild($$, semicolon);
        addChild($$, $6);
        addChild($$, closePar);
        addChild($$, $8);
    }
    ;

jump_statement:
    GOTO IDENTIFIER SEMICOLON {
        $$ = createNode("jump_statement");
        TreeNode *gotoNode = createNode("goto");
        TreeNode *idNode = createNode($2);
        TreeNode *semicolon = createNode(";");
        addChild($$, gotoNode);
        addChild($$, idNode);
        addChild($$, semicolon);
    }
    | CONTINUE SEMICOLON {
        $$ = createNode("jump_statement");
        TreeNode *continueNode = createNode("continue");
        TreeNode *semicolon = createNode(";");
        addChild($$, continueNode);
        addChild($$, semicolon);
    }
    | BREAK SEMICOLON {
        $$ = createNode("jump_statement");
        TreeNode *breakNode = createNode("break");
        TreeNode *semicolon = createNode(";");
        addChild($$, breakNode);
        addChild($$, semicolon);
    }
    | RETURN expression_opt SEMICOLON {
        $$ = createNode("jump_statement");
        TreeNode *returnNode = createNode("return");
        TreeNode *semicolon = createNode(";");
        addChild($$, returnNode);
        addChild($$, $2);
        addChild($$, semicolon);
    }
    ;

// Augmenting the grammar for correct start 
augmented_start:
    translation_unit {
        $$ = createNode("augmented_start");
        addChild($$, $1);
        root = $$;
    }
    ;
translation_unit:
    external_declaration {
        $$ = createNode("translation_unit");
        addChild($$, $1);
        
    }
    | translation_unit external_declaration {
        $$ = createNode("translation_unit");
        addChild($$, $1);
        addChild($$, $2);
        
    }
    ;

external_declaration:
    function_definition {
        $$ = createNode("external_declaration");
        addChild($$, $1);
    }
    | declaration {
        $$ = createNode("external_declaration");
        addChild($$, $1);
    }
    ;

function_definition:
    declaration_specifiers declarator declaration_list_opt compound_statement {
        $$ = createNode("function_definition");
        addChild($$, $1);
        addChild($$, $2);
        addChild($$, $3);
        addChild($$, $4);
    }
    ;

declaration_list_opt:
    declaration_list {
        $$ = createNode("declaration_list_opt");
        addChild($$, $1);
    }
    | {
        $$ = createNode("declaration_list_opt");
        TreeNode *empty = createNode("(empty)");
        addChild($$, empty);
    }
    ;

declaration_list:
    declaration {
        $$ = createNode("declaration_list");
        addChild($$, $1);
    }
    | declaration_list declaration {
        $$ = createNode("declaration_list");
        addChild($$, $1);
        addChild($$, $2);
    }
    ;
%%
void yyerror(char *s) {
    printf("ERROR: %s\n\t\t at line: %d\n\tnear \" %s \"\n", s, yylineno, yytext);
}