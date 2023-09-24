class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        while(i<s.size()){
            j=i+1;
            while(j<s.size() && s[j]!=' '){
                j++;
            }
            int k=j;
            j--;
            while(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            i=k+1;
        }
        return s;
    }
};