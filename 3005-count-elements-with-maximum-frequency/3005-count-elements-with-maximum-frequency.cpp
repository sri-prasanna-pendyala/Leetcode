class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi=INT_MIN;
        int cnt=0;
        //creating map with ele as key and it's occurences as value
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++; 
        //iterating over the map to find the maximum frequency among them
        for(auto i:mp){
            int n=i.second;
            maxi=max(n,maxi);
        }
        //adding the ele with maximum frequency
        for(auto i:mp){
            if(i.second==maxi)
            cnt+=i.second;
        }
        return cnt;
    }
};