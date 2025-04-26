class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        suffix=[1]*len(nums)
        prefix=[1]*len(nums)
        prod=[0]*len(nums)
        y=len(nums)-1
        for i in range(1,len(nums)):
            prefix[i]=nums[i-1]*prefix[i-1]
            suffix[y-i]=nums[y-i+1]*suffix[y-i+1]
        for i in range(0,len(nums)):
            prod[i]=prefix[i]*suffix[i]
        return prod    