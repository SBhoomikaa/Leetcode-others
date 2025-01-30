/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int Inordersucc(struct TreeNode* root){
    struct TreeNode *p=root;
    while(p->left!=NULL)
        p=p->left;
    return p->val;    
} 
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    int x;
    struct TreeNode *p=NULL;
    if(root==NULL)
        return NULL;
    if(key>root->val)
        root->right=deleteNode(root->right,key);
    else if(key<root->val)
        root->left=deleteNode(root->left,key);
    if(key==root->val){
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        else if(root->left==NULL){
            p=root->right;
            free(root);
            return p;
        }
        else if(root->right==NULL){
            p=root->left;
            free(root);
            return p;
        }
        else{
            p=root->right;
            x=Inordersucc(p);
            root->val=x;
            root->right=deleteNode(p,x);
        }
    }            
    return root;
}