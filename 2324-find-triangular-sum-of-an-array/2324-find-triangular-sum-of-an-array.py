class Solution:
    def triangularSum(self, nums: List[int]) -> int:
        if(len(nums)==1):
            return nums[0]
        else:
            l=[]
            while(len(l)!=1):
                l1=[]
                for i in range(len(nums)-1):
                    l1.append(nums[i]+nums[i+1]%10)
                l=l1
                nums=l1
        return l[0]%10