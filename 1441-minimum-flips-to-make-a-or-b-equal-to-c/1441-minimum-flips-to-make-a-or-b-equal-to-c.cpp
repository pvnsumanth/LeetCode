class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;
        while(c>0 || a>0 ||b>0){
            int x=a&1;
            int y=b&1;
            int z=c&1;
            if(x+y==2 && z==0) count+=2; 
            else if((x || y) !=z) count++;
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return count;
    }
};