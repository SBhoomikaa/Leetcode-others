/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return root;
    struct TreeNode *p,*q;
    p=root->right;
    q=root->left;    
    root->left=invertTree(p);
    root->right=invertTree(q);
    return root;    
}