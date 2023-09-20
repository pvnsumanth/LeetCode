class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=mid){
                    count++;
                }
            }
            if(count>mid){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};