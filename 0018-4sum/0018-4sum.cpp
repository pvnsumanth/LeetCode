class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4) return {};
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        set<vector<int>> result;
        vector<vector<int>> r;
        for(int left=0;left<nums.size()-3;left++){
            for(int right=left+1;right<nums.size()-2;right++){
                long long t=(long long)target-((long long)nums[left]+(long long)nums[right]);
                int l=right+1;
                int r=nums.size()-1;
                while(l<r){
                    if(nums[l]+nums[r]==t){
                        result.insert({nums[left],nums[l],nums[r],nums[right]});
                        l++;r--;
                    }
                    else if(nums[l]+nums[r]<t) l++;
                    else r--;
                }
            }
        }
        for(auto i:result) r.push_back(i);
        return r;
    }
};