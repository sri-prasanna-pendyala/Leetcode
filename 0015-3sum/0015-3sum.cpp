class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int mid, end, val, start=0;
        while(start<nums.size()){
            int target=-nums[start];
            mid=start+1,end=nums.size()-1;
            while(mid<end){
                if(nums[mid]+nums[end]==target){
                    res.push_back({nums[start],nums[mid++],nums[end--]});
                    while(mid<end && nums[mid]==nums[mid-1])
                        mid++;
                    while(end>0 && nums[end]==nums[end+1])
                        end--;
                }
                else if(nums[mid]+nums[end]>target){
                    end--;
                    while(end>0 && nums[end]==nums[end+1])
                        end--;
                }
                else{
                    mid++;
                }
            }
            start++;
            while(start<nums.size()-2 && nums[start]==nums[start-1])
                start++;
        }
        return res;
    }
};