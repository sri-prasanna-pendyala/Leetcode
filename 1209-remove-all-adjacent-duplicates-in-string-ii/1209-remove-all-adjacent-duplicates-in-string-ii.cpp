class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push({s[i],1});
            }
            else{
                if(st.top().first!=s[i]){
                    st.push({s[i],1});
                }
                else{
                    st.top().second++;
                }
                if(st.top().second==k){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ans+=st.top().first;
            st.top().second--;
            if(st.top().second==0)
                st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};