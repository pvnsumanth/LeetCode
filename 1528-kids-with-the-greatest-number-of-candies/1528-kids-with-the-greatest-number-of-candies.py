class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        boolean_array=[]
        greatest=max(candies)
        for i in candies:
            if i+extraCandies>=greatest:
                boolean_array.append(True)
            else:
                boolean_array.append(False)
        return boolean_array