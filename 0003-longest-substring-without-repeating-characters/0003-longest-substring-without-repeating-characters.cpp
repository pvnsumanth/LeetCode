class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int longest_len=0;
        // int start=-1;
        // vector<int> hash_table(128,-1);
        // for(int i=0;i<s.size();++i){
        //     start=max(start,hash_table[s[i]]);
        //     hash_table[s[i]]=i;
        //     longest_len=max(longest_len,i-start);
        // }
        // return longest_len;
        int start=0;
        int end=0;
        int dp[128]={};
        int dup=0;
        int ans_len=0;
        while(end<s.size()){
            dup+= ++dp[s[end++]]==2;
            while(dup) dup-= --dp[s[start++]]==1;
            ans_len=max(ans_len,end-start);
        }
        return ans_len;
    }
};