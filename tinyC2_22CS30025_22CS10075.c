#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "header.h"
extern int yyparse();
TreeNode* root = NULL; 
TreeNode* createNode(char *symbol) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));
    node->symbol = strdup(symbol);  
    
    node->children = NULL;  // Initially, there are no children
    node->numChildren = 0;  // Set the number of children to 0
    
    return node;  // Return the newly created node
}

// Function to add a child node to an existing parent node
void addChild(TreeNode *parent, TreeNode *child) {
    if (parent == NULL || child == NULL) return;  // Check for null parent or child

    // Reallocate memory to increase the size of the children array by 1
    parent->children = (TreeNode **) realloc(parent->children, (parent->numChildren + 1) * sizeof(TreeNode *));
    
    // Add the new child to the array
    parent->children[parent->numChildren] = child;
    
    // Increment the count of children in the parent node
    parent->numChildren++;
}
// Function to recursively print the parse tree (with indentation)
void printParseTree(TreeNode *node, int indent) {
    if (node == NULL) return;  // Check for null node

    // Print the current node with the appropriate indentation
    for (int i = 0; i < indent; i++) {
        printf("  ");  // Indentation
    }
    printf("%s\n", node->symbol);  // Print the symbol of the current node

    // Recursively print each child node
    for (int i = 0; i < node->numChildren; i++) {
        printParseTree(node->children[i], indent + 1);  // Increase the indentation for children
    }
}

int main() {
    printf("\n----------- Parsing Line Number 1 -----------\n");
    yyparse();
    printParseTree(root, 0);
    return 0;
}