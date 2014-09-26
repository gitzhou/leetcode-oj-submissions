// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Binary Tree Maximum Path Sum
// https://oj.leetcode.com/problems/binary-tree-maximum-path-sum/
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
    int maxPathSum(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        int maxPathSum = INT_MIN;
        postOrderTraversal(root, maxPathSum);
        return maxPathSum;
    }
    
private:
    void postOrderTraversal(TreeNode *node, int &maxPathSum) {
        if (node == NULL) {
            return;
        }
        postOrderTraversal(node->left, maxPathSum);
        postOrderTraversal(node->right, maxPathSum);
        
        int leftVal = (node->left == NULL? 0: node->left->val);
        int rightVal = (node->right == NULL? 0: node->right->val);
        int currentNodeVal = node->val;
        if (max(leftVal, rightVal) > 0) {
            node->val += max(leftVal, rightVal);
        }
        maxPathSum = max(maxPathSum, max(node->val, currentNodeVal + leftVal + rightVal));
    }
};

// 
// Given a binary tree, find the maximum path sum. 
// The path may start and end at any node in the tree. 
// For example: 
// Given the below binary tree, 
//        1
//       / \
//      2   3
//  
// Return 6.
// 
