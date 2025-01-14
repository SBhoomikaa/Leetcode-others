/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;   
    struct ListNode *p,*q;
    p=head->next;
    q=head;
    int temp;
    while(1){
        temp=q->val;
        q->val=p->val;
        p->val=temp;
        if(p->next==NULL || p->next->next==NULL)
            break;
        q=p->next;
        p=p->next->next;    
    }
    return head;    
}