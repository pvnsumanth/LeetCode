class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        set<char>s1;
        set<char>s2;
        if(word1.size()!=word2.size()) return false;
        for(int i=0;i<word1.size();i++){
            v1[word1[i]-'a']++;
            v2[word2[i]-'a']++;
            s1.insert(word1[i]);
            s2.insert(word2[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2 && s1==s2;
    }
};