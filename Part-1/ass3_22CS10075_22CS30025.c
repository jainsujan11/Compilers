/*
    C File for Assignment 3
    Author: 22CS10075
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KEYWORD 1
#define IDENTIFIER 2
#define CONSTANT 3
#define STRING_LITERAL 4
#define PUNCTUATOR 5
#define SINGLE_LINE_START 6
#define SINGLE_LINE_END 7
#define MULTI_LINE_START 8
#define MULTI_LINE_END 9
typedef struct _node {
	char *token_name;
	char *value;
	struct _node *next;
} node;
typedef node *symboltable;

symboltable addtbl ( symboltable T,char* token, char *id )
{
	node *p;
	p = T;
	while (p) {
		if (!strcmp(p->value,id)) {
			return T;
		}
		p = p -> next;
	}
	p = (node *)malloc(sizeof(node));
	// copy the token name
	p -> token_name = (char *)malloc((strlen(token)+1) * sizeof(char));
	strcpy(p -> token_name, token);
	// copy the value
	p -> value = (char *)malloc((strlen(id)+1) * sizeof(char));
	strcpy(p -> value, id);
	p -> next = T;
	return p;
}

extern int yylex();
extern char *yytext;

int main() {
	int token = 0;
	symboltable SYM_TABLE = NULL;
	printf("\t***** CONTENTS of TOKENS *****\n");
	while(token = yylex()) {
		switch(token) {
			case KEYWORD: 
				printf("<KEYWORD, %s>\n", yytext); 
				break;
			case IDENTIFIER: 
				printf("<IDENTIFIER, %s>\n", yytext); 
				SYM_TABLE = addtbl(SYM_TABLE,"IDENTIFIER",yytext);
				break;
			case CONSTANT: 
				printf("<CONSTANT, %s>\n", yytext); 
				SYM_TABLE = addtbl(SYM_TABLE,"CONSTANT",yytext);
				break;
			case STRING_LITERAL: 
				printf("<STRING_LITERAL, %s>\n", yytext); 
				SYM_TABLE = addtbl(SYM_TABLE,"STRING_LITERAL",yytext);
				break;
			case PUNCTUATOR: 
				printf("<PUNCTUATOR, %s>\n", yytext); 
				SYM_TABLE = addtbl(SYM_TABLE,"PUNCTUATOR",yytext);
				break;
			case MULTI_LINE_START:
				break;
			case MULTI_LINE_END: 
				printf("<MULTI_LINE_COMMENT>\n");  
				break;
			case SINGLE_LINE_START:  
				break;
			case SINGLE_LINE_END: 
				printf("<SINGLE_LINE_COMMENT>\n"); 
				break;
			default:
				printf("<INVALID_TOKEN, %s>\n", yytext);
				break;
		}
	}
	// print all the symbol tables
	node *p = SYM_TABLE;
	printf("\n\t***** CONTENTS of SYMBOL TABLE *****\n");
	printf("\n%-20s %-20s\n", "Token Name", "ID Value");  
	printf("-----------------------------------------\n"); 

	while (p) {
		printf("%-20s %-20s\n", p->token_name, p->value);  
		p = p->next;
	}

	printf("-----------------------------------------\n");
	return 0;
}