class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int end=1;
        int high,low;
        for(int i=0;i<s.size();i++){
            low=i-1;
            high=i;
            while(low>=0 && high<s.size() && s[low]==s[high]){
                if(high-low+1>end){
                    start=low;
                    end=high-low+1;
                }
                high++;
                low--;
            }
        
            low=i-1;
            high=i+1;
            while(low>=0 && high<s.size() && s[low]==s[high]){
                if(high-low+1>end){
                    start=low;
                    end=high-low+1;
                }
                high++;
                low--;
            }
        }
        cout<<start<<endl<<end<<endl;
        return s.substr(start,end);
    }
};