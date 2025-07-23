class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        clean= re.sub(r'[^a-z0-9]', '', s)
        i,j=0,len(clean)-1
        while(i<j):
            if(clean[i]!=clean[j]):
                return False
            i+=1
            j-=1
        return True