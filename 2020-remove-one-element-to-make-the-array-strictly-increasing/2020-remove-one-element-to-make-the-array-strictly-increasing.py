class Solution:
    def canBeIncreasing(self, nums: List[int]) -> bool:
        removed_once = False
        
        for i in range(1, len(nums)):
            if nums[i] <= nums[i-1]:
                if removed_once:
                    return False
                if i > 1 and nums[i] <= nums[i-2]:
                    nums[i] = nums[i-1]

                removed_once = True
        
        return True