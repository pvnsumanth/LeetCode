class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        left=0
        s=sum(nums)-x
        cs=0
        maxlen=0
        if s==0:
            return len(nums)
        for right in range(len(nums)):
            cs+=nums[right]
            while(left<=right and cs>s):
                cs-=nums[left]
                left+=1
            if(s==cs):
                maxlen=max(maxlen,right-left+1)
        return (len(nums)-maxlen) if(maxlen>0) else -1