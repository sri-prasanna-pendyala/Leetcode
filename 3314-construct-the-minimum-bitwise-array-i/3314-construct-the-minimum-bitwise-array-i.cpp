class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        int flag;
        for(int i=0;i<nums.size();i++){
            flag=0;
            for(int j=0;j<=nums[i];j++){
                if((j | (j+1))== nums[i]){
                    ans.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                ans.push_back(-1);
        }
        return ans;
    }
};