/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int left(struct TreeNode* root,int *x){
    int x1=0,x2=0,c1,c2;
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL){
        *x=1;
        return root->val;
    }
    c1=left(root->left,&x1);
    c2=left(root->right,&x2);
    if(x2==1)
        return c1;
    return c1+c2;    
} 
int sumOfLeftLeaves(struct TreeNode* root) {
    int x=0,z;
    if(root==NULL || root->left==NULL && root->right==NULL)
        return 0;
    z=left(root,&x);
    return z;
}