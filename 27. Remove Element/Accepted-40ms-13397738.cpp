// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// 27. Remove Element
// https://leetcode.com/problems/remove-element/
// 

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int length = 0;
        int i = 0;
        while (i < n) {
            if (A[i] == elem) {
                A[i] = A[--n];
            } else {
                ++i;
                ++length;
            }
        }
        return length;
    }
};

// 
// Given an array and a value, remove all instances of that value in place and return the new length. The order of elements can be changed. It doesn't matter what you leave beyond the new length. Subscribe to see which companies asked this question Show Tags Array Two Pointers Show Similar Problems (E) Remove Linked List Elements (E) Move Zeroes
// 
