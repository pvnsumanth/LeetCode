class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,set<int> >adj;
        for(auto i:edges){
            adj[i[0]].insert(i[1]);
            adj[i[1]].insert(i[0]);
        }
        for(auto i:adj){
            if(i.second.size()==adj.size()-1){
                return i.first;
            }
        }
        return 1;
    }
};