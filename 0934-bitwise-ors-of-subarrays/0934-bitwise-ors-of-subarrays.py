class Solution:
    def subarrayBitwiseORs(self, arr: List[int]) -> int:
        result = tmp = set()
        for n in arr:
            tmp = {num | n for num in tmp} | {n}
            result |= tmp
        return len(result)