class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int> nums1;
        for(int i=nums.size()-k;i<nums.size();i++) nums1.push_back(nums[i]);
        for(int i=0;i<nums.size()-k;i++)nums1.push_back(nums[i]);
        nums=nums1;
    }
};