class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //if size is 2 we avoid unnecessary iteration
        if(nums.size()<3)   return ((nums[0]-1)*(nums[1]-1));
        //we find max and second max ele inorder to get max product
        int one=0,two=0;
        for(auto &i:nums){
            if(i>=one)
            {
                two=one;
                one=i;
            }
            else if(i>two)
                two=i;
        }
        //return the ans
        return ((one-1)*(two-1));
    }
};