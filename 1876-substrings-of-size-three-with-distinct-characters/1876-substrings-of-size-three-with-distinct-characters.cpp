class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt=0;
         for(int i=0;i<s.size()-2;i++){
            int j=i+1;
            if(s[i]!=s[j] && s[i]!=s[i+2] && s[j]!=s[i+2])
                cnt++;
         }
         return cnt;
    }
};