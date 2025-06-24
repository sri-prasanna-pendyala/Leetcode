class Solution {
public:
    bool isHappy(int n) {
        int sum=0,rem=0;
        while(n>0)
        {
            rem=n%10;
            sum+=pow(rem,2);
            n=n/10;
            if(n==0)
            {
                if(sum>=10)
                {
                    n=sum;
                    sum=0;
                }
                else if(sum>1)
                    return false;
            }
        }
        return true;
    }
};