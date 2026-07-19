class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        long long low=0, high=nums.size()-1,mid,found=0;
        while(low<=high){
            mid=low+ ((high-low)/2);
            if(nums[mid]==target){
                found=1;
                break;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        if(found==0)
            return {-1,-1};
        low=mid,high=mid;
        while(low>=0 &&  nums[low]==nums[mid])
            low--;
        while(high<nums.size() && nums[high]==nums[mid])
            high++;
        return {(int)low+1,(int)high-1};
    }
};