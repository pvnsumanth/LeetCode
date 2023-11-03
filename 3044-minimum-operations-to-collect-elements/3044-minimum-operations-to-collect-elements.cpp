class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<bool> check(k,0);
        int sum=0;
        int count=0;
        for(int i=nums.size()-1;i>-1;i--){
            if(sum==k) break;
            if(nums[i]<=k){
                if(!check[nums[i]]){
                    sum++;
                    check[nums[i]]=true;
                }
            }
            count++;
        }
        return count;
    }
};