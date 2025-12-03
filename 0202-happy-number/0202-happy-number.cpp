class Solution {
public:
    int squaresum(int a){
        int res=0;
        while(a>0){
            res+=(a%10)*(a%10);
            a/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        int sum;
        if(n<9)
            return (n==1)?true:false;
        while(n>1){
            sum=squaresum(n);
            if(sum==1)
                return true;
            else
                n=sum;
        }
        return (n==1)?true:false;
    }
};