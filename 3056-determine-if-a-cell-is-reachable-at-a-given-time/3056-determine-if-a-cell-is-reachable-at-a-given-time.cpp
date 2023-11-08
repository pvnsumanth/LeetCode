class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if (sx==fx && sy==fy)  return (t!=1);
        int h=abs(sy-fy);
        int w=abs(sx-fx);
        int extra=abs(h-w);
        return min(h,w)+extra<=t;
    }
};