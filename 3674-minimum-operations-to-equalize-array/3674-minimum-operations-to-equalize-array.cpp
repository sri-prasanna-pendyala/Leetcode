class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flag=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1])
                return 1;
        }
        return 0;
    }
};