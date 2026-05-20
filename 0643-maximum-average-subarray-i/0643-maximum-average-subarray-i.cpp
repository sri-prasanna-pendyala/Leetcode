class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0,sum=0,maxavg=INT_MIN;
        for(int i=0; i<k-1; i++){
            sum+=nums[i];
        }
        int l=0;
        for(int i=k-1;i<nums.size();i++){
            sum+=nums[i];
            avg=sum/k;
            maxavg=max(avg,maxavg);
            sum-=nums[l++];
        }
        return maxavg;
    }
};