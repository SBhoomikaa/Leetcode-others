/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getnode(){
    struct ListNode *p=NULL;
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->next=NULL;
    return p;
}
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p=l1,*q=l2,*r=NULL,*head=p;
    if(p==NULL ||q==NULL)
        return ((p==NULL)?q:p);
    if(p->val<=q->val) head=p;
    else head=q;
    while(p!=NULL && q!=NULL){
        if(p->val<=q->val){
            while(p->next!=NULL){
                if(p->next->val<=q->val)
                    p=p->next;
                else
                    break;    
            }
            r=p->next;
            p->next=q;
            p=r;
        }
        else{
            while(q->next!=NULL){
                if(q->next->val<p->val)
                    q=q->next;
                else
                    break;    
            }
            r=q->next;
            q->next=p;
            q=r;
        }
    }
    return head;
}