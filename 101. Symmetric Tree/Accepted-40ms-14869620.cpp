// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 101. Symmetric Tree
// https://leetcode.com/problems/symmetric-tree/
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
    bool isSymmetric(TreeNode *root) {
        if (root == NULL) {
            return true;
        }
        return symmetric(root->left, root->right);
    }
    
private:
    bool symmetric(TreeNode *left, TreeNode *right) {
        if (left == NULL && right == NULL) {
            return true;
        } else if (left != NULL && right != NULL && left->val == right->val) {
            return symmetric(left->left, right->right) && symmetric(left->right, right->left);
        }
        return false;
    }
};

// 
// Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center). For example, this binary tree is symmetric: 
//     1
//    / \
//   2   2
//  / \ / \
// 3  4 4  3
//  But the following is not: 
//     1
//    / \
//   2   2
//    \   \
//    3    3
//  Note: Bonus points if you could solve it both recursively and iteratively. confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ. OJ's Binary Tree Serialization: The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below. Here's an example: 
//    1
//   / \
//  2   3
//     /
//    4
//     \
//      5
//  The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". Subscribe to see which companies asked this question Show Tags Tree Depth-first Search
// 
