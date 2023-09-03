class Solution {
public:
    stack <int> st;
    int minOperations(vector<string>& logs) {
        cout<<st.size();
        for(auto i:logs){
            if(i=="./"){
                continue;
            }
            else if(i=="../"){
                if(!st.empty())st.pop();
            }
            else{
                st.push(1);
            }
        }
        return st.size();
    }
};