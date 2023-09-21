class Solution {
public:
    int countSetBits(int n)
{
      int count = 0;
      while(n) {
          count+=n%2;
          n /= 2;
      }
      return count;
}
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++) {
            if(countSetBits(i) == k) {
                ans += nums[i];
            }
        }
        return ans;
    }
};