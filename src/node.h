#ifndef NODEH
#define NODEH

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Return the max diffrence between a node and one of its ancestors
int maxAncestorDiff(struct TreeNode*);

// Wrapper function for genTree
struct TreeNode* genHelper(int*, int, int);

// Generates a tree based on an input array, size of array > 0
struct TreeNode* genTree(int*, int);

// Print tree 
void printTree(struct TreeNode*);

// Free all nodes in tree 
void freeAll(struct TreeNode*);

#endif
