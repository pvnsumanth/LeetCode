class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(128,-1);
        int start=-1;
        int len=0;
        for(int i=0;i<s.size();i++){
            start=max(start,hash[s[i]]);
            hash[s[i]]=i;
            len=max(len,i-start);
        }
        return len;
    }
};