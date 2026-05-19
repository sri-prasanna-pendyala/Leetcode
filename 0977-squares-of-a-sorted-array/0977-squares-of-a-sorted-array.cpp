class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(), mini=INT_MAX, l, r;
        vector<int> v;
        for(int i=0;i<n;i++){
            nums[i]*=nums[i];
            mini=min(mini,nums[i]);
            if(mini==nums[i])
                l=i;
        }
        r=l+1;
        if(l==0)
            return nums;
        else if(r>=n){
            r=n-1;l=0;
            while(l<r)
                swap(nums[l++],nums[r--]);
            return nums;
        }
        else{
            r=l+1;
            while(l>=0 && r<n){
                if(nums[l]<nums[r]){
                    v.push_back(nums[l--]);
                }
                else
                    v.push_back(nums[r++]);
            }
            while(l>=0)
                v.push_back(nums[l--]);
            while(r<n)
                v.push_back(nums[r++]);
        }
        return v;
    }
};