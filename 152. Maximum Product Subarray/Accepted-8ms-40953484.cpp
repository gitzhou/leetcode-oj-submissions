// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 152. Maximum Product Subarray
// https://leetcode.com/problems/maximum-product-subarray/
// 

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int value = INT_MIN;
        if (nums.size() > 0) {
            value = nums[0];
            int max_p = nums[0], min_p = nums[0];
            for (int i = 1; i < nums.size(); ++i) {
                int min_p_old = min_p;
                min_p = min(nums[i], min(nums[i] * max_p, nums[i] * min_p));
                max_p = max(nums[i], max(nums[i] * max_p, nums[i] * min_p_old));
                value = max(value, max_p);
            }
        }
        return value;
    }
};

// 
// Find the contiguous subarray within an array (containing at least one number) which has the largest product. For example, given the array [2,3,-2,4], the contiguous subarray [2,3] has the largest product = 6. Subscribe to see which companies asked this question Show Tags Array Dynamic Programming Show Similar Problems (M) Maximum Subarray (E) House Robber (M) Product of Array Except Self
// 
