class Solution {
public:
    int reverse(int x) {
        int rem=0,res=0,neg=0;
        //checking for overflow and underflow condition at first
        if(x==INT_MIN || x==INT_MAX)
            return 0;
        //checking if the number is positive or negative
        else if(x<0)
        {
            //if number is negative then put neg to 1
            neg=1;
            //changing the negative number to positive number for calc purpose
            //bcoz for -121--> x%10--> -1
            x=-x;
        }
        for(int i=x;i>0;i/=10)
        {
            rem=i%10;
            //checking if adding the rem to the result reults in overflow as we still not added the rem
            // int max is 214748364'7'..we check whether res > intmax 
            // or res is equal to 214748364 at last step we check whether rem is greater than 7
            if(res>(INT_MAX/10) || res==(INT_MAX/10) && rem>7)
                return 0;
            res=rem+res*10;
        }
        //since we changed neg to pos number before, again we need to change that to org form
        return (neg==1)?-res:res;
    }
};