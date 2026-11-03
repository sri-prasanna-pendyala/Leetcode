class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=INT_MIN,cnt=0;
        for(int i: nums){
            maxi=max(maxi,i);
        }
        for(int i:nums){
            if(i!=maxi)
                cnt+=maxi-i;
        }
        return cnt;
    }
};