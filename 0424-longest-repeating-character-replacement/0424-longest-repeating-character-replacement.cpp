class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int start=0;
        int end=0;
        int largest=0;
        while(end<s.size()){
            largest=max(largest,++v[s[end]-'A']);
            if(end-start+1-largest>k){
                --v[s[start++]-'A'];
            }
            end++;
        }
        return largest+k<=s.size()?largest+k:s.size();
    }
};