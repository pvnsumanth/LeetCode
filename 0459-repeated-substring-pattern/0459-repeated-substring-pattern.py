class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s1=s
        s=s*2
        s=s[1:-1]
        if s1 in s:
            return True
        return False
        # for i in range(1,len(s)//2+1):
        #     if len(s)%i==0:
        #         if s[:i]*(len(s)//i)==s:
        #             return True
        # return False