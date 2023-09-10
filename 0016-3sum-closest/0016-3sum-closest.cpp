class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int left,right;
        int diff=INT_MAX;
        int t2=target;
        int sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            target-=nums[i];
            left=i+1;
            right=nums.size()-1;
            while(left<right){
                if(abs(nums[left]+nums[right]-target)<diff){
                    diff=abs(nums[left]+nums[right]-target);
                    sum=nums[i]+nums[left]+nums[right];
                }
                if(nums[left]+nums[right]<target){
                    left++;
                }
                else{
                    right--;
                }
            }
            target=t2;
        }
        return sum;
    }
};