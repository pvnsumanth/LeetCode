class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>hash;
        hash[0]=1;
        int count=0;
        if(hash.find(nums[0]-k)!=hash.end()) count+=hash[nums[0]-k];
        hash[nums[0]]++;
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
            if(hash.find(nums[i]-k)!=hash.end()) count+=hash[nums[i]-k];
            hash[nums[i]]++;
        }
        return count;
    }
};