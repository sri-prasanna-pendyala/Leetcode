class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int two=nums[0],one=nums[0];
        do{
            one=nums[one];
            two=nums[nums[two]];
        }while(one!=two);
        two=nums[0];
        while(one!=two){
            one=nums[one];
            two=nums[two];
        }
        return one;
    }
};