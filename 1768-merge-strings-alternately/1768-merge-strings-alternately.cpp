class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int l=0,r=0;
        while(l<word1.size() || r<word2.size()){
            if(l<word1.size())
                s+=word1[l++];
            if(r<word2.size())
                s+=word2[r++];
        }
        return s;
    }
};