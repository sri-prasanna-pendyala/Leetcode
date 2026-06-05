class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st1,st2;
        string str="";
        int cnt=0;
        for(char c:s){
            if(c!=')'){
                st1.push(c);
                cnt++;
            }
            else{
                if(cnt>0){
                    st1.push(c);
                    cnt--;
                }
                if(cnt==0){
                    st1.pop();
                    while(!st1.empty()){
                        st2.push(st1.top());
                        st1.pop();
                    }
                    st2.pop();
                }
                while(!st2.empty()){
                    str+=st2.top();
                    st2.pop();
                }
            }
        }
        return str;
    }
};