class Solution:
    def pivotInteger(self, n: int) -> int:
        total=(n*(n+1))/2
        for i in range(n+1):
            cur=i*(i+1)/2
            if cur==total-cur+i:
                return i
        return -1
        