class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        sum-=x;
        int current_sum=0;
        int maxlength=0;
        if(sum==0){
            return nums.size();
        }
        for(int right=0;right<nums.size();right++){
            current_sum+=nums[right];
            while(left<=right && current_sum>sum){
                current_sum-=nums[left];
                left++;
            }
            if(current_sum==sum){
                maxlength=max(maxlength,right-left+1);
            }
        }
        return (maxlength)?nums.size()-maxlength:-1;
    }
};