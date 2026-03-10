class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //brute force approach bcoz space O(n)
        // vector<int> res;
        // for(int i:nums){
        //     if(i%2==0)
        //         res.push_back(i);
        // }
        // for(int i:nums){
        //     if(i%2==1)
        //         res.push_back(i);
        // }
        // return res;
        
        //using 2 pointer approach with O(1) space
        int i=0,j=0,n=nums.size();
        while(i<n && j<n){
            if(nums[j]%2==1)
                j++;
            else if(nums[i]%2==0)
                i++;
            else{
                swap(nums[i++],nums[j++]);
            }
        }
        return nums;
    }
};