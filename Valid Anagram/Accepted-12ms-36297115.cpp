// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Valid Anagram
// https://leetcode.com/problems/valid-anagram/
// 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> count(26, 0);
        int length = (int)s.length();
        for (int i = 0; i < length; ++i) {
            ++count[s[i] - 'a'];
            --count[t[i] - 'a'];
        }
        for (int i = 0; i < count.size(); ++i) {
            if (count[i] != 0) {
                return false;
            }
        }
        return true;
    }
};

