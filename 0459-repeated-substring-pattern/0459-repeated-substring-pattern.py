class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        # s1=s
        # s=s*2
        # s=s[1:-1]
        # if s1 in s:
        #     return True
        # return False
        return True if s in (s+s)[1:-1] else False