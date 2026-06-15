class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        for(int i=a.size()-1;i>=0;i--){
            if(!st.empty() && a[i]>0 && st.top()<0){
                while(!st.empty() && st.top()<0 && abs(st.top())<a[i]){
                    st.pop();
                }
                if(!st.empty() && st.top()<0 && abs(st.top())==a[i]){
                    st.pop();
                    continue;
                }
                else if(!st.empty() && st.top()<0 && abs(st.top())>a[i]){
                    continue;
                }
                st.push(a[i]);
            }
            else
            st.push(a[i]);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};