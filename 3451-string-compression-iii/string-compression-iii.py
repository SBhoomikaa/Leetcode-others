class Solution:
    def compressedString(self, a: str) -> str:
        comp=""
        i=0
        while(i<len(a) and a!=""):
            a=a[i:]
            i=0
            j=0
            x=0
            while(j<len(a) and a[j]==a[i]):
                x=x+1
                j=j+1
                if(x>=9):
                    break
            comp=comp+(str(x))
            comp=comp+a[i]
            i=i+x
        return comp        



