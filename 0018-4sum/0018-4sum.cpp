class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size()<4)
            return res;
        sort(nums.begin(),nums.end());
        long long a=0,b=1,c,d;
        while(a<nums.size()-3){
            while(b<nums.size()-2){
                c=b+1,d=nums.size()-1;
                long long diff=target-((long long)nums[a]+(long long)nums[b]);
                while(c<d){
                    if((long long)nums[c]+(long long)nums[d]==diff){
                        res.push_back({nums[a],nums[b],nums[c++],nums[d--]});
                        while(c<d && nums[c]==nums[c-1])
                            c++;
                        while(c<d && nums[d]==nums[d+1])
                            d--;
                    }
                    else if((long long)nums[c]+(long long)nums[d]>diff){
                        d--;
                        while(c<d && nums[d]==nums[d+1])
                            d--;
                    }
                    else{
                        c++;
                        while(c<d && nums[c]==nums[c-1])
                            c++;
                    }
                }
                b++;
                while(b<nums.size()-2 && nums[b]==nums[b-1])
                    b++;
                }
                a++;
                while(a<nums.size()-3 && nums[a]==nums[a-1])
                    a++;
                b=a+1;
        }
        return res;
    }
};