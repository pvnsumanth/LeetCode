import math
class Solution:
    def reverse(self, x: int) -> int:
        rev=0
        c=0
        a=x
       
        if(x>=0):
            while(a>0):
                c+=1
                a=a//10
            c-=1
            while(x>0):
                rev+=(x%10)*(10**c)
                c-=1
                x=x//10
            if(rev<math.pow(-2,3) or rev>math.pow(2,31)):
                return 0
            return rev
        else:
            x=abs(x)
            a=x
            while(a>0):
                c+=1
                a=a//10
            c-=1
            while(x>0):
                rev+=(x%10)*(10**c)
                c-=1
                x=x//10
            if(rev<math.pow(-2,31) or rev>math.pow(2,31)):
                return 0
            return -rev