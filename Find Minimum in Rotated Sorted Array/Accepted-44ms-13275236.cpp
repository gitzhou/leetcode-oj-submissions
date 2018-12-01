// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// Find Minimum in Rotated Sorted Array
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// 

class Solution {
public:
    int findMin(vector<int> &num) {
        int from = 0, to = num.size() - 1;
        while (from < to) {
            if (num[from] < num[to]) {
                // num[from, to]有序 
                return num[from];
            }
            // 此时num[from, to]为两段有序 
            int mid = (from + to) / 2;
            if (num[from] <= num[mid]) {
                // [from, mid]有序 
                // 最小数一定在[mid+1, to]
                from = mid + 1;
            } else {
                // [mid+1, to]有序 
                // 最小数一定在[from, mid] 
                to = mid;
            }
        }
        return num[to];
    }
};
