class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i,j;
        for(i=start; i<nums.size() && nums[i]!=target;i++){}
        for(j=start;j>=0 && nums[j]!=target;j--){}
        if((i<nums.size() && j>=0) && nums[i]==target && nums[j]==target){
            return (abs(start-i)>abs(start-j))?abs(start-j):abs(start-i);
        }
        else
            return (i<nums.size() && nums[i]==target)?abs(start-i):abs(start-j);
    }
};