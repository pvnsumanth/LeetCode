class MinStack {
public:
    vector<pair<int,int>> v;
    int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        v.push_back({val,min(val,mini)});
        mini=min(val,mini);
    }
    
    void pop() {
        v.pop_back();
        if(v.size()>0)
            mini=v.back().second;
        else mini=INT_MAX;
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */