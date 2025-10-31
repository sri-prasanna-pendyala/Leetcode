class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto &i:mp){
            if(i.second==2){
                res.push_back(i.first);
            }
        }
        return res;
    }
};