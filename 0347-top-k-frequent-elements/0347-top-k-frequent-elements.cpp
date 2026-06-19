class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(), [](const auto& a, const auto& b){
            return a.second>b.second;
        });
        vector<int> ans;
        for(auto i:v){
            if(ans.size()<k)
                ans.push_back(i.first);
            else 
                break;
        }
        return ans;
    }
};