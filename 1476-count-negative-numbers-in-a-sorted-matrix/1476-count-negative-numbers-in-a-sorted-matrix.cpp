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
    // int countNegatives(vector<vector<int>>& grid) {
    //     int count=0;
    //     for(auto i:grid){
    //         int left=0;
    //         int right=i.size()-1;
    //         while(left<=right){
    //             int mid=(left+right)/2;
    //             if(i[mid]<0){
    //                 count+=right-mid+1;
    //                 right=mid-1;
    //             }
    //             else{
    //                 left=mid+1;
    //             }
    //         }
    //     }
    //     return count;
    // }
};