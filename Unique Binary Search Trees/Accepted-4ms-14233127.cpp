// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Unique Binary Search Trees
// https://oj.leetcode.com/problems/unique-binary-search-trees/
// 

class Solution {
public:
    Solution() {
        bstCount.push_back(1);
        bstCount.push_back(1);
    }
    
    // f(n) = SUM{f(n - j) * f(j - 1)}, 1 <= j <= n, f(0) = 1, f(1) = 1
    int numTrees(int n) {
        if (n >= bstCount.size()) {
            int start = (int)bstCount.size();
            bstCount.resize(n + 1, 0);
            for (int i = start; i < bstCount.size(); ++i) {
                for (int j = 1; j <= i; ++j) {
                    bstCount[i] += bstCount[i - j] * bstCount[j - 1];
                }
            }
        }
        return bstCount[n];
    }
    
private:
    vector<int> bstCount;
};

// 
// Given n, how many structurally unique BST's (binary search trees) that store values 1...n? For example, Given n = 3, there are a total of 5 unique BST's. 
//    1         3     3      2      1
//     \       /     /      / \      \
//      3     2     1      1   3      2
//     /     /       \                 \
//    2     1         2                 3
//  Show Tags Tree Dynamic Programming
// 
