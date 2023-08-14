class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        row=len(mat)
        col=len(mat[0])
        result=[[(row+col-1) for i in range(col)] for j in range(row)]
        for i in range(row):
            for j in range(col):
                if(mat[i][j]==0):
                    result[i][j]=0
                else:
                    if(i>0):
                        result[i][j]=min(result[i][j],result[i-1][j]+1)
                    if(j>0):
                        result[i][j]=min(result[i][j],result[i][j-1]+1)
                
        for i in range(row-1,-1,-1):
            for j in range(col-1,-1,-1):
                if(mat[i][j]==1):
                    if(i<row-1):
                        result[i][j]=min(result[i][j],result[i+1][j]+1)
                    if(j<col-1):
                        result[i][j]=min(result[i][j],result[i][j+1]+1)
                    
        return result