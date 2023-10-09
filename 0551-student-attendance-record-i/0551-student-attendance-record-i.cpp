class Solution {
public:
    bool checklate(string s){
        if(s.size()<3) return true;
        for(int i=0;i<s.size()-2;i++){
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L') return false;
        }
        return true;
    }
    bool checkabs(string s){
        int count=0;
        for(auto i:s){
            if(i=='A') count+=1;
            if(count>=2) return false;
        }
        return true;
    }
    bool checkRecord(string s) {
        return checkabs(s)&& checklate(s);
    }
};