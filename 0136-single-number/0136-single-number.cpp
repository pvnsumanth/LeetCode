class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> hash;
        for(auto i:nums) hash[i]++;
        for(auto i:hash) {
            if (i.second==1)
                return i.first;
        }
        return 0;
    }
};