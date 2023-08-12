class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        if  obstacleGrid[0][0] == 1:
            return 0
        previous=[0]*len(obstacleGrid[0])
        current=[0]*len(obstacleGrid[0])
        previous[0]=1
        for i in range(len(obstacleGrid)):
            current[0]=0 if  obstacleGrid[i][0] else previous[0]
            for j in range(1,len(obstacleGrid[0])):  
                current[j]=0 if obstacleGrid[i][j] else current[j-1]+previous[j]
            previous[:]=current
        return previous[len(obstacleGrid[0])-1]