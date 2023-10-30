class Solution {
public:
    static bool compare(pair<int,int> i,pair<int,int> j){
        if(i.second==j.second) return i.first<=j.first;
        return i.second<j.second;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> pairing;
        for(auto i:arr){
            int n=i;
            int count=0;
            while(n){
                count+=n&1;
                n>>=1;
            }
            pairing.push_back({i,count});
        }
        sort(pairing.begin(),pairing.end(),compare);
        for(int i=0;i<arr.size();i++) arr[i]=pairing[i].first;
        return arr;
    }
};