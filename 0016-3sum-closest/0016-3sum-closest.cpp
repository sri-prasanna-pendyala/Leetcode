class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // used 3 pointer + sorting approach
        int sum=0,ans=INT_MAX,n=nums.size(),diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            //skipping duplicate values
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1,k=nums.size()-1;
            // make sure those 2 pointers never met
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                // if the curr absolute difference < previous sum differnce vth target
                // then it may be the closer sum value to the target
                // so we track both diff and sum (which are closer to target)
                // there is no point in avoiding dups as we focus on closer sum than uniqs
                if(abs(target-sum)<diff){
                    ans=sum;
                    diff=abs(target-sum);
                }
                // As array is sorted, if the sum < target then the closer value would 
                // be infront so we increment j 
                if(sum<target)
                    j++;
                else if(sum>target)
                    k--;
                else
                    return sum;
            }
        }
        return ans;
    }
};