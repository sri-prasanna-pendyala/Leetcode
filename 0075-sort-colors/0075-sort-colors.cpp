class Solution {
public:
    void sortColors(vector<int>& nums) {
        //brute force approach
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                o++;
            else
                t++;
        }
        for(int i=0;i<z;i++)
            nums[i]=0;
        for(int i=z;i<(z+o);i++)
            nums[i]=1;
        for(int i=z+o;i<(z+o+t);i++)
            nums[i]=2;
    }
};