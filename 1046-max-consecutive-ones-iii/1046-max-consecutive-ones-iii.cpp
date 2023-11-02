class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int largest=0;
        vector<int>v(2,0);
        while(end<nums.size()){
            if(nums[end]==1) largest=max(largest,++v[nums[end]]);
            if(end-start+1-largest>k) --v[nums[start++]];
            end++;
        }
        return largest+k>nums.size()?nums.size():largest+k;
    }
};