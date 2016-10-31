# 
# Generated by fetch-leetcode-submission project on GitHub.
# https://github.com/gitzhou/fetch-leetcode-submission
# Contact Me: aaron67[AT]aaron67.cc
# 
# 283. Move Zeroes
# https://leetcode.com/problems/move-zeroes/
# 

# @param {Integer[]} nums
# @return {Void} Do not return anything, modify nums in-place instead.
def move_zeroes(nums)
  j = 0
  nums.each_with_index do |v, i|
    next if v == 0
    nums[i], nums[j] = nums[j], nums[i] if i != j
    j += 1
  end
end

# 
# Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements. For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0]. Note: You must do this in-place without making a copy of the array. Minimize the total number of operations. Credits: Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases. Subscribe to see which companies asked this question Show Tags Array Two Pointers Show Similar Problems (E) Remove Element
# 