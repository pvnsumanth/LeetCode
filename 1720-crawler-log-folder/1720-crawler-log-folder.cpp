class Solution {
public:
    stack <int> st;
    int minOperations(vector<string>& logs) {
        string p="./";
        string q="../";
        for(auto i:logs){
            if(i==p);
            else if(i==q){
                if(!st.empty())st.pop();
            }
            else st.push(1);
        }
        return st.size();
    }
};