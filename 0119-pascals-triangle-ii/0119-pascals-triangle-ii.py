class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        l=[[1]]
        for i in range(1,rowIndex+1):
            l1=[1]*(i+1)
            for j in range(1,i):
                l1[j]=l[i-1][j-1]+l[i-1][j]
            l.append(l1)
        return l[rowIndex]