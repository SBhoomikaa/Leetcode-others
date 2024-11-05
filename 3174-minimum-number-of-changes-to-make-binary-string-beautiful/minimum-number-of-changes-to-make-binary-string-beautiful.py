class Solution:
    def minChanges(self, s: str) -> int:
        count=0
        while(len(s)):
            if(s[0]!=s[1]):
                count+=1
            s=s[2:]
        return count        
