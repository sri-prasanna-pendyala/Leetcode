class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //using 2 pointer approach
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int left=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            if(left==nums[i])
                continue;
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    left=nums[j];
                    while(j<nums.size() && nums[j]==left)
                        j++;
                    left=nums[k];
                    while(k>j && nums[k]==left)
                        k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                    k--;
                else
                    j++;
            }
            left=nums[i];
        }
        return ans;
        // Got TLE for this code 
        // int n=nums.size();
        // set<vector<int>> s;
        // unordered_map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]=i;
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int target=0-(nums[i]+nums[j]);
        //         if(mp.count(target) && mp[target]!=i && mp[target]!=j){
        //             vector<int> temp={nums[i],nums[j],target};
        //             sort(temp.begin(),temp.end());
        //             s.insert(temp);
        //         }
        //     }
        // }
        // vector<vector<int>> vec(s.begin(),s.end());
        // return vec;
    }
};