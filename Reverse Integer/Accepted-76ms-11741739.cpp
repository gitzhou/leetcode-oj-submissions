// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Reverse Integer
// https://oj.leetcode.com/problems/reverse-integer/
// 

class Solution {
public:
    int reverse(int x) {
        bool negative = false;
        if (x < 0) {
            negative = true;
            x *= -1;
        }
        int result = 0;
        while (x != 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        if (negative) {
            result *= -1;
        }
        return result;

    }
};

// 
// Reverse digits of an integer. Example1: x = 123, return 321 Example2: x = -123, return -321 click to show spoilers. Have you thought about this? Here are some good questions to ask before coding. Bonus points for you if you have already thought through this! If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100. Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases? For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows. Update (2014-11-10): Test cases had been added to test the overflow behavior. Show Tags Math
// 
