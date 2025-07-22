int lengthOfLongestSubstring(char* s) {
    int x=strlen(s);
    if(x==0||x==1)
        return x;
    int map[256]={0};    
    int left=0,right=0,k=0,K=k;
    while(left<=right && right<x){
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