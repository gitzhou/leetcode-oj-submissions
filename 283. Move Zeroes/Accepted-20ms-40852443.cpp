// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/
// 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) {
            return;
        }
        int i = 0, j = 0;
        while (j < nums.size()) {
            // 找到第一个非0元素，下标j
            while (j < nums.size() && nums[j] == 0) {
                ++j;
            }
            if (j == nums.size()) {
                break;
            }
            // 将下标为j的元素，放在下标i的位置
            if (i != j) {
                nums[i++] = nums[j++];
            } else {
                ++i;
                ++j;
            }
        }
        while (i < nums.size()) {
            nums[i++] = 0;
        }
    }
};

// 
// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements. For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0]. Note: You must do this in-place without making a copy of the array. Minimize the total number of operations. Credits: Special thanks to @jianchao.li.fighter for adding this problem and creating all test cases. Subscribe to see which companies asked this question Show Tags Array Two Pointers Show Similar Problems (E) Remove Element
// 