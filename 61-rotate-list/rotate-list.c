/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    int b, i;
    struct ListNode *l = head, *q=head;
    /*for(i=0;i<k;i++)
     {
         l=head;
         if(head==NULL|| head->next==NULL)
             return head;
         q=head;
         a=head->val;
         while(l!=NULL) {
             b=a;
             l=l->next;
             if(l==NULL)
             break;
             a=l->val;
             l->val=b;
         }
         head->val=a;
     }
     return head;
 }*/
    int* c = NULL;
    if (head == NULL || head->next == NULL || k == 0)
        return head;
    c = (int*)malloc(500 * sizeof(int));
    i = 0;
    while (l != NULL) {
        c[i] = l->val;
        i++;
        l = l->next;
    }
    printf("%d",i);
    c = (int*)realloc(c, i * sizeof(int));
    q = head;
    b = 0;
    k = k % i;
    while (q != NULL) {
        q->val = c[(i - k + b) % i];
        b++;
        q = q->next;
    }
    free(c);
    return head;
}