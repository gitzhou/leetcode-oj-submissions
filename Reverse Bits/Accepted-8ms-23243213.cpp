// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Reverse Bits
// https://leetcode.com/problems/reverse-bits/
// 

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0, target = 1;
        while (target != 0) {
            result = (result << 1) | ((n & target) == 0? 0: 1);
            target = target << 1;
        }
        return result;
    }
};

