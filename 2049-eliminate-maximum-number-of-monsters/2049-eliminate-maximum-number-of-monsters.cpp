class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> time;
        for(int i=0;i<dist.size();i++) {
            float x=(float)dist[i]/speed[i];
            time.push_back(x);
            }
        sort(time.begin(),time.end());
        int count=0;
        int i=0;
        int term=0;
        while(i<time.size()){
            if(time[i]<=term)break;
            count++;
            i++;
            term++;
        }
        return count;
    }
};