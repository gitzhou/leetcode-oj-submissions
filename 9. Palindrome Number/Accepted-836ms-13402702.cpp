// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 9. Palindrome Number
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

// 
// Determine whether an integer is a palindrome. Do this without extra space. click to show spoilers. Some hints: Could negative integers be palindromes? (ie, -1) If you are thinking of converting the integer to string, note the restriction of using extra space. You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case? There is a more generic way of solving this problem. Subscribe to see which companies asked this question Show Tags Math Show Similar Problems (E) Palindrome Linked List
// 
