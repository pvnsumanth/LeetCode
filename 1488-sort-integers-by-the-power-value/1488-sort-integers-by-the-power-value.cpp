class Solution {
public:
    static int cal(int a){
        int count=0;
        while(a!=1){
            if(a%2==0){
                a=a/2;
            }
            else{
                a=3*a+1;
            }
            count++;
        }
        return count;
    }
    static bool mycomp(int a,int b){
        int x=cal(a);
        int y=cal(b);
        if(x==y) return a<b;
        return x<y;
    }
    int getKth(int lo, int hi, int k) {
        vector<int> v;
        for(int i=lo;i<=hi;i++) v.push_back(i);
        sort(v.begin(),v.end(),mycomp);
        return v[k-1];
    }
};