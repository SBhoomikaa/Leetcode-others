class Solution:
    def grayCode(self, n: int) -> List[int]:
        a=[0,1]
        i=1
        while(i<n):
            j=2**(i)-1
            while(j>=0):
                a.append((2**i)+a[j])
                j-=1
            i+=1
        return a        

