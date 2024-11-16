int removeDuplicates(int* a, int numsSize) {
    /*int count=0,j=0,k=1;
    for(int i=0;i<numsSize-1;i++)
    {
       if(a[i]==a[i+1]){
        count++;
        if(count==1)
        j=i+1;
       }
       else{
        k++;
        if(count)
        {
            a[j]=a[i+1];
            if(count)
            j++;
        }
       }
    }
    return k;*/
    int j=0;
    for(int i=0;i<numsSize;i++)
    if(a[j]!=a[i]){
    j++;
    a[j]=a[i];
    }
    return j+1;
}