class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        //if the array has 2 ele then there is no min and max
        if(nums.size()<3)   return -1;
        int cnt=-1;
        //sort the array for easy check
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size()-1;i++){
            //if adjacent ele doesn,t match and varies then it is THE ONE
            if(nums[i]>nums[i-1])
                cnt=nums[i];
        }
        return cnt;
    }
};