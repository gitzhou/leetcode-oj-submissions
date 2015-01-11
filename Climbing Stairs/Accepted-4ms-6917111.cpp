// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Climbing Stairs
// https://oj.leetcode.com/problems/climbing-stairs/
// 

class Solution {
public:
    int climbStairs(int n) {
        vector<int> count(n + 1);
        count[0] = 0;
        count[1] = 1;
        count[2] = 2;
        for (int i = 3; i <= n; ++i) {
            count[i] = count[i - 1] + count[i - 2];
        }
        return count[n];
    }
};

// 
// You are climbing a stair case. It takes n steps to reach to the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? Show Tags Dynamic Programming
// 
