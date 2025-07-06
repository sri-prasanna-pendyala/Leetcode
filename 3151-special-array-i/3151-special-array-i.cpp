class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        //check if (even,even) OR (odd,odd) pairs and return false immediately
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]%2!=0 && nums[i+1]%2!=0) || (nums[i]%2==0 && nums[i+1]%2==0))
                return false;
        }
        return true;
    }
};