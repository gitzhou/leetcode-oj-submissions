// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Path Sum II
// https://leetcode.com/problems/path-sum-ii/
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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<int> currentPath;
        vector<vector<int> > path;
        int currentSum = 0;
        preOrderTraversal(root, sum, currentSum, currentPath, path);
        return path;
    }
    
private:
    void preOrderTraversal(TreeNode *node, int sum, int &currentSum, vector<int> &currentPath, vector<vector<int> > &path) {
        if (node == NULL) {
            return;
        }
        currentSum += node->val;
        currentPath.push_back(node->val);
        if (currentSum == sum && node->left == NULL && node->right == NULL) {
            vector<int> *pv = new vector<int>(currentPath.size());
            copy(currentPath.begin(), currentPath.end(), pv->begin());
            path.push_back(*pv);
        }
        preOrderTraversal(node->left, sum, currentSum, currentPath, path);
        preOrderTraversal(node->right, sum, currentSum, currentPath, path);
        currentSum -= node->val;
        currentPath.pop_back();
    }
};

