// Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int reverse = 0;
        int copy = x;
        while (copy != 0) {
            reverse += copy % 10;
            if (copy >= 10) {
                if (reverse > INT_MAX / 10) return false;
                reverse *= 10;
            }
            copy /= 10;
        }
        if (reverse == x) return true;
        return false;
    }
};