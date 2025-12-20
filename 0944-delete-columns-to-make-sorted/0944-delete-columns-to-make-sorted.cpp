class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt=0;
        char idx;
        for(int i=0;i<strs[0].size();i++){
            idx=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(idx>strs[j][i]){
                    cnt++;
                    break;
                }
                idx=strs[j][i];
            }
        }
        return cnt;
    }
};