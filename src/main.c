#include <stdio.h>
#include "node.h"

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};

    struct TreeNode* root = genTree(arr1, 0, 5);

    return 0;
}
