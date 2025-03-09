class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero=0;
        //variable nonzero stores the place where the nxt nonzero index have to swap with.
        for(int i=0;i<nums.size();i++)
        {
            //if the element is nonzero value then swap with the variable nonzero.This moves the nonzero's to the front by pushing the zeroes to the every non zero index which are encountered.
            if(nums[i]!=0)
            {
                swap(nums[i],nums[nonzero]);
                //after swapping the elements we increment the nonzero index if there are adjacent zeroes
                nonzero++;
            }
        }  
    }
};