// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Combination Sum II
// https://oj.leetcode.com/problems/combination-sum-ii/
// 

class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        vector<vector<int> > result;
        if (num.size() > 0) {
            sort(num.begin(), num.end());
            vector<int> candidates, count;
            int j = num[0], k = 1;
            for (int i = 1; i < num.size(); ++i) {
                if (num[i] == j) {
                    ++k;
                } else {
                    candidates.push_back(j);
                    count.push_back(k);
                    j = num[i];
                    k = 1;
                }
            }
            candidates.push_back(j);
            count.push_back(k);
            int i = 0;
            vector<int> select(candidates.size(), 0);
            while (true) {
                int sum = 0;
                for (int j = 0; j <= i; ++j) {
                    sum += candidates[j] * select[j];
                }
                if (sum == target) {
                    // 一组解
                    vector<int> solution;
                    for (int j = 0; j <= i; ++j) {
                        for (int k = 0; k < select[j]; ++k) {
                            solution.push_back(candidates[j]);
                        }
                    }
                    result.push_back(solution);
                }
                if (sum < target && i < select.size() - 1) {
                    // 扩充元素
                    select[++i] = 0;
                    continue;
                }
                while (i >= 0 && select[i] == count[i]) {
                    --i;
                }
                if (i == -1) {
                    break; // 全部搜索完
                } else {
                    ++select[i]; // 下一种情况
                }
            }
        }
        return result;
    }
};

// 
// Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T. Each number in C may only be used once in the combination. Note: All numbers (including target) will be positive integers. Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak). The solution set must not contain duplicate combinations. For example, given candidate set 10,1,2,7,6,1,5 and target 8, A solution set is: [1, 7] [1, 2, 5] [2, 6] [1, 1, 6] Show Tags Array Backtracking
// 
