class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int cnt=1,mx=0;
        for(int i:s){
            cnt=1;
            if(s.find(i-1)!=s.end())
                continue;
            else{
                int j=i;
                while(s.find(j+1)!=s.end()){
                    cnt++;
                    j++;
                }
            }
            mx=max(cnt,mx);
        }
        return mx;
    }
};