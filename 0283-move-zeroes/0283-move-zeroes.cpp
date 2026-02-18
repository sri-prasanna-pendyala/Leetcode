class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //feb 2026
        int l=0,r=0;
        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
            }
            r++;
        }
        //may 2025
        // int zero=0,temp=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         temp=nums[i];
        //         nums[i]=nums[zero];
        //         nums[zero]=temp;
        //         zero++;
        //     }
        // }
        // march 2025 
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