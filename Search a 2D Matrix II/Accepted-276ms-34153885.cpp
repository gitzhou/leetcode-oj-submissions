// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Search a 2D Matrix II
// https://leetcode.com/problems/search-a-2d-matrix-ii/
// 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size = (int)matrix.size(), col_size = (int)matrix[0].size();
        if (row_size == 0 || col_size == 0) {
            return false;
        }
        int i = 0, j = col_size - 1;
        while (i < row_size && j >= 0) {
            if (matrix[i][j] < target) {
                ++i;
            } else if (matrix[i][j] > target) {
                --j;
            } else {
                return true;
            }
        }
        return false;
    }
};

