#include <stdio.h>
#include "node.h"
#include <stdlib.h>

int maxAncestorDiff(struct TreeNode* root) {

    return 0;
}

struct TreeNode* genTree(int* arr, int size) {
    return genHelper(arr, 0, size);
}

struct TreeNode* genHelper(int* arr, int curr, int size) {
    struct TreeNode* node = NULL;

    if (curr >= size)
	return node;

    node = malloc(sizeof(struct TreeNode*));
    node->val = arr[curr];
    node->left = genHelper(arr, 2*curr + 1, size);
    node->right = genHelper(arr, 2*curr + 2, size);
    
    return node;
}

void printTree(struct TreeNode* root) {
    if (root) {
	printf("%d ", root->val);
	printTree(root->left);
	printTree(root->right);
    }
}
	
void freeAll(struct TreeNode* root) {
    if (root) {
	freeAll(root->left);
	freeAll(root->right);
	free(root);
    }
}
