#include <stdio.h>
#include<malloc.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>


typedef struct TreeNode {
    char *symbol;  
    struct TreeNode **children;  
    int numChildren;  
} TreeNode;

// Function to create a new tree node with a symbol and variable number of children
TreeNode* createNode(char *symbol, int numChildren, ...) {
    // Allocate memory for the new node
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));
    node->symbol = strdup(symbol);  // Duplicate the symbol string
    node->numChildren = numChildren;  // Set the number of children

    if (numChildren > 0) {
        // Allocate memory for the children array
        node->children = (TreeNode **) malloc(numChildren * sizeof(TreeNode *));
        
        // Initialize a variadic argument list to retrieve the children
        va_list args;
        va_start(args, numChildren);
        for (int i = 0; i < numChildren; i++) {
            // Get each child from the argument list
            node->children[i] = va_arg(args, TreeNode *);
        }
        va_end(args);  // Clean up the argument list
    } else {
        // If no children, set children to NULL
        node->children = NULL;
    }

    return node;  // Return the newly created node
}

// Function to add a child node to an existing parent node
void addChild(TreeNode *parent, TreeNode *child) {
    if (parent == NULL || child == NULL) return;  // Check for null parent or child

    // Reallocate memory for the new child
    parent->children = (TreeNode **) realloc(parent->children, (parent->numChildren + 1) * sizeof(TreeNode *));
    
    // Add the new child to the end of the array
    parent->children[parent->numChildren] = child;
    
    // Increment the number of children
    parent->numChildren++;
}
// Function to recursively print the parse tree
void printParseTree(TreeNode *node, int indent) {
    if (node == NULL) return;  // Check for null node

    // Print the current node with the appropriate indentation
    for (int i = 0; i < indent; i++) {
        printf("  ");  // Indentation
    }
    printf("%s\n", node->symbol);  // Print the symbol of the current node

    // Recursively print each child
    for (int i = 0; i < node->numChildren; i++) {
        printParseTree(node->children[i], indent + 1);  // Increase the indentation for children
    }
}
