// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Combination Sum
// https://oj.leetcode.com/problems/combination-sum/
// 

class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<vector<int> > result;
        if (candidates.size() > 0) {
            sort(candidates.begin(), candidates.end());
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
                while (i >= 0 && select[i] >= target / candidates[i]) {
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
// Given a set of candidate numbers (C) and a target number (T), find all unique combinations in 
// C where the candidate numbers sums to 
// T. 
// The same repeated number may be chosen from 
// C unlimited number of times. 
// Note: 
// All numbers (including target) will be positive integers. 
// Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak). 
// The solution set must not contain duplicate combinations. 
// For example, given candidate set 2,3,6,7 and target 7, 
// A solution set is: [7] [2, 2, 3] 
// Show 
// Tags 
// Array 
// Backtracking
// 