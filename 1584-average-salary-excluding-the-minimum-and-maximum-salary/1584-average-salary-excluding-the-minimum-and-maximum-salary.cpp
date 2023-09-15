class Solution {
public:
    double average(vector<int>& salary) {
        int max=INT_MIN;
        int min=INT_MAX;
        double sum=0;
        int count=0;
        for(auto i:salary){
            if(i>max)max=i;
            if(i<min)min=i;
            sum+=i;
            count+=1;
        }
        double ans=(sum-max-min)/(count-2);
        return ans;
    }
};