class Solution {
public:
//function to return the sum of the digits in array
    int sumofdigits(int n){
        int rem,sum=0;
        if(n<10)    
            return n;
        while(n>0){
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int mini=INT_MAX,sum;
        for(int i=0;i<nums.size();i++)
        {
            //sum of each digit in the array
            sum=sumofdigits(nums[i]);
            mini=min(sum,mini); //storing the minimum of them
        }
        return mini;
    }
};