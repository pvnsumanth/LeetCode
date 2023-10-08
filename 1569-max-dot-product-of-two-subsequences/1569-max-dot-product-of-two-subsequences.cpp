class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1,INT_MIN));
        for(int i=1;i<nums1.size()+1;i++){
            for(int j=1;j<nums2.size()+1;j++){
               int cur=nums1[i-1]*nums2[j-1];
               dp[i][j]=max({cur,dp[i-1][j],dp[i][j-1],cur+max(0,dp[i-1][j-1])});
            }
        }
        return dp[nums1.size()][nums2.size()];
    }
};