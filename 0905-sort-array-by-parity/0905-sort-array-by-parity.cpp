class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            while(nums[l]%2==0 && l<r)
                l++;
            while(nums[r]%2!=0 && r>l)
                r--;
            swap(nums[l++],nums[r--]);
        }
        return nums;
    }
};