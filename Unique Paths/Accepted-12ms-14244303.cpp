// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Unique Paths
// https://oj.leetcode.com/problems/unique-paths/
// 

class Solution {
public:
    Solution() {
        memset(ways, 0, sizeof(ways));
        for (int i = 0; i < MAX_M_N; ++i) {
            ways[0][i] = 1;
            ways[i][0] = 1;
        }
        f(MAX_M_N - 1, MAX_M_N - 1);
    }
    
    int uniquePaths(int m, int n) {
        return ways[m - 1][n - 1];
    }
    
private:
    int f(int m, int n) {
        if (ways[m][n] == 0) {
            ways[m][n] = f(m - 1, n) + f(m, n - 1);
        }
        return ways[m][n];
    }
    
private:
    static const int MAX_M_N = 100;
    int ways[MAX_M_N][MAX_M_N];
};

// 
// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below). The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below). How many possible unique paths are there? Above is a 3 x 7 grid. How many possible unique paths are there? Note: m and n will be at most 100. Show Tags Array Dynamic Programming
// 
