// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 73. Set Matrix Zeroes
// https://leetcode.com/problems/set-matrix-zeroes/
// 

class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        bool isFirstRowZero = false, isFirstColZero = false;
        for (int i = 0; i < matrix[0].size(); ++i) {
            if (matrix[0][i] == 0) {
                isFirstRowZero = true;
                break;
            }
        }
        for (int i = 0; i < matrix.size(); ++i) {
            if (matrix[i][0] == 0) {
                isFirstColZero = true;
                break;
            }
        }
        for (int i = 1; i < matrix.size(); ++i) {
            for (int j = 1; j < matrix[i].size(); ++j) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0; // 列首置0
                    matrix[i][0] = 0; // 行首置0
                }
            }
        }
        for (int i = 1; i < matrix[0].size(); ++i) {
            if (matrix[0][i] == 0) { // 这一列都置0
                for (int j = 1; j < matrix.size(); ++j) {
                    matrix[j][i] = 0;
                }
            }
        }
        for (int i = 1; i < matrix.size(); ++i) {
            if (matrix[i][0] == 0) { // 这一行都置0
                for (int j = 1; j < matrix[i].size(); ++j) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (isFirstRowZero) {
            for (int i = 0; i < matrix[0].size(); ++i) {
                matrix[0][i] = 0;
            }
        }
        if (isFirstColZero) {
            for (int i = 0; i < matrix.size(); ++i) {
                matrix[i][0] = 0;
            }
        }
    }
};

// 
// Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place. click to show follow up. Follow up: Did you use extra space? A straight forward solution using O(mn) space is probably a bad idea. A simple improvement uses O(m + n) space, but still not the best solution. Could you devise a constant space solution? Subscribe to see which companies asked this question Show Tags Array Show Similar Problems (M) Game of Life
// 
