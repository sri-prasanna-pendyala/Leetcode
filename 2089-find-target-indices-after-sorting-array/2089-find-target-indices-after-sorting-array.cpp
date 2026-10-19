class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int low=0, high=0, mid;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target)
                low++;
            else if(nums[i]>target)
                high++;
        }
        for(int i=low; i<(nums.size()-high); i++){
            ans.push_back(i);
        }
        return ans;
    }
};