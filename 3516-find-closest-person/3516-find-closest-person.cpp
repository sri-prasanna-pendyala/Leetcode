class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1=abs(z-x);
        int p2=abs(z-y);
        if(p1==p2)
            return 0;
        else 
            return (min(p1,p2)==p1)?1:2;
    }
};