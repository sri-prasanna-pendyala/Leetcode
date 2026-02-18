class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1,temp;
        while(l<=r && r>0){
            if(abs(nums[l])>abs(nums[r])){
                temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;      
            }
            r--;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        return nums;
        //brute force
        // for(int i=0;i<nums.size();i++){
        //     nums[i]*=nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
    }
};