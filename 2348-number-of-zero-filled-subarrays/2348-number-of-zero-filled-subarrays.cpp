class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0,zerocount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zerocount++;
                cnt+=zerocount;
            }
            else
                zerocount=0;
        }
        return cnt;
    }
};