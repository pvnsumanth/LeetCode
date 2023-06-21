class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        if(coordinates[1][0]-coordinates[0][0]==0):
            s=1e9
        else:
            s=(coordinates[1][1]-coordinates[0][1])//(coordinates[1][0]-coordinates[0][0])
        for i in range(1,len(coordinates)):
            slope=1e9
            if(coordinates[i][0]-coordinates[i-1][0]!=0):
                slope=(coordinates[i][1]-coordinates[i-1][1])//(coordinates[i][0]-coordinates[i-1][0])
            if(slope!=s):
                return False
        return True 