class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if((mid==0 ||nums[mid]>nums[mid-1]) && (mid==nums.size()-1 ||nums[mid]>nums[mid+1])) return mid;
            else if(mid>0&&nums[mid]<nums[mid-1]) right=mid-1;
            else left=mid+1;
        }
        return nums.size()-1;
    }
};