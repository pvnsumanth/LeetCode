class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,vector<int>>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]].push_back(i);
        }
        int count=0;
        for(auto i:hash){
            count+=(i.second.size())*(i.second.size()-1)/2;
        }
        return count;
    }
};