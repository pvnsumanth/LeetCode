class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1){
            return false;
        }
        if(n==1){
            return true;
        }
        if(2*(n/2)!=n){
            return false;
        }
        n=n/2;
        return isPowerOfTwo(n);
    }
};