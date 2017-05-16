// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/
// 

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string prefix;
        if (strs.size() > 0) {
            int i = 0;
            bool match = true;
            while (match && i < strs[0].length()) {
                char ch = strs[0][i];
                for (int j = 1; j < strs.size(); ++j) {
                    if (strs[j][i] != ch) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    prefix += ch;
                }
                ++i;
            }
        }
        return prefix;
    }
};

