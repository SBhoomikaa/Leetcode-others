//might not work everywhere
char* rle(char *p){
    int i=0,count,k=0,y;
    char* s=(char*)malloc((sizeof(char)*strlen(p)*2)+1);
    char x;
    y=strlen(p);
    while(i<y){
        count=1;
        x=p[i];
        while(p[i]==p[i+1] && i<y-1){
            count++;
            i++;
        }    
        i++;
        s[k++]=(char)(count+'0');
        s[k++]=x;   
    }
    s[k]='\0';
    return s;
}
char* countAndSay(int n) {
    int i,count,j;
    if(n==1)
         return "1"; 
    char *o;    
    o=rle(countAndSay(n-1));
    return o;   
}