class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long l=0,r=0,sum=0,minsize=INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            if(sum>=target){
                while(l<=r && sum>=target){
                    minsize=min(r-l+1, minsize);
                    sum-=nums[l++];
                }
            }
            r++;
        }
        if(sum>=target)
            minsize=min(r-l, minsize);
        return (minsize==INT_MAX)?0:minsize;
    }
};