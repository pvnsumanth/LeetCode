class Solution {
public:
    int findindex(bool low,vector<int>nums,int target){
        int left=0;
        int right=nums.size()-1;
        int index=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                index=mid;
                if(low) right=mid-1;
                else left=mid+1;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        bool low;
        return {findindex(low=true,nums,target),findindex(low=false,nums,target)};
    }
};