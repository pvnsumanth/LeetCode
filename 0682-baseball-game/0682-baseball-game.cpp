#include <stack>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> st;
        int sum=0;
        int a,b;
        for(int i=0;i<operations.size();i++){
            if (operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                st.push(st.top()*2);
            }
            else if(operations[i]=="+"){
                a=st.top();
                st.pop();
                b=st.top()+a;
                st.push(a);
                st.push(b);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};