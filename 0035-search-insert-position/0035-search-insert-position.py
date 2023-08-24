class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        c=0
        for i in range(len(nums)):
            if(nums[i]==target):
                return i
        if c==0:
            nums.append(target)
            nums.sort()
            for i in range(len(nums)):
                if nums[i]==target:
                    return i
