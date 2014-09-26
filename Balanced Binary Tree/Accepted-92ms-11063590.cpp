// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Balanced Binary Tree
// https://oj.leetcode.com/problems/balanced-binary-tree/
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
    bool isBalanced(TreeNode *root) {
        bool treeIsBalanced = true;
        postOrderTraversal(root, treeIsBalanced);
        return treeIsBalanced;
    }
    
private:
    void postOrderTraversal(TreeNode *node, bool &treeIsBalanced) {
        if (!treeIsBalanced || node == NULL) {
            return;
        }
        postOrderTraversal(node->left, treeIsBalanced);
        postOrderTraversal(node->right, treeIsBalanced);
        
        int leftDepth = (node->left == NULL? 0: node->left->val);
        int rightDepth = (node->right == NULL? 0: node->right->val);
        if (abs(leftDepth - rightDepth) > 1) {
            treeIsBalanced = false;
            return;
        }
        node->val = max(leftDepth, rightDepth) + 1;
    }
};

// 
// Given a binary tree, determine if it is height-balanced. 
// For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
// 
