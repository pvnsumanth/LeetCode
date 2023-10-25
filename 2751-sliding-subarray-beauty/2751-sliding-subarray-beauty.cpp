#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        ordered_set hash;
        vector<int>res;
        int start=0;
        int end=0;
        while(end<nums.size()){
            hash.insert({nums[end],end});
            if(end-start+1>k){
                hash.erase({nums[start],start});
                start++;
            }
            if(end-start+1==k){
                auto it = hash.find_by_order(x - 1);
                int n=it->first;
                if (n>0) n=0;
                res.push_back(n);
            }
            end++;
        }
        return res;
    }
};