// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Palindrome Number
// https://leetcode.com/problems/palindrome-number/
// 

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int rx = 0, tx = x;
        while (tx != 0) {
            rx = rx * 10 + tx % 10;
            tx /= 10;
        }
        return rx == x;
    }
};
