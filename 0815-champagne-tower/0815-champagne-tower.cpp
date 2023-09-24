class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> dp(query_row+1,(vector<double>(query_row+1,0)));
        dp[0][0]=poured;
        int i=1;
        int n=1;
        while(i<=query_row){
            int j=0;
            while(j<i){
                if(dp[i-1][j]>=1){
                    dp[i][j]+=(dp[i-1][j]-1)/2.0;
                    dp[i][j+1]+=(dp[i-1][j]-1)/2.0;
                    dp[i-1][j]=1;
                }
                j++;
            }
            i++;
        }
        return dp[query_row][query_glass]>=1?1:dp[query_row][query_glass];
        return 0;
    }
};