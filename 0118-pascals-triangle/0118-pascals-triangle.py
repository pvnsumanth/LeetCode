class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        sol=[[1]]
        for i in range(1,numRows):
            l=[1]*(i+1)
            for j in range(1,i):
                l[j]=sol[i-1][j]+sol[i-1][j-1]
            sol.append(l)
        return sol