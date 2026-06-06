class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size());
        stack<int> st;
        int maxi=INT_MIN,idx=0;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i])
                st.pop();
            ans[i]=(st.empty())?-1:st.top();
            st.push(nums[i]);
            if(nums[i]>maxi){
                maxi=nums[i];
                idx=i;
            }
        }
        for(int i=nums.size()-1;i>idx;i--){
            while(!st.empty() && st.top()<=nums[i])
                st.pop();
            if(ans[i]==-1)
            ans[i]=(st.empty())?-1:st.top();
            st.push(nums[i]);
        }
        return ans;
    }
};