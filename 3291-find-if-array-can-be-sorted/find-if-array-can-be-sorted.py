class Solution:
    def canSortArray(self, nums: List[int]) -> bool:
        i=0
        j=0
        n=[]
        for i in range(0,len(nums)):
            r=0
            b=""
            a=nums[i]
            while(a>0):
                r=a%2
                a=a//2
                b=b+(str(r))
            b=b[::-1]
            n.append(b) 
        i=0       
        while(i<len(n)-1):
            j=i+1
            while(j>0):
                if(nums[j]>=nums[j-1]):
                    j=j-1
                    continue
                if(n[j].count('1')==n[j-1].count('1')):
                    nums[j],nums[j-1]=nums[j-1],nums[j]
                    n[j],n[j-1]=n[j-1],n[j]
                else:
                    break
                j=j-1
            i=i+1
        if(nums==sorted(nums)):
            return True
        else:
            return False       
       



        