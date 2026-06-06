class MinStack {
public:
    stack<int> maxi,st;
    MinStack() {
        stack<int> st; 
    }
    
    void push(int value) {
        st.push(value);
        if(maxi.empty())
            maxi.push(value);
        else 
            maxi.push(min(value,maxi.top()));
    }
    
    void pop() {
        st.pop();
        maxi.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return maxi.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */