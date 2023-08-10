class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        s=[nums[0]]
        for i in range(1,len(nums)):
            s.append(max(s[-1]+nums[i],nums[i]))
        print(s)
        return max(s)