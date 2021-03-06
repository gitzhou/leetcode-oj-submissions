// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Minimum Depth of Binary Tree
// https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
    int minDepth(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        int minDepth = INT_MAX, currentDepth = 0;
        preOrderTraversalFindLeafNode(root, minDepth, currentDepth);
        return minDepth;
    }
    
private:
    void preOrderTraversalFindLeafNode(TreeNode *node, int &minDepth, int currentDepth) {
        if (node == NULL) {
            return;
        }
        ++currentDepth;
        if (node->left == NULL && node->right == NULL) {
            if (currentDepth < minDepth) {
                minDepth = currentDepth;
            }
            return;
        }
        preOrderTraversalFindLeafNode(node->left, minDepth, currentDepth);
        preOrderTraversalFindLeafNode(node->right, minDepth, currentDepth);
    }
};

