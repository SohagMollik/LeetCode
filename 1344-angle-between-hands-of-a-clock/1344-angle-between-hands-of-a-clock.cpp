class Solution {
public:
    double angleClock(int h, int m) {
       return min(abs(30*h - 5.5*m), 360-abs(30*h - 5.5*m));
    }
};