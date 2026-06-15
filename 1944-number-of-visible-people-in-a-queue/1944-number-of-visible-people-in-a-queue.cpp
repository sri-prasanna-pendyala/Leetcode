class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        stack<int> st;
        vector<int> ans(h.size(),0);
        st.push(h[h.size()-1]);
        for(int i=h.size()-2; i>=0; i--){
            if(h[i]<st.top()){
                ans[i]=1;
                st.push(h[i]);
            }
            else{
                while(!st.empty() && st.top()<h[i]){
                    ans[i]++;
                    st.pop();
                }
                if(!st.empty() && st.top()>h[i]) ans[i]++;
                st.push(h[i]);
            }
        }
        return ans;
    }
};