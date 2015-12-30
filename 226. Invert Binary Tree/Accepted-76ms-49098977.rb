# 
# Generated by FetchLeetcodeSubmission Project on GitCafe.
# Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
# Contact Me: aaron67[AT]aaron67.cc
# 
# 226. Invert Binary Tree
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

# 
# Invert a binary tree.      4
#    /   \
#   2     7
#  / \   / \
# 1   3 6   9 to      4
#    /   \
#   7     2
#  / \   / \
# 9   6 3   1 Trivia: This problem was inspired by this original tweet by Max Howell: Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off. Subscribe to see which companies asked this question Show Tags Tree
# 
