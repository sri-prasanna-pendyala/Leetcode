class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> freq(26,0);
        for(char c:word){
            if(islower(c)){
                if(freq[c-'a']==0)
                    freq[c-'a']++;
            }
        }
        for(char c:word){
            if(isupper(c)){
                if(freq[c-'A']==1)
                    freq[c-'A']++;
            }
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(freq[i]==2)
                cnt++;
        }
        return cnt;
    }
};