class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        a=[]
        i=len(digits)-1
        carry=1
        res=0
        while(i>=0):
            res=carry+digits[i]
            carry=res//10
            res=res%10
            a.insert(0,res)
            i-=1
        if(carry!=0):
            a.insert(0,carry)
        return a          