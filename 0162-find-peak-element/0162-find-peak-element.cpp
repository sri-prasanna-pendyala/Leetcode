class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int l=0,r=nums.size()-1,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(m-1>=0 && m+1<nums.size()){
                if(nums[m-1]<nums[m] && nums[m+1]<nums[m])
                    return m;
                else if(nums[m-1]>nums[m])
                    r=m-1;
                else
                    l=m+1;
            }
            else if(m-1>=0 && nums[m-1]<nums[m])
                    return m;
            else if(m+1<nums.size() && nums[m]>nums[m+1])
                return m;
            else
                l=m+1;
        }
        return -1;
    }
};