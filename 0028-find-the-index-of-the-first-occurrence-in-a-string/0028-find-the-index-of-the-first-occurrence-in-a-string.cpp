class Solution {
public:
    int strStr(string haystack, string needle) {
        int end=needle.size();
        int len=haystack.size();
        string s;
        int i=0;
        while(i<len){
            s=haystack.substr(i,end);
            if(s==needle){
                return i;
            }
            i++;
        }
        return -1;
    }
};