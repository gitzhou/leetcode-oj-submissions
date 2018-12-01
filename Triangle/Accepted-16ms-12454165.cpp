// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Triangle
// https://leetcode.com/problems/triangle/
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
