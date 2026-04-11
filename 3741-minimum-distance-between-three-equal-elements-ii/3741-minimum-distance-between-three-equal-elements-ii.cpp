class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size()<3)return -1;
        int dist=INT_MAX,prevdist=INT_MAX;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &i:mp){
            if(i.second.size()>=3){
                int k=0;
                while(k<i.second.size()-2){
                    dist=min(prevdist,dist);
                    int first=i.second[k];
                    int sec=i.second[k+1];
                    int third=i.second[k+2];
                    prevdist=abs(first-sec)+abs(sec-third)+abs(third-first);
                    k++;
                }
            }
        }
        dist=min(prevdist,dist);
        return (dist==INT_MAX)?-1:dist;
    }
};