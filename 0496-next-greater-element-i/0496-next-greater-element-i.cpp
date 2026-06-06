class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int idx;
        stack<int> st;
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=nums2.size()-1;i>=0;i--){ 
            while(!st.empty() && st.top()<=nums2[i])
                st.pop();
            mp[nums2[i]]=(st.empty())?-1:st.top();
            st.push(nums2[i]);
        }
            // if(st.empty()){
            //     nxtgreater[i]=-1;
            //     st.push(nums2[i]);
            // }
            // else{
            //     if(st.top()>nums2[i]){
            //         nxtgreater[i]=st.top();
            //         st.push(nums2[i]);
            //     }
            //     else if(st.top()<=nums2[i]){
            //         while(!st.empty() && st.top()<=nums2[i])
            //             st.pop();
            //         if(!st.empty()){
            //             nxtgreater[i]=st.top();
            //         }
            //         else
            //             nxtgreater[i]=-1;
            //         st.push(nums2[i]);
            //     }
            // }
        // }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};