/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removenode(struct ListNode *head,int *present,int target){
    if(head==NULL){
        *present =1;
        return NULL;
    }
    struct ListNode *p,*q;
    p=removenode(head->next,present,target);
    if(*present==target){
        *present+=1;
        q=head->next;
        free(head);
        return q;
    }
    if(*present==(target+1)){
        *present+=1;
        head->next=p;
        return head;
    }
    *present+=1;
    return head;    
} 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int present=0;
    if(head->next==NULL)
        return NULL;   
    head=removenode(head,&present,n);
    return head;
}