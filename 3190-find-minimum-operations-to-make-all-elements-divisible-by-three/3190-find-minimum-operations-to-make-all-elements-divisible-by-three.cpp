class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(int a:nums){
            if(a%3!=0)
                cnt++;
        }
        return cnt;
    }
};