class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        m=prices[0]
        d=0
        c=0
        for i in range(1,len(prices)):
            m=min(m,prices[i])
            if prices[i]<prices[i-1]:
                c+=1 
            else:
                diff=prices[i]-m
                d=max(d,diff)
                
        if c==len(prices):
            return 0
        else:
            return d