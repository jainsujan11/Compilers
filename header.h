// Structure for tree nodes
typedef struct TreeNode {
    char *symbol;            
    struct TreeNode **children; 
    int numChildren;         
} TreeNode;
TreeNode* createNode(char *);
void addChild(TreeNode*, TreeNode*);
void printParseTree(TreeNode*, int);