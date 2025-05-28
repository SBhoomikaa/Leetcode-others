/*unsigned long long int binary(int n){
    if(n==0 || n==1)
        return n;
    unsigned long long int x;
    x=binary(n/2);
    return ((x*10)+n%2);
}
int bincount(unsigned long long int n,int *m){
    int count=0;
    if(n==1){
        *m=1;
        return 1;
    }
    while(n>0){
        if(n%10==0)
            count++;
        n=n/10;
        *m=*m+1;
    }
    return count;
}
bool isPowerOfTwo(int n) {
    int count=0,x,m=0;
    unsigned long long int bin;
    bin=binary(n);
    x=bincount(bin,&m);
    if(x==m-1 || n==1)
        return true;
    else
        return false;    
}
bad for big numbers...last 10 test cases remain unsolved*/
bool isPowerOfTwo(int n) {
    if(n>0 &&((n&(n-1))==0))
        return true;
    return false;            
}