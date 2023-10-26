class Solution {
public:
    int compress(vector<char>& chars) {
        string res="";
        int i=0;
        while(i<chars.size()){
            int j=i;
            int count=0;
            while(j<chars.size() && chars[i]==chars[j]){
                count++;
                j++;
            }
            if(count==1){
                res+=chars[i];
            }
            else{
                res+=chars[i];
                res+=to_string(count);
            }
            i=j;
        }
        for(int i=0;i<res.size();i++) chars[i]=res[i];
        return res.size();
    }
};