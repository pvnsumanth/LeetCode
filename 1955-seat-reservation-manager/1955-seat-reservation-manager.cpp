#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
class SeatManager {
public:
   ordered_set s; 
    SeatManager(int n) {
        for(int i=1;i<=n;i++) s.insert(i);
    }
    
    int reserve() {
        int a=(int)*s.find_by_order(0);
        s.erase(a);
        return a;
    }
    
    void unreserve(int seatNumber) {
        s.insert(seatNumber);
    }
};
/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */