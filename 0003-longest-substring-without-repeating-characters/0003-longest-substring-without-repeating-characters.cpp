class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(128,-1);
        int length=0;
        int start=-1;
        int end;
        for(int i=0;i<s.size();i++){
            start=max(start,v[s[i]]);
            end=i;
            v[s[i]]=i;
            length=max(length,end-start);
        }
        return length;
    }
};