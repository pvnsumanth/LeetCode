#include <vector>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    while(j<nums2.size() && nums2[j]<=nums1[i]){
                        j++;
                    }
                    if(j==nums2.size()){
                        v.push_back(-1);
                    }
                    else{
                        v.push_back(nums2[j]);
                    }
                }
            }
        }
        return v;
    }
};