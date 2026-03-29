class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key)
                pos.push_back(i);
        }
        vector<int> ans;
        int idx=0,i=0;
        while(i<pos.size() && idx<nums.size()){
           if(abs(idx-pos[i])<=k){
            ans.push_back(idx);
           }
           if(idx==(pos[i]+k))
                i++;
           idx++;
        }
        return ans;
    }
};