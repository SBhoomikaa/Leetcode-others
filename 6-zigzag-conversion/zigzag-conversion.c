char* convert(char* s, int numRows) {
    int i,j=0,k=0,r=numRows,count;
    if(r==1 || r>strlen(s))
        return s;
    char *p=(char*)malloc(sizeof(char)*(strlen(s)+1));
    for(i=0;i<r;i++){
        count=0;
        k=i;
        while(k<strlen(s) && j<strlen(s)){
            if(i>0 && i<r-1){
                if(count==0){
                    p[j]=s[k];
                    j++;
                    k+=(2*r-2-2*i);
                    count=1;
                }
                else{
                    p[j]=s[k];
                    j++;
                    k+=2*i;
                    count=0;
                }
            }
            else{
            if(i==0){
                p[j]=s[k];
                j++;
                k+=(2*r-2-2*i);
            }
            else{
                p[j]=s[k];
                j++;
                k+=2*i;
            }
        }
    }
    }

    p[j]='\0';
    return p;
       
}