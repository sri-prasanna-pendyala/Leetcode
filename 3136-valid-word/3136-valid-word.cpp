class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'||ch=='I' || ch=='O' || ch=='U')
            return true;
        return false;
    }
    bool isValid(string word) {
        if(word.size()<3)   return false;
        int vowel=0,cons=0;
        for(int i=0;i<word.size();i++){
            if(isvowel(word[i]))    //if vowel then inc it
                vowel++;
            else if(isalpha(word[i]) && !isvowel(word[i]))  //if it is alphanum but not vowel then it's a consonant
                cons++;
            else if(isalnum(word[i]))   //not vowel not cons then check if num...if yes then continue to nxt iter
                continue;
            else 
                return false;   //not satisfying above conds means it's a special symbol
        }
        return (vowel>=1 && cons>=1);
    }
};