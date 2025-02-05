class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        if s1==s2:
            return True
        d1={}
        d2={}
        count=0
        x=0
        flag=0
        for i in range(0,len(s1)):
            a=s1[i]
            b=s2[i]
            if(a not in s2 or b not in s1):
                return False
            if(a!=b):
                count+=1
                if(count==1):
                    x=i
                else:
                    if(d1[x]==b):
                        flag=1
                    else:
                        flag=0    
            if((count>1 and flag!=1) or count>2):
                return False          
            d1[i]=a 
            d2[i]=b
        if(flag==1):    
            return True  
        return False      
               
                    