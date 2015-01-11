// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Combinations
// https://oj.leetcode.com/problems/combinations/
// 

class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > result;
        if (n > 0 && k > 0 && n >= k) {
            vector<int> selector(n, 0);
            dfs(selector, 0, k, result);
        }
        return result;
    }
    
private:
    void dfs(vector<int> &selector, int i, int k, vector<vector<int> > &result) {
        if (k == 0) {
            // 找到一组解
            vector<int> one;
            for (int j = 0; j < i; ++j) {
                if (selector[j] == 1) {
                    one.push_back(j + 1);
                }
            }
            result.push_back(one);
            return;
        }
        if (k < 0 || i == selector.size()) {
            return;
        }
        selector[i] = 0;
        dfs(selector, i + 1, k, result);
        selector[i] = 1;
        dfs(selector, i + 1, k - 1, result);
    }
};

// 
// Given two integers n and k, return all possible combinations of k numbers out of 1 ... n. For example, If n = 4 and k = 2, a solution is: 
// [
//   [2,4],
//   [3,4],
//   [2,3],
//   [1,2],
//   [1,3],
//   [1,4],
// ]
//  Show Tags Backtracking
// 
