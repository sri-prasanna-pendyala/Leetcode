class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0,temp=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp=nums[i];
                nums[i]=nums[zero];
                nums[zero]=temp;
                zero++;
            }
        }
        // int nonzero=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         swap(nums[i],nums[nonzero]);
        //         nonzero++;
        //     }
        // }  
    }
};