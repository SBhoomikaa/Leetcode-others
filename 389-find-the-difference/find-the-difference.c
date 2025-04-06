char findTheDifference(char* s, char* t) {
    int a[27]={0};
    //int count=0;
    for(int i=0;i<strlen(s);i++)
        a[((int)s[i]-97)%26]+=1;
    for(int i=0;i<strlen(t);i++)
        if(a[((int)t[i]-97)%26]==0)
            return t[i];
        else
            a[((int)t[i]-97)%26]--;    
    return '\0';        
}