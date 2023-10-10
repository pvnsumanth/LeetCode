class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> UniqueNums(nums.begin(),unique(nums.begin(),nums.end()));
        int ans=INT_MAX;
        for(int i=0;i<UniqueNums.size();i++){
            int e=UniqueNums[i]+nums.size()-1;
            auto ind=upper_bound(UniqueNums.begin(),UniqueNums.end(),e);
            int idx=distance(UniqueNums.begin(),ind);
            int ans1=nums.size()-idx+i;
            ans=min(ans1,ans);
        }
        return ans;
    }
};