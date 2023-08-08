class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        for i in range(len(matrix)-1,0,-1):
            for j in range(len(matrix[0])):
                right= matrix[i-1][j]+matrix[i][j+1] if j<len(matrix[0])-1 else 99999 
                middle=matrix[i-1][j]+matrix[i][j]
                left=matrix[i-1][j]+matrix[i][j-1] if j>0  else 99999
                matrix[i-1][j]=min(right,left,middle)
            
        return min(matrix[0])