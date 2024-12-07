class Solution:
    def ncr(self,n:int,r:int)->int:
        if(n>r//2):
            r=n-r
        j=1
        k=1    
        for i in range(1,r+1):
            j=j*i
            k=k*(n+1-i)
        k=k//j
        return k    
    def climbStairs(self, n: int) -> int:
        i=0
        c=0
        while(i<=n//2):
            c=c+self.ncr(n-i,i)
            i+=1
        return c
