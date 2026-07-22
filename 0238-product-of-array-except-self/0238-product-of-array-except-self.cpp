class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        long long suf=1,pre=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=pre;
            pre*=nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--){
            suf*=nums[i+1];
            ans[i]*=suf;
        }
        return ans;
    }
};