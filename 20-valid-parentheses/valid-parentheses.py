class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]##
        top=-1
        i=0
        for i in range(0,len(s)):
            if(s[i]=='(' or s[i]=='{' or s[i]=='['):
                stack.append(s[i])
                top+=1
            elif(s[i]=='}' or s[i]==')' or s[i]==']'):
                if(i==0 or len(stack)==0):
                    return False
                if(stack[top]=='(' and s[i]==')'):
                    stack.pop()
                    top-=1
                elif(stack[top]=='[' and s[i]==']'):
                    stack.pop()
                    top-=1
                elif(stack[top]=='{' and s[i]=='}'):
                    stack.pop()
                    top-=1
                else:
                    stack.append(s[i])
                    top+=1    
        if(len(stack)):
            return False 
        else:
            return True               



