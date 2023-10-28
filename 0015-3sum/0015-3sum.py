class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        l1 = []
        n = len(nums)

        for i in range(n-2):
            if i == 0 or nums[i] != nums[i-1]:
                left = i + 1
                right = n - 1

                while left < right:
                    total = nums[i] + nums[left] + nums[right]

                    if total < 0:
                        left += 1
                    elif total > 0:
                        right -= 1
                    else:
                        l1.append([nums[i], nums[left], nums[right]])

                        while left < right and nums[left] == nums[left+1]:
                            left += 1
                        while left < right and nums[right] == nums[right-1]:
                            right -= 1

                        left += 1
                        right -= 1

        return l1
