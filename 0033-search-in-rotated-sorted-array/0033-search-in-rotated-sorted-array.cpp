class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
            return (nums[0]==target)?0:-1;
        int pivot=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                pivot=i;
                break;
            }
        }
        int low,high=nums.size()-1,mid;
        low=(pivot==-1)?0:pivot+1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        low=0,high=pivot,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
};