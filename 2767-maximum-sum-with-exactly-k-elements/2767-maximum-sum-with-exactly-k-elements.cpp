class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        return *std::max_element(nums.begin(),nums.end())*k+((k-1)*(k)/2);
    }
};