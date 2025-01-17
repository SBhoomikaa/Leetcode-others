/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    struct TreeNode *p=NULL,*q=NULL;
    if(numsSize<=0)
        return NULL;
    p=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    if(numsSize==1){
        p->val=nums[0];
        p->left=NULL;
        p->right=NULL;
        return p;
    }
    int i=numsSize/2;
    p->val=nums[i];
    p->left=sortedArrayToBST(nums,i);
    p->right=sortedArrayToBST((nums+i+1),(numsSize-i-1));
        
    return p;
}