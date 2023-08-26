class Solution:
    def convertToTitle(self, n: int) -> str:
        s=""
        while n>26:
            if n%26==0:
                s="Z"+s
                n-=1
            else:
                s=chr(64+n%26)+s
            n//=26
        s=chr(64+n)+s
        return s
            

        

        