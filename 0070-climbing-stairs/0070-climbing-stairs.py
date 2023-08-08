class Solution:
    def climbStairs(self, n: int) -> int:
        if(n==1):
            return 1
        if(n==2):
            return 2
        l=[1,2]
        for i in range(2,n):
            l.append(l[-1]+l[-2])
        return l[n-1] 