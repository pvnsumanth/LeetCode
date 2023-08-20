class Solution:
    def dailyTemperatures(self, temp: List[int]) -> List[int]:
        n=len(temp)
        dp=[0]*n
        for i in range(n-2,-1,-1):
            key=i+1
            while temp[i]>=temp[key] and dp[key]!=0:
                key+=dp[key]
            if temp[i]<temp[key]:
                dp[i]=key-i
            else:
                dp[i]=0
        return dp