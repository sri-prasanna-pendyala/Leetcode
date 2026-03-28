class Solution {
public:
    int findGCD(vector<int>& nums) {
        int small=INT_MAX,large=INT_MIN;
        // finding min and max values in array
        for(int i:nums){
            small=min(small,i);
            large=max(large,i);
        }
        // finding GCD using euclidean method
        // to find gcd, do large%small & store the small->large & (large%small)->small
        // do this process until the remainder of large & small is 0
        while((large%small)!=0){
            int temp=large%small;
            large=small;
            small=temp;
        }
        return small;
    }
};