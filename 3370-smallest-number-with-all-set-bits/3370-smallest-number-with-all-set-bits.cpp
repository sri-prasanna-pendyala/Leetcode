class Solution {
public:
    int smallestNumber(int n) {
        int x=1,pos=1;
        while(x<n){
            pos*=2;
            x+=pos;
        }
        return x;
    }
};