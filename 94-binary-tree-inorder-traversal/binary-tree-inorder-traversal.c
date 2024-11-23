/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//recursive
void preorderHelper(struct TreeNode* root, int* result, int* returnSize) {
    if (!root) return;
    preorderHelper(root->left, result, returnSize);
    result[(*returnSize)++] = root->val;
    preorderHelper(root->right, result, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0; 
    if (!root) 
    return NULL;
    int* result = (int*)malloc(100 * sizeof(int)); 
    preorderHelper(root, result, returnSize);
    return result;
}