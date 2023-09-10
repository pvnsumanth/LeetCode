class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        vector<int> v;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                v.push_back(left+1);
                v.push_back(right+1);
                break;
            }
            if(numbers[left]+numbers[right]<target) left++;
            else right--;
        }
        return v;
    }
};