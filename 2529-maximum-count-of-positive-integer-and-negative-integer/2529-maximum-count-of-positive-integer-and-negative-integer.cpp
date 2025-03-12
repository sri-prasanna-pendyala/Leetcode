class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0,pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                pos+=1;
            else if(nums[i]<0)
                neg+=1;
        }
        return (neg>pos)?neg:pos;
    }
};