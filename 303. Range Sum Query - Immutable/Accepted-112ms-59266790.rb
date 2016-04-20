# 
# Generated by fetch-leetcode-submission project on GitHub.
# https://github.com/gitzhou/fetch-leetcode-submission
# Contact Me: aaron67[AT]aaron67.cc
# 
# 303. Range Sum Query - Immutable
# https://leetcode.com/problems/range-sum-query-immutable/
# 

class NumArray

  # Initialize your data structure here.
  # @param {Integer[]} nums
  def initialize(nums)
    @sums = [0]
    nums.each { |e| @sums << e + @sums.last }
  end

  # @param {Integer} i
  # @param {Integer} j
  # @return {Integer}
  def sum_range(i, j)
    @sums[j + 1] - @sums[i]
  end
end

# Your NumArray object will be instantiated and called as such:
# num_array = NumArray.new(nums)
# num_array.sum_range(0, 1)
# num_array.sum_range(0, 2)

# 
# Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive. Example: 
# Given nums = [-2, 0, 3, -5, 2, -1]
# 
# sumRange(0, 2) -> 1
# sumRange(2, 5) -> -1
# sumRange(0, 5) -> -3
#  Note: You may assume that the array does not change. There are many calls to sumRange function. Subscribe to see which companies asked this question Show Tags Dynamic Programming Show Similar Problems (M) Range Sum Query 2D - Immutable (M) Range Sum Query - Mutable (E) Maximum Size Subarray Sum Equals k
# 
