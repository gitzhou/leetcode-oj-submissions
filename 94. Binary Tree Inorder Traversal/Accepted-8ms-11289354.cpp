// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 94. Binary Tree Inorder Traversal
// https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> sequence;
        stack<TreeNode *> st;
        TreeNode *p = root;
        while (p != NULL || !st.empty()) {
            if (p == NULL) {
                p = st.top();
                st.pop();
                sequence.push_back(p->val); // Visit
                p = p->right;
            } else {
                st.push(p);
                p = p->left;
            }
        }
        return sequence;
    }
};

// 
// Given a binary tree, return the inorder traversal of its nodes' values. For example: Given binary tree {1,#,2,3}, 
//    1
//     \
//      2
//     /
//    3
//  return [1,3,2]. Note: Recursive solution is trivial, could you do it iteratively? confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ. OJ's Binary Tree Serialization: The serialization of a binary tree follows a level order traversal, where '#' signifies a path terminator where no node exists below. Here's an example: 
//    1
//   / \
//  2   3
//     /
//    4
//     \
//      5
//  The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}". Subscribe to see which companies asked this question Show Tags Tree Hash Table Stack Show Similar Problems (M) Validate Binary Search Tree (M) Binary Tree Preorder Traversal (H) Binary Tree Postorder Traversal (M) Binary Search Tree Iterator (M) Kth Smallest Element in a BST (H) Closest Binary Search Tree Value II (M) Inorder Successor in BST
// 