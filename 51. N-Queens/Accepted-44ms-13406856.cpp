// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 51. N-Queens
// https://leetcode.com/problems/n-queens/
// 

class Solution {
public:
    vector<vector<string> > solveNQueens(int n) {
        vector<vector<string> > result;
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
                    result.push_back(transform(board)); // 找到
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
        return result;
    }
    
private:
    vector<string> transform(const vector<int> &board) {
        vector<string> result(board.size());
        for (int i = 0; i < board.size(); ++i) {
            string line(board.size(), '.');
            line[board[i]] = 'Q';
            result[i] = line;
        }
        return result;
    }
};

// 
// The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other. Given an integer n, return all distinct solutions to the n-queens puzzle. Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space respectively. For example, There exist two distinct solutions to the 4-queens puzzle: 
// [
//  [".Q..",  // Solution 1
//   "...Q",
//   "Q...",
//   "..Q."],
// 
//  ["..Q.",  // Solution 2
//   "Q...",
//   "...Q",
//   ".Q.."]
// ]
//  Subscribe to see which companies asked this question Show Tags Backtracking Show Similar Problems (H) N-Queens II
// 
