class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi=INT_MIN,sum=0;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
            maxi=max(maxi,i);
            sum+=i;
        }
        if(nums.size()!=maxi+1 || sum-maxi != ((maxi*(maxi+1))/2))
            return false;
        for(auto i:mp){
            if(i.second>=2){
                if(i.first!=maxi)
                    return false;
            }
        }
        return true;
    }
};