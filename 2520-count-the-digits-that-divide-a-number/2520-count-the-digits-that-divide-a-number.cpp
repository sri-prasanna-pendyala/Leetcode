class Solution {
public:
    int countDigits(int num) {
        int cnt=0,tmp=num;
        while(num>0)
        {
            if(tmp%(num%10)==0)
                cnt++;
            num/=10;
        }
        return cnt;
    }
};