class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        int maj=nums.size()/3;
        for(auto i:freq){
            if(i.second>maj)
                v.push_back(i.first);
        }
        return v;
    }
};