class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        int sum=0,idx;
        for(int i=0;i<words.size();i++){
            sum=0;
            for(int j=0;j<words[i].size();j++){
                idx=weights[words[i][j]-'a'];
                sum+=idx;
            }
            s+=('z'-(sum%26));
        }
        return s;
    }
};