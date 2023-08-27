class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        boolean_array=[]
        greatest=max(candies)
        for i in candies:
            boolean_array.append(i+extraCandies>=greatest)
        return boolean_array