class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        //for index i we need this as the nxt element in the array
        int index=(2*n)/2;
        for(int i=0;i<n;i++)
        {
            //we iterate through halfway of array & assign w.r.to the same index
            v.push_back(nums[i]);
            v.push_back(nums[i+index]);
        }
        return v;
    }
};