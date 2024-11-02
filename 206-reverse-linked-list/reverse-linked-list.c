/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {//recursion
    if(head==NULL || head->next==NULL)
    return head;
    else{
    
    struct ListNode *a=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;

   /* struct ListNode *p; //iteration
    struct ListNode *q;
    struct ListNode *r=NULL;
    p=head;
    q=p;
    if(p!=NULL)
    r=p->next;
    while(p!=NULL && r!=NULL)
    {
        q=p;
        p=r; 
        r=p->next;
        p->next=q;
    }
    if(head!=NULL)
    head->next=NULL;*/
    return a;
    }
}
