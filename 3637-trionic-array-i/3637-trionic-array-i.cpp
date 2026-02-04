class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int inc=0,dec=0,secinc=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1] && dec==0)
                inc++;
            else if(nums[i]<nums[i-1] && inc>0 && secinc==0){
                dec++;
            }
            else if(nums[i]>nums[i-1] && dec>0){
                secinc++;
            }
            else
                return false;
        }
        return (inc>0 && secinc>0 && dec>0);
    }
};