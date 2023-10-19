class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        for(auto i:s){
            if(i=='#' && st1.empty()){
                continue;
            }
            else if(i=='#'){
                st1.pop();
            }
            else{
                st1.push(i);
            }
        }
        stack<char>st2;
        for(auto i:t){
            if(i=='#' && st2.empty()){
                continue;
            }
            else if(i=='#'){
                st2.pop();
            }
            else{
                st2.push(i);
            }
        }
        while(!st1.empty() && !st2.empty()){
            if(st1.top()!=st2.top()) return false;
            st1.pop();
            st2.pop();
        }
        return st1.empty() && st2.empty()? true : false;
        return false;
    }
};