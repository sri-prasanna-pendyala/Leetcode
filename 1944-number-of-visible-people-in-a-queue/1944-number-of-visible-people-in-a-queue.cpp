class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        stack<int> st;
        vector<int> ans(h.size(), 0);
        for (int i = h.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() < h[i]) {
                ans[i]++;
                st.pop();
            }
            if (!st.empty() && st.top() > h[i])
                ans[i]++;
            st.push(h[i]);
        }
        return ans;
    }
};