class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(char c:word){
            mp[c]++;
        }
        if(mp.size()<=8)
            return mp.size();
        int n=mp.size(),d=1,cnt=0;
        while(n>8){
            cnt+=(8*d);
            n-=8;
            d++;
        }
        cnt+=(n*d);
        return cnt;
    }
};