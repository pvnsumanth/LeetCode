from itertools import combinations
class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        # print(nums)
        
        result = [[]]  # Start with an empty combination

        for i in range(1, len(nums) + 1):
            com = combinations(nums, i)
            result.extend(com)

        result_formatted = [list(sublist) for sublist in result]
        s=0
        for r in result_formatted:
            c=0
            for i in r:
                c^=i
            s+=c
        
        return s