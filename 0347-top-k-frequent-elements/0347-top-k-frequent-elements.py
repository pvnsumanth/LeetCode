class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic={}
        keys=[]
        for i in range(len(nums)):
            if(nums[i] not in keys):
                dic[nums[i]]=1
                keys.append(nums[i])
            else:
                dic[nums[i]]+=1
        dic1 = dict(sorted(dic.items(), key=lambda x: x[1], reverse=True))
        
        print(dic1)
        l=[]
        i=0
        key_list = list(dic1.keys())
        while(k>0):
            l.append(key_list[i])
            i+=1
            k-=1
        return l