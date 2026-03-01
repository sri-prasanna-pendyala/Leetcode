class Solution {
public:
    int minPartitions(string n) {
        int curnum,maxi=0;
        for(auto c:n){
            curnum=c-'0';
            maxi=max(curnum,maxi);
        }
        return maxi;
    }
};