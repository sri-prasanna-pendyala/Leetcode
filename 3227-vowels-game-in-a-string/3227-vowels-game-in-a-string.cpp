class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            return true;
        return false;
    }
    bool doesAliceWin(string s) {
        for(char c:s){
            if(isvowel(c))
                return true;
        }
        return false;
    }
};