class Solution {
public:
    bool game(int start,int end,vector<int>nums,int a_score,int b_score,int flag){
        if(start>end) return a_score>=b_score;
        bool res;
        if(flag==1){
            res=game(start+1,end,nums,a_score+nums[start],b_score,2) || game(start,end-1,nums,a_score+nums[end],b_score,2);
        }
        else{
            res=game(start+1,end,nums,a_score,b_score+nums[start],1) && game(start,end-1,nums,a_score,b_score+nums[end],1);
        }
        return res;
    }
    bool predictTheWinner(vector<int>& nums) {
        return game(0,nums.size()-1,nums,0,0,1);
    }
};