class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i=0; i<num.size(); i++){
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                k--;
            }
            if(st.empty() && num[i]=='0')
                continue;
            st.push(num[i]);
        }
        string ans="";
        while(!st.empty()){
            if(k<=0)
            ans+=st.top();
            k--;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return (ans.size()==0)?"0":ans;
    }
};