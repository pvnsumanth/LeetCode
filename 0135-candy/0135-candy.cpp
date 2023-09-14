class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>nums(ratings.size(),1);
        for(int i=1;i<nums.size();i++){
            if(ratings[i]>ratings[i-1]) nums[i]=nums[i-1]+1;
        }
        for(int i=nums.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]) nums[i]=max(nums[i+1]+1,nums[i]);
        }
        int sum=0;
        for(auto i:nums) sum+=i;
        return sum;
    }
};