class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vow;
        unordered_map<char,int> con;
        int vmaxi=0,cmaxi=0;
        for(char c:s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vow[c]++;
            else
                con[c]++;
        }
        for(auto i:vow)
            vmaxi=(i.second>vmaxi)?i.second:vmaxi;
        for(auto i:con)
            cmaxi=(i.second>cmaxi)?i.second:cmaxi;
        return cmaxi+vmaxi;
    }
};