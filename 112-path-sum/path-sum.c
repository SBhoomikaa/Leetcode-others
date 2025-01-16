/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool pathsum(struct TreeNode* root,int targetSum){
    bool c1,c2;
    if(root==NULL)
        return false;   
    if(root->left==NULL && root->right==NULL){
        return(targetSum==root->val);    
    }
    c1=pathsum(root->left,targetSum-(root->val));
    c2=pathsum(root->right,targetSum-(root->val));
    return c1||c2;
} 
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if(root==NULL)
        return false;
    return(pathsum(root,targetSum));    

}