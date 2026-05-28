class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int presum=0,cnt=0;
        unordered_map<int,int> freq;
        freq[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if(freq.find(presum-k)!=freq.end()){
                cnt+=freq[presum-k];
            }
            freq[presum]++;
        }
        return cnt;
    }
};