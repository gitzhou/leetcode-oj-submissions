// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Binary Tree Postorder Traversal
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
