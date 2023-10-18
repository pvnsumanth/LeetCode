class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>hash;
        for(auto i:arr) hash[i]+=1;
        vector<int>v;
        for(auto i:hash) v.push_back(i.second);
        set<int>s;
        for(auto i:v) s.insert(i);
        if(s.size()==v.size()) return true;
        else return false;
    }
};