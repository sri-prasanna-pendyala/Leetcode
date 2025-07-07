class Solution {
public:
//same like max consec ones
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi=0,cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
                cnt++;
            else{
                maxi=max(cnt,maxi);
                cnt=1;
            }
        }
        maxi=max(cnt,maxi);
        return maxi;
    }
};