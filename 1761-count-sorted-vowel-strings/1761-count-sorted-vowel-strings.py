class Solution:
    def countVowelStrings(self, n: int) -> int:
        dp=[[0 for i in range(5)] for i  in range(n)]
        dp[0]=[5,4,3,2,1]
        for i in range(n):
            dp[i][4]=1
        
        for i in range(1,n):
            for j in range(3,-1,-1):
                dp[i][j]=dp[i-1][j]+dp[i][j+1]
        print(dp)
        return dp[n-1][0]