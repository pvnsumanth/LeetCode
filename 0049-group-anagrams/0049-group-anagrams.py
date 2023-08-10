from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        my_dict=defaultdict(list)
        for s in strs:
            sorted_s=tuple(sorted(s))
            my_dict[sorted_s].append(s)
        result=[]
        for value in my_dict.values():
            result.append(value)
        return result