int removeElement(int* a, int numsSize, int val) {
 int j=numsSize-1,k=0;
for(int i=0;i<=j;i++){
    while(a[j]==val){
        j--;
        k++;
        if(k==numsSize)
        return 0;
    }
    if(i>j)
    break;
    if(a[i]==val)
    {
        k++;
        a[i]=a[j];
        j--;
    }
}
return j+1;
}