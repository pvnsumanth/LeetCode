class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                int start=mid;
                while(start>-1 && nums[start]==target){
                    start--;
                }
                int end=mid;
                while(end<nums.size() && nums[end]==target){
                    end++;
                }
                return {start+1,end-1};
            }
            else if(nums[mid]>target)right=mid-1;
            else left=mid+1;
        }
        return {-1,-1};
    }
};