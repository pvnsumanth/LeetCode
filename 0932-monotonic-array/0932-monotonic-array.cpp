class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in=true;
        bool de=true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) in=false;
            if(nums[i]<nums[i+1]) de=false;
        }
        return in or de;
    }
};