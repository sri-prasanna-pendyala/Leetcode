class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int cnt;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]!=nums[i] && nums[j]<nums[i])
                    cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};