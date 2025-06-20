class Solution {
public:
    bool checkPerfectNumber(int num) {
        double tot=0;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
                tot+=i;
        }
        return (tot==num)?true:false;  
    }
};