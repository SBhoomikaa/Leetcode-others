/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p,*q,*r;
    int carry=0;
    p=l1;
    q=l2;
    while(1){
        q->val=q->val+p->val+carry;
        if(q->val>=10)
        {
            carry=q->val/10;
            q->val=q->val%10;
        }
        else
        carry=0;
        if(p->next==NULL || q->next==NULL)
        break;
        q=q->next;
        p=p->next;
    }
    if(q->next==NULL && p->next==NULL){
        if(carry)
        {
            q->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            q=q->next;
            q->val=carry;
            q->next=NULL;
        }
        return l2;
    }
    else{
        if(p->next==NULL){
        q=q->next;
        do{
            q->val=q->val+carry;
           carry=q->val/10;
           q->val=q->val%10;
           r=q;
           q=q->next;
        }while(carry && q!=NULL);
        if(q==NULL && carry)
        {
            r->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            r=r->next;
            r->val=carry;
           r->next=NULL;
        }
        }
        else
        {
            p=p->next;
            q->next=p;
            do{
            p->val=p->val+carry;
           carry=p->val/10;
           p->val=p->val%10;
           r=p;
           p=p->next;
        }while(carry && p!=NULL);
        if(p==NULL && carry)
        {
            r->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            r=r->next;
            r->val=carry;
            r->next=NULL;
        }
        }
        return l2;
    }
}