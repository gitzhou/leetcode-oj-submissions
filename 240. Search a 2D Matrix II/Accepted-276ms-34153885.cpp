// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 240. Search a 2D Matrix II
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

// 
// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties: Integers in each row are sorted in ascending from left to right. Integers in each column are sorted in ascending from top to bottom. For example, Consider the following matrix: 
// [
//   [1,   4,  7, 11, 15],
//   [2,   5,  8, 12, 19],
//   [3,   6,  9, 16, 22],
//   [10, 13, 14, 17, 24],
//   [18, 21, 23, 26, 30]
// ]
//  Given target = 5, return true. Given target = 20, return false. Subscribe to see which companies asked this question Show Tags Divide and Conquer Binary Search Show Similar Problems (M) Search a 2D Matrix
// 
