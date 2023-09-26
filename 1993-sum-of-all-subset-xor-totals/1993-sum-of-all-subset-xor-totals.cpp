class Solution {
public:
     void solve(vector<int>& arr, vector<vector<int>>& subsets, vector<int> curr_subset, int i =0){ 
        
        if(i == arr.size()){
            subsets.push_back(curr_subset);
            return;
        }
       
        curr_subset.push_back(arr[i]);
        solve(arr, subsets,curr_subset, i+1);

        curr_subset.pop_back();
        solve(arr, subsets,curr_subset, i+1);
    }

    int subsetXORSum(vector<int>& arr) {
        vector<vector<int>> subsets;
        vector<int> curr_subset;
        solve(arr,subsets,curr_subset);

        int grand_total = 0;
        for(auto i: subsets){
            int curr_total = 0;
            for(auto j: i){
                curr_total =  (curr_total ^ j);
            }
            grand_total += curr_total;
        }
        return grand_total;
    }
};