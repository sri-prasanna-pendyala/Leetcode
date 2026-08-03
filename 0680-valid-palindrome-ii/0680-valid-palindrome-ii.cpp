class Solution {
public:
    bool ispalindrome(string s, int l,int r){
        while(l<=r){
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1,flag=0;
        string rev="",rev2="";
        while(l<=r){
            if(s[l]!=s[r])
                break;
            l++;
            r--;
        }
        if(l>r)
            return true;
        if(ispalindrome(s, l+1, r) || ispalindrome(s, l, r-1)){
            return true;
        }
        return false;
    }
};