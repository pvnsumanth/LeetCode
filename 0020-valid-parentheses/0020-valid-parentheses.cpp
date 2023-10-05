class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
               
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(empty(st) || st.top()!='(') return false;
                st.pop();
            }
            else if(s[i]=='}'){
                if(empty(st) || st.top()!='{') return false;
                st.pop();
            }
            else if(s[i]==']'){
                if(empty(st) || st.top()!='[') return false;
                st.pop();
            }
        }
        if(empty(st)) return true;
        return false;
    }
};