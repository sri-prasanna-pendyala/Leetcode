class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int res,mini=INT_MAX,sec;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=mini){
                sec=mini;
                mini=nums[i];
            }
            else if(nums[i]<=sec)
                sec=nums[i];
        }
        res=nums[0]+sec+mini;
        return res;
    }
};