class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int mini=INT_MAX,pivot=-1,small=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                pivot=i-1;
                break;
            }
        }
        if(pivot!=-1){
            for(int i=nums.size()-1;i>pivot;i--){
                if(nums[i]>nums[pivot]){
                    small=i;
                    break;
                }
            }
            swap(nums[pivot],nums[small]);
            reverse(nums.begin()+pivot+1, nums.end());
        }
        else
            reverse(nums.begin(),nums.end());
    }
};