class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        long long sum=0;
        unordered_map<long long,int> freq;
        freq[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(freq.find(sum%k)!=freq.end()){
                if(i-freq[sum%k]>=2)
                    return true;
            }
            else
                freq[sum%k]=i;
        }
        return false;
    }
};