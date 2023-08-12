class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        # paths=1
        # for i in range(1,m):
        #     paths*=(n-1+i)/i
        # return round(paths)
        previous=[0]*n
        current=[0]*n
        previous[0]=1
        for i in range(m):
            current[0]=1
            for j in range(1,n):
                current[j]=current[j-1]+previous[j]
            previous[:]=current
        return previous[n-1]