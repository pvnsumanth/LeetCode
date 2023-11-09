class Solution {
public:
    int countHomogenous(string s) {
        long result=0;
        int start=0;
        long mod=(10e+8)+7;
        while(start<s.size()){
            int end=start;
            long count=0;
            while(end<s.size() && s[end]==s[start]){
                count++;
                end++;
            }
            count=count==1?1:count*(count+1)/2;
            result+=(count%mod);
            start=end;
        }
        return result%mod;
    }
};