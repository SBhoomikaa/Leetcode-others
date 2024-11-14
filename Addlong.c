#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct t{
    int arr[5];
    struct t *next;
};
typedef struct t NODE;
NODE* node;
NODE* getnode(){
    NODE *r=NULL;
    r=(NODE*)malloc(sizeof(NODE));
    if(r==NULL)
    return NULL;
    r->next=NULL;
    return r;
}
NODE* insertlast(NODE *p){
    NODE *r,*q=p;
    r=getnode();
    if(p==NULL)
    {
        r->next=NULL;
        return r;
    }
    while(q->next!=NULL)
    q=q->next;
    q->next=r;
    r->next=NULL;
    return p;
}
NODE* assign(NODE *p,char *a){
    NODE *q=p;
    int i=strlen(a)-1,j=0;
    while(i>=0){
        q->arr[j]=a[i]-'0';
        i--;
        j++;
        if(j>4){
            insertlast(p);
            q=q->next;
            j=0;
        }
    }
    while(j<5){
        q->arr[j]=0;
        j++;
    }
    return p;
}
NODE* add(NODE *p,NODE *q){
    int i=0,j=0,carry=0;
    NODE *result=NULL,*r=NULL;
    r=insertlast(r);
    result=r;
    while(p!=NULL || q!=NULL){
        result->arr[i]=(p->arr[i]+q->arr[i])+carry;
        if(result->arr[i]>=10){
            carry=(result->arr[i])/10;
            result->arr[i]=(result->arr[i])%10;
            }
        else
            carry=0;    
        i++;
        if(i>4)
        {
            p=p->next;
            q=q->next;
            r=insertlast(r);
            result=result->next;
            i=0;
        }
    }
    if(p==NULL && q==NULL){
        if(carry)
        r=insertlast(r);
        result->arr[0]=carry;
        for(int i=1;i<5;i++)
        result->arr[i]=0;
        return r;}
    else{
        if(p!=NULL){
        if(!carry)
        p->arr[0]=p->arr[0]+carry;
        result->next=p;}
        else{
        if(!carry)
        q->arr[0]=q->arr[0]+carry;
        result->next=q;}
        }
        return r;
    }
void display(NODE *p){
    char s[50];
    int i = 0, k = 0;

    while (p != NULL){
        for (i = 0; i <= 4; i++){
            s[k++] = (char)(p->arr[i] + '0');  // Convert int back to char
        }
        p = p->next;
    }
    s[k] = '\0';  
    i = strlen(s) - 1;
    int count=0;
    while (i >= 0){
        if(s[i]=='0'&&s[i-1]=='0'&&!count){
            i--;
        continue;}
        printf("%c", s[i]);
        i--;
        count++;
    }
    printf("\n");
}        
int main() {
    NODE *num1 = NULL, *num2 = NULL, *result = NULL;
    
    // Assigning values
    char str1[] = "987654321987654321";
    char str2[] = "123456789123456789";
    
    num1 = assign(insertlast(num1), str1);
    num2 = assign(insertlast(num2), str2);

    // Adding the numbers
    result = add(num1, num2);

    // Display result
    printf("Sum: ");
    display(result);
    
    return 0;
}

