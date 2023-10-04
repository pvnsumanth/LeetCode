class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool>hash;
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i])!=hash.end()) return true;
            hash[nums[i]]=true;
        }
        return false;
    }
};