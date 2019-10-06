// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Move Zeroes
// https://leetcode.com/problems/move-zeroes/
// 

class Solution {
    public void moveZeroes(int[] nums) {
        if (nums.length == 0 || nums.length == 1) {
            return;
        }
        int i = 0, j = 0;
        while (j < nums.length) {
            // 找到第一个非0元素，下标j
            while (j < nums.length && nums[j] == 0) {
                ++j;
            }
            if (j == nums.length) {
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
        while (i < nums.length) {
            nums[i++] = 0;
        }
    }
}

