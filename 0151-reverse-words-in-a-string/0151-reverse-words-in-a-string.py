class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split(" ")
        l=l[::-1]
        s=" ".join(l)
        s=" ".join(s.strip().split())
        return s