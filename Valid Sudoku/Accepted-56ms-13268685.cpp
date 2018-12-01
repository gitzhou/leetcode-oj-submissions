// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Valid Sudoku
// https://leetcode.com/problems/valid-sudoku/
// 

class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[i].size(); ++j) {
                if (board[i][j] != '.' &&
                    (valueIsShownInRow(board[i][j], i, j, board) ||
                     valueIsShownInColumn(board[i][j], i, j, board) ||
                     valueIsShownInOwn33Grid(board[i][j], i, j, board))) {
                    return false;
                }
            }
        }
        return true;
    }
    
private:
    static const int GRID_EACH_ROW_COUNT_SIZE = 3; // 数独每一宫的行列数
    
private:
    bool valueIsShownInRow(int val, int row, int col, const vector<vector<char> > & board) const {
        for (int i = 0; i < board[row].size(); ++i) {
            if (board[row][i] == val && i != col) {
                return true;
            }
        }
        return false;
    }
    
    bool valueIsShownInColumn(int val, int row, int col, const vector<vector<char> > & board) const {
        for (int i = 0; i < board.size(); ++i) {
            if (board[i][col] == val && i != row) {
                return true;
            }
        }
        return false;
    }
    
    bool valueIsShownInOwn33Grid(int val, int row, int col, const vector<vector<char> > & board) const {
        for (int i = row / GRID_EACH_ROW_COUNT_SIZE * GRID_EACH_ROW_COUNT_SIZE;
             i < row / GRID_EACH_ROW_COUNT_SIZE * GRID_EACH_ROW_COUNT_SIZE + GRID_EACH_ROW_COUNT_SIZE;
             ++i) {
            for (int j = col / GRID_EACH_ROW_COUNT_SIZE * GRID_EACH_ROW_COUNT_SIZE;
                 j < col / GRID_EACH_ROW_COUNT_SIZE * GRID_EACH_ROW_COUNT_SIZE + GRID_EACH_ROW_COUNT_SIZE;
                 ++j) {
                if (board[i][j] == val && i != row && j != col) {
                    return true;
                }
            }
        }
        return false;
    }
};
