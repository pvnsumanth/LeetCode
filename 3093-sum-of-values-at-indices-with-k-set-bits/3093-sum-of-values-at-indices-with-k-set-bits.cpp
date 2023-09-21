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
        int c=0;
        for(auto i:nums){
            if(ones(c)==k){
                sum+=i;
            }
            c+=1;
        }
        return sum;
    }
};