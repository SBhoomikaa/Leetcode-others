/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxi(int *nums,int numsSize){
    if(numsSize==1)
        return 0;
    int max=0;
    for(int i=1;i<numsSize;i++)
        if(nums[i]>nums[max])
            max=i;
    return max;            
} 
struct TreeNode* getnode(int num){
    struct TreeNode *p=NULL;
    p=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    p->val=num;
    p->right=NULL;
    p->left=NULL;
    return p;
}
struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
    struct TreeNode *root=NULL;
    if(numsSize==0)
        return NULL;
    if(numsSize==1){
        root=getnode(nums[0]);
        return root;
    }
    int max=maxi(nums,numsSize);
    root=getnode(nums[max]);
    root->left=constructMaximumBinaryTree(nums,max);
    root->right=constructMaximumBinaryTree(nums+max+1,numsSize-max-1);
    return root;
}