class Solution {
public:
    bool check(vector<int>& nums) {
        int pivot=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
                pivot++;
            if(pivot>1)
                return false;
        }
        return (nums[0]<nums[nums.size()-1] && pivot>0)?false:true;
    }
};