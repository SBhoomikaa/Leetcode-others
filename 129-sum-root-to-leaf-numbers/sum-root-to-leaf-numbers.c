/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum(struct TreeNode* root,int n){
    if(root==NULL)
        return 0;
    if(root->right==NULL && root->left==NULL)
        return (n*10+(root->val));    
    int s1,s2;
    s1=sum(root->left,(n*10+(root->val)));
    s2=sum(root->right,(n*10+(root->val)));
    return s1+s2;
} 
int sumNumbers(struct TreeNode* root) {
    if(root->right==NULL && root->left==NULL)
        return root->val;
    int s;
    s=sum(root,0);     
    return s;
}