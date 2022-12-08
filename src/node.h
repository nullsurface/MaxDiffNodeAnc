struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Return the max diffrence between a node and one of its ancestors
int maxAncestorDiff(struct TreeNode* root);
