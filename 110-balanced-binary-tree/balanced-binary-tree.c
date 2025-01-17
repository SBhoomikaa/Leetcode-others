/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int bf(struct TreeNode* root,bool* x){
    int c1,c2,d;
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;    
    c1=bf(root->left,x)+1;
    c2=bf(root->right,x)+1;
    d=c1-c2;
    if(d!=0 && d!=1 && d!=-1)
        *x=false;
    if(c1>=c2)
        return c1;
    else 
        return c2;       
}
bool isBalanced(struct TreeNode* root) {
 bool x=true;
if(root==NULL)
    return true;
bf(root,&x);
return x;
}