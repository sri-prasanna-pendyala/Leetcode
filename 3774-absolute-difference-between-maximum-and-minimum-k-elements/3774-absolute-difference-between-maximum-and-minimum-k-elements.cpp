class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int large=0,small=0,n=nums.size()-1;
        for(int i=0;i<k;i++){
            small+=nums[i];
            large+=nums[n-i];
        }
        return abs(large-small);
    }
};