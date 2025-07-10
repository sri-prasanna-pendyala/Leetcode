class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size(),sq=0;
        for(int i=0;i<nums.size();i++)
        {
            if(n%(i+1)==0)
                sq+=(nums[i]*nums[i]);
        }
        return sq;
    }
};