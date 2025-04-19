class Solution:
    def rob(self, nums: List[int]) -> int:
        if(len(nums)==1):
            return nums[0] 
        n=len(nums)    
        dp=[0]*n
        dp[0],dp[1]=nums[0],nums[1]
        if(n>2):
            dp[2]=dp[0]+nums[2]
            for i in range(3,n):
               dp[i]=max(dp[i-2],dp[i-3])+nums[i]
        return max(dp[n-1],dp[n-2])            
