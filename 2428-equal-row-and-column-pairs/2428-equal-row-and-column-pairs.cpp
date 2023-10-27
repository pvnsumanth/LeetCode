class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>hash1;
        map<vector<int>,int>hash2;
        
        for(int i=0;i<grid.size();i++){
            vector<int>v;
            v=grid[i];
            hash1[v]++;
        }
        for(int j=0;j<grid[0].size();j++){
            vector<int>v;
            for(int i=0;i<grid.size();i++){
                v.push_back(grid[i][j]);
            }
            hash2[v]++;
        }
        int result=0;
        for(auto i:hash1){
            if(hash2.find(i.first)!=hash2.end()){
                result+=i.second*hash2[i.first];
            }
        }
        return result;
    }
};