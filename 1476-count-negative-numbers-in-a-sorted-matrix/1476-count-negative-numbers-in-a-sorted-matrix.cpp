class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto i:grid){
            int left=0;
            int right=i.size()-1;
            while(left<=right){
                int mid=(left+right)/2;
                if(i[mid]<0){
                    count+=right-mid+1;
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
        }
        return count;
    }
};