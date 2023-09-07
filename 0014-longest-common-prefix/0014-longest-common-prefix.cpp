class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string ans="";
        while(true){
            char cc=0;
            for(auto s:strs){
                if(i>=s.size()){
                    cc=0;
                    break;
                }
                if(cc==0){
                    cc=s[i];
                }
                else if(s[i]!=cc){
                        cc=0;
                        break;
                    }
                
            }
            if(cc==0){
                break;
            }
            ans.push_back(cc);
            i++;
        }
        return ans;
    }
};