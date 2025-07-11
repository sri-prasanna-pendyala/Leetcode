class Solution {
public:
    int countElements(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]!=nums[0] && nums[i]!=n)
                cnt++;
        }
        return cnt;
    }
};