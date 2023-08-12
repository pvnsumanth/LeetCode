class Solution:
    def minimumSum(self, num: int) -> int:
        l=list()
        while num>0:
            l.append(num%10)
            num=num//10
        n1=0
        n2=0
        n1+=min(l)*10
        l.remove(min(l))
        n2+=min(l)*10
        l.remove(min(l))
        n1+=min(l)
        n2+=max(l)
        return n1+n2