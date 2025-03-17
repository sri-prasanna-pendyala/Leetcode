class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int cnt=0;
        for(int i=1;i<=n;i+=2)
        {
            if(nums[i-1]==nums[i])
                cnt++;
            else
                return false;
        }
        return (cnt==(nums.size()/2));
    }
};