#include <stdio.h>
extern int yyparse();

int main() {
    printf("\n----------- Parsing Line Number 1 -----------\n");
    yyparse();
    return 0;
}