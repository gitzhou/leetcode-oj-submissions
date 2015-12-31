// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 66. Plus One
// https://leetcode.com/problems/plus-one/
// 

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> result;
        ++digits[digits.size() - 1];
        int carry = 0;
        for (long i = digits.size() - 1; i >= 0; --i) {
            result.push_back((digits[i] + carry) % 10);
            carry = (digits[i] + carry) / 10;
        }
        if(carry != 0) {
            result.push_back(carry);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

// 
// Given a non-negative number represented as an array of digits, plus one to the number. The digits are stored such that the most significant digit is at the head of the list. Subscribe to see which companies asked this question Show Tags Array Math Show Similar Problems (M) Multiply Strings (E) Add Binary
// 
