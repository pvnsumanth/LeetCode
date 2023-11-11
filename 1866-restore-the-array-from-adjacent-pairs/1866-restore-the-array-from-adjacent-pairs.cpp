class Solution {
public:
    void dfs(map<int,vector<int>>&hash,vector<int>&ans,int node,map<int,int>&visited){
        if(visited[node]) return;
        ans.push_back(node);
        visited[node]=1;
        for(auto i:hash[node]){
            dfs(hash,ans,i,visited);
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>>hash;
        for(auto i:adjacentPairs){
            hash[i[0]].push_back(i[1]);
            hash[i[1]].push_back(i[0]);
        }
        int node;
        for(auto i:hash){
            if(i.second.size()==1) {
                node=i.first;
                break;    
            }
        }
        vector<int>ans;
        map<int,int>visited;
        dfs(hash,ans,node,visited);
        return ans;
    }
};