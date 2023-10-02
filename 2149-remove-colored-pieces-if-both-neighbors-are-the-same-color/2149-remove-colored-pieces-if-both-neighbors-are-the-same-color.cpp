class Solution {
public:
    bool winnerOfGame(string colors) {
        vector<int> alice(colors.size(),0);
        vector<int> bob(colors.size(),0);
        for(int i=0;i<colors.size();i++){
            if(colors[i]=='A') { 
                if(i==0) alice[i]=1;
                else alice[i]=alice[i-1]+1;
            }
            else if(colors[i]=='B'){
                if(i==0) bob[i]=1;
                else bob[i]=bob[i-1]+1;
            }
        }
        int alice_points=0;
        int bob_points=0;
        for(int i=0;i<alice.size()-1;i++){
            if(alice[i+1]==0 and alice[i]>2) alice_points+=alice[i]-2;
            if(bob[i+1]==0 and bob[i]>2) bob_points+=bob[i]-2;
        }
        if(alice[alice.size()-1]>2)alice_points+=alice[alice.size()-1]-2;
        if(bob[bob.size()-1]>2)bob_points+=bob[bob.size()-1]-2;
        return alice_points>bob_points;
    }
};