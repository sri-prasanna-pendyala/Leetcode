class Solution {
public:
    bool check(string s1,string s2){
        if(s1.size()!=s2.size())
            return false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return (s1==s2);
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int i=0;
        while((i+1)<words.size()){
            if(check(words[i],words[i+1])){
                words.erase(words.begin()+(i+1));
            }
            else
                i++;
        }
        return words;
    }
};