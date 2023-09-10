class Solution {
public:
    string invert(string x){
        for(int i=0; i<x.size(); i++){
            if(x[i]=='0')   
                x[i] ='1';
            else
                x[i] ='0';
        }            
        return x;
    }

    string helper(int n){
        if(n==1)
            return "0";
        string s = helper(n-1);
        
        string rev = invert(s);
        reverse(rev.begin(), rev.end());
        
        return s + "1" + rev;
    }

    char findKthBit(int n, int k){
        string ans = helper(n);
        return ans[k-1];
    }
};