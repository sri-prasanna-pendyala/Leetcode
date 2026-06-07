class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        vector<int> ans;
        for(int i=a.size()-1; i>=0; i--){
            int flag=0;
            if(st.empty()){
                st.push(a[i]);
            }
            else{
                if(a[i]>0 && st.top()<0){
                    if(!st.empty() && abs(st.top())<a[i]){
                        st.pop();
                        i++;
                    }
                    else if(!st.empty() && abs(st.top())==a[i]){
                        st.pop();
                    }
                }
                else
                    st.push(a[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};