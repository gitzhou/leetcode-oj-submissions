// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Path Sum
// https://leetcode.com/problems/path-sum/
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
    bool hasPathSum(TreeNode *root, int sum) {
        int currentSum = 0;
        bool match = false;
        preOrderTraversal(root, sum, currentSum, match);
        return match;
    }
    
private:
    void preOrderTraversal(TreeNode *node, int sum, int &currentSum, bool &match) {
        if (node == NULL) {
            return;
        }
        currentSum += node->val;
        if (currentSum == sum && node->left == NULL && node->right == NULL) {
            match = true;
        }
        preOrderTraversal(node->left, sum, currentSum, match);
        preOrderTraversal(node->right, sum, currentSum, match);
        currentSum -= node->val;
    }
};

// 
// Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum. For example: Given the below binary tree and sum = 22, 
//               5
//              / \
//             4   8
//            /   / \
//           11  13  4
//          /  \      \
//         7    2      1
//  return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22. Show Tags Tree Depth-first Search Show Similar Problems (M) Path Sum II (H) Binary Tree Maximum Path Sum (M) Sum Root to Leaf Numbers
// 
