class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int cols=grid.size();
        int rows=grid[0].size()-1;
        int col=0;
        while(col<cols && rows>=0){
            if(grid[col][rows]<0){
                count+=cols-col;
                rows--;
            }
            else{
                col++;
            }
        }
        return count;
    }
};