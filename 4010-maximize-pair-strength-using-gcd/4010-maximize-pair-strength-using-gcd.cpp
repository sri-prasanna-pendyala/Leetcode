class Solution {
public:
    long long gcd(long long a,long long b){
        return b==0? a: gcd(b, a%b);
    }
    long long maxPairStrength(vector<int>& nums) {
        long long maxi=INT_MIN,pair;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long g=gcd(nums[i],nums[j]);
                pair=(1LL* nums[i]*nums[j])/(g*g);
                maxi=max(maxi,pair);
            }
        }
        return maxi;
    }
};