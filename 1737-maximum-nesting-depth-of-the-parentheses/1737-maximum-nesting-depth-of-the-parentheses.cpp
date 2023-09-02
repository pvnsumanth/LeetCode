#include <stack>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int r=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
                if(r<st.size()){
                    r=st.size();
                }
            }
            else if(s[i]==')'){
                st.pop();
            }
        }
        return r;
    }
};