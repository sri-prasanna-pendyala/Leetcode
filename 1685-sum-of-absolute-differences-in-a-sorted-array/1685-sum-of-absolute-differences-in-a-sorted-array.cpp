class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        //brute force
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=0;j<nums.size();j++){
        //         sum+=abs(nums[i]-nums[j]);
        //     }
        //     ans.push_back(sum);
        // }
        // return ans;

        //optimal using suffix and prefix sums
        int n=nums.size();
        vector<int> pre(n,0),suf(n,0),ans;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i-1];
            suf[n-i-1]=suf[n-i]+nums[n-i];
        }
        for(int i=0;i<n;i++){
            // (6-1)+(6-4)+(8-6)+(10-6)+(11-6) can be treated as 2 parts left &right sum
            // (6-1)+(6-4) -> 6*2+(1+4)-> 6*i - (lsum)
            // (8-6)+(10-6)+(11-6) -> 6*3+(8+10+11)-> rsum - 6(n-i-1) as 6-2-1=3
            //  the absolute diff can be calculated by lsum+rsum
            int lsum=nums[i]*i-pre[i]; 
            int rsum=suf[i]-(n-i-1)*nums[i];
            ans.push_back(rsum+lsum);
        }
        return ans;
        return suf;
    }
};