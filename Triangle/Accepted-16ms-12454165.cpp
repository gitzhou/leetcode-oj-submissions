// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Triangle
// https://oj.leetcode.com/problems/triangle/
// 

class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        for (int i = 1; i < triangle.size(); ++i) {
            for (int j = 0; j < triangle[i].size(); ++j) {
                int topLeft = (j > 0? triangle[i - 1][j - 1]: INT_MAX);
                int topRight = (j < triangle[i].size() - 1? triangle[i - 1][j]: INT_MAX);
                triangle[i][j] += min(topLeft, topRight);
            }
        }
        return *min_element(triangle[triangle.size() - 1].begin(), triangle[triangle.size() - 1].end());
    }
};

// 
// Given a triangle, find the minimum path sum from top to bottom. 
// Each step you may move to adjacent numbers on the row below. 
// For example, given the following triangle 
// [
//      [2],
//     [3,4],
//    [6,5,7],
//   [4,1,8,3]
// ]
//  
// The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11). 
// Note: 
// Bonus point if you are able to do this using only 
// O(n) extra space, where n is the total number of rows in the triangle.
// 
