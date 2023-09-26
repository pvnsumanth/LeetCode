class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>tab(26,-1);
        for(int i=0;i<s.size();i++) tab[s[i]-'a']=i;
        vector<bool>seen(26,false);
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(seen[s[i]-'a']==false){
                while(st.size()>0 && st.top()>s[i] && i<tab[st.top()-'a']){
                    seen[st.top()-'a']=false;
                    st.pop();
                }
                st.push(s[i]);
                seen[s[i]-'a']=true;
            }
        }
        string ans="";
        while (st.size() > 0){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};