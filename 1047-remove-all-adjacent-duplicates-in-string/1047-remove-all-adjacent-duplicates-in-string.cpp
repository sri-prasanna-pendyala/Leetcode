class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char c:s){
            if(!st.empty()){
                if(st.top()==c)
                    st.pop();
                else
                    st.push(c);
            }
            else
                st.push(c);
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};