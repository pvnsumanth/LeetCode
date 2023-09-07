class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map[256]={0};
        bool already[256]={0};
        for(int i=0;i<s.size();i++){
            if(map[s[i]]==0 && already[t[i]]==0){
                map[s[i]]=t[i];
                already[t[i]]=1;
            }
        }
        for(int i=0;i<s.size();i++){
            if(char(map[s[i]])!=t[i]) return false;
        }
        return true;
    }
};