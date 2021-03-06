// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// String to Integer (atoi)
// https://leetcode.com/problems/string-to-integer-atoi/
// 

class Solution {
public:
    int atoi(const char *str) {
        long value = 0;
        stringstream ss;
        ss << str;
        ss >> value;
        if (value < INT_MIN || value > INT_MAX) {
            value = INT_MAX;
        }
        return (int)value;
    }
};

