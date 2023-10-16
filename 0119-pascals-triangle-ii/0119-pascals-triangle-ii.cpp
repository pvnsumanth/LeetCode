class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>dp(rowIndex+1,vector<int>(rowIndex+1,1));
        int c=1;
        for(int i=1;i<rowIndex+1;i++){
            for(int j=1;j<c;j++){
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
            c++;
        }
        return dp[rowIndex];
    }
};