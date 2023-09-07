class Solution {
public:
    string reorganizeString(string s) {
        int ch[26]={0};
        for(int i=0;i<s.size();i++){
            ch[s[i]-'a']++;
        }

        int maximum=INT_MIN;
        char most;
        for(int i=0;i<26;i++){
            if(ch[i]>maximum){
                maximum=ch[i];
                most=i+'a';
            }
        }
        int index=0;
        while(maximum>0 && index<s.size()){
            s[index]=most;
            index+=2;
            maximum--;
        }
        if (maximum!=0){
            return "";
        }
        ch[most-'a']=0;
        for(int i=0;i<26;i++){
            while(ch[i]>0){
                index=index>=s.size()?1:index;
                s[index]=i+'a';
                index+=2;
                ch[i]--;
            }
        }
        return s;
    }
};