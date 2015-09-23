// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Excel Sheet Column Title
// https://leetcode.com/problems/excel-sheet-column-title/
// 

class Solution {
public:
    string convertToTitle(int n) {
        vector<int> digits;
        const int ALPHABET_COUNT = 26;
        while (n != 0) {
            digits.push_back(n % ALPHABET_COUNT);
            n /= ALPHABET_COUNT;
        }
        for (int i = 0; i < digits.size() - 1; ++i) {
            if (digits[i] == 0) {
                digits[i] = 26;
                --digits[i + 1];
            }
        }
        const char ALPHABET[] = "?ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result;
        for (int i = (int)(digits.size() - 1); i >= 0; --i) {
            if (digits[i] != 0) {
                result += ALPHABET[digits[i]];
            }
        }
        return result;
    }
};

// 
// Given a positive integer, return its corresponding column title as appear in an Excel sheet. For example: 
//     1 -> A
//     2 -> B
//     3 -> C
//     ...
//     26 -> Z
//     27 -> AA
//     28 -> AB Credits: Special thanks to @ifanchu for adding this problem and creating all test cases. Show Tags Math Show Similar Problems (E) Excel Sheet Column Number
// 
