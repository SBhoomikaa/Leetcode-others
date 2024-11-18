
    #time limit exceeded
''' 
    def countPrimes(self, n: int) -> int:
        if(n<3):
            return 0
        count =1
        a=[3]
        for i in range(3,n,2):
            b=math.sqrt(i)
            for j in a:
                if(j>b or i%j==0):
                    break    
            if(j>b and i not in a):
                a.append(i)
        return len(a)+1 '''
class Solution:    
    def countPrimes(self, n: int) -> int:
        if(n<=1):
            return 0
        a=[1]*n
        a[0]=0
        a[1]=0
        for i in range(2,int(n**0.5)+1):
            if(a[i]):
                for j in range(i*i,n,i):
                    a[j]=0
        return a.count(1)
