class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos=0;
        for(auto i:nums){
            if(i!=0){
                nums[pos]=i;
                pos++;
            }
        }
        while(pos<nums.size()){
            nums[pos]=0;
            pos++;
        }
    }
};