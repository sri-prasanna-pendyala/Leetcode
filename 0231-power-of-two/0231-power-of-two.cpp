class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(i<=ceil(sqrt(n)))
        {
            if(pow(2,i)==n)
                return true;
            i+=1;
        }
        return false;
    }
};