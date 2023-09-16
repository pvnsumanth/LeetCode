class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left(nums.size(),0);
        vector<int>right(nums.size(),0);
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i>0)
                left[i]=left[i-1]+nums[i-1];
            if(i<nums.size()-1 &&i>=0) right[nums.size()-i-2]=right[nums.size()-1-i]+nums[nums.size()-i-1];
        }
        for(int i=0;i<nums.size();i++){
            res[i]=abs(right[i]-left[i]);
        }
        return res;
    }
};