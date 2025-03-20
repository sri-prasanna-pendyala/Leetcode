class Solution {
public:
    int divide(int dividend, int divisor) {
        //there is no problem with int_max as the int doesn't store values >int_max also when int_max
        //gets divided by the divisor it got reduced or even if it is a divisor there is no prblm
        // as it reduces the dividend to neg values so there is no point in handling them

        //if dividend is intmin like (-2147483648) and divisor is -1...(- sign) gets cancelled and 
        //ans will be 2147483648 which is >intmax as it'll result in overflow..we return intmax
         if(dividend==INT_MIN && divisor==-1)
        {
            return INT_MAX;
        }
        return (int)(dividend/divisor);
    }
};