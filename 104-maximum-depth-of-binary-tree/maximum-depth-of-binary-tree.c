/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int c1,c2;
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    c1=maxDepth(root->left)+1;
    c2=maxDepth(root->right)+1;
    if(c1>c2)
        return c1;
    else 
        return c2;    

}