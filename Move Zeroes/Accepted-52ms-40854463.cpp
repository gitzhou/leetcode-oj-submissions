// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Move Zeroes
// https://leetcode.com/problems/move-zeroes/
// 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() <= 1) {
            return;
        }
        int i = 0, j = 0;
        while (i < nums.size() && j < nums.size()) {
            // 找0
            for (; i < nums.size() && nums[i] != 0; ++i) { }
            // 找0之后的非0
            for (j = i + 1; j < nums.size() && nums[j] == 0; ++j) {}
            // 交换
            if (j < nums.size()) {
                swap(nums[i], nums[j]);
            }
        }
    }
};

