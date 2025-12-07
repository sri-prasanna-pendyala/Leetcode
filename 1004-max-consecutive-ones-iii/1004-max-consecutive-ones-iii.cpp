class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,zero=0,cnt=0,maxi=INT_MIN;
        while(r<nums.size() && l<=r){
            if(nums[r]==1){
                cnt++;
            }
            else{
                if(zero<k){
                    zero++;
                    cnt++;
                }
                else{
                    zero++;
                    while(zero>k){
                        if(nums[l]==0){
                            zero--;
                            cnt=r-l;
                        }
                        l++;
                    }
                }
            }
            maxi=max(maxi,cnt);
            r++;
        }
        return maxi;
    }
};