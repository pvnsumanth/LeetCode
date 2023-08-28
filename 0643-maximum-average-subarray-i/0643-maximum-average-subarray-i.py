class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        s=0
        for i in range(k):
            s+=nums[i]
        print(s)
        maxi=s
        for i in range(k,len(nums)):
            s-=nums[i-k]
            s+=nums[i]
            maxi=max(maxi,s)
        return maxi/k