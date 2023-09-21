class Solution {
public:
    int ones(int n){
        int count=0;
        while(n>0){
            count+=n%2;
            n=n/2;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(ones(i)==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};