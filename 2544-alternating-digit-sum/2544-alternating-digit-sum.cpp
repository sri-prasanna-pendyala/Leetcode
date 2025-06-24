class Solution {
public:
    int alternateDigitSum(int n) {
        int sign=1,sum=0,rem;
        while(n>0)
        {
            rem=n%10;
            sum=sum+(rem*sign);
            sign*=-1;
            n/=10;
        }
        return sum;
    }
};