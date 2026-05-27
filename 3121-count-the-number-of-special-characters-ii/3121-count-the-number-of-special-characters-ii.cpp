class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> freq(26,0);
        for(char c:word){
            if(islower(c)){
                if(freq[c-'a']==0)
                    freq[c-'a']++;
                else if(freq[c-'a']==-1)
                    freq[c-'a']=-2;
            }
            else if(isupper(c)){
                if(freq[c-'A']==1)
                    freq[c-'A']=-1;
                else if(freq[c-'A']==0)
                    freq[c-'A']=-2;
            }
        }
        int cnt=0;
        for(char c:word){
            if(isupper(c)){
                if(freq[c-'A']==-1){
                    cnt++;
                    freq[c-'A']=0;
                }
            }
        }
        return cnt;
    }
};