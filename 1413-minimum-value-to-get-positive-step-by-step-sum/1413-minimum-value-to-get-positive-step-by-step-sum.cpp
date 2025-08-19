class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int presum=nums[0];
        int mini=presum,res=presum;
        for(int i=1;i<nums.size();i++){
            presum+=nums[i];
            mini=min(presum,mini);
        }
        if(mini>0)
            return 1;
        else
            mini=abs(mini);
        return mini==res?res:mini+1;
    }
};