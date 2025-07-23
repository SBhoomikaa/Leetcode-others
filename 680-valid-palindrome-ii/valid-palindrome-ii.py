class Solution:
    def rec(self,s,start,end,k):
        i,j=start,end
        x=k
        while(i<j):
            if(s[i]!=s[j]):
                if(x==1):
                    return 2
                x=1
                a=self.rec(s,i+1,j,x)
                b=self.rec(s,i,j-1,x)
                return min(a,b)
            i+=1
            j-=1
        return x            


    def validPalindrome(self, s: str) -> bool:
        k=self.rec(s,0,len(s)-1,0)
        if(k==0 or k==1):
            return True
        else:
            return False    