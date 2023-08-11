class Solution:
    def maximumNumberOfStringPairs(self, words: List[str]) -> int:
        my_dict={}
        for i in words:
            if i and i[::-1] not in my_dict:
                my_dict[i]=0
            else:
                my_dict[i]=1
        return sum(my_dict.values())