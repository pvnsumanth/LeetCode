class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>hash(128,0);
        for(auto i:s){
            hash[i]+=1;
        }
        for(auto i:t){
            hash[i]-=1;
            if(hash[i]<0){
                return i;
            }
        }
        return 'a';
    }
};