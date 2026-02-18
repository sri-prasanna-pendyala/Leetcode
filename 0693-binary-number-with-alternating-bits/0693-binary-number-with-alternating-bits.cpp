class Solution {
public:
    bool hasAlternatingBits(int n) {
        string ans="";
        while(n>0){
            int rem=n%2;
            ans.push_back('0'+rem);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        int ele=ans[0];
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ele)
                return false;
            else
                ele=ans[i];
        }
        return true;
    }
};