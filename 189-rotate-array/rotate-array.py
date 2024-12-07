class Solution:
    def rotate(self, a: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        k=k%len(a)
        for i in range(0,k):
            c=a.pop()
            a.insert(0,c)


        