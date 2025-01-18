double power(double x,double y,int n){
    if(n==0)
        return 1;
    if(n==1)
        return x;
    return power(x*y,y,n-1);        
}
double myPow(double x, int n) {
    if(x==0 || x==1)
        return x;
        if(x==-1){
        if(n%2==0)
            return 1;
        else
            return -1;    
    }    
    if(n<-1023){
        return 0;
    }    
    if(n<0)
        return power(1/x,1/x,-n);
    return power(x,x,n); 
}