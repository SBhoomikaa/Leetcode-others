int lengthOfLongestSubstring(char* s) {
    if(strlen(s)==0|| strlen(s)==1)
        return strlen(s);
    int map[256]={0};    
    int left=0,right=0,k=0,K=k;
    //map[s[0]]=1;
    while(left<=right && right<strlen(s)){
        if(map[s[right]]==0){
            map[s[right]]+=1;
            k+=1;
            right+=1;
        }
        else{
            map[s[left]]-=1;
            k-=1;
            left+=1;
        }
        if(k>K)
            K=k;
    }
    return K;
}