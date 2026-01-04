class Solution {
public:
    int divisor(int n){
        int cnt=0,sum=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i){
                    cnt++;
                    sum+=i;
                }
                else{
                    cnt+=2;
                    sum+=n/i;
                    sum+=i;
                }
            }
        }
        return (cnt==4)?sum:0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=divisor(nums[i]);
        }
        return ans;
    }
};