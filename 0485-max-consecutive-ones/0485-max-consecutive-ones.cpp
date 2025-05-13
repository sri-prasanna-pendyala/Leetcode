class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int rep=0,high=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                rep+=1;
            else
            {
                high=(high>rep)?high:rep;
                rep=0;
            }
        }
        high=(high>rep)?high:rep;
        return high;
    }
};