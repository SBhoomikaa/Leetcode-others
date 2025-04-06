class Solution:
    def findRadius(self, houses: List[int], heaters: List[int]) -> int:
        house=sorted(houses)
        heat=sorted(heaters)
        j=0
        max=0
        for i in range(0,len(house)):
            if(j<len(heat)-1):
                while(abs(heat[j+1]-house[i])<=abs(heat[j]-house[i])):
                    j+=1
                    if(j>=len(heat)-1):
                        break
            if(max<abs(heat[j]-house[i])):
                max=abs(heat[j]-house[i])
        return max       