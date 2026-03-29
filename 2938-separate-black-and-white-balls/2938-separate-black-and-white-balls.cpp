class Solution {
public:
    long long minimumSteps(string s) {
        long long j=0,cnt=0;
        for(long long i=s.size()-1;i>=0;i--){
            if(s[i]=='0'){
                cnt+=(i-j);
                j++;
            }
        }
        return cnt;
    }
};