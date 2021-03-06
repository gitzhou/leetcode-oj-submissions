# 
# Generated by fetch-leetcode-submission project on GitHub.
# https://github.com/gitzhou/fetch-leetcode-submission
# Contact Me: aaron67[AT]aaron67.cc
# 
# Invert Binary Tree
# https://leetcode.com/problems/invert-binary-tree/
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
# @return {TreeNode}
def invert_tree(root)
  return nil if !root
  return root if !root.left && !root.right
  right = invert_tree(root.right)
  root.right = invert_tree(root.left)
  root.left = right
  root
end

