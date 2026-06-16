class CustomStack {
public:
    stack<int> st,temp;
    int maxi=0;
    CustomStack(int maxSize) {
        maxi=maxSize;
    }
    
    void push(int x) {
        if((!st.empty() && st.size()<maxi) || st.empty()){
            st.push(x);
        }
    }
    
    int pop() {
        if(!st.empty()){
            int ele=st.top();
            st.pop();
            return ele;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int s=st.size();
        while(!st.empty()){
            if(s<=k){
                temp.push(st.top()+val);
            }
            else{
                temp.push(st.top());
            }
            s--;
            st.pop();
        }
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */