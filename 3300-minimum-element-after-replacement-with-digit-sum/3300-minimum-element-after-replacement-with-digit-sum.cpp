class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            while(nums[i]>0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            if(sum<mini)mini=sum;
        }
        return mini;
    }
};