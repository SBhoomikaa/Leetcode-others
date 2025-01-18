class Solution:
    def addBinary(self, a: str, b: str) -> str:
        width=(len(b),len(a))[len(a)>=len(b)]
        a=a.rjust(width,'0')[::-1]
        b=b.rjust(width,'0')[::-1]
        c=0
        sum=""
        for i in range(0,width):
            s=int(a[i])+int(b[i])+c
            c=s//2
            sum+=str(s%2)
        if(c):
            sum+=str(c)
        sum=sum[::-1]
        return sum        