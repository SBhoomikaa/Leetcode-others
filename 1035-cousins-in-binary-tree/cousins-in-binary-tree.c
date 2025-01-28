/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int depth(struct TreeNode* root,int x,int *parent){
    int c1,c2,h;
    if(root==NULL)
        return 0;
    if(root->val==x)
        return 1;
    c1=depth(root->left,x,parent);
    c2=depth(root->right,x,parent);
    if(c1==0 && c2==0)
        return 0;
    if(c1==1 || c2==1)
        *parent=root->val;    
    h=(c1!=0)?(c1+1):(c2+1);            
    return h;
} 
bool isCousins(struct TreeNode* root, int x, int y) {
    int h1,h2,p1,p2;
    h1=depth(root,x,&p1);
    h2=depth(root,y,&p2);
    if(h1==h2 && p1!=p2)
        return true;
    else
        return false;
}