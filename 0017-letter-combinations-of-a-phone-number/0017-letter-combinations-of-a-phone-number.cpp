class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,vector<string>>hash;
        hash['2']={"a","b","c"};
        hash['3']={"d","e","f"};
        hash['4']={"g","h","i"};
        hash['5']={"j","k","l"};
        hash['6']={"m","n","o"};
        hash['7']={"p","q","r","s"};
        hash['8']={"t","u","v"};
        hash['9']={"w","x","y","z"};
        if(digits.size()==0){
            return {};
        }
        vector<string>old;
        old=hash[digits[0]];
        for(int i=1;i<digits.size();i++){
            vector<string>cur;
            cur=hash[digits[i]];
            vector<string>result;
            for(int i=0;i<old.size();i++){
                for(int j=0;j<cur.size();j++){
                    result.push_back(old[i]+cur[j]);
                }
            }
            old=result;
        }
        return old;
    }
};