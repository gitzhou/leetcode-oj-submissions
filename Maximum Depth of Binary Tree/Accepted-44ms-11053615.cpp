// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Maximum Depth of Binary Tree
// https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
    int maxDepth(TreeNode *root) {
        int depth = 0, currentDepth = 0;
        inOrderTraversal(root, depth, currentDepth);
        return depth;
    }
    
private:
    void inOrderTraversal(TreeNode *node, int &depth, int currentDepth) {
        if (node == NULL) {
            return;
        }
        if (++currentDepth > depth) {
            depth = currentDepth;
        }
        inOrderTraversal(node->left, depth, currentDepth);
        inOrderTraversal(node->right, depth, currentDepth);
    }
};

