class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        dp=[]
        dp.append(cost[0])
        dp.append(cost[1])
        n=len(cost)
        for i in range(2,n):
            dp.append(min(dp[i-2],dp[i-1])+cost[i])    
        return min(dp[n-1],dp[n-2])    
