// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Next Permutation
// https://oj.leetcode.com/problems/next-permutation/
// 

class Solution {
public:
    void nextPermutation(vector<int> &num) {
        next_permutation(num.begin(), num.end());
    }
};

// 
// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers. If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order). The replacement must be in-place, do not allocate extra memory. Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column. 1,2,3 → 1,3,2 3,2,1 → 1,2,3 1,1,5 → 1,5,1 Show Tags Array
// 
