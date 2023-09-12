class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        int i=0;
        int flag=0;
        int replace;
        while(i<s.size()){
            if(!flag &s[i]!='9'){
                flag++;
                replace=s[i];
                s[i]='9';
            }
            else if(flag & s[i]==replace){
                s[i]='9';
            }
            i++;
        }
        int maximum=stoi(s);

        s=to_string(num);
        i=0;
        flag=0;
        while(i<s.size()){
            if(!flag &s[i]!='0'){
                flag++;
                replace=s[i];
                s[i]='0';
            }
            else if(flag & s[i]==replace){
                s[i]='0';
            }
            i++;
        }
        int minimum=stoi(s);
        return maximum-minimum;
    }
};