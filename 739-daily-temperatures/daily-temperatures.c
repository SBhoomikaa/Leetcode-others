/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
struct stack{
    int val;
    int index;
};
int* dailyTemperatures(int* temp, int size, int* returnSize) {
    int i=0,top=-1,x;
    struct stack s[size];
    int *days=(int*)malloc(sizeof(int)*size);
    for(i=0;i<size;i++){
        x=temp[i];
        while(top>-1){
            if(x>s[top].val){
                days[s[top].index]=i-s[top].index;
                top--;
            }
            else{
                s[++top].val=temp[i];
                s[top].index=i;
                break;
            }
        }
        if(top==-1){
            s[++top].val=temp[i];
            s[top].index=i;  
        }
    }
    //return days;
    while(top!=-1){
        days[s[top--].index]=0;
    }
    *returnSize=size;
    return days;
}