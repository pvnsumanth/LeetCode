class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>hash;
        for(auto i:arr) hash[i]+=1;
        set<int>s;
        for(auto i:hash) s.insert(i.second);
        if(s.size()==hash.size()) return true;
        else return false;
    }
};