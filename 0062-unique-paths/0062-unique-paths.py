class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        paths=1
        for i in range(1,m):
            paths*=(n-1+i)/i
        return round(paths)