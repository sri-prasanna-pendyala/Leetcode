class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(maxi<nums[i]) maxi=nums[i];
            if(mini>nums[i]) mini=nums[i];
        }
        return (maxi-mini)*k;
    }
};