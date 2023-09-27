class Solution {
public:
    bool check(vector<vector<int>>& grid,int i,int j){
        if(i>=0 && i<grid.size() && j<grid[0].size() && j>=0 && grid[i][j]==1){
            return true;
        }
        return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int fresh=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0) return 0;
        q.push({{-1,-1},0});
        int time=0;
        while(q.size()>1 && fresh>0){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int t=q.front().second;
            int c=0;
            if(i==-1 && j==-1){
                q.pop();
                q.push({{i,j},t+1});
            }
            else{
                
                if(check(grid,i-1,j)){
                    cout<<i<<" "<<j<<endl;
                    c++;
                    fresh--;
                    grid[i-1][j]=2;
                    q.push({{i-1,j},t+1});
                    time=max(time,t+1);
                }
                if(check(grid,i+1,j)){
                    cout<<i<<" "<<j<<endl;
                    c++;
                    fresh--;
                    grid[i+1][j]=2;
                    q.push({{i+1,j},t+1});
                    time=max(time,t+1);
                }
                if(check(grid,i,j+1)){
                    cout<<i<<" "<<j<<endl;
                    c++;
                    fresh--;
                    grid[i][j+1]=2;
                    q.push({{i,j+1},t+1});
                    time=max(time,t+1);
                }
                if(check(grid,i,j-1)){
                    cout<<i<<" "<<j<<endl;
                    c++;
                    fresh--;
                    grid[i][j-1]=2;
                    q.push({{i,j-1},t+1});
                    time=max(time,t+1);
                }
                
                q.pop();
            }
            
        }
        
        return (fresh>0)?-1:time;
    }
};