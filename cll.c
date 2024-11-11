#include<stdio.h>
#include<stdlib.h>
struct node{
    int x;
    struct node *next;
};
typedef struct node NODE;
NODE* getnode(){
    NODE *r=NULL;
    r=(NODE*)malloc(sizeof(NODE));
    if(r==NULL)
    return -1;
    r->next=NULL;
    return r;
}
NODE* insertLast(NODE *p,int x){
    NODE *r,*q=p;
    r=getnode();
    r->x=x;
    if(p==NULL)
    {
        r->next=r;
        return r;
    }
    while(q->next!=p)
    q=q->next;
    r->next=q->next;
    q->next=r;
    return p;
}
NODE* insertfirst(NODE *p,int x){
    NODE *r=NULL,*q=p;
    r=getnode();
    r->x=x;
    if(p==NULL)
    {
        r->next=r;
        return r;
    }
    r->next=p;
    while(q->next!=p)
    q=q->next;
    q->next=r;
    return r;
}
int deleteLast(NODE *p){
    NODE *q=p,*r=NULL;
    int x;
    if(p==NULL){
        printf("Empty CLL...\n");
        return -1;
    }
    if(p->next==p)
    return p->x;
    while(q->next->next!=p)
    q=q->next;
    r=q->next;
    q->next=q->next->next;
    x=r->x;
    free(r);
    return x;
}
NODE* deletefirst(NODE *p){
    int x;
    NODE *q=p,*r;
    if(p==NULL){
        printf("Empty CLL...\n");
        return NULL;
    }
    x=p->x;
    if(p->next==p){
        free(p);
        printf("\n%d\n",x);
    return NULL;}
    while(q->next!=p)
    q=q->next;
    r=p->next;
    q->next=r;
    free(p);
    printf("\n%d\n",x);
    return r;
}
void display(NODE *p){
    NODE *q=p;
    if(p==NULL){
        printf("Empty..nothing to be displayed:(");
        return;
    }
    printf("\n");
    while(q->next!=p){
        printf("%d\t",q->x);
        q=q->next;
    }
    printf("%d\t",q->x);
    return;
}
void main(){
    int x,i;
    NODE *r=NULL;
    printf("Choose operation:");
    while(1){
    printf("\n1.Insert First\n2.Insert Last\n3.Delete first\n4.Delete Last\n5.Display\n");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("\nEnter value:");
        scanf("%d",&i);
        r=insertfirst(r,i);
        break;
        case 2:printf("\nEnter value:");
        scanf("%d",&i);
        r=insertLast(r,i);
        break;
        case 3:r=deletefirst(r);
        break;
        case 4:i=deleteLast(r);
        printf("\n%d\n",i);
        break;
        case 5:
        display(r);
        break;
        default:exit(0);
    }}
     return;
    }
   
