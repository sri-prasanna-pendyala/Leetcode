class Solution {
public:
    int sumBase(int n, int k) {
        int rem,sum=0;
        //To change any num from base 10 to another just MOD(%) it & divide(/) it with that base
        //works for any base
        while(n>0){
            rem=n%k;
            sum+=rem;
            n/=k;
        }
        return sum;
    }
};