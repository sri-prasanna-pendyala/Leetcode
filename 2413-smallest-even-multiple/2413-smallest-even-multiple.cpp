class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=1,flag=0,prod;
        while(flag==0)
        {
            prod=i*n;
            if(prod%2==0)
                flag=prod;
            i++;
        }
        return flag;
    }
};