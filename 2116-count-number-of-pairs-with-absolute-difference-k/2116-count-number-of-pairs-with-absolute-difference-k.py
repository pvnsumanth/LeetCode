class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        my_dict={}
        for i in nums:
            if i not in my_dict:
                my_dict[i]=1
            else:
                my_dict[i]+=1
        count=0
        for i in nums:
            z=(i-k)
            if z in my_dict:
                count+=my_dict[z]
        return count