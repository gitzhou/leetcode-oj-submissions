// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 125. Valid Palindrome
// https://leetcode.com/problems/valid-palindrome/
// 

class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.length() - 1; i < j; ++i, --j) {
            while (i < s.length() && !isAlphanumeric(s[i])) {
                ++i;
            }
            while (j >= 0 && !isAlphanumeric(s[j])) {
                --j;
            }
            if (i < j && tolower(s[i]) != tolower(s[j])) {
                return false;
            }
        }
        return true;
    }
    
private:
    bool isAlphanumeric(char ch) {
        return (ch >= '0' && ch <= '9') ||
        (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z');
    }
};

// 
// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases. For example, "A man, a plan, a canal: Panama" is a palindrome. "race a car" is not a palindrome. Note: Have you consider that the string might be empty? This is a good question to ask during an interview. For the purpose of this problem, we define empty string as valid palindrome. Subscribe to see which companies asked this question Show Tags Two Pointers String Show Similar Problems (E) Palindrome Linked List
// 
