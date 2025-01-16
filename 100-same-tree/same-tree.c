/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    bool a,b,c;
    if(p==NULL && q==NULL)
        return true;
    if(p==NULL || q==NULL)
        return false;
    a=isSameTree(p->left,q->left);
    b=isSameTree(p->right,q->right);
    c=(p->val == q->val);
    return a && b && c;        

}