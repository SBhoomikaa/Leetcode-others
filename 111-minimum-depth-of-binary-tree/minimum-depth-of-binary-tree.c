/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    int c1,c2;
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    c1=minDepth(root->left)+1;
    c2=minDepth(root->right)+1;
    if(c1<c2)
        if(c1>1)
            return c1;
        else
            return c2;    
    else
        if(c2>1)
            return c2;      
        else
            return c1; 
}