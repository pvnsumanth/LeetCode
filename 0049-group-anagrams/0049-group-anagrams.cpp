class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>hash;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            if(hash.find(s)!=hash.end()) hash[s].push_back(strs[i]);
            else hash[s]={strs[i]};
        }
        vector<vector<string>>res;
        for(auto i:hash) res.push_back(i.second);
        return res;
    }
};