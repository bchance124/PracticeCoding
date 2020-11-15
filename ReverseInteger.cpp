// Given a 32-bit signed integer, reverse digits of an integer.

// Note:
// Assume we are dealing with an environment that could only store integers
// within the 32 - bit signed integer range : [−231, 231 − 1] .For the purpose of this problem, 
// assume that your function returns 0 when the reversed integer overflows.



class Solution {
public:
    int reverse(int x) {

        if (x < 10 && x > -10) return x;

        bool neg;
        if (x < 0) {
            if (x == INT_MIN) return 0;
            x *= -1;
            neg = true;
        }
        else neg = false;
        int y;
        y = 0;
        while (x > 0) {
            y += x % 10;
            if (x >= 10) {
                if (y > INT_MAX / 10) return 0;
                y *= 10;
            }
            x /= 10;
        }
        if (neg == true) y *= -1;
        return y;
    }
};