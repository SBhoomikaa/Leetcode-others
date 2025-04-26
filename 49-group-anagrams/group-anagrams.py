class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sorts={}
        for i in strs:
            j=sorted(i)
            j="".join(j)
            if j in sorts:
                sorts[j].append(i)
            else:
                sorts[j]=[i]
        a=[]
        for j in sorts:
            a.append(sorts[j])
        return a             
