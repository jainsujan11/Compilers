#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "header.h"
extern int yyparse();
TreeNode* root = NULL; 
// Function to create a new node
TreeNode* createNode(char *symbol) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));
    node->symbol = strdup(symbol);  
    node->children = NULL; 
    node->numChildren = 0;  
    return node;  
}

// Function to add a child node to an existing parent node
void addChild(TreeNode *parent, TreeNode *child) {
    if (parent == NULL || child == NULL) return; 
    parent->children = (TreeNode **) realloc(parent->children, (parent->numChildren + 1) * sizeof(TreeNode *));    
    parent->children[parent->numChildren] = child;    
    parent->numChildren++;
}

// Function to print the parse tree
void printParseTree(TreeNode *node, int indent) {
    if (node == NULL) return; 
    for (int i = 0; i < indent; i++) {
        printf("  ");  
    }
    printf("└── %s\n", node->symbol);
    for (int i = 0; i < node->numChildren; i++) {
        printParseTree(node->children[i], indent + 1);  
    }
}

int main() {
    printf("----------- Parse Tree -----------\n");
    yyparse();
    printParseTree(root, 0);
    return 0;
}