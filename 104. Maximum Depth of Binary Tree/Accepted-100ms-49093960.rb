# 
# Generated by FetchLeetcodeSubmission Project on GitCafe.
# Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
# Contact Me: aaron67[AT]aaron67.cc
# 
# 104. Maximum Depth of Binary Tree
# https://leetcode.com/problems/maximum-depth-of-binary-tree/
# 

# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val)
#         @val = val
#         @left, @right = nil, nil
#     end
# end

# @param {TreeNode} root
# @return {Integer}
def max_depth(root)
  return 0 if root == nil
  1 + [max_depth(root.left), max_depth(root.right)].max
end

# 
# Given a binary tree, find its maximum depth. The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node. Subscribe to see which companies asked this question Show Tags Tree Depth-first Search Show Similar Problems (E) Balanced Binary Tree (E) Minimum Depth of Binary Tree
# 