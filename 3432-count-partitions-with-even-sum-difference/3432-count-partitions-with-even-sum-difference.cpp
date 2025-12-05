class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int presum=nums[0];
        for(int i=1;i<nums.size();i++){
            presum+=nums[i];
        }
        int cnt=0,sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            presum-=sum;
            if(abs(sum-presum)%2==0)
                cnt++;
            presum+=sum;
        }
        return cnt;
    }
};