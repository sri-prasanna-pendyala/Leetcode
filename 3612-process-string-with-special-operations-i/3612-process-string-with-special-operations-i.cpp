class Solution {
public:
    string processStr(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i]))
                str+=s[i];
            else if(s[i]=='#'){
                string dup=str;
                str+=dup;
            }
            else if(s[i]=='%'){
                reverse(str.begin(),str.end());
            }
            else{
                if(str.size())
                str.pop_back();
            }
        }
        return str;
    }
};