class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftsum(n,0);
        int runningsum=0;
        for(int i=0;i<n;i++){
            leftsum[i]=runningsum;
            runningsum+=nums[i];
        }
        runningsum=0;
        vector<int> rightsum(n,0);
        for(int i=n-1;i>=0;i--){
            rightsum[i]=runningsum;
            leftsum[i]=abs(leftsum[i]-rightsum[i]);
            runningsum+=nums[i];
        }
        return leftsum;
    }
};