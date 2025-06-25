class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int rem,sum=0,tmp=x;
        while(x>0)
        {
            rem=x%10;
            sum+=rem;
            x/=10;
        }
        return (tmp%sum==0)?sum:-1;
    }
};