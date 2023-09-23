class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest_len=0;
        int start=-1;
        vector<int> hash_table(128,-1);
        for(int i=0;i<s.size();++i){
            start=max(start,hash_table[s[i]]);
            hash_table[s[i]]=i;
            longest_len=max(longest_len,i-start);
        }
        return longest_len;
    }
};