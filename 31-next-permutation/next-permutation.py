class Solution:
    def nextPermutation(self, a: List[int]) -> None:
        if(len(a)==1 or len(a)==0):
            return
        for i in range(len(a)-2,-1,-1):
            if(i==len(a)-2 and a[i]<a[i+1]):
                a[i],a[i+1]=a[i+1],a[i]
                return
            elif (i==len(a)-2):
                continue 
            k=a[i]+100         
            m=i
            for j in range(len(a)-1,i,-1):
                if(a[j]>a[i] and k>a[j]):
                    k=a[j]
                    m=j
            if(m!=i):        
                a[m],a[i]=a[i],a[m]
                b=sorted(a[i+1:])
                a[i+1:]=b
                return
        a.sort()
        return    

        