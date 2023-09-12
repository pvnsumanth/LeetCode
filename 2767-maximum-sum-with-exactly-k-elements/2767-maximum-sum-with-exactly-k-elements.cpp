class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max=*max_element(nums.begin(),nums.end());
        return max*k+((k-1)*(k)/2);
    }
};