// 
// Generated by fetch-leetcode-submission project on GitHub.
// https://github.com/gitzhou/fetch-leetcode-submission
// Contact Me: aaron67[AT]aaron67.cc
// 
// 142. Linked List Cycle II
// https://leetcode.com/problems/linked-list-cycle-ii/
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *one = head, *two = head;
        while (one != NULL && two != NULL) {
            one = one->next;
            if ((two = two->next) != NULL) {
                two = two->next;
            }
            if (one == two && one != NULL) {
                while (one->next != one &&
                       head != one &&
                       (head = head->next) != (one = one->next)) {
                    ;
                }
                return one;
            }
        }
        return NULL;
    }
};

// 
// Given a linked list, return the node where the cycle begins. If there is no cycle, return null. Note: Do not modify the linked list. Follow up: Can you solve it without using extra space? Subscribe to see which companies asked this question Show Tags Linked List Two Pointers Show Similar Problems (M) Linked List Cycle (H) Find the Duplicate Number
// 