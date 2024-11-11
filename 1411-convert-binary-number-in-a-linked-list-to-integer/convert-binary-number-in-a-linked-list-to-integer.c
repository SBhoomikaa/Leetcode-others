/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode *q=head;
    int count=0,x=0;
    while(q!=NULL){
        count++;
        q=q->next;
    }
    q=head;
    while(q!=NULL && count>0){
        x=x+(pow(2,count-1))*q->val;
        q=q->next;
        count--;
    }
    return x;
}