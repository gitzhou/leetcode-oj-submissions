// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 141. Linked List Cycle
// https://leetcode.com/problems/linked-list-cycle/
// 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *one = head, *two = head;
        while (one != NULL && two != NULL) {
            one = one->next;
            if ((two = two->next) != NULL) { // {0, 1, 2}, 直接写 two = two->next 会导致空指针异常
                two = two->next;
            }
            if (one == two && one != NULL) {
                return true;
            }
        }
        return false;
    }
};

// 
// Given a linked list, determine if it has a cycle in it. Follow up: Can you solve it without using extra space? Subscribe to see which companies asked this question Show Tags Linked List Two Pointers Show Similar Problems (M) Linked List Cycle II
// 
