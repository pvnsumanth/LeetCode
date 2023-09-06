from collections import defaultdict
class Solution:
    def fact(self,num):
        prod=0
        while(num>0):
            prod+=num
            num-=1
        return prod
    def numIdenticalPairs(self, nums: List[int]) -> int:
        m=defaultdict(list)
        for i in range(len(nums)):
            m[nums[i]].append(i)
        s=0
        for i in m.values():
            s+=self.fact(len(i)-1)
        return s