// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Longest Consecutive Sequence
// https://leetcode.com/problems/longest-consecutive-sequence/
// 

class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        set<int> s(num.begin(), num.end());
        set<int>::iterator it = s.begin();
        int length = 1, preval = *it;
        int max = 1;
        while (++it != s.end()) {
            if (preval + 1 == *it) {
                ++length;
            } else {
                length = 1;
            }
            if (length > max) {
                max = length;
            }
            preval = *it;
        }
        return max;
    }
};
