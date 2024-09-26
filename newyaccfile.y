%{
    #include <stdio.h>
    #include"functions.h"
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    void yyerror(char *s);
%}

%union {
    int iValue;
    float fValue;
    char cValue;
    char *sValue;
}

extern TreeNode *root;

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

%nonassoc PARANTHESIS_CLOSE
%nonassoc ELSE

%start translation_unit

%%
constant            : CONSTANT_INT  {char buffer[20];
                                    sprintf(buffer, "%d", $1); 
                                    TreeNode *valueNode = createNode(buffer, 0);
                                    $$ = createNode("constant", 1, valueNode);}
                    | CONSTANT_FLOAT{
                                    char buffer[20];
                                    sprintf(buffer, "%f", $1); 
                                    TreeNode *valueNode = createNode(buffer, 0);
                                    $$ = createNode("constant", 1, valueNode);}
                                    
                    | CONSTANT_CHAR {char buffer[20];
                                    sprintf(buffer, "%c", $1); 
                                    TreeNode *valueNode = createNode(buffer, 0);
                                    $$ = createNode("constant", 1, valueNode);}
                    ;

primary_expression  : IDENTIFIER    {
                                    TreeNode *valueNode = createNode($1, 0);  
                                    $$ = createNode("primary_expression", 1, valueNode);
                                    }
                    | constant      {
                                    $$ = createNode("primary_expression", 1, $1 );
                                    }
                    | LITERAL       {TreeNode *valueNode = createNode($1, 0);  
                                    $$ = createNode("primary_expression", 1, valueNode);
                                    }
                    | PARANTHESIS_OPEN expression PARANTHESIS_CLOSE 
                                    {
                                        TreeNode *valueNode = createNode("(", 0);
                                        TreeNode *valueNode2 = createNode(")", 0);
                                        $$ = createNode("primary_expression", 3, valueNode, $2, valueNode2);
                                    }


                                                                    
                    ;

postfix_expression  : primary_expression {$$ = createNode("postfix_expression", 1, $1);}
                    | postfix_expression SQ_BRACKET_OPEN expression SQ_BRACKET_CLOSE {
                        TreeNode *valueNode = createNode("[", 0);
                        TreeNode *valueNode2 = createNode("]", 0);
                        $$ = createNode("postfix_expression", 4, $1, valueNode, $3, valueNode2);
                    }
                    | postfix_expression PARANTHESIS_OPEN argument_expression_list_opt PARANTHESIS_CLOSE {
                        TreeNode *valueNode = createNode("(", 0);
                        TreeNode *valueNode2 = createNode(")", 0);
                        $$ = createNode("postfix_expression", 4, $1, valueNode, $3, valueNode2);
                    }
                    | postfix_expression PERIOD IDENTIFIER {
                        TreeNode *valueNode = createNode(".", 0);
                        TreeNode *valueNode2 = createNode($3, 0);
                        $$ = createNode("postfix_expression", 3, $1, valueNode, valueNode2);
                    }
                    | postfix_expression ARROW IDENTIFIER {
                        TreeNode *valueNode = createNode("->", 0);
                        TreeNode *valueNode2 = createNode($3, 0);
                        $$ = createNode("postfix_expression", 3, $1, valueNode, valueNode2);
                    }
                    | postfix_expression INCREMENT {
                        TreeNode *valueNode = createNode("++", 0);
                        $$ = createNode("postfix_expression", 2, $1, valueNode);
                    }
                    | postfix_expression DECREMENT {
                        TreeNode *valueNode = createNode("--", 0);
                        $$ = createNode("postfix_expression", 2, $1, valueNode);
                    }
                    | PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE {
                        TreeNode *valueNode = createNode("(", 0);
                        TreeNode *valueNode2 = createNode(")", 0);
                        TreeNode *valueNode3 = createNode("{", 0);
                        TreeNode *valueNode4 = createNode("}", 0);
                        $$ = createNode("postfix_expression", 6, valueNode, $2, valueNode2, valueNode3, $5 , valueNode4);
                    }
                    | PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {
                        TreeNode *valueNode = createNode("(", 0);
                        TreeNode *valueNode2 = createNode(")", 0);
                        TreeNode *valueNode3 = createNode("{", 0);
                        TreeNode *valueNode4 = createNode("}", 0);
                        TreeNode *valueNode5 = createNode(",", 0);
                        $$ = createNode("postfix_expression", 7, valueNode, $2, valueNode2, valueNode3, $5, valueNode5, valueNode4);
                    }
                    ;
    
argument_expression_list_opt : argument_expression_list {
                                $$ = createNode("argument_expression_list_opt", 1, $1);

                            }
                            | {TreeNode *valueNode = createNode("(empty)", 0);
                                $$ = createNode("argument_expression_list_opt", 1, valueNode);
                            }
                            ;

argument_expression_list    : assignment_expression {
                                $$ = createNode("argument_expression_list", 1, $1);

                            }
                            | argument_expression_list COMMA assignment_expression {
                                TreeNode *valueNode = createNode(",", 0);
                                $$ = createNode("argument_expression_list", 3, $1, valueNode, $3);
                            }
                            ;

unary_expression    : postfix_expression {
                        $$ = createNode("unary_expression", 1, $1);

                    }
                    | INCREMENT unary_expression {
                        TreeNode *valueNode = createNode("++", 0);
                        $$ = createNode("unary_expression", 2, valueNode, $2);
                    }
                    | DECREMENT unary_expression {
                        TreeNode *valueNode = createNode("--", 0);
                        $$ = createNode("unary_expression", 2, valueNode, $2);
                    }
                    | unary_operator cast_expression {
                        $$ = createNode("unary_expression", 2, $1, $2);
                    }
                    | SIZEOF unary_expression {
                        TreeNode *valueNode = createNode("sizeof", 0);
                        $$ = createNode("unary_expression", 2, valueNode, $2);
                    }
                    | SIZEOF PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE {
                        TreeNode *valueNode = createNode("sizeof", 0);
                        TreeNode *valueNode2 = createNode("(", 0);
                        TreeNode *valueNode3 = createNode(")", 0);
                        $$ = createNode("unary_expression", 4, valueNode, valueNode2, $3, valueNode3);
                    }
                    ;

unary_operator      : AMPERSAND {
                        TreeNode *valueNode = createNode("&", 0);
                        $$ = createNode("unary_operator", 1, valueNode);

                    }
                    | ASTERISK  {
                        TreeNode *valueNode = createNode("*", 0);
                        $$ = createNode("unary_operator", 1, valueNode);
                    }
                    | PLUS      {
                        TreeNode *valueNode = createNode("+", 0);
                        $$ = createNode("unary_operator", 1, valueNode);
                    }
                    | MINUS     {
                        TreeNode *valueNode = createNode("-", 0);
                        $$ = createNode("unary_operator", 1, valueNode);
                    }
                    | TILDE     {
                        TreeNode *valueNode = createNode("~", 0);
                        $$ = createNode("unary_operator", 1, valueNode);
                    }
                    | EXCLAMATION {
                        TreeNode *valueNode = createNode("!", 0);
                        $$ = createNode("unary_operator", 1, valueNode);
                    }
                    ;

cast_expression     : unary_expression {
                        $$ = createNode("cast_expression", 1, $1);
                    } 
                    | PARANTHESIS_OPEN type_name PARANTHESIS_CLOSE cast_expression {
                        TreeNode *valueNode = createNode("(", 0);
                        TreeNode *valueNode2 = createNode(")", 0);
                        $$ = createNode("cast_expression", 4, valueNode, $2, valueNode2, $4);
                    }
                    ;

multiplicative_expression : cast_expression {
                            $$ = createNode("multiplicative_expression", 1, $1);

                            }
                          | multiplicative_expression ASTERISK cast_expression {
                            TreeNode *valueNode = createNode("*", 0);
                            $$ = createNode("multiplicative_expression", 3, $1, valueNode, $3);
                          }
                          | multiplicative_expression SLASH cast_expression {
                            TreeNode *valueNode = createNode("/", 0);
                            $$ = createNode("multiplicative_expression", 3, $1, valueNode, $3);
                          }
                          | multiplicative_expression PERCENT cast_expression {
                            TreeNode *valueNode = createNode("%", 0);
                            $$ = createNode("multiplicative_expression", 3, $1, valueNode, $3);
                          }
                          ;

additive_expression : multiplicative_expression {
                    $$ = createNode("additive_expression", 1, $1);
                    }
                    | additive_expression PLUS multiplicative_expression {
                        TreeNode *valueNode = createNode("+", 0);
                        $$ = createNode("additive_expression", 3, $1, valueNode, $3);
                    }
                    | additive_expression MINUS multiplicative_expression {
                        TreeNode *valueNode = createNode("-", 0);
                        $$ = createNode("additive_expression", 3, $1, valueNode, $3);
                    }
                    ;

shift_expression    : additive_expression {

                    $$ = createNode("shift_expression", 1, $1);
                    }
                    | shift_expression LEFT_SHIFT additive_expression {
                        TreeNode *valueNode = createNode("<<", 0);
                        $$ = createNode("shift_expression", 3, $1, valueNode, $3);
                    }
                    | shift_expression RIGHT_SHIFT additive_expression {
                        TreeNode *valueNode = createNode(">>", 0);
                        $$ = createNode("shift_expression", 3, $1, valueNode, $3);
                    }
                    ;

relational_expression   : shift_expression {

                        $$ = createNode("relational_expression", 1, $1);
                        }
                        | relational_expression LESS_THAN shift_expression {
                            TreeNode *valueNode = createNode("<", 0);
                            $$ = createNode("relational_expression", 3, $1, valueNode, $3);
                        }
                        | relational_expression GREATER_THAN shift_expression {
                            TreeNode *valueNode = createNode(">", 0);
                            $$ = createNode("relational_expression", 3, $1, valueNode, $3);
                        }
                        | relational_expression LESS_THAN_EQUAL shift_expression {
                            TreeNode *valueNode = createNode("<=", 0);
                            $$ = createNode("relational_expression", 3, $1, valueNode, $3);
                        }
                        | relational_expression GREATER_THAN_EQUAL shift_expression {
                            TreeNode *valueNode = createNode(">=", 0);
                            $$ = createNode("relational_expression", 3, $1, valueNode, $3);
                        }
                        ;

equality_expression : relational_expression {

                    $$ = createNode("equality_expression", 1, $1);
                    }
                    | equality_expression EQUAL relational_expression {
                        TreeNode *valueNode = createNode("==", 0);
                        $$ = createNode("equality_expression", 3, $1, valueNode, $3);
                    }
                    | equality_expression NOT_EQUAL relational_expression {
                        TreeNode *valueNode = createNode("!=", 0);
                        $$ = createNode("equality_expression", 3, $1, valueNode, $3);
                    }
                    ;

AND_expression      : equality_expression {
                    $$ = createNode("AND_expression", 1, $1);
                    }
                    | AND_expression AMPERSAND equality_expression {
                        TreeNode *valueNode = createNode("&", 0);
                        $$ = createNode("AND_expression", 3, $1, valueNode, $3);
                    }
                    ;
            
exclusive_OR_expression : AND_expression {

                        $$ = createNode("exclusive_OR_expression", 1, $1);
                        }
                        | exclusive_OR_expression CARET AND_expression {
                            TreeNode *valueNode = createNode("^", 0);
                            $$ = createNode("exclusive_OR_expression", 3, $1, valueNode, $3);
                        }
                        ;

inclusive_OR_expression : exclusive_OR_expression {

                        $$ = createNode("inclusive_OR_expression", 1, $1);
                        }
                        | inclusive_OR_expression PIPE exclusive_OR_expression {
                            TreeNode *valueNode = createNode("|", 0);
                            $$ = createNode("inclusive_OR_expression", 3, $1, valueNode, $3);
                        }
                        ;

logical_AND_expression  : inclusive_OR_expression {

                        $$ = createNode("logical_AND_expression", 1, $1);
                        }
                        | logical_AND_expression LOGICAL_AND inclusive_OR_expression {
                            TreeNode *valueNode = createNode("&&", 0);
                            $$ = createNode("logical_AND_expression", 3, $1, valueNode, $3);
                        }
                        ;

logical_OR_expression   : logical_AND_expression {

                        $$ = createNode("logical_OR_expression", 1, $1);
                        }
                        | logical_OR_expression LOGICAL_OR logical_AND_expression {
                            TreeNode *valueNode = createNode("||", 0);
                            $$ = createNode("logical_OR_expression", 3, $1, valueNode, $3);
                        }
                        ;

conditional_expression  : logical_OR_expression {
                           $$ = createNode("conditional_expression", 1, $1);
                        }
                        | logical_OR_expression QUESTION expression COLON conditional_expression {
                            TreeNode *valueNode = createNode("?", 0);
                            TreeNode *valueNode2 = createNode(":", 0);
                            $$ = createNode("conditional_expression", 5, $1, valueNode, $3, valueNode2, $5);
                        }
                        ;

assignment_expression   : conditional_expression { $$ = createNode("assignment_expression", 1, $1); }
                        | unary_expression assignment_operator assignment_expression { 
                            
                            $$ = createNode("assignment_expression", 3, $1, $2, $3);
                        }
                        ;

assignment_operator     : ASSIGN {

                        $$ = createNode("assignment_operator", 1, createNode("=", 0));
                        }
                        | MULTIPLY_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("*=", 0));
                        }
                        | DIVIDE_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("/=", 0));
                        }
                        | MOD_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("%=", 0));
                        }
                        | PLUS_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("+=", 0));
                        }
                        | MINUS_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("-=", 0));
                        }
                        | LEFT_SHIFT_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("<<=", 0));
                        }
                        | RIGHT_SHIFT_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode(">>=", 0));
                        }
                        | AND_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("&=", 0));
                        }
                        | XOR_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("^=", 0));
                        }
                        | OR_ASSIGN {
                            $$ = createNode("assignment_operator", 1, createNode("|=", 0));
                        }
                        ;

expression  : assignment_expression { $$ = createNode("expression", 1, $1); }
            | expression COMMA assignment_expression { 
                TreeNode *valueNode = createNode(",", 0);
                $$ = createNode("expression", 3, $1, valueNode, $3);
            }
            ;

constant_expression : conditional_expression { $$ = createNode("constant_expression", 1, $1); }
                    ;



declaration : declaration_specifiers init_declarator_list_opt SEMICOLON {

                $$ = createNode("declaration", 3, $1, $2, createNode(";", 0));
            }
            ;

init_declarator_list_opt    : init_declarator_list { $$ = createNode("init_declarator_list_opt", 1, $1); }
                            | { $$ = createNode("init_declarator_list_opt", 1, createNode("(empty)", 0)); }
                            ;

declaration_specifiers  : storage_class_specifier declaration_specifiers_opt { $$ = createNode("declaration_specifiers", 2, $1, $2); }
                        | type_specifier declaration_specifiers_opt { $$ = createNode("declaration_specifiers", 2, $1, $2); }
                        | type_qualifier declaration_specifiers_opt { $$ = createNode("declaration_specifiers", 2, $1, $2); }
                        | function_specifier declaration_specifiers_opt { $$ = createNode("declaration_specifiers", 2, $1, $2); }
                        ;

declaration_specifiers_opt  : declaration_specifiers { $$ = createNode("declaration_specifiers_opt", 1, $1); }
                            | { $$ = createNode("declaration_specifiers_opt", 1, createNode("(empty)", 0)); }
                            ;

init_declarator_list: init_declarator_list COMMA init_declarator { $$ = createNode("init_declarator_list", 3, $1, createNode(",", 0), $3); }
                    | init_declarator { $$ = createNode("init_declarator_list", 1, $1); }
                    ;

init_declarator : declarator { $$ = createNode("init_declarator", 1, $1); }
                | declarator ASSIGN initializer { $$ = createNode("init_declarator", 3, $1, createNode("=", 0), $3); }
                ;

storage_class_specifier : EXTERN { $$ = createNode("storage_class_specifier", 1, createNode("extern", 0)); }
                        | STATIC { $$ = createNode("storage_class_specifier", 1, createNode("static", 0)); }
                        | AUTO {  $$ = createNode("storage_class_specifier", 1, createNode("auto", 0)); }
                        | REGISTER { $$ = createNode("storage_class_specifier", 1, createNode("register", 0)); }
                        ;

type_specifier  : VOID { $$ = createNode("type_specifier", 1, createNode("void", 0)); }
                | CHAR { $$ = createNode("type_specifier", 1, createNode("char", 0)); }
                | SHORT { $$ = createNode("type_specifier", 1, createNode("short", 0)); }
                | INT { $$ = createNode("type_specifier", 1, createNode("int", 0)); }
                | LONG { $$ = createNode("type_specifier", 1, createNode("long", 0)); }
                | FLOAT { $$ = createNode("type_specifier", 1, createNode("float", 0)); }
                | DOUBLE { $$ = createNode("type_specifier", 1, createNode("double", 0)); }
                | SIGNED { $$ = createNode("type_specifier", 1, createNode("signed", 0)); }
                | UNSIGNED { $$ = createNode("type_specifier", 1, createNode("unsigned", 0)); }
                | BOOL { $$ = createNode("type_specifier", 1, createNode("_Bool", 0)); }
                | COMPLEX { $$ = createNode("type_specifier", 1, createNode("_Complex", 0)); }
                | IMAGINARY { $$ = createNode("type_specifier", 1, createNode("_Imaginary", 0)); }
                ;    


specifier_qualifier_list    : type_specifier specifier_qualifier_list_opt { $$ = createNode("specifier_qualifier_list", 2, $1, $2); }
                            | type_qualifier specifier_qualifier_list_opt { $$ = createNode("specifier_qualifier_list", 2, $1, $2); }
                            ;

specifier_qualifier_list_opt    : specifier_qualifier_list { $$ = createNode("specifier_qualifier_list_opt", 1, $1); }
                                | { $$ = createNode("specifier_qualifier_list_opt", 1, createNode("(empty)", 0)); }
                                ;

type_qualifier  : CONST { $$ = createNode("type_qualifier", 1, createNode("const", 0)); }
                | RESTRICT { $$ = createNode("type_qualifier", 1, createNode("restrict", 0)); }
                | VOLATILE { $$ = createNode("type_qualifier", 1, createNode("volatile", 0)); }
                ;

function_specifier  : INLINE { $$ = createNode("function_specifier", 1, createNode("inline", 0)); }
                    ;

declarator  : pointer_opt direct_declarator { $$ = createNode("declarator", 2, $1, $2); }
            ;

pointer_opt : pointer { $$ = createNode("pointer_opt", 1, $1); }
            | { $$ = createNode("pointer_opt", 1, createNode("(empty)", 0)); }
            ;

direct_declarator   : IDENTIFIER { $$ = createNode("direct_declarator", 1, createNode($1, 0)); }
                    | PARANTHESIS_OPEN declarator PARANTHESIS_CLOSE { $$ = createNode("direct_declarator", 3, createNode("(", 0), $2, createNode(")", 0)); }
                    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt assignment_expression_opt SQ_BRACKET_CLOSE {
                        $$ = createNode("direct_declarator", 5, $1, createNode("[", 0), $3 , $4 , createNode("]", 0));
                    }
                    | direct_declarator SQ_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQ_BRACKET_CLOSE {
                        $$ = createNode("direct_declarator", 6, $1, createNode("[", 0), createNode("static", 0), $4 , $5 , createNode("]", 0));
                    }
                    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQ_BRACKET_CLOSE {
                        $$ = createNode("direct_declarator", 6, $1, createNode("[", 0), $3, createNode("static", 0), $5 , createNode("]", 0));
                    }
                    | direct_declarator SQ_BRACKET_OPEN type_qualifier_list_opt ASTERISK SQ_BRACKET_CLOSE {
                        $$ = createNode("direct_declarator", 5, $1, createNode("[", 0), $3, createNode("*", 0), createNode("]", 0));
                    }
                    | direct_declarator PARANTHESIS_OPEN parameter_type_list PARANTHESIS_CLOSE {
                        $$ = createNode("direct_declarator", 4, $1, createNode("(", 0), $3, createNode(")", 0));
                    }
                    | direct_declarator PARANTHESIS_OPEN identifier_list_opt PARANTHESIS_CLOSE {
                        $$ = createNode("direct_declarator", 4, $1, createNode("(", 0), $3, createNode(")", 0));
                    }
                    ;

type_qualifier_list_opt : type_qualifier_list { $$ = createNode("type_qualifier_list_opt", 1, $1); }
                        | { $$ = createNode("type_qualifier_list_opt", 1, createNode("(empty)", 0)); }
                        ;

assignment_expression_opt   : assignment_expression { $$ = createNode("assignment_expression_opt", 1, $1); }
                            | { $$ = createNode("assignment_expression_opt", 1, createNode("(empty)", 0)); }
                            ;

identifier_list_opt : identifier_list { $$ = createNode("identifier_list_opt", 1, $1); }
                    | { $$ = createNode("identifier_list_opt", 1, createNode("(empty)", 0)); }
                    ;

pointer : ASTERISK type_qualifier_list_opt { $$ = createNode("pointer", 2, createNode("*", 0), $2); }
        | ASTERISK type_qualifier_list_opt pointer { $$ = createNode("pointer", 3, createNode("*", 0), $2, $3); }
        ;

type_qualifier_list : type_qualifier { $$ = createNode("type_qualifier_list", 1, $1); }
                    | type_qualifier_list type_qualifier { $$ = createNode("type_qualifier_list", 2, $1, $2); }
                    ;

parameter_type_list : parameter_list { $$ = createNode("parameter_type_list", 1, $1); }
                    | parameter_list COMMA ELLIPSIS { $$ = createNode("parameter_type_list", 3, $1, createNode(",", 0), createNode("...", 0)); }
                    ;

parameter_list  : parameter_declaration { $$ = createNode("parameter_list", 1, $1); }
                | parameter_list COMMA parameter_declaration { $$ = createNode("parameter_list", 3, $1, createNode(",", 0), $3); }
                ;

parameter_declaration   : declaration_specifiers declarator { $$ = createNode("parameter_declaration", 2, $1, $2); }
                        | declaration_specifiers { $$ = createNode("parameter_declaration", 1, $1); }
                        ;

identifier_list : IDENTIFIER { $$ = createNode("identifier_list", 1, createNode($1, 0)); }
                | identifier_list COMMA IDENTIFIER { $$ = createNode("identifier_list", 3, $1, createNode(",", 0), createNode($3, 0)); }
                ;

type_name   : specifier_qualifier_list { $$ = createNode("type_name", 1, $1); }
            ;

initializer : assignment_expression { $$ = createNode("initializer", 1, $1); }
            | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE { $$ = createNode("initializer", 3, createNode("{", 0), $2, createNode("}", 0)); }
            | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE { $$ = createNode("initializer", 4, createNode("{", 0), $2, createNode(",", 0), createNode("}", 0)); }
            ;

initializer_list    : designation_opt initializer { $$ = createNode("initializer_list", 2, $1, $2); }
                    | initializer_list COMMA designation_opt initializer { $$ = createNode("initializer_list", 4, $1, createNode(",", 0), $3, $4); }
                    ;

designation_opt : designation { $$ = createNode("designation_opt", 1, $1); }
                | { $$ = createNode("designation_opt", 1, createNode("(empty)", 0)); }
                ;

designation : designator_list ASSIGN { $$ = createNode("designation", 2, $1, createNode("=", 0)); }
            ;

designator_list : designator { $$ = createNode("designator_list", 1, $1); }
                | designator_list designator { $$ = createNode("designator_list", 2, $1, $2); }
                ;

designator  : SQ_BRACKET_OPEN constant_expression SQ_BRACKET_CLOSE { $$ = createNode("designator", 3, createNode("[", 0), $2, createNode("]", 0)); }
            | PERIOD IDENTIFIER { $$ = createNode("designator", 2, createNode(".", 0), createNode($2, 0)); }
            ;

statement   : labeled_statement { $$ = createNode("statement", 1, $1); }
            | compound_statement { $$ = createNode("statement", 1, $1); }
            | expression_statement { $$ = createNode("statement", 1, $1); }
            | selection_statement { $$ = createNode("statement", 1, $1); }
            | iteration_statement { $$ = createNode("statement", 1, $1); }
            | jump_statement {  $$ = createNode("statement", 1, $1); }
            ;

labeled_statement   : IDENTIFIER COLON statement { $$ = createNode("labeled_statement", 3, createNode($1, 0), createNode(":", 0), $3); }
                    | CASE constant_expression COLON statement { $$ = createNode("labeled_statement", 4, createNode("case", 0), $2, createNode(":", 0), $4); }
                    | DEFAULT COLON statement { $$ = createNode("labeled_statement", 3, createNode("default", 0), createNode(":", 0), $3); }
                    ;

compound_statement  : CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE {

                        $$ = createNode("compound_statement", 3, createNode("{", 0), $2, createNode("}", 0));
                    }
                    ;

block_item_list_opt : block_item_list { $$ = createNode("block_item_list_opt", 1, $1); }
                    | { $$ = createNode("block_item_list_opt", 1, createNode("(empty)", 0)); }
                    ;

block_item_list : block_item { $$ = createNode("block_item_list", 1, $1); }
                | block_item_list block_item { $$ = createNode("block_item_list", 2, $1, $2); }
                ;

block_item  : declaration { $$ = createNode("block_item", 1, $1); }
            | statement { $$ = createNode("block_item", 1, $1); }
            ;

expression_statement    : expression_opt SEMICOLON { $$ = createNode("expression_statement", 2, $1, createNode(";", 0)); }
                        ;

expression_opt  : expression { $$ = createNode("expression_opt", 1, $1); }
                | { $$ = createNode("expression_opt", 1, createNode("(empty)", 0)); }
                ;

selection_statement : IF PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement { $$ = createNode("selection_statement", 5, createNode("if", 0), createNode("(",0), $3, createNode(")", 0), $5); }
                    | IF PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement ELSE statement { $$ = createNode("selection_statement", 7, createNode("if", 0), createNode("(",0), $3, createNode(")",0) ,$5 , createNode("else", 0), $7); }
                    | SWITCH PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {
                        $$ = createNode("selection_statement", 4, createNode("switch", 0), createNode("(",0), $3, createNode(")", 0), $5);
                    }
                    ;

iteration_statement : WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE statement {

                        $$ = createNode("iteration_statement", 4, createNode("while", 0), createNode("(",0), $3, createNode(")", 0), $5);
                    }
                    | DO statement WHILE PARANTHESIS_OPEN expression PARANTHESIS_CLOSE SEMICOLON {
                        $$ = createNode("iteration_statement", 6, createNode("do", 0), $2, createNode("while", 0), createNode("(",0), $5, createNode(")", 0), createNode(";", 0));
                    }
                    | FOR PARANTHESIS_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt PARANTHESIS_CLOSE statement {
                        $$ = createNode("iteration_statement", 9, createNode("for", 0), createNode("(",0), $3, createNode(";", 0), $5, createNode(";", 0), $7, createNode(")", 0), $9);
                    }
                    | FOR PARANTHESIS_OPEN declaration expression_opt SEMICOLON expression_opt PARANTHESIS_CLOSE statement {
                        $$ = createNode("iteration_statement", 8, createNode("for", 0), createNode("(",0), $3, $4, createNode(";", 0), $6, createNode(")", 0), $8);
                    }
                    ;

jump_statement  : GOTO IDENTIFIER SEMICOLON {

                    $$ = createNode("jump_statement", 3, createNode("goto", 0), createNode($2, 0), createNode(";", 0));
                }
                | CONTINUE SEMICOLON { $$ = createNode("jump_statement", 2, createNode("continue", 0), createNode(";", 0)); }
                | BREAK SEMICOLON { $$ = createNode("jump_statement", 2, createNode("break", 0), createNode(";", 0)); }
                | RETURN expression_opt SEMICOLON { $$ = createNode("jump_statement", 3, createNode("return", 0), $2, createNode(";", 0)); }
                ;



translation_unit    : external_declaration { $$ = createNode("translation_unit", 1, $1); }
                    | translation_unit external_declaration { $$ = createNode("translation_unit", 2, $1, $2); }
                    ;

external_declaration    : function_definition { $$ = createNode("external_declaration", 1, $1); }
                        | declaration { $$ = createNode("external_declaration", 1, $1); }
                        ;

function_definition : declaration_specifiers declarator declaration_list_opt compound_statement {

                        $$ = createNode("function_definition", 4, $1, $2, $3, $4);
                    }
                    ;

declaration_list_opt    : declaration_list { $$ = createNode("declaration_list_opt", 1, $1); }
                        | { $$ = createNode("declaration_list_opt", 1, createNode("(empty)", 0)); }
                        ;

declaration_list    : declaration { $$ = createNode("declaration_list", 1, $1); }
                    | declaration_list declaration { $$ = createNode("declaration_list", 2, $1, $2); }
                    ;
%%


void yyerror(char *s) {
    printf("ERROR: %s\n\t\t at line: %d\n\tnear \" %s \"\n", s, yylineno, yytext);
}