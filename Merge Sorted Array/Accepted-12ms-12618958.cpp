// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/
// 

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (A[i] <= B[j]) {
                ++i;
            } else {
                insertArray(A, m++, B[j++], i++);
            }
        }
        while (j < n) {
            insertArray(A, m++, B[j++], i++);
        }
    }
    
private:
    // 在数组A的pos位置处，插入元素e
    // 0 <= pos <= m
    void insertArray(int A[], int m, int e, int pos) {
        for (int i = m - 1; i >= pos; --i) {
            A[i + 1] = A[i];
        }
        A[pos] = e;
    }
};

