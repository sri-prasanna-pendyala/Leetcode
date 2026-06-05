class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int cnt=0,i=s.size()-1;
        string str1="",str2="";
        while(i>=0){
            if(s[i]=='#'){
                cnt++;
            }
            else if(cnt>0){
                cnt--;
            }
            else
                str1+=s[i];
            i--;
        }
        i=t.size()-1,cnt=0;
        while(i>=0){
            if(t[i]=='#'){
                cnt++;
            }
            else if(cnt>0){
                cnt--;
            }
            else
                str2+=t[i];
            i--;
        }
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        return str1==str2;
    }
};