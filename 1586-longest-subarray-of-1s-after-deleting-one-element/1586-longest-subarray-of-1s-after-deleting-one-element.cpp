class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxonescount=0;
        int start=0;
        while(start<nums.size()){
            int end=start;
            int zeroescount=0;
            int onescount=0;
            while(end<nums.size()){
                if(nums[end]==0){ 
                    zeroescount++;
                    if(zeroescount==2) break;
                    start=end+1;
                    }
                else onescount++;
                end++;
            }
            if(end==nums.size()) start=end;
            maxonescount=max(maxonescount,onescount);
        }
        return maxonescount==nums.size()?maxonescount-1:maxonescount;
    }
};