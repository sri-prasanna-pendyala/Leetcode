class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int start=1,rep=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                ans.push_back(nums[i]);
                break;
            }
        }
        set<int> s(nums.begin(),nums.end());
        for(int a:s){
            if(start!=a){
                break;
            }
            start++;
        }
        ans.push_back(start);
        return ans;
    }
};