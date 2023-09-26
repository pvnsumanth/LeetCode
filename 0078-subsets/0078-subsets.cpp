class Solution {
public:
    void solve(vector<vector<int>>& all,vector<int>&curr,vector<int>nums,int i=0){
        if(i==nums.size()){
            all.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        solve(all,curr,nums,i+1);
        curr.pop_back();
        solve(all,curr,nums,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>cur;
        vector<vector<int>>all;
        solve(all,cur,nums);
        return all;
    }
};