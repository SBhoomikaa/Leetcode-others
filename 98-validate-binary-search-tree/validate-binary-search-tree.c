/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool bst(struct TreeNode* root,long int min,long int max){
    bool c1,c2,c3;
    if(root==NULL) 
        return true;
    c1=(root->val>min && root->val<max);
    c2=bst(root->left,min,root->val);
    c3=bst(root->right,root->val,max);
    return c1 && c2 && c3;    
 }
bool isValidBST(struct TreeNode* root) {
    if(root->left==NULL && root->right==NULL)
        return true;
    return bst(root,-pow(2,32),pow(2,32));
}