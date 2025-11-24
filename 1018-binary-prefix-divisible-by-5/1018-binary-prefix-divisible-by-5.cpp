class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int ans=0;
        vector<bool> vec;
        for(int i=0;i<nums.size();i++){
            ans=(ans*2+nums[i])%10;
            if(ans%5==0){
                vec.push_back(true);
            }
            else
                vec.push_back(false);
        }
        return vec;
    }
};