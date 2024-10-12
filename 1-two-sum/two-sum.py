class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in nums:
            k=nums.index(i)
            if((target-i) in nums[k+1:]):
                j=nums.index(target-i,k+1)
                return[k,j]
        return []        