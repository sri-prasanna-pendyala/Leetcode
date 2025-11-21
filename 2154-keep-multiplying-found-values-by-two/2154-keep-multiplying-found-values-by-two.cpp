class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int dig=original;
        for(int i=0;i<nums.size();i++){
            if(dig==nums[i]){
                dig*=2;
            }
        }
        return dig;
    }
};