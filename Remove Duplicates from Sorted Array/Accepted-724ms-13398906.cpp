// 
// Generated by FetchLeetcodeSubmission Project on GitCafe.
// Visit https://gitcafe.com/aaronzhou/FetchLeetcodeSubmission for more information.
// Contact Me: aaron67[AT]aaron67.cc
// 
// Remove Duplicates from Sorted Array
// https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/
// 

class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int length = 0;
        for (int i = 0; i < n; ++i) {
            ++length;
            int j = i + 1;
            while (j < n && A[j] <= A[i]) {
                ++j;
            }
            if (j == n) {
                break;
            }
            A[i + 1] = A[j];
        }
        return length;
    }
};

// 
// Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length. 
// Do not allocate extra space for another array, you must do this in place with constant memory. 
// For example, 
// Given input array 
// A = [1,1,2], 
// Your function should return length = 2, and 
// A is now [1,2]. 
// Show 
// Tags 
// Array 
// Two 
// Pointers
// 
