class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1])
            {
                cnt+=(nums[i-1]+1)-nums[i];
                nums[i]=nums[i-1]+1;
            }
        }
        return cnt;
    }
};