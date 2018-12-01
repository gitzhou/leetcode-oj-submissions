// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Sort Colors
// https://leetcode.com/problems/sort-colors/
// 

class Solution {
public:
    void sortColors(int A[], int n) {
        int red = 0, white = 0;
        for (int i = 0; i < n; ++i) {
            if (A[i] == 0) {
                ++red;
            } else if(A[i] == 1) {
                ++white;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (i < red) {
                A[i] = 0;
            } else if (i < red + white) {
                A[i] = 1;
            } else {
                A[i] = 2;
            }
        }
    }
};
