int tribonacci(int n) {
    int *dp=(int*)malloc(sizeof(int)*(n+1));
    if(n>2){
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    int count=3;
    while(count<=n){
        dp[count]=dp[count-1]+dp[count-2]+dp[count-3];
        count++;
    }
    count=dp[n];
    free(dp);
    return count;
    }
    else{
        free(dp);
        switch(n){
            case 0:return 0;
            case 1:return 1;
            case 2:return 1;
        }
    }
    return 0;
}