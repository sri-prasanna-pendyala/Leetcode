class Solution {
public:
    int sumofdigits(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elesum=0,digisum=0;
        for(int i=0;i<nums.size();i++){
            elesum+=nums[i];
            digisum+=(nums[i]>9)?sumofdigits(nums[i]):nums[i];
        }
        return abs(elesum-digisum);
    }
};