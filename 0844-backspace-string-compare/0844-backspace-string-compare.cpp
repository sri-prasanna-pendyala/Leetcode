class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j=t.size()-1,i=s.size()-1,b1=0,b2=0;
        while(i>=0 || j>=0){
            while(i>=0){
                if(s[i]=='#'){
                    i--;
                    b1++;
                }
                else if(b1>0){
                    b1--;
                    i--;
                }
                else
                    break;
            }
            while(j>=0){
                if(t[j]=='#'){
                    b2++;
                    j--;
                }
                else if(b2>0){
                    b2--;
                    j--;
                }
                else
                    break;
            }
            if(i<0 && j<0)
                return true;
            else if(i<0 ^ j<0)
                return false;
            if(s[i]==t[j]){
                i--;
                j--;
            }
            else
                return false;
        }
        return true;
    }
};