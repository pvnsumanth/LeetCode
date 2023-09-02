class Solution {
public:
    stack <char> st;
    int minLength(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='B'){
                if(!st.empty() && st.top()=='A'){
                    st.pop();
                }
                else{
                    st.push('B');
                }
            }
            else if(s[i]=='D'){
                if(!st.empty() && st.top()=='C'){
                    st.pop();
                }
                else{
                    st.push('D');
                }
            }
            else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};