class Solution {
public:
    string reverseOnlyLetters(string s) {
        int j=s.size()-1,i=0;
        while(i<=j){
            //check whether both chars are alphabets
            if(isalpha(s[i]) && isalpha(s[j]))
                    swap(s[i++],s[j--]); //swap them if they are
            else if(!isalpha(s[i])) //if i is not alpha then increment it
                i++;
            else
                j--;    //else decrement j
        }
        return s;
    }
};