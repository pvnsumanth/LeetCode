class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int largest=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==1) nums[i]+=nums[i-1];
            largest=max(largest,nums[i]);
        }
        return largest;
    }
};