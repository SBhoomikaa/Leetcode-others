class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        a=sentence.split()
        count=1
        b=0
        for i in range(0,len(a)-1):
            if(a[i][len(a[i])-1]==a[i+1][0]):
                count=1
            else:
                count=0
                break
        if(a[len(a)-1][len(a[len(a)-1])-1]==a[0][0]):
            b=1
        if(count and b):
            return True
        else:
            return False

            
