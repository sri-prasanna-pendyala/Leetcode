class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s1(n);
        unordered_set<int> s2(n);
        vector<int> diff(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                s2.insert(nums[j]);
            }
            s1.insert(nums[i]);
            diff[i]=s1.size()-s2.size();
            // s1.clear();
            s2.clear();
        }
        return diff;
    }
};