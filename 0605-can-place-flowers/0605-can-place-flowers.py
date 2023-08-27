class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if n==0:
            return True
        for i in range(len(flowerbed)):
            if flowerbed[i]!=1:
                if (i==0 or flowerbed[i-1]!=1) and (i==len(flowerbed)-1 or flowerbed[i+1]!=1):
                    flowerbed[i]=1
                    n-=1
            if n==0:
                return True
        return False