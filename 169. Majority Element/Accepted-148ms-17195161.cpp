// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 169. Majority Element
// https://leetcode.com/problems/majority-element/
// 

class Solution {
public:
    int majorityElement(vector<int> &num) {
        int majorityCount = (int)(num.size() / 2 + 1);
        map<int, int> numberCount;
        set<int> keys;
        // You may assume that the array is non-empty
        int me = num[0];
        keys.insert(num[0]);
        numberCount[num[0]] = 1;
        // search
        for (int i = 1; i < num.size(); ++i) {
            if (keys.count(num[i]) == 1 && ++numberCount[num[i]] == majorityCount) {
                me = num[i];
                break;
            } else if (keys.count(num[i]) == 0) {
                keys.insert(num[i]);
                numberCount[num[i]] = 1;
            }
        }
        return me;
    }
};

// 
// Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times. You may assume that the array is non-empty and the majority element always exist in the array. Credits: Special thanks to @ts for adding this problem and creating all test cases. Subscribe to see which companies asked this question Show Tags Divide and Conquer Array Bit Manipulation Show Similar Problems (M) Majority Element II
// 
