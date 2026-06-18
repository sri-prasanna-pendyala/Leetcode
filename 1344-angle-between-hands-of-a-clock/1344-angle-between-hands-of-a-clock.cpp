class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourangle= hour*30 + minutes*0.5;
        double minangle= minutes*6;
        double ans=abs(hourangle-minangle);
        return min(ans, 360-ans);
    }
};