class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        clean= re.sub(r'[^a-z0-9]', '', s)
        i=0
        j=len(clean)-1
        while(i<j):
            if(clean[i]==clean[j]):
                i+=1
                j-=1
            else:
                return False;    
        return True