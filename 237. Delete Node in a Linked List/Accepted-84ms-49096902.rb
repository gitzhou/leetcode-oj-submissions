# 
# Generated by fetch-leetcode-submission project on GitHub.
# https://github.com/gitzhou/fetch-leetcode-submission
# Contact Me: aaron67[AT]aaron67.cc
# 
# 237. Delete Node in a Linked List
# https://leetcode.com/problems/delete-node-in-a-linked-list/
# 

# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} node
# @return {Void} Do not return anything, modify node in-place instead.
def delete_node(node)
  target = node.next
  # node is not tail, so target is not nil
  node.val = target.val
  node.next = target.next
end

# 
# Write a function to delete a node (except the tail) in a singly linked list, given only access to that node. Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function. Subscribe to see which companies asked this question Show Tags Linked List Show Similar Problems (E) Remove Linked List Elements
# 