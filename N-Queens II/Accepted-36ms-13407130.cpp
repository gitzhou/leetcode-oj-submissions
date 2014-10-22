// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// N-Queens II
// https://oj.leetcode.com/problems/n-queens-ii/
// 

class Solution {
public:
    int totalNQueens(int n) {
        int totalCount = 0;
        if (n > 0) {
            vector<int> board(n);
            int i = 0;
            while (true) {
                bool valid = true;
                // 合法性校验
                for (int j = 0; j < i; ++j) {
                    if ((board[j] == board[i] || // 列
                         board[j] - j == board[i] - i || board[j] + j == board[i] + i)) { // 对角线
                        valid = false;
                        break;
                    }
                }
                if (valid && i == n - 1) {
                    ++totalCount; // 找到
                }
                if (valid && i < n - 1) {
                    board[++i] = 0; // 扩充新元素
                    continue;
                }
                while (i >= 0 && board[i] == n - 1) {
                    --i; // 回溯
                }
                if (i == -1) {
                    break; // 已尝试所有情况
                } else {
                    ++board[i]; // 下一个可选值
                }
            }
        }
        return totalCount;
    }
};

// 
// Follow up for 
// N-Queens problem. 
// Now, instead outputting board configurations, return the total number of distinct solutions. 
// Show 
// Tags 
// Backtracking
// 