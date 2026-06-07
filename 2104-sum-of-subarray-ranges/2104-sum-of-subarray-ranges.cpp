class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long mini=INT_MAX,maxi=INT_MIN;
        long long sum=0;
        for(long long i=0;i<nums.size();i++){
            maxi=INT_MIN,mini=INT_MAX;
            for(long long j=i;j<nums.size();j++){
                if(nums[j]<mini) mini=nums[j];
                if(nums[j]>maxi) maxi=nums[j];
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};