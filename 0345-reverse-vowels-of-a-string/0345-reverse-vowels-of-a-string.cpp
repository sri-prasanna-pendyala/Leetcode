class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int l=0,r=s.size()-1;
        while(l<r && r>=0){
            if(isvowel(s[l]) && isvowel(s[r])){
                swap(s[l++],s[r--]);
            }
            while(l<r && !isvowel(s[l]))
                l++;
            while(r>l && !isvowel(s[r]))
                r--;
        }
        return s;
    }
};