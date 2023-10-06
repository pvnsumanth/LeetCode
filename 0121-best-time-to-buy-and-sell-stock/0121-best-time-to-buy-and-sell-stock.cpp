class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int start=0;
        for(int end=1;end<prices.size();end++){
            cout<<start<<" "<<end<<endl;
            if(prices[start]>prices[end])start=end;
            profit=max(profit,prices[end]-prices[start]);
        }
        return profit;
    }
};