class Solution {
public:
    int minDeletions(string s) {
        map<char,int> hash;
        set<int> freq;
        for(auto i:s) hash[i]++;
        int deletion=0;
        for(auto &i:hash){
            int freq1=i.second;
            while(freq1>0 && freq.find(freq1)!=freq.end()){
                freq1--;
                deletion++;
            }
            freq.insert(freq1);
        }
        return deletion;
    }
};