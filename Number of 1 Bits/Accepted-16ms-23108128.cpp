// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Number of 1 Bits
// https://leetcode.com/problems/number-of-1-bits/
// 

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int weight = 0;
        while (n != 0) {
            ++weight;
            n = n & (n - 1);
        }
        return weight;
    }
};

// 
// Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight). For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3. Credits: Special thanks to @ts for adding this problem and creating all test cases. Show Tags Bit Manipulation
// 