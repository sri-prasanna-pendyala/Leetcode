class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singles=0,doubles=0;
        for(auto &i:nums){
            if(i<10)
                singles+=i;
            else
                doubles+=i;
        }
        return (singles>doubles || doubles>singles);
    }
};