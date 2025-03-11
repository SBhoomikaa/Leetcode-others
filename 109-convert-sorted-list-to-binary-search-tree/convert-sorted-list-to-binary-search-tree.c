struct TreeNode* sort(struct ListNode* head,int count){
    struct TreeNode *p=NULL;
    if(count==0)
        return NULL;
    p=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    if(p==NULL)
        return NULL;
    p->left=NULL;
    p->right=NULL;
    if(count==1){
        p->val=head->val;
        return p;
    }
    struct ListNode *q=head;
    int c=0;
    while(c<(count/2) && q->next!=NULL){
        q=q->next;
        c++;
    }
    p->val=q->val;
    p->left=sort(head,c);
    p->right=sort(q->next,count-c-1);
    return p;
} 

struct TreeNode* sortedListToBST(struct ListNode* head) {
    if(head==NULL)
        return NULL;
    int count=0;
    struct ListNode *p=head;
    while(p!=NULL){
        p=p->next;
        count++;
    }
    return sort(head,count);
}
