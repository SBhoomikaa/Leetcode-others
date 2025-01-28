/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* flat(struct TreeNode *root){
    if(root==NULL ||(root->left==NULL && root->right==NULL))
        return root;
    struct TreeNode *p,*q,*l,*r;
    p=flat(root->left);
    q=flat(root->right);
    if(p==NULL)
        return q;
    l=root->left;
    r=root->right;
    root->left=NULL;
    root->right=l;
    p->right=r;
    if(!q)
        return p;
    return q;        
} 
void flatten(struct TreeNode* root) {
 if(root==NULL || (root->right==NULL && root->left==NULL))
    return;
flat(root);
}