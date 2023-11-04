class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int l=(left.size()>0)? *max_element(left.begin(),left.end()):0;
        int r=(right.size()>0)? n-*min_element(right.begin(),right.end()):0;
        return max(l,r);
    }
};