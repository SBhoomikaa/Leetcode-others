int sum(int n){
    int i=n,sum=0;
    while(i!=0){
        sum+=i%10;
        i=i/10;
    }
    return sum;
}
int comp(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}
int countLargestGroup(int n) {
    int *p=(int*)calloc(37,sizeof(int));
    int s,j=0;
    for(int i=1;i<=n;i++){
        s=sum(i);
        (p[s])+=1;
    }
    qsort(p, 37, sizeof(int),comp);
    while(j<=36){
        if(p[j]!=p[j+1])
            break;   
        j++;
    }
    return j+1;
}