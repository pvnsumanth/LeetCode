class Solution:
    def getMaxLen(self, nums: List[int]) -> int:
        n=len(nums)
        pos_count=[0]*n
        neg_count=[0]*n
        pos_count[0]=1 if nums[0]>0 else 0
        neg_count[0]=1 if nums[0]<0 else 0
        for i in range(1,n):
            if(nums[i]>0):
                pos_count[i]=pos_count[i-1]+1 if pos_count[i-1] else 1
                neg_count[i]=neg_count[i-1]+1 if neg_count[i-1] else 0
            elif(nums[i]<0):
                pos_count[i]=neg_count[i-1]+1 if neg_count[i-1] else 0
                neg_count[i]=pos_count[i-1]+1 if pos_count[i-1] else 1
        return max(pos_count)