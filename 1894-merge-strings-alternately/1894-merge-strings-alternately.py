class Solution:
    def mergeAlternately(self, w1: str, w2: str) -> str:
        i=0
        j=0
        w1_len=len(w1)
        w2_len=len(w2)
        result=""
        while i<w1_len and j<w2_len:
            result+=w1[i]
            result+=w2[j]
            i+=1
            j+=1
        while i<w1_len:
            result+=w1[i]
            i+=1
        while j<w2_len:
            result+=w2[j]
            j+=1
        return result