bool isHappy(int n) {
    int i=0,max=0;
    while(n!=1 && max<100){
        i=0;
        while(n)
        {
            i=i+pow(n%10,2);
            n=n/10;
         
        }
        n=i;
        max++;
    }
    if(n==1)
    return 1;
    else 
    return 0;
}