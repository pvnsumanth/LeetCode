class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>hash(26,0);
        for(char i:s){
            hash[i-'a']+=1;
        }
        for(char i:t){
            hash[i-'a']-=1;
            if(hash[i-'a']<0){
                return i;
            }
        }
        return 'a';
    }
};