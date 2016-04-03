// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 111. Minimum Depth of Binary Tree
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
        inOrderTraversalFindLeafNode(root, minDepth, currentDepth);
        return minDepth;
    }
    
private:
    void inOrderTraversalFindLeafNode(TreeNode *node, int &minDepth, int currentDepth) {
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
        inOrderTraversalFindLeafNode(node->left, minDepth, currentDepth);
        inOrderTraversalFindLeafNode(node->right, minDepth, currentDepth);
    }
};

// 
// Given a binary tree, find its minimum depth. The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node. Subscribe to see which companies asked this question Show Tags Tree Depth-first Search Breadth-first Search Show Similar Problems (E) Binary Tree Level Order Traversal (E) Maximum Depth of Binary Tree
// 
