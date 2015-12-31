// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 98. Validate Binary Search Tree
// https://leetcode.com/problems/validate-binary-search-tree/
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
    bool isValidBST(TreeNode *root) {
        return valid(root, INT_MIN, INT_MAX);
    }
    
private:
    bool valid(TreeNode *p, int min, int max) {
        if (p == NULL) {
            return true;
        }
        if (p->val > min && p->val < max) {
            return valid(p->left, min, p->val) && valid(p->right, p->val, max);
        }
        return false;
    }
};

// 
// Given a binary tree, determine if it is a valid binary search tree (BST). Assume a BST is defined as follows: The left subtree of a node contains only nodes with keys less than the node's key. The right subtree of a node contains only nodes with keys greater than the node's key. Both the left and right subtrees must also be binary search trees. confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ. OJ's Binary Tree Serialization: The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below. Here's an example: 
//    1
//   / \
//  2   3
//     /
//    4
//     \
//      5
//  The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". Subscribe to see which companies asked this question Show Tags Tree Depth-first Search Show Similar Problems (M) Binary Tree Inorder Traversal
// 
