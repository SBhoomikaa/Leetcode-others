class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g=sorted(g)
        s=sorted(s)
        i=0
        j=0
        while(j<len(s) and i<len(g)):
            if(s[j]>=g[i]):
                i+=1
            j+=1
        return i        