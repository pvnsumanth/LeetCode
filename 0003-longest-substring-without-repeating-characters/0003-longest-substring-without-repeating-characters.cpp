class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // vector<int>hash(128,-1);
        // int start=-1;
        // int len=0;
        // for(int i=0;i<s.size();i++){
        //     start=max(start,hash[s[i]]);
        //     hash[s[i]]=i;
        //     len=max(len,i-start);
        // }
        // return len;
        int start=0;
        int end=0;
        int dp[128]={};
        int len=0;
        bool dup;
        while(end<s.size()){
            dup+= ++dp[s[end++]]==2;
            while(dup) dup-=--dp[s[start++]]==1;
            len=max(len,end-start);
        }
        return len;
    }
};


