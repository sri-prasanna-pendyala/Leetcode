class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int mx=0;
        for(int i:s){
            mx=max(mx,i);
        }
        for(int i=1;i<=mx;i++){
            if(s.find(i)==s.end())
                return i;
        }
        return mx+1;
    }
};