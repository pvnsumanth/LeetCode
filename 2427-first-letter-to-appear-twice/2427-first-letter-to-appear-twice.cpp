class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> seen(26,false);
        for(auto i:s){
            if(seen[i-'a']) return i;
            else seen[i-'a']=true;
        } 
        return ' ';   
    }
};