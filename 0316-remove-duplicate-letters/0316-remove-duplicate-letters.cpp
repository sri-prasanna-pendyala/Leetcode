class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        unordered_map<char,int> mp;
        vector<int> freq(26,0);
        for(char c:s){
            mp[c]++;
        }
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]==1 && freq[s[i]-97]==0){
                while(!st.empty() && st.top()>s[i] && mp[s[i]]>=1 && mp[st.top()]!=0){
                    freq[st.top()-97]=0;
                    st.pop();
                }
                st.push(s[i]);
                mp[s[i]]--;
                freq[s[i]-97]++;
            }
            else if(freq[s[i]-97]==0){
                while(!st.empty() && st.top()>s[i] && mp[st.top()]!=0){
                    freq[st.top()-97]=0;
                    st.pop();
                }
                st.push(s[i]);
                freq[s[i]-97]++;
                mp[s[i]]--;
            }
            else
                mp[s[i]]--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};