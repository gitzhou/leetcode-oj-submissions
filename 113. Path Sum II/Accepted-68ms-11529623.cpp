// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 113. Path Sum II
// https://leetcode.com/problems/path-sum-ii/
// 

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<int> currentPath;
        vector<vector<int> > path;
        int currentSum = 0;
        preOrderTraversal(root, sum, currentSum, currentPath, path);
        return path;
    }
    
private:
    void preOrderTraversal(TreeNode *node, int sum, int &currentSum, vector<int> &currentPath, vector<vector<int> > &path) {
        if (node == NULL) {
            return;
        }
        currentSum += node->val;
        currentPath.push_back(node->val);
        if (currentSum == sum && node->left == NULL && node->right == NULL) {
            vector<int> *pv = new vector<int>(currentPath.size());
            copy(currentPath.begin(), currentPath.end(), pv->begin());
            path.push_back(*pv);
        }
        preOrderTraversal(node->left, sum, currentSum, currentPath, path);
        preOrderTraversal(node->right, sum, currentSum, currentPath, path);
        currentSum -= node->val;
        currentPath.pop_back();
    }
};

// 
// Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum. For example: Given the below binary tree and sum = 22, 
//               5
//              / \
//             4   8
//            /   / \
//           11  13  4
//          /  \    / \
//         7    2  5   1
//  return 
// [
//    [5,4,11,2],
//    [5,8,4,5]
// ]
//  Subscribe to see which companies asked this question Show Tags Tree Depth-first Search Show Similar Problems (E) Path Sum (E) Binary Tree Paths
// 