// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Valid Sudoku
// https://oj.leetcode.com/problems/valid-sudoku/
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

// 
// Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules. The Sudoku board could be partially filled, where empty cells are filled with the character '.'. A partially filled sudoku which is valid. Note: A valid Sudoku board (partially filled) is not necessarily solvable. Only the filled cells need to be validated. Show Tags Hash Table
// 
