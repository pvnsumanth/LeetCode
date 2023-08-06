class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        if(len(nums)==1):
            return nums[0]
        else:
            l=[]
            while(len(l)!=1):
                l1=[]
                i=0
                while(i<len(nums)):
                    l1.append(min(nums[i],nums[i+1]))
                    if(i+2<len(nums)-1):
                        l1.append(max(nums[i+2],nums[i+3]))
                    i+=4
                nums=l1
                l=l1
                print(l)
            return l[0]