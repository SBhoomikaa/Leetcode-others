class Solution:
    def minChanges(self, s: str) -> int:
        count=0
        while(len(s)):
            b=s[:2]
            if(b[0]!=b[1]):
                count=count+1
            s=s[2:]
        return count        
