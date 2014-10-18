// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Length of Last Word
// https://oj.leetcode.com/problems/length-of-last-word/
// 

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        const string ALPHABETS = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        size_t length = 0;
        string str(s);
        if (str.length() != 0) {
            size_t to = str.find_last_of(ALPHABETS);
            if (to != string::npos) {
                size_t from = str.find_last_not_of(ALPHABETS, to);
                if (from == string::npos) {
                    from = -1;
                }
                length = to - from;
            }
        }
        return (int)length;
    }
};

// 
// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string. 
// If the last word does not exist, return 0. 
// Note: 
// A word is defined as a character sequence consists of non-space characters only. 
// For example, 
// Given s = "Hello 
// World", return 5.
// 
