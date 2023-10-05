class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>hash;
        for(auto i:nums)hash[i]+=1;
        vector<int>res;
        for(auto i:hash) if(i.second>nums.size()/3) res.push_back(i.first);
        return res;
    }
};