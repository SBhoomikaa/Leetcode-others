class Solution:
    def check(self, nums: List[int]) -> bool:
        sort=sorted(nums)
        if(nums==sort):
            return True
        a=[]
        size=len(nums)
        i=0
        while(i<size-1):
                if(nums[i]<=nums[i+1]):
                    i=i+1
                    continue
                if(sort==nums[i+1:size+1]+nums[:i+1]):
                    return True
                else:
                    return False    
            
        if(a==sort):
            return True
        else:
            return False    
