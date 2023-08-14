class Solution:
    def validPartition(self, nums: List[int]) -> bool:
        dp=[0]*3
        dp[0]=True
        dp[1]=False
        dp[2]=(nums[0]==nums[1])
        for i in range(2,len(nums)):
            if(nums[i]==nums[i-1] and dp[1]):
                current=True
            elif(nums[i]==nums[i-1]==nums[i-2] and dp[0]):
                current=True
            elif(nums[i]==nums[i-1]+1 and nums[i-1]==nums[i-2]+1 and dp[0]):
                current=True
            else:
                current=False
            dp[0]=dp[1]
            dp[1]=dp[2]
            dp[2]=current
        return dp[2]