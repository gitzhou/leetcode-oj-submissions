// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 145. Binary Tree Postorder Traversal
// https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> sequence;
        stack<TreeNode *> st, lastVisit;
        TreeNode *p = root;
        while (p != NULL || !st.empty()) {
            if (p == NULL) {
                p = st.top();
                if (!lastVisit.empty() && p == lastVisit.top()) {
                    // Visit
                    sequence.push_back(p->val);
                    st.pop();
                    lastVisit.pop();
                    p = NULL;
                } else {
                    lastVisit.push(p);
                    p = p->right;
                }
            } else {
                st.push(p);
                p = p->left;
            }
        }
        return sequence;
    }
};

// 
// Given a binary tree, return the postorder traversal of its nodes' values. For example: Given binary tree {1,#,2,3}, 
//    1
//     \
//      2
//     /
//    3
//  return [3,2,1]. Note: Recursive solution is trivial, could you do it iteratively? Subscribe to see which companies asked this question Show Tags Tree Stack Show Similar Problems (M) Binary Tree Inorder Traversal
// 