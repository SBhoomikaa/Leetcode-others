/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int exp=0,count=0;
    *returnSize=n+1;
    int *a=(int*)malloc(sizeof(int)*(n+1));
    a[0]=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            a[i]=a[i/2];
        else
            a[i]=a[i/2]+1;    
    }
    return a;
}