class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        left_sum=0
        right_sum=sum(nums)-nums[0]
        for i in range(len(nums)-1):
            if left_sum==right_sum:
                return i
            else:
                left_sum+=nums[i]
                right_sum-=nums[i+1]
        left_sum=sum(nums)-nums[-1]
        right_sum=0
        if left_sum==right_sum:
                return len(nums)-1
        return -1