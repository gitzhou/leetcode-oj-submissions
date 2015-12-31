// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 107. Binary Tree Level Order Traversal II
// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > level;
        preOrderTraversal(root, 0, level);
        reverse(level.begin(), level.end());
        return level;
    }
    
private:
    void preOrderTraversal(TreeNode *node, int depth, vector<vector<int> > &level) {
        if (node == NULL) {
            return;
        }
        if (level.size() <= depth) {
            vector<int> ivec;
            ivec.push_back(node->val);
            level.push_back(ivec);
        } else {
            level[depth].push_back(node->val);
        }
        ++depth;
        preOrderTraversal(node->left, depth, level);
        preOrderTraversal(node->right, depth, level);
    }
};


// 
// Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root). For example: Given binary tree {3,9,20,#,#,15,7}, 
//     3
//    / \
//   9  20
//     /  \
//    15   7
//  return its bottom-up level order traversal as: 
// [
//   [15,7],
//   [9,20],
//   [3]
// ]
//  confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ. OJ's Binary Tree Serialization: The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below. Here's an example: 
//    1
//   / \
//  2   3
//     /
//    4
//     \
//      5
//  The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". Subscribe to see which companies asked this question Show Tags Tree Breadth-first Search Show Similar Problems (E) Binary Tree Level Order Traversal
// 
