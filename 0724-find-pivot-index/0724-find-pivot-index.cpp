class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int presum=0;
        for(int i:nums){
            presum+=i;
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
            presum-=nums[i];
            if(presum==sum)
                return i;
            sum+=nums[i];
        }
        return -1;
    }
};