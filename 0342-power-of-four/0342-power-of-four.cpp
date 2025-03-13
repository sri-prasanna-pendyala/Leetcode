class Solution {
public:
    bool isPowerOfFour(int n) {
        // double num;
        // if(n<=0)
        //     return false;
        // else if(n==1)
        //     return true;
        // else
        // {
        //     num=ceil(log(n)/log(4));
        //     if(pow(4,num)==n)
        //         return true;
        // }
        //  return false;  

        //used recursion unlike the previous one(TC: O(log(n)), SC: O(logn))
        if(n==1)
            return true;
        else
        {
            return (n>0 && isPowerOfFour(n/4) && n%4==0);
        } 
    }
};