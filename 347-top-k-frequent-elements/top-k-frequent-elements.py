class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        a={}
        nums.sort()
        count=1
        for i in nums:
            if i in a:
                a[i]+=1
            else:
                a[i]=1
        sorted_keys =sorted(a, key=lambda x: a[x],reverse=True)      
        return sorted_keys[0:k]