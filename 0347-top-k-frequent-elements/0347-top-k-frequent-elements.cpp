class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        map<int,int>map;
        vector<int>count;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]+=1;
        }
        for(auto i:map){
            count.push_back(i.second);
        }
        sort(count.rbegin(),count.rend());
        int j=0;
        for(int i=0;i<k;i++){
            for(auto i:map){
                if(i.second==count[j]){
                    map[i.first]=0;
                    res.push_back(i.first);
                    j++;
                    break;
                }
            }
        }
        return res;
    }
};