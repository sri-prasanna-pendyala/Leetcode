class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i=0,j=1,maxi=-1;
        while(i<j && i<nums.size()-1){
            if(nums[i]<nums[j]){
                maxi=max(maxi,nums[j]-nums[i]);
            }
            if(j==nums.size()-1){
                i++;
                j=i+1;
            }
            else
                j++;
        }
        return maxi;
    }
};