class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i]=max(nums[i],nums[i-1]+nums[i]);
            maximum=max(nums[i],maximum);
        }
        
        return maximum;
    }
};