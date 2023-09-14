class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        long long num=0;
        int mod=pow(10,9)+7;
        sort(nums.begin(),nums.end());
        vector<int> pow(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            pow[i]=pow[i-1]*2%mod;
        }
        while(left<=right){
            int sum=nums[left]+nums[right];
            if(sum<=target) {
                num+=pow[right-left]%mod;
                num=num%mod;
            }
            if(sum>target)right--;
            else left++;
        }
        return num%mod;
    }
};