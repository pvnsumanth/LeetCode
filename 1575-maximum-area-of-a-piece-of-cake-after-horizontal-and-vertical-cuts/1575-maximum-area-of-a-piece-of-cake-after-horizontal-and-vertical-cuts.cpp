class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& VerticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(VerticalCuts.begin(),VerticalCuts.end());
        horizontalCuts.insert(horizontalCuts.begin(),0);
        horizontalCuts.push_back(h);
        VerticalCuts.insert(VerticalCuts.begin(),0);
        VerticalCuts.push_back(w);
        long mod=(10e+8)+7;
        long maxhot=INT_MIN;
        for(int i=0;i<horizontalCuts.size()-1;i++){
            if(horizontalCuts[i+1]-horizontalCuts[i]>maxhot){
                maxhot=horizontalCuts[i+1]-horizontalCuts[i];
            }
        }
        long maxver=INT_MIN;
        for(int i=0;i<VerticalCuts.size()-1;i++){
            if(VerticalCuts[i+1]-VerticalCuts[i]>maxver){
                maxver=VerticalCuts[i+1]-VerticalCuts[i];
            }
        }
        return (maxhot*maxver)%mod;
    }
};