class Solution {
public:
    double average(vector<int>& salary) {
        int max=INT_MIN;
        int min=INT_MAX;
        double sum=0;
        for(auto i:salary){
            if(i>max)max=i;
            if(i<min)min=i;
            sum+=i;
        }
        sum-=min+max;
        return sum/(salary.size()-2);
    }
};