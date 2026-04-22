class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        for(int i=0;i<queries.size();i++){
            string word=queries[i];
            for(int j=0;j<dictionary.size();j++){
                string match=dictionary[j];
                int cnt=0;
                for(int c=0;c<word.size();c++){
                    if(word[c]!=match[c])
                        cnt++;
                }
                if(cnt<=2){
                    ans.push_back(word);
                    break;
                }
            }
        }
        return ans;
    }
};