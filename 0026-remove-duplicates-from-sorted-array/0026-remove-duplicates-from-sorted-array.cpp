class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,r=0,k=1;
        while(r<nums.size()){
            if(nums[l]==nums[r])
                r++;
            else{
                swap(nums[++l],nums[r++]);
                k++;
            }
        }
        return k;
    }

};