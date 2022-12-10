#include <stdio.h>
#include "node.h"

int maxAncestorDiff(struct TreeNode* root) {

    return 0;
}

struct TreeNode* genTree(int* arr, int curr, int size) {
    struct TreeNode* node = NULL;

    if (curr >= size)
	return node;

    node = malloc(sizeof(struct TreeNode*));
    node->val = arr[curr];
    node->left = genTree(arr, 2*curr + 1, size);
    node->right = genTree(arr, 2*curr + 2, size);
    
    return node;
}
