class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0,dig;
        for(int i=0;i<nums.size();i++)
        {
            dig=floor(log10(nums[i]))+1;
            cnt=(dig%2==0)?cnt+1:cnt;
        }
        return cnt;
    }
};