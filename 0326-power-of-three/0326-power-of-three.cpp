class Solution {
public:
    bool isPowerOfThree(int n) {
        //creating double to store the power value as when calculating log it may be decimal
        double num;
        if(n<=0)
            return false;
        else if(n==1)
            return true;
        else
        {
            //log(27)/log(3)=14.99999 it will be ceiled to 15...even though 15 looks like integer,ceil
            //function return double value..so we should make our integer double
            num=ceil((log(n)/log(3)));
            //we should check whether the result is greater than 0
            if(num>0)
                //checking whether 3 to the power of the num is equal to the given number
                if(pow(3,num)==n)
                    return true;
        }
        return false;
    }
};