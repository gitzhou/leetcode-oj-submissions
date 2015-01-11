// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Populating Next Right Pointers in Each Node II
// https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/
// 

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<pair<TreeLinkNode *, int> > q;
        if (root != NULL) {
            q.push(make_pair(root, 0));
        }
        while (!q.empty()) {
            pair<TreeLinkNode *, int> current = q.front();
            q.pop();
            // 加当前树结点的孩子结点到队列
            if (current.first->left != NULL) {
                q.push(make_pair(current.first->left, current.second + 1));
            }
            if (current.first->right != NULL) {
                q.push(make_pair(current.first->right, current.second + 1));
            }
            // 更新next域
            TreeLinkNode *next = NULL;
            if (!q.empty() && q.front().second == current.second) {
                next = q.front().first;
            }
            current.first->next = next;
        }
    }
};

// 
// Follow up for problem "Populating Next Right Pointers in Each Node". What if the given tree could be any binary tree? Would your previous solution still work? Note: You may only use constant extra space. For example, Given the following binary tree, 
//          1
//        /  \
//       2    3
//      / \    \
//     4   5    7
//  After calling your function, the tree should look like: 
//          1 -> NULL
//        /  \
//       2 -> 3 -> NULL
//      / \    \
//     4-> 5 -> 7 -> NULL
//  Show Tags Tree Depth-first Search
// 
