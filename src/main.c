#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main() {
    int arr1[7] = {1, 2, 3, 6, 7, 4, 5};

    struct TreeNode* root = genTree(arr1, 7);

    printTree(root);

    freeAll(root);

    return 0;
}
