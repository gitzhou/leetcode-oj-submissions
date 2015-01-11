// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Pascal's Triangle II
// https://oj.leetcode.com/problems/pascals-triangle-ii/
// 

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> now;
        if (rowIndex == 0) {
            now.push_back(1);
            return now;
        } else if (rowIndex == 1) {
            now.push_back(1);
            now.push_back(1);
            return now;
        }
        vector<int> previous(rowIndex + 1);
        previous[0] = 1;
        previous[1] = 1;
        now.resize(rowIndex + 1);
        for (int i = 2; i <= rowIndex; ++i) {
            now[0] = 1;
            now[1] = i;
            int j;
            for (j = 2; j < rowIndex; ++j) {
                now[j] = previous[j - 1] + previous[j];
            }
            now[j] = 1;
            previous = now;
        }
        return now;
    }
};

// 
// Given an index k, return the kth row of the Pascal's triangle. For example, given k = 3, Return [1,3,3,1]. Note: Could you optimize your algorithm to use only O(k) extra space? Show Tags Array
// 
