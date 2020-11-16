// Given a roman numeral, convert it to an integer.


class Solution {
public:
    int romanToInt(string s) {
        int rv = 0;
        int i = 0;
        bool skip = false;
        while (i < s.length()) {
            if (s[i] == 'I') {
                if (i + 1 < s.length()) {
                    if (s[i + 1] == 'V') {
                        rv += 4;
                        skip = true;
                    }
                    else if (s[i + 1] == 'X') {
                        rv += 9;
                        skip = true;
                    }
                    else {
                        rv += 1;
                    }
                }
                else {
                    rv += 1;
                }
            }
            if (s[i] == 'X') {
                if (i + 1 < s.length()) {
                    if (s[i + 1] == 'L') {
                        rv += 40;
                        skip = true;
                    }
                    else if (s[i + 1] == 'C') {
                        rv += 90;
                        skip = true;
                    }
                    else {
                        rv += 10;
                    }
                }
                else {
                    rv += 10;
                }
            }
            if (s[i] == 'C') {
                if (i + 1 < s.length()) {
                    if (s[i + 1] == 'D') {
                        rv += 400;
                        skip = true;
                    }
                    else if (s[i + 1] == 'M') {
                        rv += 900;
                        skip = true;
                    }
                    else {
                        rv += 100;
                    }
                }
                else {
                    rv += 100;
                }
            }
            if (s[i] == 'V') rv += 5;
            if (s[i] == 'L') rv += 50;
            if (s[i] == 'D') rv += 500;
            if (s[i] == 'M') rv += 1000;

            i++;
            if (skip == true) {
                i++;
                skip = false;
            }
        }
        return rv;

    }
};