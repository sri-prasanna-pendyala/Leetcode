class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp="";
        int cnt,mx=INT_MAX;
        if(strs.size()==1) return strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0,cnt=0;
            while(j<strs[i].size()){
                if(j<strs[i-1].size() && strs[i][j]==strs[i-1][j]){
                    cnt++;
                }
                else{
                    break;
                }
                j++;
            }
            mx=min(mx,cnt);
        }
        for(int i=0;i<mx;i++)
            lcp+=strs[0][i];
        return lcp;
    }
};