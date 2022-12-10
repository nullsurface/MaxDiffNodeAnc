struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Return the max diffrence between a node and one of its ancestors
int maxAncestorDiff(struct TreeNode*);

// Generates a tree based on an input array, size of array > 0
struct TreeNode* genTree(int*, int, int);
