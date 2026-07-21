class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cand=nums[i];
                cnt=1;
            }
            else if(cand==nums[i])
                cnt++;
            else
                cnt--;
        }
        return cand;
    }
};