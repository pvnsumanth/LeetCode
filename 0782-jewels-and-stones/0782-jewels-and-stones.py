class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        my_dict={}
        for i in jewels:
            my_dict[i]=0
        for i in stones:
            if i in my_dict:
                my_dict[i]+=1
        print(my_dict)
        s=sum(my_dict.values())
        return s